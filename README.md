## ⚽ Servo Soccer
This Arduino project is based off penalty kicks (and shootouts) in soccer! It can be played with 2 players with
one as the goalie and the other as the penalty taker. However, beware which side you pick to defend as the
goalkeeper as your servo goalie won't be able to change direction after until the reset button is pressed!

## 🪛 Materials
Here is a list of parts I used to create this project:
- Arduino Uno
- Mini Breadboard
- Jumper Wires (M-M & M-F)
- Hookup Wires
- Resistors
- 2 Pin Buttons
- Servo + Servo Attachment
- Battery + Battery Clip

## 🧊 CAD
Here is the link to the CAD model!

## 💻 Code
Here is a brief overview of the code for this project!
- Lines 1-12: Initializing buttons, servo, and variables.
- Lines 13-20: Servo pin attachment and input pin type declaration.
- Lines 21-46: Main game loop
  -  Lines 22-24: Button states set with DigitalRead.
  -  Lines 25-43: Buttons states checked and game follows accordingly.
