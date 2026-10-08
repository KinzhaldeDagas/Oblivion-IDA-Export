int __thiscall sub_7303A0(const char **this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, const char **, int, int *, int); // edx
  int v5; // edi
  int (__cdecl *v6)(int, int, int, int *, int); // eax
  int v8; // [esp-24h] [ebp-30h]
  int v9; // [esp-20h] [ebp-2Ch]
  int v10; // [esp-14h] [ebp-20h]

  v2 = a2; /*0x7303a3*/
  sub_6FE000(this, (_DWORD *)a2); /*0x7303aa*/
  v4 = *(void (__cdecl **)(int, const char **, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x7303b5*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x7303c5*/
  a2 = 4; /*0x7303c6*/
  v4(v10, this + 3, 4, &a2, 1); /*0x7303ce*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x7303d5*/
  v6 = *(int (__cdecl **)(int, int, int, int *, int))(v5 + 8); /*0x7303e2*/
  v9 = 4 * (_DWORD)*(this + 3); /*0x7303e9*/
  v8 = (int)*(this + 4); /*0x7303ea*/
  a2 = 4; /*0x7303ec*/
  return v6(v5, v8, v9, &a2, 1); /*0x7303f9*/
}
