void __thiscall sub_72D480(
        int this,
        int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        char a7,
        unsigned __int8 a8,
        unsigned int a9)
{
  _DWORD *v9; // ebp
  int v10; // eax
  unsigned int i; // eax
  __int16 v13; // cx
  char *v14; // edi
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  float *v21; // ebp
  double v22; // st6
  _BYTE *v23; // edi
  _DWORD *v24; // edx
  unsigned int v25; // eax
  float *k; // ecx
  int v27; // edx
  unsigned int v28; // ebx
  unsigned int v29; // edi
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned __int16 v32; // ax
  unsigned int v33; // edi
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // ecx
  bool v37; // zf
  float *v38; // edx
  _DWORD *v39; // ebx
  unsigned int v40; // eax
  unsigned int v41; // edi
  unsigned int v42; // ecx
  _DWORD *v43; // ebx
  int v44; // ebp
  _DWORD *v45; // edx
  int v46; // eax
  unsigned int v47; // edx
  _BYTE *v48; // ecx
  unsigned int m; // eax
  _BYTE *v50; // [esp+14h] [ebp+4h]
  float v51; // [esp+14h] [ebp+4h]
  float *v52; // [esp+18h] [ebp+8h]
  unsigned int j; // [esp+1Ch] [ebp+Ch]
  _DWORD *v54; // [esp+1Ch] [ebp+Ch]
  unsigned int v55; // [esp+24h] [ebp+14h]
  float *v56; // [esp+24h] [ebp+14h]
  _DWORD *v57; // [esp+28h] [ebp+18h]
  float v58; // [esp+28h] [ebp+18h]
  unsigned int v59; // [esp+2Ch] [ebp+1Ch]
  unsigned int v60; // [esp+2Ch] [ebp+1Ch]
  unsigned int v61; // [esp+30h] [ebp+20h]

  v9 = a3; /*0x72d482*/
  v10 = a3[2]; /*0x72d486*/
  if ( v10 <= a8 ) /*0x72d494*/
    LOWORD(v10) = a8; /*0x72d496*/
  *(_WORD *)(this + 0x20) = v10; /*0x72d49c*/
  *(_WORD *)(this + 0x1E) = *(_WORD *)(a2 + 8); /*0x72d4a4*/
  *(_DWORD *)(this + 4) = FormHeapAlloc(
                            (unsigned __int64)(unsigned __int16)v10 >> 0x1F != 0
                          ? 0xFFFFFFFF
                          : 2 * (unsigned __int16)v10);
  for ( i = 0; i < *(unsigned __int16 *)(this + 0x20); *(_WORD *)(*(_DWORD *)(this + 4) + 2 * i++) = v13 ) /*0x72d4c9*/
  {
    if ( i >= a3[2] ) /*0x72d4d3*/
      v13 = 0; /*0x72d4de*/
    else
      v13 = *(_WORD *)(*a3 + 2 * i); /*0x72d4d8*/
  }
  v14 = sub_72CF50((_WORD *)this, (_DWORD *)a2, a4); /*0x72d503*/
  sub_72D090((unsigned __int16 *)this, (_DWORD *)a2, (int)a4, (int)v14); /*0x72d50a*/
  FormHeapFree((unsigned int)v14); /*0x72d510*/
  v15 = *(unsigned __int16 *)(this + 0x1C); /*0x72d515*/
  v16 = 0; /*0x72d519*/
  if ( a6 )
  {
    *(_WORD *)(this + 0x24) = a8; /*0x72d533*/
    v17 = a8 * v15; /*0x72d53a*/
    v18 = 4LL * v17; /*0x72d53f*/
    LOBYTE(v16) = HIDWORD(v18) != 0; /*0x72d541*/
    *(_DWORD *)(this + 8) = FormHeapAlloc(v18 | -v16); /*0x72d54f*/
    *(_DWORD *)(this + 0x10) = FormHeapAlloc(v17); /*0x72d557*/
    v19 = FormHeapAlloc((unsigned __int64)a9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a9);
    v20 = 0; /*0x72d576*/
    for ( j = v19; v20 < a3[2]; ++v20 ) /*0x72d57b*/
      *(_DWORD *)(v19 + 4 * *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 2 * v20)) = v20; /*0x72d58b*/
    v52 = *(float **)(this + 8); /*0x72d59c*/
    v50 = *(_BYTE **)(this + 0x10); /*0x72d5a4*/
    v21 = (float *)FormHeapAlloc(
                     (unsigned __int64)*(unsigned __int16 *)(this + 0x24) >> 0x1E != 0
                   ? 0xFFFFFFFF
                   : 4 * *(unsigned __int16 *)(this + 0x24));
    v55 = FormHeapAlloc(*(unsigned __int16 *)(this + 0x24)); /*0x72d5d2*/
    v59 = 0; /*0x72d5d6*/
    if ( *(_WORD *)(this + 0x1C) ) /*0x72d5cd*/
    {
      v22 = flt_A3B888; /*0x72d5e6*/
      do /*0x72d6e3*/
      {
        v23 = (_BYTE *)v55; /*0x72d5fb*/
        v24 = (_DWORD *)(a5 + 0xC * *(unsigned __int16 *)(*(_DWORD *)(this + 0xC) + 2 * v59)); /*0x72d602*/
        v25 = 0; /*0x72d605*/
        v57 = v24; /*0x72d60a*/
        for ( k = v21; v25 < v57[2]; ++v23 ) /*0x72d607*/
        {
          v27 = *v24; /*0x72d612*/
          *k = *(float *)(v27 + 8 * v25 + 4); /*0x72d61b*/
          *v23 = *(_BYTE *)(v19 + 4 * *(_DWORD *)(v27 + 8 * v25)); /*0x72d622*/
          v24 = v57; /*0x72d624*/
          ++v25; /*0x72d628*/
          ++k; /*0x72d62b*/
        }
        for ( ; v25 < *(unsigned __int16 *)(this + 0x24); ++v23 ) /*0x72d63c*/
        {
          ++v25; /*0x72d640*/
          *k = 0.0; /*0x72d643*/
          *v23 = 0; /*0x72d645*/
          ++k; /*0x72d64e*/
        }
        v28 = 0; /*0x72d658*/
        if ( *(_WORD *)(this + 0x24) ) /*0x72d65a*/
        {
          v29 = *(unsigned __int16 *)(this + 0x24); /*0x72d660*/
          do /*0x72d6cc*/
          {
            v30 = 1; /*0x72d667*/
            v31 = 0; /*0x72d66c*/
            v58 = *v21; /*0x72d66e*/
            if ( *(_WORD *)(this + 0x24) > 1u ) /*0x72d676*/
            {
              do /*0x72d698*/
              {
                if ( v58 < (double)v21[v30] ) /*0x72d687*/
                {
                  v31 = v30; /*0x72d68d*/
                  v58 = v21[v30]; /*0x72d68f*/
                }
                ++v30; /*0x72d693*/
              }
              while ( v30 < v29 ); /*0x72d698*/
            }
            *v52++ = v21[v31]; /*0x72d6a6*/
            *v50 = *(_BYTE *)(v31 + v55); /*0x72d6b6*/
            v21[v31] = v22; /*0x72d6b8*/
            ++v50; /*0x72d6bf*/
            v29 = *(unsigned __int16 *)(this + 0x24); /*0x72d6c3*/
            ++v28; /*0x72d6c7*/
          }
          while ( v28 < v29 ); /*0x72d6cc*/
        }
        v19 = j; /*0x72d6d6*/
        ++v59; /*0x72d6df*/
      }
      while ( v59 < *(unsigned __int16 *)(this + 0x1C) ); /*0x72d6e3*/
    }
    FormHeapFree((unsigned int)v21); /*0x72d6ee*/
    FormHeapFree(v55); /*0x72d6f8*/
    FormHeapFree(v19); /*0x72d6fe*/
  }
  else
  {
    v32 = *(_WORD *)(this + 0x20); /*0x72d70d*/
    *(_WORD *)(this + 0x24) = v32; /*0x72d711*/
    v33 = v32 * v15; /*0x72d718*/
    v34 = 4LL * v33; /*0x72d71d*/
    LOBYTE(v16) = HIDWORD(v34) != 0; /*0x72d71f*/
    v61 = v33; /*0x72d722*/
    v35 = FormHeapAlloc(v34 | -v16); /*0x72d72b*/
    v36 = 0; /*0x72d730*/
    v37 = *(_WORD *)(this + 0x1C) == 0; /*0x72d735*/
    v38 = (float *)v35; /*0x72d739*/
    *(_DWORD *)(this + 8) = v35; /*0x72d73b*/
    v56 = (float *)v35; /*0x72d73e*/
    v60 = 0; /*0x72d742*/
    if ( !v37 ) /*0x72d746*/
    {
      do /*0x72d7e9*/
      {
        v39 = (_DWORD *)(a5 + 0xC * *(unsigned __int16 *)(*(_DWORD *)(this + 0xC) + 2 * v36)); /*0x72d75c*/
        v40 = 0; /*0x72d75f*/
        v54 = v39; /*0x72d764*/
        if ( v9[2] ) /*0x72d761*/
        {
          while ( 1 ) /*0x72d770*/
          {
            v41 = v39[2]; /*0x72d770*/
            v42 = 0; /*0x72d773*/
            if ( v41 ) /*0x72d777*/
            {
              v43 = (_DWORD *)*v39; /*0x72d77c*/
              v44 = *(unsigned __int16 *)(*v9 + 2 * v40); /*0x72d77e*/
              v45 = v43; /*0x72d782*/
              while ( *v45 != v44 ) /*0x72d786*/
              {
                ++v42; /*0x72d78c*/
                v45 += 2; /*0x72d78f*/
                if ( v42 >= v41 ) /*0x72d794*/
                {
                  v9 = a3; /*0x72d796*/
                  v38 = v56; /*0x72d79a*/
                  goto LABEL_35; /*0x72d79a*/
                }
              }
              v9 = a3; /*0x72d846*/
              v38 = v56; /*0x72d84a*/
              v51 = *(float *)&v43[2 * v42 + 1]; /*0x72d84e*/
            }
            else
            {
LABEL_35:
              v51 = 0.0; /*0x72d79e*/
            }
            ++v38; /*0x72d7a6*/
            v38[0xFFFFFFFF] = v51; /*0x72d7a9*/
            ++v40; /*0x72d7ac*/
            v56 = v38; /*0x72d7b2*/
            if ( v40 >= v9[2] ) /*0x72d7b6*/
              break; /*0x72d7b6*/
            v39 = v54; /*0x72d76c*/
          }
          v36 = v60; /*0x72d7b8*/
          v33 = v61; /*0x72d7bc*/
        }
        if ( v40 < *(unsigned __int16 *)(this + 0x20) ) /*0x72d7c6*/
        {
          do /*0x72d7d6*/
          {
            *v38 = 0.0; /*0x72d7c8*/
            ++v40; /*0x72d7ce*/
            ++v38; /*0x72d7d1*/
          }
          while ( v40 < *(unsigned __int16 *)(this + 0x20) ); /*0x72d7d6*/
          v56 = v38; /*0x72d7d8*/
        }
        v60 = ++v36; /*0x72d7e5*/
      }
      while ( v36 < *(unsigned __int16 *)(this + 0x1C) ); /*0x72d7e9*/
    }
    if ( a7 ) /*0x72d7f6*/
    {
      v46 = FormHeapAlloc(v33); /*0x72d7f9*/
      v47 = 0; /*0x72d7fe*/
      v37 = *(_WORD *)(this + 0x1C) == 0; /*0x72d803*/
      *(_DWORD *)(this + 0x10) = v46; /*0x72d807*/
      v48 = (_BYTE *)v46; /*0x72d80a*/
      if ( !v37 ) /*0x72d80c*/
      {
        do /*0x72d839*/
        {
          for ( m = 0; m < *(unsigned __int16 *)(this + 0x20); *v48++ = m++ ) /*0x72d812*/
            ; /*0x72d820*/
          ++v47; /*0x72d834*/
        }
        while ( v47 < *(unsigned __int16 *)(this + 0x1C) ); /*0x72d839*/
      }
    }
  }
}
