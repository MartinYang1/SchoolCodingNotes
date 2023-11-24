// C is a low level language that can interact with RAM and hardware components more easily. It's a
// statically typed language. The main benefit of this is that it's super fast compared to a language
// such as Python, but it is much harder to learn and master.

// C comments:
// Comments are used to help explain what the code is doing and clarify code
// E.g. If you come back to a project after some time or if your team members need to look at your code
// The compiler ignores comments
// In C, comments single line comments are // and multi-line comments are /* ... */

// C syntax:
// ; to end line
// {} for code blocks

// Variables:
// Variables are 'labels'. They are references to memory locations an object is in
// Variables in C need their type declared

// Initializing a variable example 1
int num = 0;

// Example 2
#include <cstdio>
int main() {
    int n = 5;
    printf("%d", n);
    return 0;
}

// Variables can also be constants
// Example
const unsigned n = 5;
