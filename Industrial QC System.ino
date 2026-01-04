const int TRIG = 2, ECHO = 4, GREEN = 8, RED = 9, BUZZER = 10;
const int SENSOR_HEIGHT = 20; 
bool alertTriggered = false;

void setup() {
  Serial.begin(9600); // We use Serial Monitor for background data
  pinMode(TRIG, OUTPUT); pinMode(ECHO, INPUT);
  pinMode(GREEN, OUTPUT); pinMode(RED, OUTPUT); pinMode(BUZZER, OUTPUT);
  
  // System Health Check: Flash lights
  digitalWrite(GREEN, HIGH); digitalWrite(RED, HIGH);
  delay(1000);
  digitalWrite(GREEN, LOW); digitalWrite(RED, LOW);
}

void loop() {
  digitalWrite(TRIG, LOW); delayMicroseconds(2);
  digitalWrite(TRIG, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);
  int distance = duration * 0.034 / 2;
  int itemHeight = SENSOR_HEIGHT - distance;

  // --- LEAN QUALITY LOGIC ---
  if (itemHeight >= 4 && itemHeight <= 8) { // SPEC: OK
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    noTone(BUZZER);
    alertTriggered = false;
  } 
  else if (itemHeight >= 12 || (itemHeight >= 1 && itemHeight <= 3)) { // NON-CONFORM
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    
    if (!alertTriggered) {
      tone(BUZZER, 800); delay(1000); noTone(BUZZER);
      alertTriggered = true;
    }
  } 
  else { // STANDBY (Table empty)
    digitalWrite(GREEN, HIGH); // Green stays on as "System Ready"
    digitalWrite(RED, LOW);
    alertTriggered = false;
  }
  delay(100);
}
