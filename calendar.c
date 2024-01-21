  #include <stdio.h>
  #include <stdlib.h>

  // ANSI escape codes for text color
  #define RED "\x1b[31m"
  #define YELLOW "\x1b[33m"
  #define GREEN "\x1b[32m"
  #define BLUE "\x1b[34m"
  #define MAGENTA "\x1b[35m"
  #define CYAN "\x1b[36m"
  #define RESET "\x1b[0m"

  void displayMonth(int month)
  {
    // Print "2024" in yellow
    printf(YELLOW "\t 2024"
      RESET);

    // Switch statement to display the selected month in different colors
    switch (month)
    {
      case 1:
        // Display January in default color
        printf("\n\tJanuary\n S  M  T  W  T  F  S \n    1  2  3  4  5  6 \n 7  8  9 10 11 12 13 \n14 15 16 17 18 19 20 \n21 22 23 24 25 26 27 \n28 29 30 31");
        break;
      case 2:
        // Display February in green
        printf(GREEN "\n\tFebruary \n S  M  T  W  T  F  S \n             1  2  3 \n 4  5  6  7  8  9 10 \n11 12 13 14 15 16 17 \n18 19 20 21 22 23 24 \n25 26 27 28 29"
          RESET);
        break;
      case 3:
        // Display March in blue
        printf(BLUE "\n\tMarch \n S  M  T  W  T  F  S \n                1  2 \n 3  4  5  6  7  8  9 \n10 11 12 13 14 15 16 \n17 18 19 20 21 22 23 \n24 25 26 27 28 29 30 \n31"
          RESET);
        break;
      case 4:
        // Display April in magenta
        printf(MAGENTA "\n\tApril \n S  M  T  W  T  F  S \n    1  2  3  4  5  6 \n 7  8  9 10 11 12 13 \n14 15 16 17 18 19 20 \n21 22 23 24 25 26 27 \n28 29 30"
          RESET);
        break;
      case 5:
        // Display May in cyan
        printf(CYAN "\n\tMay \n S  M  T  W  T  F  S \n          1  2  3  4 \n 5  6  7  8  9 10 11 \n12 13 14 15 16 17 18 \n19 20 21 22 23 24 25 \n26 27 28 29 30 31"
          RESET);
        break;
      case 6:
        // Display June in green
        printf(GREEN "\n\tJune \n S  M  T  W  T  F  S \n                   1 \n 2  3  4  5  6  7  8 \n 9 10 11 12 13 14 15 \n16 17 18 19 20 21 22  \n23 24 25 26 27 28 29 \n                  30"
          RESET);
        break;
      case 7:
        // Display July in cyan
        printf(CYAN "\n\tJuly \n S  M  T  W  T  F  S \n    1  2  3  4  5  6 \n 7  8  9 10 11 12 13 \n14 15 16 17 18 19 20 \n21 22 23 24 25 26 27 \n28 29 30 31"
          RESET);
        break;
      case 8:
        // Display August in blue
        printf(BLUE "\n\tAugust \n S  M  T  W  T  F  S \n             1  2  3 \n 4  5  6  7  8  9 10 \n11 12 13 14 15 16 17 \n18 19 20 21 22 23 24 \n25 26 27 28 29 30 31"
          RESET);
        break;
      case 9:
        // Display September in magenta
        printf(MAGENTA "\n\tSeptember \n S  M  T  W  T  F  S \n       1 2 3 4 5 6 7 \n 8  9 10 11 12 13 14 \n15 16 17 18 19 20 21 \n22 23 24 25 26 27 28 \n29 30"
          RESET);
        break;
      case 10:
        // Display October in cyan
        printf(CYAN "\n\tOctober \n S  M  T  W  T  F  S \n       1  2  3  4  5 \n 6  7  8  9 10 11 12 \n13 14 15 16 17 18 19 \n20 21 22 23 24 25 26 \n27 28 29 30 31"
          RESET);
        break;
      case 11:
        // Display November in green
        printf(GREEN "\n\tNovember \n S  M  T  W  T  F  S \n                1  2 \n 3  4  5  6  7  8  9 \n10 11 12 13 14 15 16 \n17 18 19 20 21 22 23 \n24 25 26 27 28 29 30"
          RESET);
        break;
      case 12:
        // Display December in cyan
        printf(CYAN "\n\tDecember \n S  M  T  W  T  F  S \n 1  2  3  4  5  6  7 \n 8  9 10 11 12 13 14 \n15 16 17 18 19 20 21 \n22 23 24 25 26 27 28 \n29 30 31"
          RESET);
        break;
      default:
        // This case should not be reached with the validation loop above
        printf("\nThere are only 12 months, you, idiot!!!");
        break;
    }
  }

  int main()
  {
    char choice;

    do {
      int month;

      // Loop until a valid choice (1-12) is entered
      do { 	// Prompt the user to choose a month
        printf("Choose the month you desire (1-12): ");

        // Check if the input is an integer
        if (scanf("%d", &month) != 1 || month < 1 || month > 12)
        {
          // Display an error message in yellow
          printf(RED "Invalid choice. Please enter a number between 1 and 12.\n"
            RESET);
          // Clear the input buffer
          while (getchar() != '\n');
        }
      } while (month < 1 || month > 12);	// Repeat the loop until a valid choice is made

      // Display the chosen month
      displayMonth(month);

      // Ask the user if they want to display another month
      printf("\n\nDo you want to display another month? (1 for yes, any other key for no): ");
      scanf(" %c", &choice);
    } while (choice == '1');	// Repeat the loop if the user enters '1'

    return 0;
  }