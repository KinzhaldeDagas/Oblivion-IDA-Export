NiTPointerMap<unsigned int,float> *__thiscall NiTPointerMap<unsigned int,float>::NiTPointerMap<unsigned int,float>(
        NiTPointerMap<unsigned int,float> *this,
        _WORD *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        int a5)
{
  _WORD *v5; // edi
  int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // eax
  float *v10; // eax
  float *v11; // ecx
  double v12; // st7
  int v13; // edi
  unsigned int v14; // eax
  int v15; // ebp
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // ebx
  float v19; // edi
  int v20; // esi
  int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  _DWORD *v24; // eax
  int v25; // edi
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // edi
  _DWORD *v29; // esi
  unsigned int v30; // edx
  unsigned int v31; // ecx
  _DWORD *v32; // eax
  int v33; // esi
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int i; // edi
  unsigned int v37; // ebx
  unsigned int v38; // esi
  int *v39; // ecx
  unsigned int v40; // eax
  _DWORD *v41; // edx
  unsigned int v42; // edx
  _DWORD *v43; // eax
  bool v44; // cf
  unsigned int *v45; // esi
  int v46; // ebp
  unsigned int v48; // [esp+14h] [ebp-70h] BYREF
  int v49; // [esp+18h] [ebp-6Ch]
  unsigned int v50; // [esp+1Ch] [ebp-68h]
  float v51; // [esp+20h] [ebp-64h]
  int v52; // [esp+24h] [ebp-60h]
  void **v53; // [esp+28h] [ebp-5Ch] BYREF
  unsigned int v54; // [esp+2Ch] [ebp-58h]
  int v55; // [esp+30h] [ebp-54h]
  unsigned int v56; // [esp+34h] [ebp-50h]
  unsigned int v57; // [esp+38h] [ebp-4Ch]
  float v58; // [esp+3Ch] [ebp-48h]
  unsigned int v59; // [esp+40h] [ebp-44h] BYREF
  unsigned int v60; // [esp+44h] [ebp-40h] BYREF
  int v61; // [esp+48h] [ebp-3Ch]
  _DWORD *v62; // [esp+4Ch] [ebp-38h]
  NiTPointerMap<unsigned int,float> *v63; // [esp+50h] [ebp-34h]
  int v64; // [esp+54h] [ebp-30h]
  int v65; // [esp+58h] [ebp-2Ch]
  unsigned int v66; // [esp+5Ch] [ebp-28h]
  int v67; // [esp+60h] [ebp-24h]
  unsigned int v68; // [esp+64h] [ebp-20h]
  int v69; // [esp+68h] [ebp-1Ch]
  __int16 v70; // [esp+6Ch] [ebp-18h] BYREF
  __int16 v71; // [esp+6Eh] [ebp-16h] BYREF
  __int16 v72; // [esp+70h] [ebp-14h] BYREF
  int v73; // [esp+80h] [ebp-4h]

  v63 = this; /*0x72e3c2*/
  v5 = a2; /*0x72e3c6*/
  v61 = (unsigned __int16)a2[4]; /*0x72e3d4*/
  v6 = a5; /*0x72e3dc*/
  v7 = (unsigned __int16)a2[0x20]; /*0x72e3e3*/
  v54 = 0x25; /*0x72e3ed*/
  v8 = 0; /*0x72e3f1*/
  v62 = a2; /*0x72e3fd*/
  v52 = a5; /*0x72e401*/
  v68 = v7; /*0x72e405*/
  v56 = 0; /*0x72e411*/
  v55 = FormHeapAlloc(0x94u); /*0x72e42d*/
  _memset(v55, 0, 0x94u); /*0x72e431*/
  v53 = &NiTPointerMap<unsigned int,float>::`vftable'; /*0x72e439*/
  v73 = 1; /*0x72e441*/
  v48 = 0; /*0x72e448*/
  v49 = 0; /*0x72e44c*/
  v50 = 0; /*0x72e450*/
  sub_729C50(a2, (int *)&v59, (int *)&v60, 1); /*0x72e46a*/
  v64 = 0; /*0x72e471*/
  if ( v7 ) /*0x72e475*/
  {
    do /*0x72e821*/
    {
      (*(void (__thiscall **)(_WORD *, unsigned int, __int16 *, __int16 *, __int16 *))(*(_DWORD *)v5 + 0x60))( /*0x72e497*/
        v5,
        v8,
        &v70,
        &v71,
        &v72);
      if ( v70 != v71 && v71 != v72 && v72 != v70 ) /*0x72e4bd*/
      {
        sub_72D190(&v53, (int)&v70, v6); /*0x72e4d2*/
        v66 = v56; /*0x72e4e5*/
        v69 = a3; /*0x72e4e9*/
        if ( v56 > a3 ) /*0x72e4ed*/
        {
          while ( 1 ) /*0x72e4f9*/
          {
            v9 = 0; /*0x72e4f9*/
            if ( v54 ) /*0x72e4fd*/
            {
              while ( !*(_DWORD *)(v55 + 4 * v9) ) /*0x72e506*/
              {
                if ( ++v9 >= v54 ) /*0x72e50d*/
                  goto LABEL_9; /*0x72e50d*/
              }
              v10 = *(float **)(v55 + 4 * v9); /*0x72e57b*/
            }
            else
            {
LABEL_9:
              v10 = 0; /*0x72e50f*/
            }
            v11 = v10; /*0x72e517*/
            v51 = flt_A32048; /*0x72e519*/
            v67 = 0; /*0x72e51d*/
            do /*0x72e584*/
            {
              v12 = v11[2]; /*0x72e521*/
              v13 = *((_DWORD *)v11 + 1); /*0x72e524*/
              v11 = *(float **)v11; /*0x72e527*/
              v58 = v12; /*0x72e529*/
              if ( !v11 ) /*0x72e52f*/
              {
                v14 = ((int (__thiscall *)(void ***, int))v53[1])(&v53, v13) + 1; /*0x72e543*/
                if ( v14 >= v54 ) /*0x72e548*/
                {
LABEL_15:
                  v11 = 0; /*0x72e55e*/
                }
                else
                {
                  while ( 1 ) /*0x72e550*/
                  {
                    v11 = *(float **)(v55 + 4 * v14); /*0x72e550*/
                    if ( v11 ) /*0x72e555*/
                      break; /*0x72e555*/
                    if ( ++v14 >= v54 ) /*0x72e55c*/
                      goto LABEL_15; /*0x72e55c*/
                  }
                }
              }
              if ( v51 > (double)v58 ) /*0x72e56f*/
              {
                v51 = v58; /*0x72e571*/
                v67 = v13; /*0x72e575*/
              }
            }
            while ( v11 ); /*0x72e584*/
            v51 = 0.0; /*0x72e586*/
            do /*0x72e7c2*/
            {
              v15 = (unsigned __int16)*(&v70 + LODWORD(v51)); /*0x72e593*/
              v65 = v15; /*0x72e598*/
              if ( !v49 ) /*0x72e59c*/
                sub_6E8CA0(&v48, 1u); /*0x72e5a4*/
              v16 = v50; /*0x72e5a9*/
              v17 = v52; /*0x72e5b1*/
              *(_DWORD *)(v48 + 4 * v50) = v15; /*0x72e5b5*/
              v18 = *(unsigned __int16 *)(v60 + 2 * v15); /*0x72e5bc*/
              v50 = v16 + 1; /*0x72e5c5*/
              LODWORD(v19) = v17 + 0xC * v15; /*0x72e5cd*/
              v58 = v19; /*0x72e5d0*/
              v57 = v18; /*0x72e5d4*/
              if ( v18 ) /*0x72e5d8*/
              {
                while ( 1 ) /*0x72e5e8*/
                {
                  v20 = *(unsigned __int16 *)(v59 + 2 * v18 - 2); /*0x72e5e8*/
                  if ( sub_728440(v62, *(_WORD *)(v59 + 2 * v18 - 2), v15, 1) ) /*0x72e5f5*/
                    break; /*0x72e5f5*/
                  v21 = v52 + 0xC * v20; /*0x72e605*/
                  v22 = *(_DWORD *)(LODWORD(v19) + 8); /*0x72e608*/
                  if ( v22 == *(_DWORD *)(v21 + 8) ) /*0x72e60e*/
                  {
                    v23 = 0; /*0x72e610*/
                    if ( v22 ) /*0x72e614*/
                    {
                      v24 = *(_DWORD **)v21; /*0x72e616*/
                      v25 = *(_DWORD *)LODWORD(v19) - (_DWORD)v24; /*0x72e61a*/
                      while ( *(_DWORD *)((char *)v24 + v25) == *v24 ) /*0x72e625*/
                      {
                        ++v23; /*0x72e627*/
                        v24 += 2; /*0x72e62a*/
                        if ( v23 >= v22 ) /*0x72e62f*/
                        {
                          LOWORD(v15) = v65; /*0x72e631*/
                          goto LABEL_33; /*0x72e631*/
                        }
                      }
                      LOWORD(v15) = v65; /*0x72e66a*/
                    }
                    else
                    {
LABEL_33:
                      if ( v50 == v49 ) /*0x72e63d*/
                      {
                        if ( v49 ) /*0x72e641*/
                          v26 = 2 * v49; /*0x72e643*/
                        else
                          v26 = 1; /*0x72e647*/
                        sub_6E8CA0(&v48, v26); /*0x72e651*/
                      }
                      v27 = v50; /*0x72e656*/
                      *(_DWORD *)(v48 + 4 * v50) = v20; /*0x72e65e*/
                      v50 = v27 + 1; /*0x72e664*/
                    }
                  }
                  if ( !--v18 ) /*0x72e671*/
                    break; /*0x72e671*/
                  v19 = v58; /*0x72e5e0*/
                }
                v18 = v57; /*0x72e677*/
              }
              if ( v18 < v61 - 1 ) /*0x72e684*/
              {
                do /*0x72e728*/
                {
                  v28 = *(unsigned __int16 *)(v59 + 2 * v57 + 2); /*0x72e692*/
                  if ( sub_728440(v62, *(_WORD *)(v59 + 2 * v57 + 2), v15, 1) ) /*0x72e69f*/
                    break; /*0x72e6a6*/
                  v29 = (_DWORD *)(v52 + 0xC * v28); /*0x72e6b7*/
                  v30 = *(_DWORD *)(LODWORD(v58) + 8); /*0x72e6ba*/
                  if ( v30 == v29[2] ) /*0x72e6c0*/
                  {
                    v31 = 0; /*0x72e6c2*/
                    if ( v30 ) /*0x72e6c6*/
                    {
                      v32 = *(_DWORD **)LODWORD(v58); /*0x72e6c8*/
                      v33 = *v29 - *(_DWORD *)LODWORD(v58); /*0x72e6cc*/
                      while ( *v32 == *(_DWORD *)((char *)v32 + v33) ) /*0x72e6d5*/
                      {
                        ++v31; /*0x72e6d7*/
                        v32 += 2; /*0x72e6da*/
                        if ( v31 >= v30 ) /*0x72e6df*/
                          goto LABEL_49; /*0x72e6df*/
                      }
                    }
                    else
                    {
LABEL_49:
                      if ( v50 == v49 ) /*0x72e6e9*/
                      {
                        if ( v49 ) /*0x72e6ed*/
                          v34 = 2 * v49; /*0x72e6ef*/
                        else
                          v34 = 1; /*0x72e6f3*/
                        sub_6E8CA0(&v48, v34); /*0x72e6fd*/
                      }
                      v35 = v50; /*0x72e702*/
                      *(_DWORD *)(v48 + 4 * v50) = v28; /*0x72e70a*/
                      v50 = v35 + 1; /*0x72e710*/
                    }
                  }
                  ++v57; /*0x72e724*/
                }
                while ( v57 < v61 - 1 ); /*0x72e728*/
              }
              for ( i = 0; i < v50; ++i ) /*0x72e734*/
              {
                v37 = v48; /*0x72e736*/
                v38 = *(_DWORD *)(v52 + 0xC * *(_DWORD *)(v48 + 4 * i) + 8); /*0x72e744*/
                v39 = (int *)(v52 + 0xC * *(_DWORD *)(v48 + 4 * i)); /*0x72e748*/
                v40 = 0; /*0x72e74b*/
                if ( v38 ) /*0x72e74f*/
                {
                  v41 = (_DWORD *)*v39; /*0x72e751*/
                  while ( *v41 != v67 ) /*0x72e759*/
                  {
                    ++v40; /*0x72e75b*/
                    v41 += 2; /*0x72e75e*/
                    if ( v40 >= v38 ) /*0x72e763*/
                      goto LABEL_66; /*0x72e763*/
                  }
                  v42 = v40; /*0x72e76c*/
                  if ( v40 < v38 - 1 ) /*0x72e76e*/
                  {
                    do /*0x72e78c*/
                    {
                      v43 = (_DWORD *)(*v39 + 8 * v42); /*0x72e776*/
                      *v43 = v43[2]; /*0x72e779*/
                      v43[1] = v43[3]; /*0x72e77e*/
                      ++v42; /*0x72e784*/
                    }
                    while ( v42 < v39[2] - 1 ); /*0x72e78c*/
                  }
                  if ( !--v39[2] ) /*0x72e798*/
                  {
                    FormHeapFree(v59); /*0x72e8fc*/
                    FormHeapFree(v60); /*0x72e906*/
                    FormHeapFree(v37); /*0x72e90c*/
                    v53 = &NiTPointerMap<unsigned int,float>::`vftable'; /*0x72e914*/
                    v73 = 2; /*0x72e920*/
                    NiTMap_Clear(&v53); /*0x72e92b*/
                    v73 = 0xFFFFFFFF; /*0x72e934*/
                    v53 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,float>::`vftable'; /*0x72e93b*/
                    NiTMap_Clear(&v53); /*0x72e943*/
                    FormHeapFree(v55); /*0x72e94d*/
                    return 0; /*0x72e955*/
                  }
                  sub_72CD30(v39); /*0x72e79e*/
                }
LABEL_66:
                ; /*0x72e7a3*/
              }
              v44 = (unsigned int)(LODWORD(v51) + 1) < 3; /*0x72e7ac*/
              v50 = 0; /*0x72e7b6*/
              ++LODWORD(v51); /*0x72e7be*/
            }
            while ( v44 ); /*0x72e7c2*/
            if ( --v66 == v69 ) /*0x72e7d7*/
              break; /*0x72e7d7*/
            NiTMap_Clear(&v53); /*0x72e7dd*/
            sub_72D190(&v53, (int)&v70, v52); /*0x72e7f5*/
          }
          v8 = v64; /*0x72e7ff*/
          v7 = v68; /*0x72e803*/
          v6 = v52; /*0x72e807*/
          v5 = v62; /*0x72e80b*/
        }
        NiTMap_Clear(&v53); /*0x72e813*/
      }
      v64 = ++v8; /*0x72e81d*/
    }
    while ( v8 < v7 ); /*0x72e821*/
  }
  if ( v61 ) /*0x72e82d*/
  {
    v45 = (unsigned int *)(v6 + 8); /*0x72e837*/
    v46 = v61; /*0x72e83a*/
    do /*0x72e86c*/
    {
      if ( *v45 > a4 ) /*0x72e844*/
      {
        unknown_libname_60((int)(v45 + 0xFFFFFFFE), v45[0xFFFFFFFE], *v45, 8, (int)sub_72C3B0); /*0x72e855*/
        *v45 = a4; /*0x72e85f*/
        sub_72CD30((int *)v45 + 0xFFFFFFFE); /*0x72e861*/
      }
      v45 += 3; /*0x72e866*/
      --v46; /*0x72e869*/
    }
    while ( v46 ); /*0x72e86c*/
  }
  FormHeapFree(v59); /*0x72e873*/
  FormHeapFree(v60); /*0x72e87d*/
  FormHeapFree(v48); /*0x72e887*/
  v53 = &NiTPointerMap<unsigned int,float>::`vftable'; /*0x72e88f*/
  v73 = 3; /*0x72e89b*/
  NiTMap_Clear(&v53); /*0x72e8a6*/
  v73 = 0xFFFFFFFF; /*0x72e8af*/
  v53 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,float>::`vftable'; /*0x72e8ba*/
  NiTMap_Clear(&v53); /*0x72e8c2*/
  FormHeapFree(v55); /*0x72e8cc*/
  return (NiTPointerMap<unsigned int,float> *)1; /*0x72e8d6*/
}
