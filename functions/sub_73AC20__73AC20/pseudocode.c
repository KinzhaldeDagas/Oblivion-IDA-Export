void __thiscall sub_73AC20(int *this, unsigned int *a2)
{
  unsigned int *v3; // edi
  void (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, unsigned int *, int, int *, int); // edx
  void (__cdecl *v6)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v7)(unsigned int, unsigned int *, int, int *, int); // eax
  unsigned int v8; // eax
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // eax
  void (__cdecl *v12)(unsigned int, unsigned int *, int, int *, int); // eax
  unsigned int v13; // eax
  void (__cdecl *v14)(unsigned int, int *, int, int *, int); // eax
  unsigned int v15; // eax
  void (__cdecl *v16)(unsigned int, char *, int, int *, int); // eax
  int v17; // ebx
  void (__cdecl *v18)(unsigned int, int, int, int *, int); // eax
  void (__cdecl *v19)(unsigned int, char *, int, int *, int); // eax
  int v20; // ebp
  void *v21; // eax
  void *v22; // esi
  void *v23; // ecx
  void (__cdecl *v24)(unsigned int, void *, int, int *, int); // eax
  void (__cdecl *v25)(unsigned int, int *, int, int *, int); // eax
  int v26; // esi
  void (__cdecl *v27)(unsigned int, int, int, int *, int); // eax
  unsigned int *v28; // ecx
  _DWORD *v29; // ebp
  int **v30; // esi
  int *v31; // eax
  int v32; // esi
  NiTArray_NiTexturingPropertyMap *v33; // ecx
  unsigned int v34; // [esp-28h] [ebp-70h]
  unsigned int v35; // [esp-18h] [ebp-60h]
  unsigned int v36; // [esp-18h] [ebp-60h]
  unsigned int v37; // [esp-14h] [ebp-5Ch]
  unsigned int v38; // [esp-14h] [ebp-5Ch]
  unsigned int v39; // [esp-14h] [ebp-5Ch]
  unsigned int v40; // [esp-14h] [ebp-5Ch]
  unsigned int v41; // [esp-14h] [ebp-5Ch]
  unsigned int v42; // [esp-14h] [ebp-5Ch]
  unsigned int v43; // [esp-14h] [ebp-5Ch]
  unsigned int v44; // [esp-14h] [ebp-5Ch]
  unsigned int v45; // [esp-14h] [ebp-5Ch]
  int v46; // [esp-14h] [ebp-5Ch]
  int v47; // [esp-10h] [ebp-58h]
  unsigned int v48; // [esp-8h] [ebp-50h]
  unsigned int v49; // [esp-4h] [ebp-4Ch]
  unsigned int v50; // [esp-4h] [ebp-4Ch]
  char v51; // [esp+16h] [ebp-32h] BYREF
  char v52; // [esp+17h] [ebp-31h] BYREF
  unsigned int i; // [esp+18h] [ebp-30h] BYREF
  int v54; // [esp+1Ch] [ebp-2Ch] BYREF
  unsigned int v55; // [esp+20h] [ebp-28h] BYREF
  int v56; // [esp+24h] [ebp-24h] BYREF
  void *v57; // [esp+28h] [ebp-20h]
  int v58; // [esp+2Ch] [ebp-1Ch] BYREF
  int v59; // [esp+30h] [ebp-18h] BYREF
  int v60; // [esp+34h] [ebp-14h] BYREF
  int *v61; // [esp+38h] [ebp-10h]
  unsigned int v62; // [esp+44h] [ebp-4h]

  v3 = a2;
  if ( a2[0x36] >= 0xA00010F )
    sub_71FEC0((NiTriBasedGeomData *)this, (signed int)a2);
  else
    sub_729450((NiTriBasedGeomData *)this, a2);
  v37 = v3[0x87];
  v4 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v37 + 4);
  v58 = 1;
  v4(v37, &a2, 1, &v58, 1);
  *((_BYTE *)this + 0x58) = (_BYTE)a2 != 0;
  if ( v3[0x36] < 0xA00010F )
  {
    v5 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v3[0x87] + 4);
    v38 = v3[0x87];
    v58 = 2;
    v5(v38, &i, 2, &v58, 1);
    *((_WORD *)this + 4) = i;
    v34 = v3[0x87];
    v6 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v34 + 4);
    v58 = 2;
    v6(v34, this + 0x10, 2, &v58, 1);
  }
  if ( v3[0x36] < 0xA00010F )
  {
    v39 = v3[0x87];
    v7 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v39 + 4);
    v58 = 2;
    v7(v39, &i, 2, &v58, 1);
    v8 = (unsigned __int16)i;
    v9 = (_WORD)i == 0;
    *(this + 0x11) = (unsigned __int16)i;
    if ( !v9 )
    {
      v10 = FormHeapAlloc((unsigned __int64)v8 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v8);
      v58 = 2;
      v47 = 2 * (unsigned __int16)i;
      *(this + 0x12) = v10;
      (*(void (__cdecl **)(unsigned int, int, int, int *, int))(v3[0x87] + 4))(v3[0x87], v10, v47, &v58, 1);
    }
  }
  v11 = v3[0x87];
  v55 = 0;
  v40 = v11;
  v12 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v11 + 4);
  v58 = 4;
  v12(v40, &v55, 4, &v58, 1);
  if ( v55 )
  {
    v61 = this + 0x18;
    NiTArray_SetSize((unsigned __int16 *)this + 0x30, v55);
    for ( i = 0; i < v55; ++i )
    {
      v13 = v3[0x87];
      v54 = 0;
      v41 = v13;
      v14 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v13 + 4);
      v58 = 2;
      v14(v41, &v54, 2, &v58, 1);
      if ( (_WORD)v54 )
      {
        v15 = v3[0x87];
        v56 = 0;
        v42 = v15;
        v16 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v15 + 4);
        v17 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 1;
        v16(v42, &v51, 1, &v59, 1);
        if ( v51 )
        {
          v17 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v54 >> 0x1D != 0 ? 0xFFFFFFFF : 8
                                                                                                * (unsigned __int16)v54);
          v35 = v3[0x87];
          v18 = *(void (__cdecl **)(unsigned int, int, int, int *, int))(v35 + 4);
          v59 = 8;
          v18(v35, v17, 8 * (unsigned __int16)v54, &v59, 1);
        }
        v43 = v3[0x87];
        v19 = *(void (__cdecl **)(unsigned int, char *, int, int *, int))(v43 + 4);
        v59 = 1;
        v19(v43, &v52, 1, &v59, 1);
        if ( v52 )
        {
          v20 = (unsigned __int16)v54;
          v21 = (void *)FormHeapAlloc(
                          (unsigned __int64)(unsigned __int16)v54 >> 0x1C != 0
                        ? 0xFFFFFFFF
                        : 0x10 * (unsigned __int16)v54);
          v22 = v21;
          v59 = (int)v21;
          v23 = 0;
          v62 = 0;
          if ( v21 )
          {
            sub_401080(v21, 0x10, v20, (void *(__thiscall *)(void *))sub_47EA50);
            v23 = v22;
          }
          v44 = v3[0x87];
          v24 = *(void (__cdecl **)(unsigned int, void *, int, int *, int))(v44 + 4);
          v62 = 0xFFFFFFFF;
          v57 = v23;
          v59 = 0x10;
          v24(v44, v23, 0x10 * (unsigned __int16)v54, &v59, 1);
        }
        v45 = v3[0x87];
        v25 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v45 + 4);
        v59 = 2;
        v25(v45, &v56, 2, &v59, 1);
        if ( (_WORD)v56 )
        {
          v26 = (unsigned __int16)v54 * (unsigned __int16)v56;
          v46 = FormHeapAlloc((unsigned __int64)(unsigned int)v26 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v26);
          v36 = v3[0x87];
          v27 = *(void (__cdecl **)(unsigned int, int, int, int *, int))(v36 + 4);
          v58 = v46;
          v60 = 8;
          v27(v36, v46, 8 * v26, &v60, 1);
        }
        v28 = (unsigned int *)dword_B40134;
        v29 = (_DWORD *)(dword_B40134 + 8);
        v30 = (int **)dword_B40134;
        if ( !*v29 )
        {
          v49 = v28[3];
          v59 = (int)(v28 + 3);
          sub_73A510(v28, v49);
          *(_DWORD *)v59 *= 2;
        }
        v31 = *v30;
        v32 = **v30;
        *v31 = v31[--*v29];
        v50 = *(_DWORD *)(v32 + 8);
        v59 = v32;
        FormHeapFree(v50);
        *(_WORD *)(v32 + 4) = v54;
        *(_DWORD *)(v32 + 8) = v17;
        FormHeapFree(*(_DWORD *)(v32 + 0xC));
        *(_DWORD *)(v32 + 0xC) = v57;
        FormHeapFree(*(_DWORD *)(v32 + 0x10));
        *(_DWORD *)(v32 + 0x10) = v58;
        v33 = (NiTArray_NiTexturingPropertyMap *)v61;
        v48 = i;
        *(_WORD *)(v32 + 6) = v56;
        NiTArray_SetAt(v33, v48, &v59);
      }
    }
  }
}
