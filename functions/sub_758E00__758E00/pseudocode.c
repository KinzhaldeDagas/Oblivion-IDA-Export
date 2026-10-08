int __thiscall sub_758E00(const char **this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(int, const char **, int, signed int *, int); // edx
  int v9; // [esp-28h] [ebp-30h]
  int v10; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2; /*0x758e02*/
  sub_752E40(this, a2); /*0x758e09*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 6)); /*0x758e19*/
  sub_7094A0((char *)this + 0x1C, (signed int)v2); /*0x758e1f*/
  v10 = v2[0x88]; /*0x758e37*/
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v10 + 8); /*0x758e38*/
  a2 = 4; /*0x758e3b*/
  v4(v10, this + 0xA, 4, &a2, 1); /*0x758e43*/
  v9 = v2[0x88]; /*0x758e58*/
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v9 + 8); /*0x758e59*/
  a2 = 4; /*0x758e5c*/
  v5(v9, this + 0xB, 4, &a2, 1); /*0x758e64*/
  v6 = v2[0x88]; /*0x758e66*/
  v7 = *(int (__cdecl **)(int, const char **, int, signed int *, int))(v6 + 8); /*0x758e6c*/
  a2 = 4; /*0x758e7d*/
  return v7(v6, this + 0xC, 4, &a2, 1); /*0x758e8a*/
}
