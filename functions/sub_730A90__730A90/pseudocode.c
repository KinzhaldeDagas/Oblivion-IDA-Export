int __thiscall sub_730A90(const char **this, int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_6FE000(this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(v2[0x88] + 8);
  v6 = v2[0x88];
  a2 = 4;
  return v4(v6, this + 3, 4, &a2, 1);
}
