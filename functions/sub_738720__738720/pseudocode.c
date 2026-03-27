int __thiscall sub_738720(const char **this, int a2)
{
  _DWORD *v3; // edi
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v3 = (_DWORD *)a2;
  sub_713720((_DWORD *)a2, *(this + 2));
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(v3[0x88] + 8);
  v6 = v3[0x88];
  a2 = 4;
  return v4(v6, this + 3, 4, &a2, 1);
}
