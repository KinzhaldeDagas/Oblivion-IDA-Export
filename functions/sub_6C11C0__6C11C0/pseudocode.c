int __thiscall sub_6C11C0(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, char *, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6c11c2*/
  sub_6BD510(this, a2); /*0x6c11c9*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x6c11e1*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v10 + 4); /*0x6c11e2*/
  a2 = 4; /*0x6c11e5*/
  v4(v10, this + 0x14, 4, &a2, 1); /*0x6c11ed*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x6c1202*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v9 + 4); /*0x6c1203*/
  a2 = 4; /*0x6c1206*/
  v5(v9, this + 0x18, 4, &a2, 1); /*0x6c120e*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6c1210*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v6 + 4); /*0x6c1216*/
  a2 = 4; /*0x6c1227*/
  return v7(v6, this + 0x1C, 4, &a2, 1); /*0x6c1234*/
}
