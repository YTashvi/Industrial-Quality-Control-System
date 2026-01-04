# Industrial-Quality-Control-System
This system is an automated inspection module which was designed to detect defects and assure quality in manufacturing systems. 

1. Establishing Dimensional Logic

I created different tolerance zones to identify three different sizes for items. By setting the system to recognize a 'good' item as an item of 6cm in height while alerting users of anything smaller or bigger, I created a spectacular sorting logic that focuses on direct boundaries, and is incredibly useful to manufacturers. 

2. Implemented the Go/No Go Visual system
   
To make the system useful for a factory floor I implemented Dual Led Visual Interface. I programmed the white LED to remain active as the default "System Ready" state, signaling that their are not items are coming in or items are properly sized. The red LED acts as an interrupt signal, which alerts only when the dimensions of an item violate the industrial rules, ensuring that produce is free from defects.

3. Alert System
   
Not only that, but I developed an edge triggered notification system. Instead of a continous, intrusive noise, the buzzer is programmed to issue a single, one second noise at the moment a defect is first detected. This provides the system with an notification to the machine operater without creating a distracting work environment, emphasizing the Human Machien Interface standards.

4. System Integration
   
I created an environment for this system, to show how this system will work in factory and showcase its value in industrial work environments. 

Why I made this: I noticed that in fast-paced and quick manufacturing, taking precise measurements of every product is often a bottleneck. I designed this system act as a Quality Gate, allowing an operator to quickly scan items to verify they fit within a specific set of dimensions. The goal of this project was to replace slow, manual inspection with a "Go/No-Go" logic system that provides instant feedback on whether a product meets dimensional standards. 

How I created this: 

This project began as I constructed the actual product classification, using tolerance zones to sort items by size while filtering out small and large variations. To make this system practical on a factory floor, I added a simple white-and-red LED setup that clearly shows when items meet specifications or need to be flagged for inspection. I also designed the buzzer to trigger only once at the moment a defect is detected, avoiding constant noise and disruption to workers, while making alerts noticeable without being distracting.   

https://github.com/user-attachments/assets/658fe8ad-0e42-4d0b-91ec-adf644849297

![IMG_7183](https://github.com/user-attachments/assets/a60f0eda-79be-4a53-8652-e509e3505080) 




