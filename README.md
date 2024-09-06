# Gtropy assignment

**Task**  
You have to design a dictionary Data structure, where any word when entered, it searches the entered word in the dictionary and returns the relevant searched word if any!

<hr>

**Solution**  
This project implements a Dictionary using the Trie (Prefix Tree) data structure in C++. It allows users to efficiently store and search for words, offering fast lookups for words in a large dataset. When a word is entered, the program searches for it in the dictionary and returns the relevant word if found.

Features
Insert Word: Add words to the dictionary.
Search Word: Efficiently search for any word in the dictionary.
Auto-complete Suggestions: (Optional) Provide suggestions based on a prefix.
Prefix Matching: Return all words that share a common prefix.
Efficient Lookup: Fast word search with an average time complexity of O(L), where L is the length of the word.

Trie Data Structure
A Trie is a tree-like data structure used for efficiently storing and searching strings. In this project, each node of the Trie represents a single character of a word. The main operations provided by the Trie are:

Insert: Adds a new word to the Trie.
Search: Checks if a word exists in the Trie.
Prefix Matching: Finds all words that share a given prefix.
Auto-complete Suggestions: (Optional) Returns suggestions for words based on a prefix.


Here’s a README template for your Dictionary Data Structure project using C++ and Trie:

Dictionary Data Structure using Trie in C++
Overview
This project implements a Dictionary using the Trie (Prefix Tree) data structure in C++. It allows users to efficiently store and search for words, offering fast lookups for words in a large dataset. When a word is entered, the program searches for it in the dictionary and returns the relevant word if found.

Features
Insert Word: Add words to the dictionary.
Search Word: Efficiently search for any word in the dictionary.
Auto-complete Suggestions: (Optional) Provide suggestions based on a prefix.
Prefix Matching: Return all words that share a common prefix.
Efficient Lookup: Fast word search with an average time complexity of O(L), where L is the length of the word.
Project Structure
plaintext
Copy code
dictionary-trie/
├── src/
│   ├── TrieNode.h           # Definition of TrieNode class
│   ├── Trie.h               # Trie class with insert, search, and utility functions
│   ├── main.cpp             # Main program to interact with the dictionary
├── test/
│   ├── test_dictionary.cpp  # Unit tests for the Trie implementation
├── README.md                # Project README file
├── Makefile                 # For building the project
├── .gitignore               # Git ignore rules
└── LICENSE                  # License for the project
Trie Data Structure
A Trie is a tree-like data structure used for efficiently storing and searching strings. In this project, each node of the Trie represents a single character of a word. The main operations provided by the Trie are:

Insert: Adds a new word to the Trie.
Search: Checks if a word exists in the Trie.
Prefix Matching: Finds all words that share a given prefix.
Auto-complete Suggestions: (Optional) Returns suggestions for words based on a prefix.
Installation and Setup
Requirements
C++11 or higher
A C++ compiler (e.g., GCC, Clang)
(Optional) make for building the project
Installation
Clone the repository:

bash
Copy code
git clone https://github.com/yourusername/dictionary-trie.git
cd dictionary-trie
Compile the project using the Makefile:

bash
Copy code
make
Alternatively, compile the main.cpp manually:

bash
Copy code
g++ -o dictionary src/main.cpp src/TrieNode.h src/Trie.h -std=c++11
Run the program:

bash
Copy code
./dictionary

  <hr>

  **Complexities**  

  * Time complexity: Time Complexity: O(N * M), where M is the maximum length of the string
  * Space complexity: O(N * 256)
