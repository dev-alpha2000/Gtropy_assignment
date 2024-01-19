# Gtropy assignment

**Task**  
You have to design a dictionary Data structure, where any word when entered, it searches the entered word in the dictionary and returns the relevant searched word if any!

<hr>

**Solution**  
Solving this problem involves utilizing a Trie data structure. The strategy is to iterate through the array of strings, str[], and insert each string into the Trie. Each node of the Trie contains a character of the string and a boolean value indicating whether it is the last character of the string. To address the problem, we do these steps:

* Initialize a Trie, denoted as root, where each node includes a character of a string and a boolean value indicating whether the character is the last character of the string.

* Traverse the array of strings, arr[], and insert all the strings into the Trie.

* Finally, traverse the string key. For each ith character, check if the character is present in the Trie. If it is, move to the next node of the Trie.

* If the character is not found, print all possible strings whose prefix matches the string key.

  <hr>

  **Complexities**  

  * Time complexity: Time Complexity: O(N * M), where M is the maximum length of the string
  * Space complexity: O(N * 256)
