unsigned int __thiscall BSFile_WriteStringW(_DWORD *this, signed int a2)
{
  int v2; // eax
  _WORD *v4; // eax
  int (__cdecl *v6)(_DWORD *, _WORD *, int, signed int *, int); // ecx
  unsigned int v7; // eax
  _WORD *v9; // [esp-10h] [ebp-14h]

  LOWORD(v2) = *(_WORD *)(a2 + 4);
  if ( (_WORD)v2 == 0xFFFF )
  {
    v4 = *(_WORD **)a2;
    while ( *v4++ )
      ;
    v2 = ((int)v4 - *(_DWORD *)a2 - 2) >> 1;
  }
  else
  {
    v2 = (unsigned __int16)v2;
  }
  v9 = *(_WORD **)a2;
  v6 = (int (__cdecl *)(_DWORD *, _WORD *, int, signed int *, int))*(this + 2);
  a2 = 1;
  v7 = v6(this, v9, 2 * v2 + 2, &a2, 1);
  *(this + 0x52) += v7;
  return v7 >> 1;
}
