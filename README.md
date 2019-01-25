# PERSONALITY_TEST_2019
C++ Read from file, get user selections, evaluate data, store and loop

This program brings in a file that states a number of questions followed by questions that are labled with a category number, a question, and a choice of a yes or no response that provides a character to be analyzed to determine the type of personality of the user.

Created a loop to pull in a file name designated by the user
If the file name is not a file that is available for the program to open the user is prompted to try again until success is met
Tests:
  using the appropriate file, questions.txt, successfully runs the program
  using the analysis file that isn't going to be used for the full program runs sucessfully
  using an arbitrary file name creates a loop until success is met

Checking to see if the file is a proper file to fulfil the functionality of the program using load function
  The first digit of the first line must be numeric
  Test:
    pulled in correct file and runs with success
    pulled in analysis file and exits with failure
  The first string in each line is also numeric
  Test:
    after the strings are stored the initial string of each line is check for int
    used questions.txt and success
    used analysis.txt and failure
    
