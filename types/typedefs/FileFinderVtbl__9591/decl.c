struct FileFinderVtbl
{
void (__thiscall *Unk_00)(FileFinder *);
UInt32 (__thiscall *FindFile)(FileFinder *, const char *filePath, UInt32 arg1, UInt32 arg2, UInt32 arg3);
void (__thiscall *Unk_02)(FileFinder *);
UInt32 (__thiscall *Unk_03)(FileFinder *, const char *filePath, UInt8 arg1, UInt32 arg2);
void (__thiscall *Unk_04)(FileFinder *);
};
