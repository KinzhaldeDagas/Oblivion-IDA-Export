int __thiscall sub_6C0880(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6c0882*/
  sub_6BC1C0(this, a2); /*0x6c0889*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x6c08a1*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 4); /*0x6c08a2*/
  a2 = 4; /*0x6c08a5*/
  v4(v10, this + 0x10, 4, &a2, 1); /*0x6c08ad*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x6c08c2*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 4); /*0x6c08c3*/
  a2 = 4; /*0x6c08c6*/
  v5(v9, this + 0x14, 4, &a2, 1); /*0x6c08ce*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6c08d0*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 4); /*0x6c08d6*/
  a2 = 4; /*0x6c08e7*/
  return v7(v6, this + 0x18, 4, &a2, 1); /*0x6c08f4*/
}
