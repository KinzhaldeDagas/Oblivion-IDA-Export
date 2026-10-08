struct _ACCESS_ALLOWED_OBJECT_ACE
{
ACE_HEADER Header;
ACCESS_MASK Mask;
DWORD Flags;
GUID ObjectType;
GUID InheritedObjectType;
DWORD SidStart;
};
