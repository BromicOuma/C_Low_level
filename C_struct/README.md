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
