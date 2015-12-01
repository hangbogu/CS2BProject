# File system Project

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
