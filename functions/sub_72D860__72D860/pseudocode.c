int __thiscall sub_72D860(unsigned __int16 *this, int a2)
{
  int v2; // esi
  void (__cdecl *v3)(int, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 *v5; // ebx
  void (__cdecl *v6)(int, unsigned __int16 *, int, int *, int); // eax
  int v7; // eax
  void (__cdecl *v8)(int, unsigned __int16 *, int, int *, int); // edx
  void (__cdecl *v9)(int, unsigned __int16 *, int, int *, int); // eax
  void (__cdecl *v10)(int, unsigned __int16 *, int, int *, int); // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  void (__cdecl *v14)(int, int *, int, int *, int); // eax
  int v15; // eax
  void (__cdecl *v16)(int, int, int, int *, int); // eax
  int v17; // ebp
  bool v18; // cf
  void (__cdecl *v19)(int, char *, int, int *, int); // edx
  int v20; // eax
  void (__cdecl *v21)(int, int, int, int *, int); // eax
  unsigned __int16 v22; // ax
  int v23; // ebp
  int v24; // eax
  void (__cdecl *v25)(int, int, int, int *, int); // eax
  int v26; // ecx
  unsigned __int16 *v27; // eax
  int v28; // edx
  void (__cdecl *v29)(int, char *, int, int *, int); // eax
  int v30; // eax
  void (__cdecl *v31)(int, int, int, int *, int); // eax
  int (__cdecl *v32)(int, char *, int, int *, int); // eax
  int result; // eax
  int v34; // ebp
  int v35; // eax
  int v36; // esi
  int (__cdecl *v37)(int, int, int, int *, int); // edx
  int v38; // [esp-50h] [ebp-6Ch]
  int v39; // [esp-28h] [ebp-44h]
  int v40; // [esp-18h] [ebp-34h]
  int v41; // [esp-18h] [ebp-34h]
  int v42; // [esp-18h] [ebp-34h]
  int v43; // [esp-18h] [ebp-34h]
  int v44; // [esp-14h] [ebp-30h]
  int v45; // [esp-14h] [ebp-30h]
  int v46; // [esp-14h] [ebp-30h]
  int v47; // [esp-14h] [ebp-30h]
  int v48; // [esp-14h] [ebp-30h]
  int v49; // [esp-14h] [ebp-30h]
  int v50; // [esp-14h] [ebp-30h]
  int v51; // [esp-14h] [ebp-30h]
  int v52; // [esp-14h] [ebp-30h]
  int v53; // [esp-14h] [ebp-30h]
  int v54; // [esp-10h] [ebp-2Ch]
  int v55; // [esp-10h] [ebp-2Ch]
  char v56; // [esp+11h] [ebp-Bh] BYREF
  char v57; // [esp+12h] [ebp-Ah] BYREF
  char v58; // [esp+13h] [ebp-9h] BYREF
  int v59; // [esp+14h] [ebp-8h] BYREF
  int Size; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  v3 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4);
  v5 = this + 0xE;
  v44 = *(_DWORD *)(a2 + 0x21C);
  v59 = 2;
  v3(v44, this + 0xE, 2, &v59, 1);
  v39 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v39 + 4);
  v59 = 2;
  v6(v39, this + 0xF, 2, &v59, 1);
  v7 = *(_DWORD *)(v2 + 0x21C);
  v8 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v7 + 4);
  v59 = 2;
  v8(v7, this + 0x10, 2, &v59, 1);
  v38 = *(_DWORD *)(v2 + 0x21C);
  v9 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v38 + 4);
  v59 = 2;
  v9(v38, this + 0x11, 2, &v59, 1);
  v45 = *(_DWORD *)(v2 + 0x21C);
  v10 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v45 + 4);
  v59 = 2;
  v10(v45, this + 0x12, 2, &v59, 1);
  v11 = FormHeapAlloc((unsigned __int64)*(this + 0x10) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * *(this + 0x10));
  v12 = 2 * *(this + 0x10);
  *((_DWORD *)this + 1) = v11;
  v13 = *(_DWORD *)(v2 + 0x21C);
  v59 = 2;
  (*(void (__cdecl **)(int, int, int, int *, int))(v13 + 4))(v13, v11, v12, &v59, 1);
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000112u )
  {
    LOBYTE(a2) = 1;
  }
  else
  {
    v46 = *(_DWORD *)(v2 + 0x21C);
    v14 = *(void (__cdecl **)(int, int *, int, int *, int))(v46 + 4);
    v59 = 1;
    v14(v46, &a2, 1, &v59, 1);
    if ( !(_BYTE)a2 )
      goto LABEL_4;
  }
  v15 = FormHeapAlloc((unsigned __int64)*v5 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * *v5);
  v54 = 2 * *v5;
  *((_DWORD *)this + 3) = v15;
  v47 = v15;
  v16 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v40 = *(_DWORD *)(v2 + 0x21C);
  v59 = 2;
  v16(v40, v47, v54, &v59, 1);
