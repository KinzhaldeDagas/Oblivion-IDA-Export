int __thiscall sub_73CFD0(const char **this, int a2)
{
  _DWORD *v2; // ebp
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int result; // eax
  unsigned int v6; // esi
  int v7; // [esp-18h] [ebp-24h]

  v2 = (_DWORD *)a2; /*0x73cfd2*/
  sub_6FE000(this, (_DWORD *)a2); /*0x73cfdb*/
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(v2[0x88] + 8); /*0x73cfe6*/
  v7 = v2[0x88]; /*0x73cff6*/
  a2 = 4; /*0x73cff7*/
  result = v4(v7, this + 3, 4, &a2, 1); /*0x73cfff*/
  v6 = 0; /*0x73d001*/
  if ( *(this + 3) ) /*0x73d006*/
  {
    do /*0x73d023*/
      result = sub_713720(v2, *(const char **)&(*(this + 4))[4 * v6++]); /*0x73d019*/
    while ( v6 < (unsigned int)*(this + 3) ); /*0x73d023*/
  }
  return result; /*0x73d026*/
}
