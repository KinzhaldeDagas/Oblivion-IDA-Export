int __thiscall sub_6E4EF0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e4ef2*/
  sub_6ED500(this, a2); /*0x6e4ef9*/
  sub_6CBA90(this + 0x1C, v2); /*0x6e4f02*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x6e4f1a*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8); /*0x6e4f1b*/
  a2 = 4; /*0x6e4f1e*/
  v4(v10, this + 0x3C, 4, &a2, 1); /*0x6e4f26*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x6e4f3b*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 8); /*0x6e4f3c*/
  a2 = 4; /*0x6e4f3f*/
  v5(v9, this + 0x40, 4, &a2, 1); /*0x6e4f47*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x6e4f49*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8); /*0x6e4f4f*/
  a2 = 4; /*0x6e4f60*/
  return v7(v6, this + 0x44, 4, &a2, 1); /*0x6e4f6d*/
}