LABEL_4:
  v17 = *v5 * *(this + 0x12);
  v18 = *(_DWORD *)(v2 + 0xD8) < 0xA000112u;
  Size = v17;
  if ( v18 )
  {
    v56 = 1;
  }
  else
  {
    v19 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v48 = *(_DWORD *)(v2 + 0x21C);
    v59 = 1;
    v19(v48, &v56, 1, &v59, 1);
    if ( !v56 )
      goto LABEL_7;
  }
  v20 = FormHeapAlloc((unsigned __int64)(unsigned int)v17 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v17);
  *((_DWORD *)this + 2) = v20;
  v49 = v20;
  v21 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v41 = *(_DWORD *)(v2 + 0x21C);
  v59 = 4;
  v21(v41, v49, 4 * v17, &v59, 1);
LABEL_7:
  v22 = *(this + 0x11);
  if ( v22 )
  {
    v24 = FormHeapAlloc((unsigned __int64)v22 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v22);
    v55 = 2 * *(this + 0x11);
    *((_DWORD *)this + 6) = v24;
    v50 = v24;
    v25 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v42 = *(_DWORD *)(v2 + 0x21C);
    v59 = 2;
    v25(v42, v50, v55, &v59, 1);
    v26 = 0;
    if ( *(this + 0x11) )
    {
      v27 = *((unsigned __int16 **)this + 6);
      v28 = *(this + 0x11);
      do
      {
        v26 += *v27++;
        --v28;
      }
      while ( v28 );
    }
    v23 = v26;
  }
  else
  {
    v23 = 3 * *(this + 0xF);
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000112u )
  {
    v57 = 1;
  }
  else
  {
    v51 = *(_DWORD *)(v2 + 0x21C);
    v29 = *(void (__cdecl **)(int, char *, int, int *, int))(v51 + 4);
    v59 = 1;
    v29(v51, &v57, 1, &v59, 1);
    if ( !v57 )
      goto LABEL_18;
  }
  v30 = FormHeapAlloc((unsigned __int64)(unsigned int)v23 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v23);
  *((_DWORD *)this + 5) = v30;
  v52 = v30;
  v31 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v43 = *(_DWORD *)(v2 + 0x21C);
  v59 = 2;
  v31(v43, v52, 2 * v23, &v59, 1);
LABEL_18:
  v53 = *(_DWORD *)(v2 + 0x21C);
  v32 = *(int (__cdecl **)(int, char *, int, int *, int))(v53 + 4);
  v59 = 1;
  result = v32(v53, &v58, 1, &v59, 1);
  if ( v58 )
  {
    v34 = Size;
    v35 = FormHeapAlloc(Size);
    *((_DWORD *)this + 4) = v35;
    v36 = *(_DWORD *)(v2 + 0x21C);
    v37 = *(int (__cdecl **)(int, int, int, int *, int))(v36 + 4);
    Size = 1;
    return v37(v36, v35, v34, &Size, 1);
  }
  return result;
}
