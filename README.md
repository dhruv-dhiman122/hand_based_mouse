# hand_based_mouse
This is a project that is detected to code for hand based mouse

# Structure of the project

- main.ino -> this is purely used for arudino
- dict(esp_side) -> this is for writing the code for esp working in c


# Working of the arduino and esp

- Arduino part
     - This deal with displaying the amount of current and the status of the system

- ESP part
    - This deal with main working of the project
    - this will control the motor driver and the sensors
        - sensor is basically of HC SRO4 with hand gesture sensor module

# Parts used in the project

- ESP32 CAM -> for taking in the feed using the camera
- ESP32 -> To do the main working of the motors
- ACEBOTT L293D Motor Driver Shield -> as a motor driver
- LCD display -> for displaying content
- Arduino -> To maintain the display
