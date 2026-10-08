int __thiscall sub_725620(int *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, int *, int, int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x725622*/
  sub_71A6D0(this, a2); /*0x725629*/
  v10 = *(_DWORD *)(v2 + 0x21C); /*0x725644*/
  v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4); /*0x725645*/
  a2 = 4; /*0x725648*/
  v4(v10, this + 0x42, 4, &a2, 1); /*0x725650*/
  v9 = *(_DWORD *)(v2 + 0x21C); /*0x725668*/
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 4); /*0x725669*/
  a2 = 4; /*0x72566c*/
  v5(v9, this + 0x43, 4, &a2, 1); /*0x725674*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x725676*/
  v7 = *(int (__cdecl **)(int, int *, int, int *, int))(v6 + 4); /*0x72567c*/
  a2 = 4; /*0x725690*/
  return v7(v6, this + 0x44, 4, &a2, 1); /*0x72569d*/
}
