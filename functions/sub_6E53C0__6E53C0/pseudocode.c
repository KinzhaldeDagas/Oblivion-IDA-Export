int __thiscall sub_6E53C0(char *this, signed int a2)
{
  signed int v2; // edi
  int v4; // edi
  int (__cdecl *v5)(int, char *, int, signed int *, int); // ecx

  v2 = a2; /*0x6e53c2*/
  sub_6ED500(this, a2); /*0x6e53c9*/
  sub_7094A0(this + 0x1C, v2); /*0x6e53d2*/
  v4 = *(_DWORD *)(v2 + 0x220); /*0x6e53d7*/
  v5 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v4 + 8); /*0x6e53dd*/
  a2 = 4; /*0x6e53ee*/
  return v5(v4, this + 0x28, 4, &a2, 1); /*0x6e53fb*/
}
