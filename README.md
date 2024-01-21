### Monthly Calendar Display in C
This C program allows users to view formatted calendars for different months in the year 2024. Users can choose a month by entering a number between 1 and 12, and the program will display the corresponding calendar. The calendars are presented in various colors using ANSI escape codes for text color, making the output visually appealing.

### Features
Interactive Calendar Display: Users can select a month to view a formatted calendar with days of the week and dates.

Colorful Output: Each month has a unique color scheme for better visual representation, making it more engaging.

Input Validation: The program ensures that users enter a valid month (a number between 1 and 12), providing a user-friendly experience.

Reusability: Users have the option to display calendars for multiple months consecutively, as the program prompts them if they want to view another month.

### Usage
1. Compile the Program:

```bash
gcc main.c -o 2024-Calendar
```
2. Run the Program:
```bash
./2024-Calendar
```
3. Choose a Month:

Enter a number between 1 and 12 to select the corresponding month.

4. View Calendar:

The program will display the formatted calendar for the selected month.

5. Repeat or Exit:

After viewing a calendar, the program will prompt if the user wants to display another month. Enter '1' for yes, or any other key to exit.

### ANSI Escape Codes
The program utilizes ANSI escape codes for text color, creating an aesthetically pleasing display. The color codes include:

RED: Error messages
YELLOW: Highlighted information
GREEN: February and June
BLUE: March and August
MAGENTA: April and September
CYAN: May, July, October, November, December
RESET: Resets text color to default
### Notes
The program includes input validation to ensure that users enter a valid month (a number between 1 and 12).

The code is well-commented for better understanding.

Feel free to explore different months and enjoy the colorful calendar display!
