struct stringtable
{
char *data;
ULONG nextoffset;
ULONG allocated;
DWORD_PTR unk[2];
ULONG max_extra_size;
LCID lcid;
};
