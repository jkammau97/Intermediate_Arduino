# Intermediate Arduino

Reference point for Sublime Errors, Analog Control, LCD Communication, Interrupt Commands, and Operating a Photointerruptor
Also the temporary home for GitHub help

## Table_of_Contents 
*([ToC](#table_of_contents) for short)*

### [LED_Blink_Revisited](#led_blink_revisited-1)
- [Assignment](#assignment)
- [Code](#code)
- [Wiring](#wiring)
- [Problems](#problems)
### [Hello_LCD](#hello_lcd)
- [Assignment](#assignment-1)
- [Code](#code-1)
- [Wiring](#wiring-1)
- [Problems](#problems-1)
### [LCD_Backpack](#lcd_backpack-1)
- [Assignment](#assignment-2)
- [Code](#code-2)
- [Wiring](#wiring-2)
- [Problems](#problems-2)
### [Photointerrupters](#photointerrupters-1)
- [Assignment](#assignment-3)
- [Code](#code-3)
- [Wiring](#wiring-3)
- [Problems](#problems-3)
### [Potentiometers](#potentiometers-1)
- [Assignment](#assignment-4)
- [Code](#code-4)
- [Wiring](#wiring-4)
- [Problems](#problems-4)
### [Motor_Control](#motor_control-1)
- [Assignment](#assignment-5)
- [Code](#code-5)
- [Wiring](#wiring-5)
- [Problems](#problems-5)


### LED_Blink_Revisited
##### Aug 23
Back to [ToC](#table_of_contents)
#### Assignment

This assignment is deceptively easy -- just make an LED turn on and off. The problem comes with using a new text editor -- Sublime. It's toolchain is very fickle, and will just not work sometimes. Either way I got it done in a timely manner.

#### Code
*Commented Code link [Here:](led_fade)* \
[Triangle Wave](led_fade/led_fade_triwave)

[Sinusoidal Wave](led_fade/led_fade_signwave)

Now, I don't feel the need to explain how to blink an led.

What I SHOULD explain is the spicy alterations of this assignment
>Slightly spicy part: Chances are, your code uses digitalWrite() to turn turn LED's voltage on and off. Instead, use analogWrite() to make the LED fade in and out, rather than blink.  You're gonna want some variable that slowly goes from 0 (off) to 255 (on) and back.

>More spicy part: as the LED is fading in and out, write a line of characters (x's or dashes or something) to the serial monitor (remember your friends Serial.print() and Serial.println()?), indicating the LED brightness.  In other words, when the LED is at zero brightness, you are writing "-" but when the LED is at full brightness, you are writing "--------------------" or something like that.  The result should be a wave of text growing and shrinking with your LED brightness.

Since I'm just so good, I did all of the above, including...
>If you feel like going for the full spice (!), have the brightness fade in and out sinusoidally, rather than linearly.

*Note: triwave corresponds to the first one, signwave corresponds to the above*

#### Wiring

You literally just put a wire from a digital port with a ~ to an LED, then to ground.
Don't forget a 220 resistor, and that the short end is ground

#### Problems

None of great significance, besides the ~ port thing

Trying to comment it after the fact was hard tho; if you get math, you should have a easy time. Good luck otherwise ;)

---
### Hello_LCD
##### Aug 28
Back to [ToC](#table_of_contents)
#### Assignment
This assignment was all about getting an LCD hooked up and printing things to the screen. Thankfully, soldering pins is no longer required, since it's all done for us already
>  Here is the assignment.  On line 1 of the LCD, print "Hello World."  On line 2 of the LCD, print the number of seconds that have transpired since the program began. \

Since we have a nice teacher, he told us:

> [We're] going to need the following lines somewhere: \
```arduino
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // Those are the pins for RS, EN, DB4, DB5, DB6, DB7, respectively
lcd.begin(16, 2);
lcd.setCursor(0,0);
lcd.print("stuff");
```


#### Code
#### Wiring
#### Problems

### LCD_Backpack
#### Sep 4
Back to [ToC](#table_of_contents)
#### Assignment
#### Code
#### Wiring
#### Problems

### Photointerrupters
#### Sep 13
Back to [ToC](#table_of_contents)
#### Assignment
#### Code
#### Wiring
#### Problems

### Potentiometers
#### Sep 18
Back to [ToC](#table_of_contents)
#### Assignment
#### Code
#### Wiring
#### Problems

### Motor_Control
#### Sep 25
Back to [ToC](#table_of_contents)
Coming Soon!!
#### Assignment
#### Code
#### Wiring
#### Problems
