int __thiscall sub_72FF90(char *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  int result; // eax
  int v7; // [esp-28h] [ebp-34h]
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x72ff93*/
  sub_714BA0(this, a2); /*0x72ff9a*/
  sub_714BA0(this + 0xC, v2); /*0x72ffa3*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x72ffbb*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 4); /*0x72ffbc*/
  a2 = 4; /*0x72ffbf*/
  v4(v8, this + 8, 4, &a2, 1); /*0x72ffc7*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x72ffdd*/
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v7 + 4); /*0x72ffde*/
  a2 = 4; /*0x72ffe1*/
  v5(v7, &v9, 4, &a2, 1); /*0x72ffe9*/
  *((_DWORD *)this + 0x11) = v9; /*0x72fff2*/
  result = sub_714BA0(this + 0x14, v2); /*0x72fff9*/
  *(this + 0x1C) = 1; /*0x72ffff*/
  return result; /*0x72fffe*/
}
