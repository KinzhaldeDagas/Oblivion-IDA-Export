bool __thiscall sub_6F5D40(_DWORD *this, int a2, unsigned int a3, int a4)
{
  int v5; // ecx
  unsigned int v7; // esi

  v5 = *(this + 0x10);
  if ( !v5 )
    return 0;
  v7 = a4 * a3;
  if ( a3 && (a3 <= 2 || a3 == 4) )
    return v7 == (*(int (__cdecl **)(int, int, unsigned int, unsigned int *, int))(v5 + 4))(v5, a2, a4 * a3, &a3, 1);
  if ( (a3 & 3) != 0 )
  {
    sub_6ED6D0(".\\binaryFile.cpp", 0x1BD);
    a3 = 1;
  }
  else
  {
    a3 = 4;
  }
  return v7 == (*(int (__cdecl **)(_DWORD, int, unsigned int, unsigned int *, int))(*(this + 0x10) + 4))(
                 *(this + 0x10),
                 a2,
                 v7,
                 &a3,
                 1);
}
