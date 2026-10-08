int __thiscall sub_716EA0(char *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, char *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x716ea2*/
  sub_709430(this, a2); /*0x716ea9*/
  v4 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x716eb4*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x716ec4*/
  a2 = 4; /*0x716ec5*/
  return v4(v6, this + 0xC, 4, &a2, 1); /*0x716ed2*/
}
