* **24. Is BST**
  * [110-binary_tree_is_bst.c](./110-binary_tree_is_bst.c): C function that
  checks if a binary tree is a valid binary search tree.
  * Returns `1` if the tree is a valid BST, `0` otherwise.

* **25. BST - Insert**
  * [111-bst_insert.c](./111-bst_insert.c): C function that inserts a value into
  a binary search tree.
  * Returns a pointer to the new node, or `NULL` on failure.
  * If the tree is `NULL`, the value becomes the root node.
  * The value is ignored if it is already present in the tree.

* **26. BST - Array to BST**
  * [112-array_to_bst.c](./112-array_to_bst.c): C function that builds a binary
  search tree from an array.
  * Returns a pointer to the root node of the created tree, or `NULL` on failure.

* **27. BST - Search**
  * [113-bst_search.c](./113-bst_search.c): C function that searches for a value
  in a binary search tree.
  * If the value is matched in the BST, returns a pointer to the matched node.
  * Otherwise, returns `NULL`.

* **28. BST - Remove**
  * [114-bst_remove.c](./114-bst_remove.c): C function that removes a node from
  a binary search tree.
  * Returns a pointer to the new root node of the tree after deletion.
  * If the node to be deleted has two children, it is replaced with its first
  in-order successor.

* **29. Big O #BST**
  * [115-O](./115-O): Text file containing the average time complexities of
  binary search tree operations (one answer per line):
    * Inserting the value `n`.
    * Removing the node with the value `n`.
    * Searching for a node in a BST of size `n`.

* **30. Is AVL**
  * [120-binary_tree_is_avl.c](./120-binary_tree_is_avl.c): C function that checks if
  a binary tree is a valid AVL tree.
  * If the tree is a valid AVL tree, returns `1`.
  * Otherwise, returns `0`.

* **31. AVL - Insert**
  * [121-avl_insert.c](./121-avl_insert.c): C function that inserts a value in an AVL tree.
  * Returns a value to the inserted node, or `NULL` on failure.

* **32. AVL - Array to AVL**
  * [122-array_to_avl.c](./122-array_to_avl.c): C function that builds an AVL tree
  from an array.
  * Returns a pointer to the root node of the created AVL tree, or `NULL` on failure.
  * Ignores duplicate values.

* **35. Big O #AVL Tree**
  * [125-O](./125-O): Text file containing the average time complexities of AVL tree
  opeartions (one answer per line):
    * Inserting the value `n`.
    * Removing the node with the value `n`.
    * Searching for a node in an AVL tree of size `n`.

* **41. Big O #Binary Heap**
  * [135-O](./135-O): Text file containing the average time complexities of
  binary heap opeartions (one answer per line):
    * Inserting the value `n`.
    * Extracting the root node.
    * Searching for a node in a binary heap of size `n`.
