int __thiscall sub_73C250(char *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, int *, int); // eax
  void (__cdecl *v5)(int, char *, int, int *, int); // eax
  void (__cdecl *v6)(int, char *, int, int *, int); // eax
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  void (__cdecl *v8)(int, _DWORD **, int, int *, int); // eax
  int v10; // [esp-50h] [ebp-60h]
  int v11; // [esp-3Ch] [ebp-4Ch]
  int v12; // [esp-28h] [ebp-38h]
  int v13; // [esp-14h] [ebp-24h]
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_709020(this, a2);
  sub_711BF0((float *)this + 0x37, (int)v2);
  sub_7094A0(this + 0x100, (signed int)v2);
  v13 = v2[0x88];
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v13 + 8);
  v15 = 4;
  v4(v13, this + 0x140, 4, &v15, 1);
  v12 = v2[0x88];
  v5 = *(void (__cdecl **)(int, char *, int, int *, int))(v12 + 8);
  v15 = 4;
  v5(v12, this + 0x144, 4, &v15, 1);
  v11 = v2[0x88];
  v6 = *(void (__cdecl **)(int, char *, int, int *, int))(v11 + 8);
  v15 = 4;
  v6(v11, this + 0x148, 4, &v15, 1);
  v10 = v2[0x88];
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v10 + 8);
  v15 = 4;
  v7(v10, this + 0x14C, 4, &v15, 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0x4F));
  LOBYTE(a2) = *(this + 0x150);
  v14 = v2[0x88];
  v8 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v14 + 8);
  v15 = 1;
  v8(v14, &a2, 1, &v15, 1);
  return sub_716EE0(this + 0x154, (signed int)v2);
}
