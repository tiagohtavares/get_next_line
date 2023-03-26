<h1 align="center">
	get_next_line
</h1>

## About 

This project consists of creating a function that returns the first line in a file(*.txt). A line is defined by ending in '\n' and '\n' has to be returned with the line.
When the function is called several times in the same progam it must 
remember in wich line it left off. 

This function must read the file in chunks defined by BUFFER_SIZE(size 10 by default) and allways return one line no 
matter the size of the buffer. Once all lines have been read it must return NULL.

## Implementation

<b>get_next_line</b> takes in as arg the <b>fd</b> of the file to read and begins by alocating a temp <b>char *buffer</b> wich is the size of buffer. It continues to read n bytes the 
size of <b>BUFFER_SIZE</b> until it finds the end of the line '\n' and storing them on the global <b>char *stash</b>. 

Once '\n' is found it will format the 
stash taking from it all the bytes before '\n' and putting them on <b>char *line</b> .It will then be returned and <b>char *stash</b> will remain
with the leftover bytes from the file. <b>char *stash</b> must be allocated with exact ammount of bytes left.

This happens when <b>BUFFER_SIZE </b> does not perfectly read the line, leaving extra bytes after '\n' that cannot be lost and must be stored 
so <b>get_next_line</b> continues to properly return the entire line once it's called again.

## Bonus

For bonus part <b>get_next_line</b> must be able to read multiple files at the same time without loosing the reading thread of each one.

This is done by making global <b>var *stash</b> a double pointer <b>var **stash</b>. This allows us to create an array in wich the "index" corresponds to the specific
file being read allowing us to have one "stash" for each file.

## Use

This project will be added to <a href="https://github.com/tiagohtavares/libft">libft</a> for further use in other work.
