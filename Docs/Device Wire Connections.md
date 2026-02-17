# Master ESP32
Pin 4 - Left drive ESC signal (signal wire only)  
Pin 5 - Right drive ESC signal (signal wire only)   
Pin 16 - Right receiver SBUS input  
Pin 17 - Left receiver SBUS input  
Pin 18 - DF Player RX  
Pin 21 - Syren10 S1  

# Body Slave
Pin 17 (Serial 2) - Body Maestro RX  

# Body Maestro
*Jumper Connected to power Maestro from Servo Rail*  
Gnd Pin - From Body Slave Pin 17  
V+ Pin - *Not used (Jumper used instead)*  
RX Pin - From Body Slave Pin 17  
Channel 0 - Top Utility Arm  
Channel 1 - Bottom Utility Arm  

# Dome Slave
Pin 17 (Serial 2) - Astropixels Serial 2  
Pin 25 (Serial 1) - Dome Maestro RX  

# Dome Maestro
Gnd Pin - From Dome 5V Converter Ground  
V+ Pin - From Dome 5V Converter +  
RX Pin - From Dome Slave Pin 25  
Channel 0 - Pie 1  
Channel 1 - Pie 2  
Channel 2 - Pie 4  
Channel 3 - Pie 5  
Channel 4 - Pie 6  
Channel 5 - Panel 1  
Channel 6 - Panel 2  
Channel 7 - Panel 3  
Channel 8 - Panel 4  
Channel 9 - Panel 7  
Channel 10 - Panel 10  
Channel 11 - Panel 11  


