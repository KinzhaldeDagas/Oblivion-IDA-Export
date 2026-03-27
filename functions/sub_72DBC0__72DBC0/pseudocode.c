int __thiscall sub_72DBC0(unsigned __int16 *this, int a2)
{
  int v2; // edi
  void (__cdecl *v3)(int, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 *v5; // ebp
  void (__cdecl *v6)(int, unsigned __int16 *, int, int *, int); // eax
  int v7; // eax
  void (__cdecl *v8)(int, unsigned __int16 *, int, int *, int); // edx
  void (__cdecl *v9)(int, unsigned __int16 *, int, int *, int); // eax
  void (__cdecl *v10)(int, unsigned __int16 *, int, int *, int); // eax
  void (__cdecl *v11)(int, int, int, int *, int); // edx
  void (__cdecl *v12)(int, int *, int, int *, int); // eax
  void (__cdecl *v13)(int, int, int, int *, int); // edx
  int v14; // eax
  void (__cdecl *v15)(int, bool *, int, int *, int); // eax
  void (__cdecl *v16)(int, int, int, int *, int); // eax
  unsigned __int16 v17; // cx
  int v18; // ebp
  void (__cdecl *v19)(int, int, int, int *, int); // eax
  int v20; // ecx
  int v21; // edx
  unsigned __int16 *v22; // eax
  int v23; // eax
  void (__cdecl *v24)(int, bool *, int, int *, int); // edx
  void (__cdecl *v25)(int, int, int, int *, int); // edx
  int (__cdecl *v26)(int, bool *, int, int *, int); // eax
  int result; // eax
  int v28; // edi
  int (__cdecl *v29)(int, int, int, int *, int); // ecx
  int v30; // [esp-50h] [ebp-6Ch]
  int v31; // [esp-3Ch] [ebp-58h]
  int v32; // [esp-28h] [ebp-44h]
  int v33; // [esp-28h] [ebp-44h]
  int v34; // [esp-24h] [ebp-40h]
  int v35; // [esp-20h] [ebp-3Ch]
  int v36; // [esp-14h] [ebp-30h]
  int v37; // [esp-14h] [ebp-30h]
  int v38; // [esp-14h] [ebp-30h]
  int v39; // [esp-14h] [ebp-30h]
  int v40; // [esp-14h] [ebp-30h]
  int v41; // [esp-14h] [ebp-30h]
  int v42; // [esp-14h] [ebp-30h]
  int v43; // [esp-14h] [ebp-30h]
  int v44; // [esp-10h] [ebp-2Ch]
  int v45; // [esp-10h] [ebp-2Ch]
  int v46; // [esp-10h] [ebp-2Ch]
  int v47; // [esp-10h] [ebp-2Ch]
  int v48; // [esp-10h] [ebp-2Ch]
  int v49; // [esp-Ch] [ebp-28h]
  bool v50; // [esp+11h] [ebp-Bh] BYREF
  bool v51; // [esp+12h] [ebp-Ah] BYREF
  bool v52; // [esp+13h] [ebp-9h] BYREF
  int v53; // [esp+14h] [ebp-8h] BYREF
  int v54; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  v3 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(*(_DWORD *)(a2 + 0x220) + 8);
  v5 = this + 0xE;
  v36 = *(_DWORD *)(a2 + 0x220);
  v53 = 2;
  v3(v36, this + 0xE, 2, &v53, 1);
  v32 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v32 + 8);
  v53 = 2;
  v6(v32, this + 0xF, 2, &v53, 1);
  v7 = *(_DWORD *)(v2 + 0x220);
  v8 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v7 + 8);
  v53 = 2;
  v8(v7, this + 0x10, 2, &v53, 1);
  v30 = *(_DWORD *)(v2 + 0x220);
  v9 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v30 + 8);
  v53 = 2;
  v9(v30, this + 0x11, 2, &v53, 1);
  v37 = *(_DWORD *)(v2 + 0x220);
  v10 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v37 + 8);
  v53 = 2;
  v10(v37, this + 0x12, 2, &v53, 1);
  v35 = 2 * *(this + 0x10);
  v11 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v34 = *((_DWORD *)this + 1);
  v33 = *(_DWORD *)(v2 + 0x220);
  v53 = 2;
  v11(v33, v34, v35, &v53, 1);
  LOBYTE(a2) = *((_DWORD *)this + 3) != 0;
  v31 = *(_DWORD *)(v2 + 0x220);
  v12 = *(void (__cdecl **)(int, int *, int, int *, int))(v31 + 8);
  v53 = 1;
  v12(v31, &a2, 1, &v53, 1);
  if ( (_BYTE)a2 )
  {
    v49 = 2 * *v5;
    v13 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v44 = *((_DWORD *)this + 3);
    v38 = *(_DWORD *)(v2 + 0x220);
    v53 = 2;
    v13(v38, v44, v49, &v53, 1);
  }
  v14 = *v5 * *(this + 0x12);
  v50 = *((_DWORD *)this + 2) != 0;
  v53 = v14;
  v39 = *(_DWORD *)(v2 + 0x220);
  v15 = *(void (__cdecl **)(int, bool *, int, int *, int))(v39 + 8);
  v54 = 1;
  v15(v39, &v50, 1, &v54, 1);
  if ( v50 )
  {
    v45 = *((_DWORD *)this + 2);
    v40 = *(_DWORD *)(v2 + 0x220);
    v16 = *(void (__cdecl **)(int, int, int, int *, int))(v40 + 8);
    v54 = 4;
    v16(v40, v45, 4 * v53, &v54, 1);
  }
  v17 = *(this + 0x11);
  if ( v17 )
  {
    v46 = *((_DWORD *)this + 6);
    v41 = *(_DWORD *)(v2 + 0x220);
    v19 = *(void (__cdecl **)(int, int, int, int *, int))(v41 + 8);
    v54 = 2;
    v19(v41, v46, 2 * v17, &v54, 1);
    v20 = *(this + 0x11);
    v21 = 0;
    if ( *(this + 0x11) )
    {
      v22 = *((unsigned __int16 **)this + 6);
      do
      {
        v21 += *v22++;
        --v20;
      }
      while ( v20 );
    }
    v18 = v21;
  }
  else
  {
    v18 = 3 * *(this + 0xF);
  }
  v23 = *(_DWORD *)(v2 + 0x220);
  v51 = *((_DWORD *)this + 5) != 0;
  v24 = *(void (__cdecl **)(int, bool *, int, int *, int))(v23 + 8);
  v54 = 1;
  v24(v23, &v51, 1, &v54, 1);
  if ( v51 )
  {
    v25 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v47 = *((_DWORD *)this + 5);
    v42 = *(_DWORD *)(v2 + 0x220);
    v54 = 2;
    v25(v42, v47, 2 * v18, &v54, 1);
  }
  v52 = *((_DWORD *)this + 4) != 0;
  v43 = *(_DWORD *)(v2 + 0x220);
  v26 = *(int (__cdecl **)(int, bool *, int, int *, int))(v43 + 8);
  v54 = 1;
  result = v26(v43, &v52, 1, &v54, 1);
  if ( v52 )
  {
    v28 = *(_DWORD *)(v2 + 0x220);
    v29 = *(int (__cdecl **)(int, int, int, int *, int))(v28 + 8);
    v48 = *((_DWORD *)this + 4);
    v54 = 1;
    return v29(v28, v48, v53, &v54, 1);
  }
  return result;
}
