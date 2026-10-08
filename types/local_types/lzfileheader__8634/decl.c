struct lzfileheader
{
BYTE magic[8];
BYTE compressiontype;
CHAR lastchar;
DWORD reallength;
};
