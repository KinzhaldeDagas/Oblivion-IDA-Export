struct lzstate
{
HFILE realfd;
CHAR lastchar;
DWORD reallength;
DWORD realcurrent;
DWORD realwanted;
BYTE table[4096];
UINT curtabent;
BYTE stringlen;
DWORD stringpos;
WORD bytetype;
BYTE *get;
DWORD getcur;
DWORD getlen;
};
