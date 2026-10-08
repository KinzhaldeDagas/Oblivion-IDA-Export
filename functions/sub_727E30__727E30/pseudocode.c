int __thiscall sub_727E30(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x727e32*/
  sub_726E70(this, a2); /*0x727e39*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x727e51*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x727e52*/
  a2 = 4; /*0x727e55*/
  v4(v8, this + 0x2C, 4, &a2, 1); /*0x727e5d*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x727e5f*/
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 8); /*0x727e65*/
  a2 = 4; /*0x727e76*/
  return v6(v5, this + 0x30, 4, &a2, 1); /*0x727e83*/
}
