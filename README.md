# Hangman-game-cpp
Hangman Game (C++) - A Logic-Building Journey
Project Overview
This is a lightweight, console-based Hangman Game built using C++. The goal of this project was to move beyond basic syntax and explore how to manage game states, manipulate strings, and handle user input logic. The program challenges players to guess a hidden five-letter word ("mango") before they run out of lives.

Key Features
Dynamic Progress Tracking: I used a "safe" string initialized with underscores (_____) to store and display correctly guessed letters in their exact positions.

String Comparison Logic: Instead of complex loops, the game leverages C++'s std::string operator overloading (safe != ans) to instantly check for a win condition.

Visual Feedback: The program includes a custom hangman function that dynamically draws the character's state based on the number of lives remaining.

Input Protection: I implemented logic to ensure that if a user guesses a letter they have already found, the program notifies them without penalizing their remaining turns.

Game State Management: The game operates within a while loop that monitors two conditions: the player's remaining health and the completion of the word.

Technical Concepts Used
Pass-by-Reference: Utilizing char &c in functions to efficiently handle user input.

Global vs. Local Scope: Managing lives and ans globally to maintain state across function calls.

Boolean Flags: Using a match flag to trigger penalties only when a guess fails across the entire target string.
