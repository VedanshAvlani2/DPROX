# Smart Helmet Using LiDAR Sensors

## Overview
This project enhances motorcycle safety by integrating **LiDAR sensors** with an **Arduino microcontroller**. The smart helmet provides **real-time obstacle detection**, improving rider awareness and reducing accident risks. By leveraging LiDAR technology, the system detects objects in three key directions—left, right, and rear—offering riders critical safety insights.

## Features
- **Real-Time Obstacle Detection**: Utilizes LiDAR sensors to detect nearby objects.
- **Arduino-Based Processing**: Handles sensor data and provides instant feedback.
- **OLED Display**: Shows real-time distance readings and alerts the rider.
- **3D-Printed Mounts**: Securely integrates sensors and electronic components.
- **Wireless Communication (Future Enhancement)**: Potential for IoT-based alerts.

## Technologies Used
- **Arduino Uno** (Microcontroller)
- **TF Mini-S Micro LiDAR Sensors** (Obstacle detection)
- **OLED Display** (Visual feedback)
- **3D Printing** (Helmet integration)
- **C++ (Arduino IDE)** (Programming logic)

## Setup Instructions
1. **Install Dependencies**:
   - Download and install the **Arduino IDE**.
   - Install required libraries (`SoftwareSerial.h`, `SPI.h`, `Wire.h`, `Adafruit_GFX.h`, `Adafruit_SSD1306.h`).
   
2. **Upload the Code**:
   - Open `main.ino` in Arduino IDE.
   - Connect the Arduino Uno via USB and upload the code.

3. **Assemble the Helmet**:
   - Secure the LiDAR sensors, OLED display, and Arduino onto the helmet using 3D-printed mounts.
   - Ensure proper wiring and power supply.

4. **Test the System**:
   - Power on the helmet and check the OLED display for real-time obstacle detection.
   - Verify sensor accuracy and range.

## Insights Gained
- **Enhanced rider safety** through real-time obstacle alerts.
- **Reliable LiDAR performance** for object detection.
- **Potential for AI integration** to improve hazard recognition.

## Future Enhancements
- **Upgrade to Arduino Mega** for faster processing.
- **Machine Learning Integration** for advanced obstacle classification.
- **Wireless Connectivity** for remote monitoring and alerts.
- **Refined 3D-Printed Components** for optimized sensor placement.

