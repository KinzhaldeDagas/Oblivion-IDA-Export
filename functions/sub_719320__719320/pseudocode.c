int __thiscall sub_719320(_BYTE *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int v5; // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // edx
  void (__cdecl *v7)(int, _BYTE *, int, int *, int); // eax
  void (__cdecl *v8)(int, _BYTE *, int, int *, int); // eax
  int v9; // eax
  void (__cdecl *v10)(int, int *, int, int *, int); // edx
  void (__cdecl *v11)(int, int *, int, int *, int); // eax
  int v12; // eax
  void (__cdecl *v13)(int, int *, int, int *, int); // edx
  int v14; // edi
  int (__cdecl *v15)(int, int *, int, int *, int); // eax
  void (__cdecl *v17)(int, _BYTE *, int, signed int *, int); // eax
  void (__cdecl *v18)(int, _BYTE *, int, signed int *, int); // eax
  int v19; // edi
  int (__cdecl *v20)(int, _BYTE *, int, signed int *, int); // edx
  int v21; // [esp-50h] [ebp-6Ch]
  int v22; // [esp-3Ch] [ebp-58h]
  int v23; // [esp-28h] [ebp-44h]
  int v24; // [esp-28h] [ebp-44h]
  int v25; // [esp-14h] [ebp-30h]
  int v26; // [esp-14h] [ebp-30h]
  int v27; // [esp+Ch] [ebp-10h] BYREF
  int v28; // [esp+10h] [ebp-Ch] BYREF
  int v29; // [esp+14h] [ebp-8h] BYREF
  int v30; // [esp+18h] [ebp-4h] BYREF

  v2 = a2; /*0x719326*/
  sub_700A80((int)this, a2, (_DWORD *)a2); /*0x71932d*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u ) /*0x71933e*/
  {
    v26 = *(_DWORD *)(v2 + 0x220); /*0x71949e*/
    v17 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v26 + 8); /*0x71949f*/
    a2 = 2; /*0x7194a2*/
    v17(v26, this + 0x18, 2, &a2, 1); /*0x7194aa*/
    v24 = *(_DWORD *)(v2 + 0x220); /*0x7194c3*/
    v18 = *(void (__cdecl **)(int, _BYTE *, int, signed int *, int))(v24 + 8); /*0x7194c4*/
    a2 = 4; /*0x7194c7*/
    v18(v24, this + 0x1C, 4, &a2, 1); /*0x7194cb*/
    v19 = *(_DWORD *)(v2 + 0x220); /*0x7194cd*/
    v20 = *(int (__cdecl **)(int, _BYTE *, int, signed int *, int))(v19 + 8); /*0x7194d3*/
    a2 = 4; /*0x7194e3*/
    return v20(v19, this + 0x20, 4, &a2, 1); /*0x7194e7*/
  }
  else
  {
    LOBYTE(a2) = *(this + 0x18) & 1; /*0x71934f*/
    v25 = *(_DWORD *)(v2 + 0x220); /*0x719360*/
    v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v25 + 8); /*0x719361*/
    v28 = 1; /*0x719364*/
    v4(v25, &a2, 1, &v28, 1); /*0x71936c*/
    v5 = *(_DWORD *)(v2 + 0x220); /*0x719372*/
    v29 = *((unsigned __int16 *)this + 0xC) >> 0xC; /*0x719382*/
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v5 + 8); /*0x719386*/
    v28 = 4; /*0x719395*/
    v6(v5, &v29, 4, &v28, 1); /*0x719399*/
    v22 = *(_DWORD *)(v2 + 0x220); /*0x7193ad*/
    v7 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v22 + 8); /*0x7193ae*/
    v28 = 4; /*0x7193b1*/
    v7(v22, this + 0x1C, 4, &v28, 1); /*0x7193b5*/
    v21 = *(_DWORD *)(v2 + 0x220); /*0x7193c9*/
    v8 = *(void (__cdecl **)(int, _BYTE *, int, int *, int))(v21 + 8); /*0x7193ca*/
    v28 = 4; /*0x7193cd*/
    v8(v21, this + 0x20, 4, &v28, 1); /*0x7193d1*/
    v9 = *(_DWORD *)(v2 + 0x220); /*0x7193d7*/
    v27 = ((unsigned __int8)*(this + 0x18) >> 1) & 7; /*0x7193ec*/
    v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v9 + 8); /*0x7193f0*/
    v28 = 4; /*0x7193fa*/
    v10(v9, &v27, 4, &v28, 1); /*0x7193fe*/
    v27 = ((unsigned __int8)*(this + 0x18) >> 4) & 7; /*0x719411*/
    v23 = *(_DWORD *)(v2 + 0x220); /*0x719421*/
    v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v23 + 8); /*0x719422*/
    v28 = 4; /*0x719425*/
    v11(v23, &v27, 4, &v28, 1); /*0x719429*/
    v12 = *(_DWORD *)(v2 + 0x220); /*0x71942f*/
    v27 = (*((unsigned __int16 *)this + 0xC) >> 7) & 7; /*0x719442*/
    v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v12 + 8); /*0x719446*/
    v28 = 4; /*0x719450*/
    v13(v12, &v27, 4, &v28, 1); /*0x719454*/
    v14 = *(_DWORD *)(v2 + 0x220); /*0x71945a*/
    v30 = (*((unsigned __int16 *)this + 0xC) >> 0xA) & 3; /*0x719473*/
    v15 = *(int (__cdecl **)(int, int *, int, int *, int))(v14 + 8); /*0x719477*/
    v28 = 4; /*0x71947b*/
    return v15(v14, &v30, 4, &v28, 1); /*0x71947f*/
  }
}
