# c-atmega328p-pwm-rgb

**Project Description - English**

This project demonstrates controlling an RGB LED using PWM signals in ATmega328P, utilizing Timer1 and Timer2. This allows adjusting the brightness of individual colors (red, green, blue) and creating various shades.

Features:

- Controlling an RGB LED with PWM

- Using Timer1 (OC1A, OC1B) and Timer2 (OC2B)

- Ability to set any LED color

- Using ATmega328P microcontroller in pure C

Hardware Requirements:

- ATmega328P microcontroller (e.g., Arduino Nano or standalone AVR)

- RGB LED (common cathode or anode, depending on setup)

- Connecting wires

- 5V power supply

Usage Instructions:

- Compile the code in an AVR C-compatible environment (e.g., Atmel Studio, PlatformIO, AVR-GCC).

- Connect the RGB LED to PB1, PB2, and PD3.

- Upload the program to the microcontroller using an ISP programmer.

- The LED will light up in the color set in the color(r, g, b) function.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

**Opis projektu Polski**

Ten projekt demonstruje sterowanie diodą RGB za pomocą sygnału PWM w ATmega328P, wykorzystując Timer1 i Timer2. Dzięki temu można regulować jasność poszczególnych kolorów (czerwony, zielony, niebieski) i tworzyć różne odcienie.

Funkcjonalność:

- Sterowanie diodą RGB za pomocą PWM

- Wykorzystanie Timer1 (OC1A, OC1B) i Timer2 (OC2B)

- Możliwość ustawienia dowolnego koloru diody

- Obsługa mikrokontrolera ATmega328P w czystym C

Wymagania sprzętowe:

- Mikrokontroler ATmega328P (np. Arduino Nano lub standalone AVR)

- Dioda RGB (katodowa lub anodowa, w zależności od konfiguracji)

- Przewody połączeniowe

- Zasilanie 5V

Instrukcja użytkowania:

- Skompiluj kod w środowisku obsługującym AVR C (np. Atmel Studio, PlatformIO, AVR-GCC).

- Podłącz diodę RGB do pinów PB1, PB2 i PD3.

- Wgraj program do mikrokontrolera za pomocą programatora ISP.

- Dioda zaświeci się w kolorze ustawionym w funkcji color(r, g, b).


