char __thiscall sub_70F520(char *this, signed int a2)
{
  signed int v2; // esi
  bool v3; // cf
  int v4; // eax
  int *v6; // ebp
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  void (__cdecl *v8)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, int *, int, signed int *, int); // edx
  void (__cdecl *v10)(int, int *, int, signed int *, int); // eax
  int v11; // esi
  void (__cdecl *v12)(int, int *, int, signed int *, int); // eax
  char result; // al
  void (__cdecl *v14)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v15)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v16)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v17)(int, char *, int, signed int *, int); // edx
  void (__cdecl *v18)(int, int *, int, signed int *, int); // eax
  char *v19; // edi
  int v20; // ebp
  void (__cdecl *v21)(int, int *, int, int *, int); // edx
  void (__cdecl *v22)(int, int *, int, int *, int); // eax
  void (__cdecl *v23)(int, char *, int, int *, int); // edx
  int (__cdecl *v24)(int, signed int *, int, int *, int); // eax
  int v25; // [esp-50h] [ebp-7Ch]
  int v26; // [esp-50h] [ebp-7Ch]
  int v27; // [esp-3Ch] [ebp-68h]
  int v28; // [esp-3Ch] [ebp-68h]
  int v29; // [esp-3Ch] [ebp-68h]
  int v30; // [esp-28h] [ebp-54h]
  int v31; // [esp-28h] [ebp-54h]
  int v32; // [esp-28h] [ebp-54h]
  int v33; // [esp-28h] [ebp-54h]
  int v34; // [esp-14h] [ebp-40h]
  int v35; // [esp-14h] [ebp-40h]
  int v36; // [esp-14h] [ebp-40h]
  int v37; // [esp-14h] [ebp-40h]
  int v38; // [esp+10h] [ebp-1Ch] BYREF
  int v39; // [esp+14h] [ebp-18h] BYREF
  int v40; // [esp+18h] [ebp-14h] BYREF
  int v41[4]; // [esp+1Ch] [ebp-10h] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 0xD8) < 0xA030003u;
  v4 = *(_DWORD *)(a2 + 0x21C);
  a2 = 4;
  if ( v3 )
  {
    (*(void (__cdecl **)(int, int *, int, signed int *, int))(v4 + 4))(v4, &v38, 4, &a2, 1);
    *((_DWORD *)this + 1) = v38;
    v6 = v41;
    a2 = 4;
    do
    {
      v34 = *(_DWORD *)(v2 + 0x21C);
      v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v34 + 4);
      v38 = 4;
      v7(v34, v6++, 4, &v38, 1);
      --a2;
    }
    while ( a2 );
    v35 = *(_DWORD *)(v2 + 0x21C);
    v8 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v35 + 4);
    a2 = 4;
    v8(v35, &v39, 4, &a2, 1);
    *(this + 1) = v39;
    v9 = *(void (__cdecl **)(int, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v30 = *(_DWORD *)(v2 + 0x21C);
    a2 = 4;
    v9(v30, &v40, 4, &a2, 1);
    v27 = *(_DWORD *)(v2 + 0x21C);
    v10 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v27 + 4);
    a2 = 4;
    v10(v27, &v40, 4, &a2, 1);
    if ( *(_DWORD *)(v2 + 0xD8) >= 0xA00010Bu )
    {
      v11 = *(_DWORD *)(v2 + 0x21C);
      v12 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v11 + 4);
      a2 = 4;
      v12(v11, &v38, 4, &a2, 1);
    }
    return sub_70F030(this, *((_DWORD *)this + 1), *(this + 1), v41);
  }
  else
  {
    (*(void (__cdecl **)(int, int *, int, signed int *, int))(v4 + 4))(v4, &v40, 4, &a2, 1);
    *((_DWORD *)this + 1) = v40;
    v14 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v31 = *(_DWORD *)(v2 + 0x21C);
    a2 = 1;
    v14(v31, this + 1, 1, &a2, 1);
    v28 = *(_DWORD *)(v2 + 0x21C);
    v15 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v28 + 4);
    a2 = 4;
    v15(v28, this + 0xC, 4, &a2, 1);
    v25 = *(_DWORD *)(v2 + 0x21C);
    v16 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v25 + 4);
    a2 = 4;
    v16(v25, this + 0x10, 4, &a2, 1);
    v17 = *(void (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v36 = *(_DWORD *)(v2 + 0x21C);
    a2 = 1;
    v17(v36, this, 1, &a2, 1);
    v32 = *(_DWORD *)(v2 + 0x21C);
    v18 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v32 + 4);
    a2 = 4;
    v18(v32, &v40, 4, &a2, 1);
    *((_DWORD *)this + 2) = v40;
    v19 = this + 0x18;
    v20 = 4;
    do
    {
      v21 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
      v37 = *(_DWORD *)(v2 + 0x21C);
      v40 = 4;
      v21(v37, &v39, 4, &v40, 1);
      *((_DWORD *)v19 + 0xFFFFFFFF) = v39;
      v33 = *(_DWORD *)(v2 + 0x21C);
      v22 = *(void (__cdecl **)(int, int *, int, int *, int))(v33 + 4);
      v40 = 4;
      v22(v33, &v38, 4, &v40, 1);
      *(_DWORD *)v19 = v38;
      v23 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
      v29 = *(_DWORD *)(v2 + 0x21C);
      v40 = 1;
      v23(v29, v19 + 4, 1, &v40, 1);
      v26 = *(_DWORD *)(v2 + 0x21C);
      v24 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v26 + 4);
      v40 = 1;
      result = v24(v26, &a2, 1, &v40, 1);
      v19[5] = (_BYTE)a2 != 0;
      v19 += 0xC;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
