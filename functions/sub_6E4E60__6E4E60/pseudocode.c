int __thiscall sub_6E4E60(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e4e62*/
  sub_6ED420((NiRenderer *)this, a2); /*0x6e4e69*/
  sub_6CB990(this + 0x1C, v2); /*0x6e4e72*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x6e4e8a*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 4); /*0x6e4e8b*/
  a2 = 4; /*0x6e4e8e*/
  v4(v10, this + 0x3C, 4, &a2, 1); /*0x6e4e96*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x6e4eab*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 4); /*0x6e4eac*/
  a2 = 4; /*0x6e4eaf*/
  v5(v9, this + 0x40, 4, &a2, 1); /*0x6e4eb7*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e4eb9*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 4); /*0x6e4ebf*/
  a2 = 4; /*0x6e4ed0*/
  return v7(v6, this + 0x44, 4, &a2, 1); /*0x6e4edd*/
}
