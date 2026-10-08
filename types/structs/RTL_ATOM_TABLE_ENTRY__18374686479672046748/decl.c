struct __declspec(align(8)) _RTL_ATOM_TABLE_ENTRY
{
_RTL_ATOM_TABLE_ENTRY *HashLink;
WORD HandleIndex;
WORD Atom;
WORD ReferenceCount;
UCHAR Flags;
UCHAR NameLength;
WCHAR_0 Name[1];
};
