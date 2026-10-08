unsigned int __thiscall BSFile_WriteStringW(_DWORD *this, signed int a2)
{
  int v2; // eax
  _WORD *v4; // eax
  int (__cdecl *v6)(_DWORD *, _WORD *, int, signed int *, int); // ecx
  unsigned int v7; // eax
  _WORD *v9; // [esp-10h] [ebp-14h]

  LOWORD(v2) = *(_WORD *)(a2 + 4); /*0x430824*/
  if ( (_WORD)v2 == 0xFFFF ) /*0x43082f*/
  {
    v4 = *(_WORD **)a2; /*0x430831*/
    while ( *v4++ ) /*0x430840*/
      ; /*0x430837*/
    v2 = ((int)v4 - *(_DWORD *)a2 - 2) >> 1; /*0x430844*/
  }
  else
  {
    v2 = (unsigned __int16)v2; /*0x430849*/
  }
  v9 = *(_WORD **)a2; /*0x43085a*/
  v6 = (int (__cdecl *)(_DWORD *, _WORD *, int, signed int *, int))*(this + 2); /*0x43085b*/
  a2 = 1; /*0x43085f*/
  v7 = v6(this, v9, 2 * v2 + 2, &a2, 1); /*0x430867*/
  *(this + 0x52) += v7; /*0x430869*/
  return v7 >> 1; /*0x430874*/
}
