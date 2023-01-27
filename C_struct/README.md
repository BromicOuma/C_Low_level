The C99 standard guarantees that the components of a struct are stored in
memory in the same order that they are defined in: that is, later components are
placed at higher address. This allows sneaky tricks like truncating a structure
if you don’t use all of its components. Because of alignment restrictions, the
compiler may add padding between components to put each component on its
prefered alignment boundary.
You can find the position of a component within a struct using the offsetof
macro, which is defined in stddef.h. This returns the number of bytes from the
base of the struct that the component starts at, and can be used to do various
terrifying non-semantic things with pointers.

allowable range for a variable of type char goes
only to 127 , whereas the ASCII codes go to 255 . The ASCII codes are actually
divided into two parts. The standard ASCII codes go only to 127 ; this range includes all
letters, numbers, punctuation marks, and other keyboard symbols. The codes from 128 to
255 are the extended ASCII codes and represent special characters such as foreign letters
and graphics symbols (see Appendix A for a full list). Thus, for standard text data, you
can use type char variables; if you want to print the extended ASCII characters, you
must use an unsigned char .
