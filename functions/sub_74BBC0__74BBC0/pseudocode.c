int __thiscall sub_74BBC0(const char **this, unsigned int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  unsigned int i; // ebx
  void (__cdecl *v6)(int, const char **, int, int *, int); // eax
  void (__cdecl *v7)(int, const char **, int, int *, int); // eax
  int v9; // [esp-28h] [ebp-38h]
  int v10; // [esp-14h] [ebp-24h]
  int v11; // [esp-14h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_74F3A0(this, a2);
  a2 = *((unsigned __int16 *)this + 0x2D);
  v10 = v2[0x88];
  v4 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v10 + 8);
  v12 = 4;
  v4(v10, &a2, 4, &v12, 1);
  for ( i = 0; i < a2; ++i )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)&(*(this + 0x15))[4 * i]);
  v11 = v2[0x88];
  v6 = *(void (__cdecl **)(int, const char **, int, int *, int))(v11 + 8);
  v12 = 4;
  v6(v11, this + 0x1C, 4, &v12, 1);
  v9 = v2[0x88];
  v7 = *(void (__cdecl **)(int, const char **, int, int *, int))(v9 + 8);
  v12 = 4;
  v7(v9, this + 0x1D, 4, &v12, 1);
  return sub_7094A0((char *)this + 0x78, (signed int)v2);
}
