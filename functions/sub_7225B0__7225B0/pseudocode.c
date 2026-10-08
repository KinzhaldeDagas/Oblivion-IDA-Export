int __thiscall sub_7225B0(char *this, unsigned int a2)
{
  unsigned int v2; // edi
  int (__cdecl *v4)(int, char *, int, unsigned int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x7225b2*/
  sub_70B6A0(this, a2); /*0x7225b9*/
  v4 = *(int (__cdecl **)(int, char *, int, unsigned int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7225c4*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x7225d7*/
  a2 = 2; /*0x7225d8*/
  return v4(v6, this + 0xDC, 2, &a2, 1); /*0x7225e5*/
}
