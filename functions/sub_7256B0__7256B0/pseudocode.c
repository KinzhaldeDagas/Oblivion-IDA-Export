int __thiscall sub_7256B0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7256b2*/
  sub_71A730(this, a2); /*0x7256b9*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x7256d4*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 8); /*0x7256d5*/
  a2 = 4; /*0x7256d8*/
  v4(v10, this + 0x108, 4, &a2, 1); /*0x7256e0*/
  v9 = *(_DWORD *)(v2 + 0x220); /*0x7256f8*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 8); /*0x7256f9*/
  a2 = 4; /*0x7256fc*/
  v5(v9, this + 0x10C, 4, &a2, 1); /*0x725704*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x725706*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 8); /*0x72570c*/
  a2 = 4; /*0x725720*/
  return v7(v6, this + 0x110, 4, &a2, 1); /*0x72572d*/
}
