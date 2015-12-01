# File system Project

| Remarks                | Date / time           |
| ---------------------- | --------------------- |
| Presentation           | Dec 2nd 18:30 - 19:30 |
| Final and Assignment 4 | Dec 9th 18:00 - 19:30 |
 
##### Getting derived class' type from base pointer
Useful for type casting.
```c++
File *p_f = ...;

char type = p_f -> get_type(); // Gives you the type of class the File pointer is pointing to
```

Return values for char File::get_type()
```
H - HTMLFile
T - TextFile
I - ImageFile
S - SoundFile
U - Unknown class (default for File)
```
