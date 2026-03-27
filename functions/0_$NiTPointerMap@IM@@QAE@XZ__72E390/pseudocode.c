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
  _DWORD *v45; // esi
  int v46; // ebp
  unsigned int v48; // [esp+14h] [ebp-70h] BYREF
  int v49; // [esp+18h] [ebp-6Ch]
  unsigned int v50; // [esp+1Ch] [ebp-68h]
  float v51; // [esp+20h] [ebp-64h]
  int v52; // [esp+24h] [ebp-60h]
  void **v53; // [esp+28h] [ebp-5Ch] BYREF
  unsigned int v54; // [esp+2Ch] [ebp-58h]
  unsigned int v55; // [esp+30h] [ebp-54h]
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

  v63 = this;
  v5 = a2;
  v61 = (unsigned __int16)a2[4];
  v6 = a5;
  v7 = (unsigned __int16)a2[0x20];
  v54 = 0x25;
  v8 = 0;
  v62 = a2;
  v52 = a5;
  v68 = v7;
  v56 = 0;
  v55 = FormHeapAlloc(0x94u);
  _memset(v55, 0, 0x94);
  v53 = &NiTPointerMap<unsigned int,float>::`vftable';
  v73 = 1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_729C50(a2, (int *)&v59, (int *)&v60, 1);
  v64 = 0;
  if ( v7 )
  {
    do
    {
      (*(void (__thiscall **)(_WORD *, unsigned int, __int16 *, __int16 *, __int16 *))(*(_DWORD *)v5 + 0x60))(
        v5,
        v8,
        &v70,
        &v71,
        &v72);
      if ( v70 != v71 && v71 != v72 && v72 != v70 )
      {
        sub_72D190(&v53, (int)&v70, v6);
        v66 = v56;
        v69 = a3;
        if ( v56 > a3 )
        {
          while ( 1 )
          {
            v9 = 0;
            if ( v54 )
            {
              while ( !*(_DWORD *)(v55 + 4 * v9) )
              {
                if ( ++v9 >= v54 )
                  goto LABEL_9;
              }
              v10 = *(float **)(v55 + 4 * v9);
            }
            else
            {
LABEL_9:
              v10 = 0;
            }
            v11 = v10;
            v51 = flt_A32048;
            v67 = 0;
            do
            {
              v12 = v11[2];
              v13 = *((_DWORD *)v11 + 1);
              v11 = *(float **)v11;
              v58 = v12;
              if ( !v11 )
              {
                v14 = ((int (__thiscall *)(void ***, int))v53[1])(&v53, v13) + 1;
                if ( v14 >= v54 )
                {
LABEL_15:
                  v11 = 0;
                }
                else
                {
                  while ( 1 )
                  {
                    v11 = *(float **)(v55 + 4 * v14);
                    if ( v11 )
                      break;
                    if ( ++v14 >= v54 )
                      goto LABEL_15;
                  }
                }
              }
              if ( v51 > (double)v58 )
              {
                v51 = v58;
                v67 = v13;
              }
            }
            while ( v11 );
            v51 = 0.0;
            do
            {
              v15 = (unsigned __int16)*(&v70 + LODWORD(v51));
              v65 = v15;
              if ( !v49 )
                sub_6E8CA0(&v48, 1u);
              v16 = v50;
              v17 = v52;
              *(_DWORD *)(v48 + 4 * v50) = v15;
              v18 = *(unsigned __int16 *)(v60 + 2 * v15);
              v50 = v16 + 1;
              LODWORD(v19) = v17 + 0xC * v15;
              v58 = v19;
              v57 = v18;
              if ( v18 )
              {
                while ( 1 )
                {
                  v20 = *(unsigned __int16 *)(v59 + 2 * v18 - 2);
                  if ( sub_728440(v62, *(_WORD *)(v59 + 2 * v18 - 2), v15, 1) )
                    break;
                  v21 = v52 + 0xC * v20;
                  v22 = *(_DWORD *)(LODWORD(v19) + 8);
                  if ( v22 == *(_DWORD *)(v21 + 8) )
                  {
                    v23 = 0;
                    if ( v22 )
                    {
                      v24 = *(_DWORD **)v21;
                      v25 = *(_DWORD *)LODWORD(v19) - (_DWORD)v24;
                      while ( *(_DWORD *)((char *)v24 + v25) == *v24 )
                      {
                        ++v23;
                        v24 += 2;
                        if ( v23 >= v22 )
                        {
                          LOWORD(v15) = v65;
                          goto LABEL_33;
                        }
                      }
                      LOWORD(v15) = v65;
                    }
                    else
                    {
LABEL_33:
                      if ( v50 == v49 )
                      {
                        if ( v49 )
                          v26 = 2 * v49;
                        else
                          v26 = 1;
                        sub_6E8CA0(&v48, v26);
                      }
                      v27 = v50;
                      *(_DWORD *)(v48 + 4 * v50) = v20;
                      v50 = v27 + 1;
                    }
                  }
                  if ( !--v18 )
                    break;
                  v19 = v58;
                }
                v18 = v57;
              }
              if ( v18 < v61 - 1 )
              {
                do
                {
                  v28 = *(unsigned __int16 *)(v59 + 2 * v57 + 2);
                  if ( sub_728440(v62, *(_WORD *)(v59 + 2 * v57 + 2), v15, 1) )
                    break;
                  v29 = (_DWORD *)(v52 + 0xC * v28);
                  v30 = *(_DWORD *)(LODWORD(v58) + 8);
                  if ( v30 == v29[2] )
                  {
                    v31 = 0;
                    if ( v30 )
                    {
                      v32 = *(_DWORD **)LODWORD(v58);
                      v33 = *v29 - *(_DWORD *)LODWORD(v58);
                      while ( *v32 == *(_DWORD *)((char *)v32 + v33) )
                      {
                        ++v31;
                        v32 += 2;
                        if ( v31 >= v30 )
                          goto LABEL_49;
                      }
                    }
                    else
                    {
LABEL_49:
                      if ( v50 == v49 )
                      {
                        if ( v49 )
                          v34 = 2 * v49;
                        else
                          v34 = 1;
                        sub_6E8CA0(&v48, v34);
                      }
                      v35 = v50;
                      *(_DWORD *)(v48 + 4 * v50) = v28;
                      v50 = v35 + 1;
                    }
                  }
                  ++v57;
                }
                while ( v57 < v61 - 1 );
              }
              for ( i = 0; i < v50; ++i )
              {
                v37 = v48;
                v38 = *(_DWORD *)(v52 + 0xC * *(_DWORD *)(v48 + 4 * i) + 8);
                v39 = (int *)(v52 + 0xC * *(_DWORD *)(v48 + 4 * i));
                v40 = 0;
                if ( v38 )
                {
                  v41 = (_DWORD *)*v39;
                  while ( *v41 != v67 )
                  {
                    ++v40;
                    v41 += 2;
                    if ( v40 >= v38 )
                      goto LABEL_66;
                  }
                  v42 = v40;
                  if ( v40 < v38 - 1 )
                  {
                    do
                    {
                      v43 = (_DWORD *)(*v39 + 8 * v42);
                      *v43 = v43[2];
                      v43[1] = v43[3];
                      ++v42;
                    }
                    while ( v42 < v39[2] - 1 );
                  }
                  if ( !--v39[2] )
                  {
                    FormHeapFree(v59);
                    FormHeapFree(v60);
                    FormHeapFree(v37);
                    v53 = &NiTPointerMap<unsigned int,float>::`vftable';
                    v73 = 2;
                    NiTMap_Clear(&v53);
                    v73 = 0xFFFFFFFF;
                    v53 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,float>::`vftable';
                    NiTMap_Clear(&v53);
                    FormHeapFree(v55);
                    return 0;
                  }
                  sub_72CD30(v39);
                }
LABEL_66:
                ;
              }
              v44 = (unsigned int)(LODWORD(v51) + 1) < 3;
              v50 = 0;
              ++LODWORD(v51);
            }
            while ( v44 );
            if ( --v66 == v69 )
              break;
            NiTMap_Clear(&v53);
            sub_72D190(&v53, (int)&v70, v52);
          }
          v8 = v64;
          v7 = v68;
          v6 = v52;
          v5 = v62;
        }
        NiTMap_Clear(&v53);
      }
      v64 = ++v8;
    }
    while ( v8 < v7 );
  }
  if ( v61 )
  {
    v45 = (_DWORD *)(v6 + 8);
    v46 = v61;
    do
    {
      if ( *v45 > (unsigned int)a4 )
      {
        unknown_libname_60(v45[0xFFFFFFFE], *v45, 8, sub_72C3B0);
        *v45 = a4;
        sub_72CD30(v45 + 0xFFFFFFFE);
      }
      v45 += 3;
      --v46;
    }
    while ( v46 );
  }
  FormHeapFree(v59);
  FormHeapFree(v60);
  FormHeapFree(v48);
  v53 = &NiTPointerMap<unsigned int,float>::`vftable';
  v73 = 3;
  NiTMap_Clear(&v53);
  v73 = 0xFFFFFFFF;
  v53 = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,float>::`vftable';
  NiTMap_Clear(&v53);
  FormHeapFree(v55);
  return (NiTPointerMap<unsigned int,float> *)1;
}
