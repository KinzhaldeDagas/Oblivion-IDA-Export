int __thiscall sub_88F370(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x88f372*/
  sub_89EFB0(this, a2); /*0x88f379*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x88f391*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 8); /*0x88f392*/
  a2 = 4; /*0x88f395*/
  v4(v8, this + 0x14, 4, &a2, 1); /*0x88f39d*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x88f39f*/
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 8); /*0x88f3a5*/
  a2 = 4; /*0x88f3b6*/
  return v6(v5, this + 0x18, 4, &a2, 1); /*0x88f3c3*/
}
