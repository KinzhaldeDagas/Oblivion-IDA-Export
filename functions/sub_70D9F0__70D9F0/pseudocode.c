int __thiscall sub_70D9F0(char *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, char *, int, int *, int); // eax
  void (__cdecl *v7)(int, char *, int, int *, int); // eax
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  void (__cdecl *v9)(int, char *, int, int *, int); // eax
  void (__cdecl *v10)(int, char *, int, int *, int); // eax
  int v11; // eax
  int v12; // eax
  void (__cdecl *v13)(int, _DWORD **, int, int *, int); // edx
  void (__cdecl *v14)(int, char *, int, int *, int); // eax
  void (__cdecl *v15)(int, char *, int, int *, int); // eax
  void (__cdecl *v16)(int, char *, int, int *, int); // eax
  void (__cdecl *v17)(int, char *, int, int *, int); // eax
  void (__cdecl *v18)(int, char *, int, int *, int); // edx
  int v19; // eax
  void (__cdecl *v20)(int, int *, int, int *, int); // eax
  int v21; // esi
  int (__cdecl *v22)(int, int *, int, int *, int); // eax
  int v24; // [esp-50h] [ebp-68h]
  int v25; // [esp-50h] [ebp-68h]
  int v26; // [esp-3Ch] [ebp-54h]
  int v27; // [esp-3Ch] [ebp-54h]
  int v28; // [esp-28h] [ebp-40h]
  int v29; // [esp-28h] [ebp-40h]
  int v30; // [esp-28h] [ebp-40h]
  int v31; // [esp-14h] [ebp-2Ch]
  int v32; // [esp-14h] [ebp-2Ch]
  int v33; // [esp-14h] [ebp-2Ch]
  int v34; // [esp-14h] [ebp-2Ch]
  int v35; // [esp-14h] [ebp-2Ch]
  int v36; // [esp+Ch] [ebp-Ch] BYREF
  int v37; // [esp+10h] [ebp-8h] BYREF
  int v38; // [esp+14h] [ebp-4h] BYREF

  v2 = a2; /*0x70d9f5*/
  sub_708330(this, (signed int)a2); /*0x70d9fd*/
  v4 = v2[0x88]; /*0x70da02*/
  v38 = 0; /*0x70da16*/
  v31 = v4; /*0x70da1e*/
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 8); /*0x70da1f*/
  v37 = 2; /*0x70da22*/
  v5(v31, &v38, 2, &v37, 1); /*0x70da2a*/
  v28 = v2[0x88]; /*0x70da46*/
  v6 = *(void (__cdecl **)(int, char *, int, int *, int))(v28 + 8); /*0x70da47*/
  v37 = 4; /*0x70da4a*/
  v6(v28, this + 0xEC, 4, &v37, 1); /*0x70da4e*/
  v26 = v2[0x88]; /*0x70da65*/
  v7 = *(void (__cdecl **)(int, char *, int, int *, int))(v26 + 8); /*0x70da66*/
  v37 = 4; /*0x70da69*/
  v7(v26, this + 0xF0, 4, &v37, 1); /*0x70da6d*/
  v24 = v2[0x88]; /*0x70da84*/
  v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v24 + 8); /*0x70da85*/
  v37 = 4; /*0x70da88*/
  v8(v24, this + 0xF4, 4, &v37, 1); /*0x70da8c*/
  v32 = v2[0x88]; /*0x70daa6*/
  v9 = *(void (__cdecl **)(int, char *, int, int *, int))(v32 + 8); /*0x70daa7*/
  v37 = 4; /*0x70daaa*/
  v9(v32, this + 0xF8, 4, &v37, 1); /*0x70daae*/
  v29 = v2[0x88]; /*0x70dac5*/
  v10 = *(void (__cdecl **)(int, char *, int, int *, int))(v29 + 8); /*0x70dac6*/
  v37 = 4; /*0x70dac9*/
  v10(v29, this + 0xFC, 4, &v37, 1); /*0x70dacd*/
  v11 = v2[0x88]; /*0x70dacf*/
  v37 = 4; /*0x70dadb*/
  (*(void (__cdecl **)(int, char *, int, int *, int))(v11 + 8))(v11, this + 0x100, 4, &v37, 1); /*0x70daec*/
  v12 = v2[0x88]; /*0x70daf4*/
  LOBYTE(a2) = *(this + 0x104); /*0x70db01*/
  v13 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v12 + 8); /*0x70db05*/
  v37 = 1; /*0x70db10*/
  v13(v12, &a2, 1, &v37, 1); /*0x70db18*/
  v33 = v2[0x88]; /*0x70db32*/
  v14 = *(void (__cdecl **)(int, char *, int, int *, int))(v33 + 8); /*0x70db33*/
  v37 = 4; /*0x70db36*/
  v14(v33, this + 0x110, 4, &v37, 1); /*0x70db3a*/
  v30 = v2[0x88]; /*0x70db51*/
  v15 = *(void (__cdecl **)(int, char *, int, int *, int))(v30 + 8); /*0x70db52*/
  v37 = 4; /*0x70db55*/
  v15(v30, this + 0x114, 4, &v37, 1); /*0x70db59*/
  v27 = v2[0x88]; /*0x70db70*/
  v16 = *(void (__cdecl **)(int, char *, int, int *, int))(v27 + 8); /*0x70db71*/
  v37 = 4; /*0x70db74*/
  v16(v27, this + 0x118, 4, &v37, 1); /*0x70db78*/
  v25 = v2[0x88]; /*0x70db8f*/
  v17 = *(void (__cdecl **)(int, char *, int, int *, int))(v25 + 8); /*0x70db90*/
  v37 = 4; /*0x70db93*/
  v17(v25, this + 0x11C, 4, &v37, 1); /*0x70db97*/
  v18 = *(void (__cdecl **)(int, char *, int, int *, int))(v2[0x88] + 8); /*0x70db9f*/
  v34 = v2[0x88]; /*0x70dbb4*/
  v37 = 4; /*0x70dbb5*/
  v18(v34, this + 0x120, 4, &v37, 1); /*0x70dbb9*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, 0); /*0x70dbc7*/
  v19 = v2[0x88]; /*0x70dbc9*/
  v36 = 0; /*0x70dbdc*/
  v35 = v19; /*0x70dbe4*/
  v20 = *(void (__cdecl **)(int, int *, int, int *, int))(v19 + 8); /*0x70dbe5*/
  v37 = 4; /*0x70dbe8*/
  v20(v35, &v36, 4, &v37, 1); /*0x70dbec*/
  v21 = v2[0x88]; /*0x70dbee*/
  v22 = *(int (__cdecl **)(int, int *, int, int *, int))(v21 + 8); /*0x70dbf4*/
  v37 = 4; /*0x70dc05*/
  return v22(v21, &v36, 4, &v37, 1); /*0x70dc0e*/
}
