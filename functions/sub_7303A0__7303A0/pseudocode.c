int __thiscall sub_7303A0(const char **this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int v5; // edi
  int (__cdecl *v6)(int, int, int, int *, int); // eax
  int v8; // [esp-24h] [ebp-30h]
  int v9; // [esp-20h] [ebp-2Ch]
  int v10; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  sub_6FE000(this, (_DWORD *)a2);
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(v2[0x88] + 8);
  v10 = v2[0x88];
  a2 = 4;
  v4(v10, this + 3, 4, &a2, 1);
  v5 = v2[0x88];
  v6 = *(int (__cdecl **)(int, int, int, int *, int))(v5 + 8);
  v9 = 4 * (_DWORD)*(this + 3);
  v8 = (int)*(this + 4);
  a2 = 4;
  return v6(v5, v8, v9, &a2, 1);
}
