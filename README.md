# FL4-CS131-04-03-Scope
Instructor-provided program to distinguish what scopes of reference variable initialization location allows for

Learned:
- Initializing variables outside of functions (usually at the very beginning of code with the #includes) means they are global; every function can access them
- You can have multiple of the same variable type with the same name if they are in different functions, as those functions cannot see inside each other
