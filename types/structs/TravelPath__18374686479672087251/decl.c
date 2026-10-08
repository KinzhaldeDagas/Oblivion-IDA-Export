struct TravelPath
{
unsigned int vtable; ///< Verified vtable identity: constructor installs PathLow vtable. The remaining TravelPath layout follows at +4.
BSSimpleList_VoidPtr nodes; ///< Verified BSSimpleList of TravelPathNode pointers. The list occupies +0x04..+0x0B.
int unknown0C; ///< Unknown: constructor copies unk_B3A458 here; all later semantics remain unresolved.
char initializedByte10; ///< Verified: constructor initializes this byte to 1. Its runtime meaning is Unknown.
char padding11[3];
};
