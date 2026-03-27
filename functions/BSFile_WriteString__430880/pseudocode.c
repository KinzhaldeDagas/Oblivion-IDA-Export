int __thiscall BSFile_WriteString(_DWORD *this, signed int a2)
{
  unsigned int v2; // eax
  int (__cdecl *v4)(_DWORD *, const char *, unsigned int, signed int *, int); // eax
  int result; // eax
  const char *v6; // [esp-10h] [ebp-14h]
  unsigned int v7; // [esp-Ch] [ebp-10h]

  LOWORD(v2) = *(_WORD *)(a2 + 4);
  if ( (_WORD)v2 == 0xFFFF )
    v2 = strlen(*(const char **)a2);
  else
    v2 = (unsigned __int16)v2;
  v7 = v2 + 1;
  v4 = (int (__cdecl *)(_DWORD *, const char *, unsigned int, signed int *, int))*(this + 2);
  v6 = *(const char **)a2;
  a2 = 1;
  result = v4(this, v6, v7, &a2, 1);
  *(this + 0x52) += result;
  return result;
}
