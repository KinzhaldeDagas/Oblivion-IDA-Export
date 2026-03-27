int __thiscall sub_718B70(char *this, int a2)
{
  signed int v2; // edi
  int v4; // edi
  int (__cdecl *v5)(int, char *, int, int *, int); // ecx

  v2 = a2;
  sub_711B90(this, a2);
  sub_709430(this + 0x24, v2);
  v4 = *(_DWORD *)(v2 + 0x21C);
  v5 = *(int (__cdecl **)(int, char *, int, int *, int))(v4 + 4);
  a2 = 4;
  return v5(v4, this + 0x30, 4, &a2, 1);
}
