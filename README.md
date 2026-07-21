# 🤖 Charlie — Voice-Controlled Humanoid Robot

Charlie is a voice-controlled humanoid robot built from scratch, combining a multi-peripheral
Arduino circuit with real-time voice command processing to control servo-driven humanoid
movement, DC motor locomotion, and LED feedback.

🎥 **Full build & demo video:** [https://www.linkedin.com/in/kumar-aryan-592a063a7?utm_source=share_via&utm_content=profile&utm_medium=member_android]

---

## 🧠 Overview

Charlie takes voice commands via a Bluetooth-linked voice command app, decodes them on an
Arduino Uno, and triggers a synchronized combination of servos, DC motors, and LEDs to
respond — from basic movement commands to fun custom ones like "Attack on enemy" and
"Bharat Mata Ki."

The core engineering challenge was integrating multiple independent peripherals onto a
single Arduino Uno reliably — handling power distribution, motor driver logic, and
command-to-action timing without conflicts.

---

## ⚙️ Hardware Components

| Component            | Purpose                              |
|-----------------------|---------------------------------------|
| Arduino Uno           | Main controller                       |
| L293D Motor Driver    | Drives DC motors for locomotion       |
| Servo Motors (x3)     | Head + arm movement                   |
| DC Motors (x2)        | Base locomotion                       |
| LED Lights            | Visual/expressive feedback            |
| Bluetooth Module      | Receives voice commands               |
| Battery pack           | Power supply                          |
| Chassis materials      | Body/frame construction               |

Full bill of materials: [`circuit/components_list.md`](circuit/components_list.md)

---

## 🔌 Circuit Diagram

See [`circuit/`](circuit/) folder — the circuit diagram image is at `circuit_diagram.png`.

---

## 🗣️ Voice Commands

| Command                          | Action                                    |
|-----------------------------------|--------------------------------------------|
| "Charlie wake up"                 | Blinks eye LED                             |
| "Charlie show yourself"           | Turns on indicator + eye LED               |
| "Charlie lights on"               | Turns on body lights                       |
| "Charlie move forward"            | Drives forward                             |
| "Charlie move backward"           | Drives backward                            |
| "Charlie turn right"              | Turns right                                |
| "Charlie turn left"               | Turns left                                 |
| "Charlie hands up"                | Raises arms                                |
| "Charlie hands down"              | Lowers arms                                |
| "Charlie Bharat Mata Ki"          | Arm raise + lights (patriotic salute)      |
| "Charlie attack on enemy"         | Activates weapon indicator + eye LED       |
| "stop Charlie"                    | Stops all motion/outputs                   |
| "Charlie do exercise"             | Repeated arm movement routine              |
| "Charlie watch right/left/front"  | Turns head                                 |
| "Charlie follow me"               | Moves forward continuously                 |
| "Charlie now you can take rest"   | Powers down all outputs                    |

Full list: [`docs/commands_list.md`](docs/commands_list.md)

---

## 💻 Code

Main sketch: [`src/Charlie_main.ino`](src/Charlie_main.ino)

### Libraries Used
- `Servo.h` (built into the Arduino IDE)

### How to Upload
1. Install the Arduino IDE
2. Connect your Arduino Uno via USB
3. Open `src/Charlie_main.ino`, select the correct board/port
4. Click Upload

---

## 🚀 Applications

- Human-robot interaction & assistive robotics
- Voice-based home automation demos
- Educational/STEM platforms
- Companion & entertainment robotics
- Prototyping foundation for advanced humanoid systems

---

## 🛠️ Future Improvements

- [ ] Add obstacle avoidance via ultrasonic sensor
- [ ] Expand voice command vocabulary
- [ ] Add speech feedback/response

---

## 👤 Author

**Kumar Aryan**
3rd-year ECE, Shiv Nadar University | ASME Club Electronics Team
[Linkedin - https://www.linkedin.com/in/kumar-aryan-592a063a7?utm_source=share_via&utm_content=profile&utm_medium=member_android]

---

## 📄 License

This project is licensed under the [MIT License](LICENSE) — free to use, modify, and build
on for your own projects, with credit to the original author.
