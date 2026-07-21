# Charlie — Full Voice Command List

| Command                          | Servo/Output Response                                      |
|-----------------------------------|--------------------------------------------------------------|
| "Charlie wake up"                 | eye1 LED blinks twice, stays on                             |
| "Charlie show yourself"           | robot pin + eye1 LED HIGH                                    |
| "Charlie lights on"               | lights pin HIGH                                               |
| "Charlie move forward"            | Both front motor pins pulse HIGH/LOW in sequence to drive forward |
| "Charlie move backward"           | Both back motor pins pulse HIGH/LOW in sequence to drive backward |
| "Charlie turn right"              | Left-front motor HIGH for 1.5s                                |
| "Charlie turn left"               | Right-front motor HIGH for 1.5s                               |
| "Charlie hands up"                | Arm servos move to 160°/10°                                   |
| "Charlie hands down"              | Arm servos move to 0°/180°                                    |
| "Charlie Bharat Mata Ki"          | Arm servo raises to 180°, lights flash, then resets           |
| "Charlie attack on enemy"         | weapons pin + eye2 LED HIGH                                   |
| "stop Charlie"                    | All motor, LED, and indicator pins set LOW                    |
| "Charlie do exercise"             | Arm servos cycle through a repeated movement pattern           |
| "Charlie watch right"             | Head servo moves to 30°                                        |
| "Charlie watch left"              | Head servo moves to 150°                                       |
| "Charlie watch front"             | Head servo moves to 90°                                        |
| "Charlie follow me"               | Front motors HIGH (continuous forward movement)               |
| "Charlie now you can take rest"   | All outputs set LOW (shutdown state)                           |

All commands are received as plain text strings over Serial (from a Bluetooth-linked
voice command app) and matched with exact string comparisons in `src/Charlie_main.ino`.
