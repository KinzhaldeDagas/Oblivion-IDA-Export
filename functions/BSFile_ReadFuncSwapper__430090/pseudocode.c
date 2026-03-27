int __cdecl BSFile_ReadFuncSwapper(int a1, char *a2, unsigned int a3, int a4, unsigned int a5)
{
  int v6; // ebx

  if ( !a3 )
    return 0;
  v6 = (*(int (__thiscall **)(int, char *, unsigned int))(*(_DWORD *)a1 + 0x38))(a1, a2, a3);
  if ( a4 )
    NiBinaryStream_DoByteSwap(a2, a3, a4, a5);
  return v6;
}
