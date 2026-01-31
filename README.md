# Robotics-Tasks
# Coding Domain
## Research and Study

### OpenCV
#### What is OpenCV?
#### How OpenCV is used for robot vision?
#### Basic image processing tasks
#### Explore Computer Vision Concepts.

### Arduino IDE Basics
#### Arduino programming structure
#### How does Arduino knowledge helps in learning ESP-IDF?

### ESP32 Software Stack
#### What is ESP32?
The ESP32 is a 32-bit microcontroller developed by Espressif Systems. It features Wi-Fi and Bluetooth connectivity, making it ideal for Internet of Things(IoT) projects that require wireless communication. This is a low-cost, energy-efficient system on a chip (SoC) Microcontroller.
![alt text](images/p1.png)

#### What is ESP32 used for?
The ESP32 is commonly used in IoT projects, smart home systems, wearables, security devices, environmental monitoring, and more. Its wireless capabilities and versatility make it ideal for creating connected devices.

- **IoT devices**: The ESP32 is often used to build IoT devices due to its built-in Wi-Fi and Bluetooth capabilities. It can be used to create smart home devices, environmental sensors(temperature, humidity, air quality sensors) and more.

- **Home automation**: ESP32-based devices can control lights, thermostats, and other home appliances through Wi-Fi or Bluetooth connections, making it a popular choice for DIY home automation projects.

- **Wireless communication**: It can be used for wireless communication in various applications, such as creating mesh networks, remote control systems, and data transmission between devices

- **Robotics**: ESP32 can be used as the control unit in robotics projects, providing wireless control and communication capabilities to robots.

- **Wearable devices**: Due to its compact size and low power consumption, the ESP32 is suitable for wearable IoT devices, including smartwatches, fitness trackers, and health monitoring products.

- **Industrial automation**: ESP32 microcontroller can be integrated into industrial systems for remote monitoring and control, as well as for predictive maintenance. This is a great ally for industrial IoT applications, since companies can improve their operations with the help of this technology.

- **Environmental monitoring**: It can be used to build environmental monitoring systems for measuring air quality, pollution levels, and weather conditions.

- **Education and prototyping**: The ESP32 is popular in educational settings for teaching electronics and programming due to its affordability and versatility; in fact, we built something cool with an ESP32 board – How to build a mechanical 7 segment display clock.

- **Security Systems**: It can be used in DIY security systems, including cameras, alarms, and access control systems.

- **Healthcare**: ESP32 can be used in several healthcare solutions, such as patient monitoring, medication reminders, and telemedicine devices.

#### What is the role of ESP32 in Robotics system?
ESP32 in a robot handles three major roles
- **Commutination** : Unlike older microcontrollers, the ESP32 has built-in Wi-Fi and Dual-mode Bluetooth. This allows a robot to: 
  - Remote Control: can be operated via phone and apps like Dabble.
  - Receive new code wirelessly without being plugged into a computer.
  - Send real-time sensor data back to a central server or PC for analysis.

- **Hardware control** : The ESP32 features a rich set of Peripheral Interfaces that allow it to interact directly with robotic hardware:
  - Pulse Width Modulation (PWM): Used to control the speed of DC motors and the precise positioning of Servo motors.
  - I2C/SPI: To communicate with complex sensors like IMUs (Inertial Measurement Units), Lidars.
  - Capacitive Touch: Can be used to create "skin" sensors for human-robot interaction.

- **MultiTasking**: for example reading a sensor while driving a motor. ESP32 handles this because of
  - Dual core Processor: one of the core maintians Wi-Fi connection while other focuses on robot's logic and movements.

#### Arduino vs ESP-IDF
##### **Arduino**
The Arduino IDE is a beginner-friendly, high-level programming environment originally designed for Arduino boards. Over time, it has gained support for ESP32 and other microcontrollers. It is an open-source environment which consist of hardware and software(IDE).
- Hardware such as Arduino UNO, NANO or Portenta like boards.
- Software (IDE) - A simplified coding environment that uses programming structure of C/C++.
<p align="center">
  <img src="images/p3.png" width="400"/>
</p>

**Features**
- Install Arduino IDE, add the ESP32 board manager URL, and you’re ready to program.
- Thousands of ready-made libraries for sensors, displays, Wi-Fi, BLE, and more.
- If you know Arduino, you can quickly move to ESP32.
- Perfect for small IoT projects, LED blinks, sensors, and basic automation.

**Limitations**
- **Limited FreeRTOS Control**: ESP32 internally runs FreeRTOS, but Arduino abstracts most of it.
- **Less Performance Optimization**: Slower compile times and slightly larger binaries compared to ESP-IDF.
- **Lower Control**: Hardware and peripherals are accessed through libraries, limiting low-level optimization.

arduino blinking code

For beginners who are just starting in robotics Arduino is the best choice since it doesn't need complex multitasking or precise hardware control unlike ESP-IDE.

##### **ESP-IDF**
ESP-IDF, or Espressif IoT Development Framework, is an official development framework for ESP32 series of microcontrollers. The ESP IDF framework provides a set of libraries, tools, and APIs for developing ESP32 microcontroller based applications. It offers a wide range of features, commonly needed for the IoT applications and is designed to provide a comprehensive and flexible platform.
One of the main advantages of ESP-IDF framework is that it fully supports both standard C and standard C++ programming languages, which allows to write efficient, high-performance code.
Unlike Arduino, it provides full access to the hardware and deep FreeRTOS integration.
<p align ="center">
  <img src="images/p2.png" width="400"/>
</p>
**Features** 
- **Native FreeRTOS Support**: Create tasks, set priorities, use queues and semaphores.
- **Full Hardware Control**: Access all peripherals with precise timing and configuration.
- **Better Performance**: Smaller binaries, optimized runtime, and better memory management.
- **Professional Environment**: Compatible with VS Code, Eclipse, and supports JTAG debugging.

**Limitations**
- Beginners may find the APIs complex.
- Requires installation of Python, Git, toolchains, and environment variables.
- Fewer Plug-and-Play Libraries: Many Arduino libraries need porting to ESP-IDF.
led blinking code in esp-idf
Notice the use of FreeRTOS vTaskDelay instead of Arduino’s delay(). This allows other tasks to run concurrently.

ESP-IDE is the best for professional and large scale projects since it provides  full control over FreeRTOS tasks and priorities and optimized performance and precise timing.