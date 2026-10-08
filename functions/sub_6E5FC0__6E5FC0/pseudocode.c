int __thiscall sub_6E5FC0(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e5fc2*/
  sub_6E5380(this, a2); /*0x6e5fc9*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e5fd4*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e5fe4*/
  a2 = 4; /*0x6e5fe5*/
  return v4(v6, this + 0x2C, 8, &a2, 1); /*0x6e5ff2*/
}
