// Saves base NiExtraData, 32-bit key count, then every ordered key record as float time followed by text string.
int __thiscall NiTextKeyExtraData_SaveBinary(const char **this, int a2)
{
  signed int v2; // ebp
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int result; // eax
  unsigned int v6; // esi
  int v7; // [esp-14h] [ebp-24h]

  v2 = a2; /*0x6d7892*/
  sub_6FE000(this, (_DWORD *)a2); /*0x6d789b*/
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6d78a6*/
  v7 = *(_DWORD *)(v2 + 0x220); /*0x6d78b6*/
  a2 = 4; /*0x6d78b7*/
  result = v4(v7, this + 3, 4, &a2, 1); /*0x6d78bf*/
  v6 = 0; /*0x6d78c1*/
  if ( *(this + 3) ) /*0x6d78c6*/
  {
    do /*0x6d78e1*/
      result = NiTextKey_SaveBinary((const char **)&(*(this + 4))[8 * v6++], v2); /*0x6d78d7*/
    while ( v6 < (unsigned int)*(this + 3) ); /*0x6d78e1*/
  }
  return result; /*0x6d78e3*/
}
