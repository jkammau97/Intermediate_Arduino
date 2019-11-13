# Intermediate Arduino

Reference point for Sublime Errors, Analog Control, LCD Communication, Interrupt Commands, and Operating a Photointerruptor
Also the temporary home for GitHub help

## Table of Contents

[LED Blink Revisited](#led_blink_revisited)

[Hello_LCD](#hello_lcd)

[LCD_Backpack](#lcd_backpack)

[Photointerrupters](#photointerrupters)

[Potentiometers](#potentiometers)

[Motor_Control](#motor_control)

### LED_Blink_Revisited
##### Aug 23

[Files Referenced](led_fade)

This assignment is deceptively easy -- just make an LED turn on and off. The problem comes with using a new text editor -- Sublime. It's toolchain is very fickle, and will just not work sometimes. Either way I got it done in a timely manner.

#### Code Explanation

Now, I don't feel the need to explain how to blink an led.

What I SHOULD explain is the spicy alterations of this assignment
>Slightly spicy part: Chances are, your code uses digitalWrite() to turn turn LED's voltage on and off. Instead, use analogWrite() to make the LED fade in and out, rather than blink.  You're gonna want some variable that slowly goes from 0 (off) to 255 (on) and back.

>More spicy part: as the LED is fading in and out, write a line of characters (x's or dashes or something) to the serial monitor (remember your friends Serial.print() and Serial.println()?), indicating the LED brightness.  In other words, when the LED is at zero brightness, you are writing "-" but when the LED is at full brightness, you are writing "--------------------" or something like that.  The result should be a wave of text growing and shrinking with your LED brightness.

Since I'm just so good, I did all of the above, including...
>If you feel like going for the full spice (!), have the brightness fade in and out sinusoidally, rather than linearly.

I'll explain each one independently.

*Note: the reason there's more than one .ino file is because they all answer each level of spice independenlty.*



#### Wiring

You literally just put a wire from a digital port with a ~ to an LED, then to ground.
Don't forget a 220 resistor, and that the short end is ground

#### Problems

None of great significance, besides the ~ port thing

---
### Hello_LCD
#### Aug 28

### LCD_Backpack
#### Sep 4

### Photointerrupters
#### Sep 13

### Potentiometers
#### Sep 18

### Motor_Control
#### Sep 25

