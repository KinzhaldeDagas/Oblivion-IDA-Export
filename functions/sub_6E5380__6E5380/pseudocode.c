int __thiscall sub_6E5380(char *this, signed int a2)
{
  signed int v2; // edi
  int v4; // edi
  int (__cdecl *v5)(int, char *, int, signed int *, int); // ecx

  v2 = a2; /*0x6e5382*/
  sub_6ED420((NiRenderer *)this, a2); /*0x6e5389*/
  sub_709430(this + 0x1C, v2); /*0x6e5392*/
  v4 = *(_DWORD *)(v2 + 0x21C); /*0x6e5397*/
  v5 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v4 + 4); /*0x6e539d*/
  a2 = 4; /*0x6e53ae*/
  return v5(v4, this + 0x28, 4, &a2, 1); /*0x6e53bb*/
}
