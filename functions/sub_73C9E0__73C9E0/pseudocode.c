int __thiscall sub_73C9E0(const char **this, int a2)
{
  _DWORD *v2; // ebp
  void (__cdecl *v4)(int, const char **, int, int *, int); // edx
  unsigned int v5; // edi
  int v6; // ebp
  int (__cdecl *v7)(int, const char **, int, int *, int); // eax
  int v9; // [esp-18h] [ebp-24h]

  v2 = (_DWORD *)a2; /*0x73c9e2*/
  sub_6FE000(this, (_DWORD *)a2); /*0x73c9eb*/
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(v2[0x88] + 8); /*0x73c9f6*/
  v9 = v2[0x88]; /*0x73ca06*/
  a2 = 4; /*0x73ca07*/
  v4(v9, this + 3, 4, &a2, 1); /*0x73ca0f*/
  v5 = 0; /*0x73ca11*/
  if ( *(this + 3) ) /*0x73ca16*/
  {
    do /*0x73ca33*/
      sub_713720(v2, *(const char **)&(*(this + 4))[4 * v5++]); /*0x73ca29*/
    while ( v5 < (unsigned int)*(this + 3) ); /*0x73ca33*/
  }
  v6 = v2[0x88]; /*0x73ca35*/
  v7 = *(int (__cdecl **)(int, const char **, int, int *, int))(v6 + 8); /*0x73ca3b*/
  a2 = 4; /*0x73ca4c*/
  return v7(v6, this + 5, 4, &a2, 1); /*0x73ca5a*/
}
