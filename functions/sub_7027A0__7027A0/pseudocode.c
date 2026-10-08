int __thiscall sub_7027A0(char *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, _DWORD **, int, int *, int); // eax
  void (__cdecl *v5)(int, char *, int, int *, int); // eax
  void (__cdecl *v6)(int, char *, int, int *, int); // eax
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  int v8; // eax
  void (__cdecl *v9)(int, char *, int, int *, int); // edx
  int v10; // edi
  int (__cdecl *v11)(int, char *, int, int *, int); // eax
  int v13; // [esp-3Ch] [ebp-4Ch]
  int v14; // [esp-28h] [ebp-38h]
  int v15; // [esp-14h] [ebp-24h]
  int v16; // [esp-14h] [ebp-24h]
  char v17; // [esp+Ah] [ebp-6h] BYREF
  char v18; // [esp+Bh] [ebp-5h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x7027a5*/
  sub_700A80((int)this, (int)a2, a2); /*0x7027ac*/
  LOBYTE(a2) = *((_DWORD *)this + 0xF) == 0; /*0x7027bf*/
  v15 = v2[0x88]; /*0x7027d0*/
  v4 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v15 + 8); /*0x7027d1*/
  v19 = 1; /*0x7027d4*/
  v4(v15, &a2, 1, &v19, 1); /*0x7027dc*/
  sub_713720(v2, *((const char **)this + 0xD)); /*0x7027e7*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 0xF)); /*0x7027f7*/
  v16 = v2[0x88]; /*0x70280c*/
  v5 = *(void (__cdecl **)(int, char *, int, int *, int))(v16 + 8); /*0x70280d*/
  v19 = 4; /*0x702810*/
  v5(v16, this + 0x18, 4, &v19, 1); /*0x702818*/
  v14 = v2[0x88]; /*0x70282d*/
  v6 = *(void (__cdecl **)(int, char *, int, int *, int))(v14 + 8); /*0x70282e*/
  v19 = 4; /*0x702831*/
  v6(v14, this + 0x20, 4, &v19, 1); /*0x702839*/
  v13 = v2[0x88]; /*0x70284e*/
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v13 + 8); /*0x70284f*/
  v19 = 4; /*0x702852*/
  v7(v13, this + 0x1C, 4, &v19, 1); /*0x70285a*/
  v8 = v2[0x88]; /*0x70285f*/
  v17 = *(this + 0x40); /*0x70286c*/
  v9 = *(void (__cdecl **)(int, char *, int, int *, int))(v8 + 8); /*0x702870*/
  v19 = 1; /*0x70287b*/
  v9(v8, &v17, 1, &v19, 1); /*0x702883*/
  v10 = v2[0x88]; /*0x702888*/
  v18 = *(this + 0x41); /*0x702891*/
  v11 = *(int (__cdecl **)(int, char *, int, int *, int))(v10 + 8); /*0x702895*/
  v19 = 1; /*0x7028a7*/
  return v11(v10, &v18, 1, &v19, 1); /*0x7028b4*/
}
