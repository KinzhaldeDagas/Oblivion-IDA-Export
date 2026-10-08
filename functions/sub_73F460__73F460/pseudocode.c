void __thiscall sub_73F460(int *this, unsigned int *a2)
{
  unsigned int *v2; // edi
  void (__cdecl *v4)(unsigned int, float *, int, int *, int); // eax
  unsigned int v5; // eax
  void (__cdecl *v6)(unsigned int, float *, int, int *, int); // eax
  int j; // eax
  int v8; // ecx
  void (__cdecl *v9)(unsigned int, bool *, int, int *, int); // eax
  void (__cdecl *v10)(unsigned int, int, int, int *, int); // edx
  int i; // eax
  int v12; // ecx
  void (__cdecl *v13)(unsigned int, int *, int, int *, int); // eax
  unsigned int v14; // eax
  void (__cdecl *v15)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v16)(unsigned int, unsigned int **, int, int *, int); // eax
  int v17; // eax
  bool v18; // zf
  void (__cdecl *v19)(unsigned int, int, int, int *, int); // eax
  int k; // eax
  int v21; // ecx
  unsigned int v22; // eax
  void (__cdecl *v23)(unsigned int, int *, int, int *, int); // edx
  void (__cdecl *v24)(unsigned int, bool *, int, int *, int); // eax
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // ebp
  unsigned int v28; // ecx
  int v29; // edx
  _DWORD *v30; // eax
  void (__cdecl *v31)(unsigned int, bool *, int, int *, int); // eax
  int v32; // eax
  int v33; // ebx
  NiRTTI *v34; // eax
  void (__cdecl *v35)(unsigned int, bool *, int, int *, int); // edx
  int v36; // eax
  int v37; // ebx
  void (__cdecl *v38)(unsigned int, int, int, int *, int); // eax
  void (__cdecl *v39)(unsigned int, float *, int, int *, int); // eax
  int v40; // eax
  unsigned __int16 v41; // bx
  unsigned int v42; // [esp-14h] [ebp-30h]
  unsigned int v43; // [esp-14h] [ebp-30h]
  unsigned int v44; // [esp-14h] [ebp-30h]
  unsigned int v45; // [esp-14h] [ebp-30h]
  unsigned int v46; // [esp-14h] [ebp-30h]
  unsigned int v47; // [esp-14h] [ebp-30h]
  unsigned int v48; // [esp-14h] [ebp-30h]
  unsigned int v49; // [esp-14h] [ebp-30h]
  unsigned int v50; // [esp-14h] [ebp-30h]
  unsigned int v51; // [esp-14h] [ebp-30h]
  unsigned int v52; // [esp-14h] [ebp-30h]
  unsigned int v53; // [esp-14h] [ebp-30h]
  int v54; // [esp-10h] [ebp-2Ch]
  int v55; // [esp-10h] [ebp-2Ch]
  int v56; // [esp-10h] [ebp-2Ch]
  int v57; // [esp-Ch] [ebp-28h]
  int v58; // [esp-Ch] [ebp-28h]
  bool v59; // [esp+13h] [ebp-9h] BYREF
  float v60; // [esp+14h] [ebp-8h] BYREF
  int v61; // [esp+18h] [ebp-4h] BYREF

  v2 = a2; /*0x73f467*/
  sub_729450((NiTriBasedGeomData *)this, a2); /*0x73f46e*/
  if ( v2[0x36] < 0x4010007 ) /*0x73f483*/
  {
    v42 = v2[0x87]; /*0x73f498*/
    v4 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v42 + 4); /*0x73f499*/
    v61 = 2; /*0x73f49c*/
    v4(v42, &v60, 2, &v61, 1); /*0x73f4a0*/
  }
  *(this + 0x11) = FormHeapAlloc(
                     (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
                   ? 0xFFFFFFFF
                   : 4 * *((unsigned __int16 *)this + 4));
  v5 = v2[0x87]; /*0x73f4cf*/
  if ( v2[0x36] >= 0xA00010D ) /*0x73f4dc*/
  {
    v44 = v2[0x87]; /*0x73f521*/
    v9 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v5 + 4); /*0x73f522*/
    v61 = 1; /*0x73f525*/
    v9(v44, &v59, 1, &v61, 1); /*0x73f52d*/
    if ( v59 ) /*0x73f537*/
    {
      v57 = 4 * *((unsigned __int16 *)this + 4); /*0x73f551*/
      v10 = *(void (__cdecl **)(unsigned int, int, int, int *, int))(v2[0x87] + 4); /*0x73f552*/
      v54 = *(this + 0x11); /*0x73f555*/
      v45 = v2[0x87]; /*0x73f556*/
      v61 = 4; /*0x73f557*/
      v10(v45, v54, v57, &v61, 1); /*0x73f55f*/
    }
    else
    {
      for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 4); *(float *)(*(this + 0x11) + 4 * v12) = 1.0 ) /*0x73f568*/
        v12 = (unsigned __int16)i++; /*0x73f573*/
    }
  }
  else
  {
    v43 = v2[0x87]; /*0x73f4e5*/
    v6 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v5 + 4); /*0x73f4e6*/
    v61 = 4; /*0x73f4e9*/
    v6(v43, &v60, 4, &v61, 1); /*0x73f4f1*/
    for ( j = 0; (unsigned __int16)j < *((_WORD *)this + 4); *(float *)(*(this + 0x11) + 4 * v8) = v60 ) /*0x73f4f8*/
      v8 = (unsigned __int16)j++; /*0x73f509*/
  }
  v46 = v2[0x87]; /*0x73f596*/
  v13 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v46 + 4); /*0x73f597*/
  v61 = 2; /*0x73f59a*/
  v13(v46, this + 0x12, 2, &v61, 1); /*0x73f59e*/
  v14 = v2[0x87]; /*0x73f5a0*/
  if ( v2[0x36] >= 0x4010007 ) /*0x73f5b6*/
  {
    v47 = v2[0x87]; /*0x73f5e2*/
    v16 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v14 + 4); /*0x73f5e3*/
    v61 = 1; /*0x73f5e6*/
    v16(v47, &a2, 1, &v61, 1); /*0x73f5ee*/
  }
  else
  {
    v15 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v14 + 4); /*0x73f5b8*/
    v61 = 4; /*0x73f5c2*/
    v15(v14, this + 0x13, 4, &v61, 1); /*0x73f5ca*/
    LOBYTE(a2) = *(this + 0x13) != 0; /*0x73f5d5*/
  }
  v17 = FormHeapAlloc(
          (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
        ? 0xFFFFFFFF
        : 4 * *((unsigned __int16 *)this + 4));
  v18 = (_BYTE)a2 == 0; /*0x73f612*/
  *(this + 0x13) = v17; /*0x73f617*/
  if ( v18 ) /*0x73f61a*/
  {
    for ( k = 0; (unsigned __int16)k < *((_WORD *)this + 4); *(float *)(*(this + 0x13) + 4 * v21) = 1.0 ) /*0x73f644*/
      v21 = (unsigned __int16)k++; /*0x73f64f*/
  }
  else
  {
    v58 = 4 * *((unsigned __int16 *)this + 4); /*0x73f631*/
    v55 = v17; /*0x73f632*/
    v19 = *(void (__cdecl **)(unsigned int, int, int, int *, int))(v2[0x87] + 4); /*0x73f633*/
    v48 = v2[0x87]; /*0x73f636*/
    v61 = 4; /*0x73f637*/
    v19(v48, v55, v58, &v61, 1); /*0x73f63b*/
  }
  if ( *((_BYTE *)this + 0x40) )
  {
    v22 = v2[0x87]; /*0x73f674*/
    if ( v2[0x36] >= 0x4010000 ) /*0x73f681*/
    {
      v49 = v2[0x87]; /*0x73f6a9*/
      v24 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v22 + 4); /*0x73f6aa*/
      v61 = 1; /*0x73f6ad*/
      v24(v49, &v59, 1, &v61, 1); /*0x73f6b5*/
    }
    else
    {
      v23 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v22 + 4); /*0x73f683*/
      v61 = 4; /*0x73f68d*/
      v23(v22, this + 0x14, 4, &v61, 1); /*0x73f691*/
      v59 = *(this + 0x14) != 0; /*0x73f69c*/
    }
    v25 = FormHeapAlloc(
            (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0
          ? 0xFFFFFFFF
          : 0x10 * *((unsigned __int16 *)this + 4));
    v18 = !v59; /*0x73f6d7*/
    *(this + 0x14) = v25; /*0x73f6dc*/
    if ( v18 ) /*0x73f6df*/
    {
      v28 = 0; /*0x73f70e*/
      if ( *((_WORD *)this + 4) ) /*0x73f710*/
      {
        v29 = 0; /*0x73f71a*/
        do /*0x73f754*/
        {
          v30 = (_DWORD *)(v29 + *(this + 0x14)); /*0x73f729*/
          *v30 = dword_B27110; /*0x73f72b*/
          v30[1] = dword_B27114; /*0x73f733*/
          v30[2] = dword_B27118; /*0x73f73c*/
          v30[3] = dword_B2711C; /*0x73f745*/
          ++v28; /*0x73f74c*/
          v29 += 0x10; /*0x73f74f*/
        }
        while ( v28 < *((unsigned __int16 *)this + 4) ); /*0x73f754*/
      }
    }
    else
    {
      v26 = 0; /*0x73f6e1*/
      if ( *((_WORD *)this + 4) ) /*0x73f6e3*/
      {
        v27 = 0; /*0x73f6ed*/
        do /*0x73f707*/
        {
          sub_715420((char *)(v27 + *(this + 0x14)), (signed int)v2); /*0x73f6f6*/
          ++v26; /*0x73f6ff*/
          v27 += 0x10; /*0x73f702*/
        }
        while ( v26 < *((unsigned __int16 *)this + 4) ); /*0x73f707*/
      }
    }
  }
  else if ( v2[0x36] >= 0x5000008 )
  {
    v50 = v2[0x87]; /*0x73f77f*/
    v31 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v50 + 4); /*0x73f780*/
    v61 = 1; /*0x73f783*/
    v31(v50, &v59, 1, &v61, 1); /*0x73f78b*/
    if ( v59 )
    {
      v32 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1C != 0
            ? 0xFFFFFFFF
            : 0x10 * *((unsigned __int16 *)this + 4));
      v33 = 0; /*0x73f7b5*/
      v18 = *((_WORD *)this + 4) == 0; /*0x73f7ba*/
      *(this + 0x14) = v32; /*0x73f7be*/
      if ( !v18 ) /*0x73f7c1*/
      {
        do /*0x73f7d9*/
          sub_715420((char *)(*(this + 0x14) + 0x10 * (unsigned __int16)v33++), (signed int)v2); /*0x73f7cd*/
        while ( (unsigned __int16)v33 < *((_WORD *)this + 4) ); /*0x73f7d9*/
      }
      if ( v2[0x36] <= 0xA000100 ) /*0x73f7e5*/
      {
        v34 = (NiRTTI *)(*(int (__thiscall **)(int *))(*this + 4))(this); /*0x73f7ee*/
        if ( v34 ) /*0x73f7f2*/
        {
          while ( v34 != &stru_B401DC ) /*0x73f7f9*/
          {
            v34 = v34->parent; /*0x73f7fb*/
            if ( !v34 ) /*0x73f800*/
              goto LABEL_39; /*0x73f800*/
          }
        }
        else
        {
LABEL_39:
          FormHeapFree(*(this + 0x14)); /*0x73f802*/
          *(this + 0x14) = 0; /*0x73f80e*/
        }
      }
    }
  }
  if ( v2[0x36] < 0xA000110 ) /*0x73f81f*/
    *((_WORD *)this + 0x17) = *((_WORD *)this + 0x17) & 0xFFF | 0x8000; /*0x73f82f*/
  if ( v2[0x36] >= 0xA030005 )
  {
    v35 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v2[0x87] + 4); /*0x73f850*/
    v51 = v2[0x87]; /*0x73f85a*/
    v61 = 1; /*0x73f85b*/
    v35(v51, &v59, 1, &v61, 1); /*0x73f863*/
    if ( v59 )
    {
      v36 = FormHeapAlloc(
              (unsigned __int64)*((unsigned __int16 *)this + 4) >> 0x1E != 0
            ? 0xFFFFFFFF
            : 4 * *((unsigned __int16 *)this + 4));
      v37 = 0; /*0x73f889*/
      v18 = *((_WORD *)this + 4) == 0; /*0x73f88e*/
      *(this + 0x15) = v36; /*0x73f892*/
      if ( !v18 ) /*0x73f895*/
      {
        do /*0x73f8d1*/
        {
          v56 = *(this + 0x15) + 4 * (unsigned __int16)v37; /*0x73f8b8*/
          v52 = v2[0x87]; /*0x73f8b9*/
          v38 = *(void (__cdecl **)(unsigned int, int, int, int *, int))(v52 + 4); /*0x73f8ba*/
          v61 = 4; /*0x73f8bd*/
          v38(v52, v56, 4, &v61, 1); /*0x73f8c5*/
          ++v37; /*0x73f8c7*/
        }
        while ( (unsigned __int16)v37 < *((_WORD *)this + 4) ); /*0x73f8d1*/
      }
    }
    v53 = v2[0x87]; /*0x73f8e7*/
    v39 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v53 + 4); /*0x73f8e8*/
    v61 = 1; /*0x73f8eb*/
    v39(v53, &v60, 1, &v61, 1); /*0x73f8f3*/
    if ( LOBYTE(v60) )
    {
      v40 = FormHeapAlloc(
              (0xC * (unsigned __int64)*((unsigned __int16 *)this + 4)) >> 0x20 != 0
            ? 0xFFFFFFFF
            : 0xC * *((unsigned __int16 *)this + 4));
      v41 = 0; /*0x73f919*/
      v18 = *((_WORD *)this + 4) == 0; /*0x73f91e*/
      *(this + 0x16) = v40; /*0x73f922*/
      if ( !v18 ) /*0x73f925*/
      {
        do /*0x73f940*/
          sub_709430((char *)(*(this + 0x16) + 0xC * v41++), (signed int)v2); /*0x73f934*/
        while ( v41 < *((_WORD *)this + 4) ); /*0x73f940*/
      }
    }
  }
}
