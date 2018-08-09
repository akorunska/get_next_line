# get_next_line

Whether it's a file or standard input, you'll still need to read content line by line. It is therefore time to tackle this function, which is essential for a number of later projects.

The function is prototyped as follows:

`int get_next_line(const int fd, char \**line);`

The first parameter is the file descriptor that will be used to read.
The second parameter is the address of a pointer to a character that is be used to save the line read from the file descriptor.

The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively.

get_next_line returns its result without ’\n’.

Calling the function get_next_line in a loop allows to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines.

Also, get_next_line is able to manage multiple file descriptors. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.
