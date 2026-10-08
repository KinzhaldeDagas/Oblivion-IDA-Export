int __thiscall BSFile_WriteString(_DWORD *this, signed int a2)
{
  unsigned int v2; // eax
  int (__cdecl *v4)(_DWORD *, const char *, unsigned int, signed int *, int); // eax
  int result; // eax
  const char *v6; // [esp-10h] [ebp-14h]
  unsigned int v7; // [esp-Ch] [ebp-10h]

  LOWORD(v2) = *(_WORD *)(a2 + 4); /*0x430884*/
  if ( (_WORD)v2 == 0xFFFF ) /*0x43088f*/
    v2 = strlen(*(const char **)a2); /*0x4308a0*/
  else
    v2 = (unsigned __int16)v2; /*0x4308a5*/
  v7 = v2 + 1; /*0x4308b4*/
  v4 = (int (__cdecl *)(_DWORD *, const char *, unsigned int, signed int *, int))*(this + 2); /*0x4308b5*/
  v6 = *(const char **)a2; /*0x4308b8*/
  a2 = 1; /*0x4308ba*/
  result = v4(this, v6, v7, &a2, 1); /*0x4308c2*/
  *(this + 0x52) += result; /*0x4308c4*/
  return result; /*0x4308cd*/
}
