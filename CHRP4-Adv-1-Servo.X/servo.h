/*==============================================================================
 File: servo.h                          Activity: mirobo.tech/chrp4-advanced-1
 Date: May 24, 2023
 
 CHRP4 servo output pin definitions and function prototypes. Header pin bitmaps
 are used to configure the header I/O pins and to create the servo pulses.
==============================================================================*/

// Define servo header pin names as bitmaps for servo_pulse() function

#define SERVO1      0b00010000      // Servo output on H1 header pins
#define SERVO2      0b00100000      // Servo output on H2 header pins
#define SERVO3      0b01000000      // Servo output on H3 header pins
#define SERVO4      0b10000000      // Servo output on H4 header pins

/**
 * Function: servo_config(unsigned char servo)
 * 
 * Enable output on the selected SERVO1 - SERVO4 header pins by clearing the
 * associated TRISB bit, and set the enabled SERVO[n] output pin low. Pass this
 * function the SERVO[n] name corresponding to the header output pin H[n] from
 * the list of servo output definitions, above.
 * 
 * Example usage: servo_config(SERVO1);
 */

void servo_config(unsigned char);


/**
 * Function: servo_pulse(unsigned char servo, unsigned char position)
 * 
 * Create one single servo output pulse of between 1 - 2ms duration to drive
 * 90 degree analog hobby servos. Pass this function the specified SERVO[n]
 * number corresponding to the associated H[n] header output pin and the 8-bit
 * servo position value. Position values of 0 - 255 produce pulse widths from
 * 1ms - 2ms, respectively. Ensure that your main code function repeatedly
 * calls the servo_pulse function every 15ms - 20ms.
 * 
 * Example usage: servo_pulse(SERVO1, 127);
 */

void servo_pulse(unsigned char, unsigned char);

