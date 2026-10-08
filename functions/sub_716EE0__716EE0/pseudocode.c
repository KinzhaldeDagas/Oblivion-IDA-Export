int __thiscall sub_716EE0(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x716ee2*/
  sub_7094A0(this, a2); /*0x716ee9*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x716ef4*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x716f04*/
  a2 = 4; /*0x716f05*/
  return v4(v6, this + 0xC, 4, &a2, 1); /*0x716f12*/
}
