# Bill of Materials — Charlie Humanoid Robot

| Component               | Quantity | Notes                                  |
|---------------------------|----------|------------------------------------------|
| Arduino Uno                | 1        | Main controller                          |
| L293D Motor Driver IC      | 1        | Controls DC motors                       |
| DC Geared Motors            | 2        | Base locomotion (left/right)             |
| Servo Motors                 | 3        | Head (pin 12), Arm 1 (pin 9), Arm 2 (pin 10) |
| LEDs                          | 4        | Eyes (x2), body lights, weapon indicator |
| Bluetooth Module (e.g. HC-05) | 1        | Receives voice commands over Serial      |
| Battery Pack / Power Supply    | 1        | Powers Arduino + motors                  |
| Chassis / body material         | —        | Cardboard, acrylic, or 3D-printed frame  |
| Jumper wires, breadboard          | —        | Circuit connections                      |

## Pin Mapping (from code)

| Arduino Pin | Function            |
|-------------|----------------------|
| 2           | Left motor forward   |
| 3           | Left motor backward  |
| 4           | Right motor forward  |
| 5           | Right motor backward |
| 6           | Eye LED 1             |
| 7           | Eye LED 2             |
| 8           | Body lights            |
| 9           | Arm servo 1 (myone)   |
| 10          | Arm servo 2 (mytwo)   |
| 11          | Weapon indicator       |
| 12          | Head servo             |
| 13          | "Show yourself" indicator |
