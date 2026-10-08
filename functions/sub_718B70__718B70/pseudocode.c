int __thiscall sub_718B70(char *this, int a2)
{
  signed int v2; // edi
  int v4; // edi
  int (__cdecl *v5)(int, char *, int, int *, int); // ecx

  v2 = a2; /*0x718b72*/
  sub_711B90(this, a2); /*0x718b79*/
  sub_709430(this + 0x24, v2); /*0x718b82*/
  v4 = *(_DWORD *)(v2 + 0x21C); /*0x718b87*/
  v5 = *(int (__cdecl **)(int, char *, int, int *, int))(v4 + 4); /*0x718b8d*/
  a2 = 4; /*0x718b9e*/
  return v5(v4, this + 0x30, 4, &a2, 1); /*0x718bab*/
}
