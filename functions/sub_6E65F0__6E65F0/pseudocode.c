int __thiscall sub_6E65F0(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e65f2*/
  sub_6E6A40(this, a2); /*0x6e65f9*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e6604*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e6614*/
  a2 = 4; /*0x6e6615*/
  return v4(v6, this + 0x34, 8, &a2, 1); /*0x6e6622*/
}
