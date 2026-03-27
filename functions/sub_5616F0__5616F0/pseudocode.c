int __thiscall sub_5616F0(_DWORD *this)
{
  _DWORD *v1; // esi
  bool v2; // zf
  int *v3; // eax
  unsigned int v4; // edi
  int *v5; // eax
  unsigned int v6; // edi
  void *v7; // ecx
  int v8; // edi
  unsigned int v9; // ecx
  SpeedTreeShaderPPLightingProperty *v10; // eax
  _DWORD *v11; // ebx
  unsigned int v12; // ecx
  SpeedTreeShaderPPLightingProperty *v13; // eax
  _DWORD *v14; // ebx
  unsigned int v15; // ecx
  SpeedTreeShaderPPLightingProperty *v16; // eax
  _DWORD *v17; // ebx
  int v18; // ebx
  int v19; // ebx
  float *v20; // edi
  float v21; // edx
  float v22; // eax
  int v23; // edi
  SpeedTreeShaderPPLightingProperty *v24; // esi
  unsigned __int16 v25; // ax
  unsigned __int16 *v26; // edi
  unsigned int v27; // ebx
  unsigned int j; // eax
  unsigned __int16 v29; // di
  unsigned __int16 v30; // bp
  unsigned __int16 v31; // cx
  int *v32; // edi
  int v33; // edx
  unsigned int k; // eax
  unsigned int v35; // ebx
  int v36; // esi
  BSShaderPPLightingProperty::TangentSpaceData *v37; // eax
  BSShaderPPLightingProperty::TangentSpaceData *v38; // eax
  float *v39; // eax
  float *v40; // ebp
  int v41; // esi
  int v42; // ecx
  int v43; // edx
  float v44; // edx
  int v45; // eax
  int v46; // edi
  int *v47; // edx
  unsigned int v48; // esi
  double v49; // st7
  int v50; // ecx
  _DWORD *v51; // eax
  _DWORD *v52; // esi
  float v53; // eax
  volatile LONG *v54; // ebp
  int v55; // edi
  int v56; // esi
  volatile LONG *v57; // ebx
  volatile LONG **v58; // edi
  _DWORD *v59; // ebp
  SpeedTreeShaderPPLightingProperty *v60; // eax
  int v61; // edi
  volatile LONG *v62; // ebx
  SpeedTreeShaderPPLightingProperty **v63; // edi
  BSShaderPPLightingProperty::TangentSpaceData *v64; // ebx
  int v65; // esi
  volatile LONG *v66; // edi
  _DWORD *v67; // ecx
  const void *v69; // [esp-8h] [ebp-254h]
  __int128 v70; // [esp-4h] [ebp-250h]
  __int128 v71; // [esp-4h] [ebp-250h]
  size_t v72; // [esp-4h] [ebp-250h]
  int v73; // [esp+Ch] [ebp-240h]
  int v74; // [esp+Ch] [ebp-240h]
  float v75; // [esp+38h] [ebp-214h]
  float v76; // [esp+38h] [ebp-214h]
  float v77; // [esp+38h] [ebp-214h]
  float v78; // [esp+38h] [ebp-214h]
  float v79; // [esp+38h] [ebp-214h]
  int v80; // [esp+38h] [ebp-214h]
  float v81; // [esp+3Ch] [ebp-210h]
  float v82; // [esp+3Ch] [ebp-210h]
  int v83; // [esp+40h] [ebp-20Ch]
  int v84; // [esp+40h] [ebp-20Ch]
  float v85; // [esp+40h] [ebp-20Ch]
  int v86; // [esp+44h] [ebp-208h]
  SpeedTreeShaderPPLightingProperty *v87; // [esp+44h] [ebp-208h]
  float v88; // [esp+48h] [ebp-204h]
  float v89; // [esp+48h] [ebp-204h]
  float v90; // [esp+48h] [ebp-204h]
  int *v91; // [esp+4Ch] [ebp-200h]
  int v92; // [esp+4Ch] [ebp-200h]
  BSShaderPPLightingProperty::TangentSpaceData *v93; // [esp+50h] [ebp-1FCh] BYREF
  SpeedTreeShaderPPLightingProperty *v94; // [esp+54h] [ebp-1F8h]
  float v95; // [esp+58h] [ebp-1F4h]
  _DWORD *v96; // [esp+5Ch] [ebp-1F0h]
  int v97; // [esp+60h] [ebp-1ECh]
  int v98; // [esp+64h] [ebp-1E8h]
  int i; // [esp+68h] [ebp-1E4h]
  void **v100; // [esp+6Ch] [ebp-1E0h] BYREF
  int *v101; // [esp+70h] [ebp-1DCh]
  __int16 v102; // [esp+74h] [ebp-1D8h]
  unsigned __int16 v103; // [esp+76h] [ebp-1D6h]
  __int16 v104; // [esp+78h] [ebp-1D4h]
  __int16 v105; // [esp+7Ah] [ebp-1D2h]
  float v106; // [esp+7Ch] [ebp-1D0h]
  float v107; // [esp+80h] [ebp-1CCh]
  float v108; // [esp+84h] [ebp-1C8h]
  float *v109; // [esp+88h] [ebp-1C4h]
  float *v110; // [esp+8Ch] [ebp-1C0h]
  unsigned int v111; // [esp+90h] [ebp-1BCh]
  int v112; // [esp+94h] [ebp-1B8h]
  _WORD *v113; // [esp+98h] [ebp-1B4h]
  float v114; // [esp+9Ch] [ebp-1B0h]
  float v115; // [esp+A0h] [ebp-1ACh]
  float v116; // [esp+A4h] [ebp-1A8h]
  float v117; // [esp+A8h] [ebp-1A4h]
  float v118; // [esp+ACh] [ebp-1A0h]
  float v119; // [esp+B0h] [ebp-19Ch]
  float v120; // [esp+B4h] [ebp-198h]
  float v121; // [esp+B8h] [ebp-194h]
  float v122; // [esp+BCh] [ebp-190h]
  float v123; // [esp+C0h] [ebp-18Ch]
  float v124; // [esp+C4h] [ebp-188h]
  float v125; // [esp+C8h] [ebp-184h]
  float v126; // [esp+CCh] [ebp-180h]
  float v127; // [esp+D0h] [ebp-17Ch]
  float v128; // [esp+D4h] [ebp-178h]
  float v129; // [esp+D8h] [ebp-174h]
  float Src[2]; // [esp+DCh] [ebp-170h] BYREF
  unsigned __int16 *v131; // [esp+E4h] [ebp-168h]
  const void **v132; // [esp+E8h] [ebp-164h]
  unsigned __int16 v133; // [esp+ECh] [ebp-160h]
  int v134; // [esp+F0h] [ebp-15Ch]
  float *v135; // [esp+F4h] [ebp-158h]
  int v136; // [esp+F8h] [ebp-154h]
  int v137; // [esp+FCh] [ebp-150h]
  int v138; // [esp+100h] [ebp-14Ch]
  int v139; // [esp+104h] [ebp-148h]
  int v140; // [esp+10Ch] [ebp-140h]
  int v141; // [esp+110h] [ebp-13Ch]
  unsigned int v142; // [esp+248h] [ebp-4h]

  v1 = this;
  v96 = this;
  sub_7879A0(Src);
  v2 = v1[3] == 0;
  v142 = 0;
  if ( v2 )
    goto LABEL_106;
  if ( v1[2] == 2 )
    goto LABEL_106;
  v3 = (int *)v1[5];
  if ( v3 )
  {
    v4 = (unsigned int)(v3 + 0xFFFFFFFF);
    _LN21(v3, 4u, v3[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v4);
    v1[5] = 0;
  }
  v5 = (int *)v1[9];
  if ( v5 )
  {
    v6 = (unsigned int)(v5 + 0xFFFFFFFF);
    _LN21(v5, 4u, v5[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v6);
    v1[9] = 0;
  }
  v7 = (void *)v1[3];
  if ( !v7 )
    goto LABEL_106;
  LOWORD(v8) = sub_7871F0(v7);
  v97 = (unsigned __int16)v8;
  if ( !(_WORD)v8 )
    goto LABEL_106;
  *(_QWORD *)((char *)&v70 + 4) = 0xFFFFFFFFFFFFFFFFuLL;
  LODWORD(v70) = 0xFFFFFFFF;
  sub_78C6F0((float *)v1[3], Src, 1, v70, *((rsize_t *)&v70 + 1), v73);
  if ( v138 )
  {
    if ( v135 )
    {
      if ( v139 )
      {
        if ( v134 )
        {
          if ( v140 )
          {
            if ( v141 )
            {
              v93 = (BSShaderPPLightingProperty::TangentSpaceData *)v133;
              if ( v133 )
              {
                v8 = (unsigned __int16)v8;
                v9 = (unsigned __int64)(unsigned __int16)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v8;
                v10 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
                v94 = v10;
                LOBYTE(v142) = 1;
                if ( v10 )
                {
                  v11 = (_DWORD *)((char *)v10 + 4);
                  *(_DWORD *)v10 = (unsigned __int16)v8;
                  ArrayConstructor(
                    (char *)v10 + 4,
                    4u,
                    (unsigned __int16)v8,
                    (int)Concurrency::details::_NonReentrantLock::_Release,
                    (void (__thiscall *)(void *))sub_7016A0);
                }
                else
                {
                  v11 = 0;
                }
                LOBYTE(v142) = 0;
                v1[5] = v11;
                v12 = (unsigned __int64)(unsigned __int16)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v8;
                v13 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(__CFADD__(v12, 4) ? 0xFFFFFFFF : v12 + 4);
                v94 = v13;
                LOBYTE(v142) = 2;
                if ( v13 )
                {
                  v14 = (_DWORD *)((char *)v13 + 4);
                  *(_DWORD *)v13 = (unsigned __int16)v8;
                  ArrayConstructor(
                    (char *)v13 + 4,
                    4u,
                    (unsigned __int16)v8,
                    (int)Concurrency::details::_NonReentrantLock::_Release,
                    (void (__thiscall *)(void *))sub_7016A0);
                }
                else
                {
                  v14 = 0;
                }
                LOBYTE(v142) = 0;
                v1[9] = v14;
                v15 = (unsigned __int64)(unsigned __int16)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v8;
                v16 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(__CFADD__(v15, 4) ? 0xFFFFFFFF : v15 + 4);
                v94 = v16;
                LOBYTE(v142) = 3;
                if ( v16 )
                {
                  v17 = (_DWORD *)((char *)v16 + 4);
                  *(_DWORD *)v16 = (unsigned __int16)v8;
                  ArrayConstructor(
                    (char *)v16 + 4,
                    4u,
                    (unsigned __int16)v8,
                    (int)Concurrency::details::_NonReentrantLock::_Release,
                    (void (__thiscall *)(void *))sub_7016A0);
                }
                else
                {
                  v17 = 0;
                }
                v2 = (_WORD)v97 == 0;
                LOBYTE(v142) = 0;
                v1[0xB] = v17;
                if ( !v2 )
                {
                  v18 = 0;
                  do
                  {
                    NiSmartPointer_Set__((Ni2DBuffer **)(v18 + v1[5]), 0);
                    NiSmartPointer_Set__((Ni2DBuffer **)(v18 + v1[9]), 0);
                    NiSmartPointer_Set__((Ni2DBuffer **)(v18 + v1[0xB]), 0);
                    v18 += 4;
                    --v8;
                  }
                  while ( v8 );
                }
                if ( v137 )
                {
                  if ( v136 )
                  {
                    v19 = (unsigned __int16)v93;
                    if ( (_WORD)v93 )
                    {
                      v20 = v135;
                      do
                      {
                        v21 = v20[1];
                        v22 = v20[2];
                        v106 = *v20;
                        v107 = v21;
                        v108 = v22;
                        if ( _isnan(v106) || _isnan(v107) || _isnan(v108) )
                        {
                          *(_DWORD *)v20 = dword_B258E8;
                          *((_DWORD *)v20 + 1) = dword_B258EC;
                          *((_DWORD *)v20 + 2) = dword_B258F0;
                        }
                        v20 += 3;
                        --v19;
                      }
                      while ( v19 );
                    }
                  }
                }
                v23 = 0;
                for ( i = 0; (unsigned __int16)v23 < (unsigned __int16)v97; i = v23 )
                {
                  *(_QWORD *)((char *)&v71 + 4) = 0xFFFFFFFFFFFFFFFFuLL;
                  LODWORD(v71) = v23;
                  sub_78C6F0((float *)v1[3], Src, 1, v71, *((rsize_t *)&v71 + 1), v74);
                  if ( v133 )
                  {
                    if ( v131 )
                    {
                      if ( v132 )
                      {
                        v24 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(2u);
                        v25 = *v131;
                        *(_WORD *)v24 = *v131;
                        v94 = v24;
                        v26 = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)v25 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v25);
                        LODWORD(v72) = 2 * *(unsigned __int16 *)v24;
                        v69 = *v132;
                        v113 = v26;
                        memcpy(v26, v69, v72);
                        v27 = FormHeapAlloc(v133);
                        _memset(v27, 0, v133);
                        for ( j = 0; j < *(unsigned __int16 *)v24; *(_BYTE *)(v26[j++] + v27) = 1 )
                          ;
                        v29 = 0;
                        v30 = 0;
                        v100 = &NiTArray<unsigned int>::`vftable';
                        v102 = 0;
                        v105 = 1;
                        v103 = 0;
                        v104 = 0;
                        v101 = 0;
                        LOBYTE(v142) = 4;
                        if ( v133 )
                        {
                          do
                          {
                            if ( *(_BYTE *)(v29 + v27) )
                            {
                              v93 = (BSShaderPPLightingProperty::TangentSpaceData *)v29;
                              NiTArray_Add((unsigned __int16 *)&v100, &v93);
                            }
                            ++v29;
                          }
                          while ( v29 < v133 );
                          v30 = v103;
                        }
                        FormHeapFree(v27);
                        v31 = 0;
                        if ( v30 )
                        {
                          v32 = v101;
                          do
                          {
                            v33 = *v32;
                            for ( k = 0; k < *(unsigned __int16 *)v24; ++k )
                            {
                              if ( *((unsigned __int16 *)*v132 + k) == v33 )
                                v113[k] = v31;
                            }
                            ++v31;
                            ++v32;
                          }
                          while ( v31 < v30 );
                        }
                        v35 = v30;
                        v112 = FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                        v110 = (float *)FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                        v109 = (float *)FormHeapAlloc((unsigned __int64)v30 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v30);
                        v86 = 0;
                        v98 = 0;
                        v93 = 0;
                        if ( v137 )
                        {
                          if ( v136 )
                          {
                            v86 = FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                            v36 = FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                            v98 = v36;
                            v37 = (BSShaderPPLightingProperty::TangentSpaceData *)FormHeapAlloc(0x14u);
                            LOBYTE(v142) = 5;
                            if ( v37 )
                              v38 = BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(v37, 1);
                            else
                              v38 = 0;
                            LOBYTE(v142) = 4;
                            v93 = v38;
                            *((_DWORD *)v38 + 3) = v86;
                            *((_DWORD *)v38 + 4) = v36;
                          }
                        }
                        if ( v103 )
                        {
                          v39 = v110;
                          v40 = v109;
                          LODWORD(v95) = v86 - (_DWORD)v110;
                          v41 = v112 - (_DWORD)v110;
                          v91 = v101;
                          v83 = v98 - (_DWORD)v110;
                          v111 = v35;
                          do
                          {
                            v42 = 3 * *v91;
                            v43 = 2 * *v91;
                            v75 = *(float *)(v138 + 0xC * *v91 + 4);
                            v81 = *(float *)(v138 + 0xC * *v91 + 8);
                            v117 = *(float *)(v138 + 0xC * *v91);
                            *(float *)((char *)v39 + v41) = v117;
                            v118 = v75;
                            *(float *)((char *)v39 + v41 + 4) = v75;
                            v119 = v81;
                            *(float *)((char *)v39 + v41 + 8) = v81;
                            v76 = v135[v42 + 1];
                            v88 = v135[v42 + 2];
                            v114 = v135[v42];
                            *v39 = v114;
                            v115 = v76;
                            v39[1] = v76;
                            v116 = v88;
                            v39[2] = v88;
                            v77 = *(float *)(v139 + 4 * v43 + 4);
                            v106 = *(float *)(v139 + 4 * v43);
                            *v40 = v106;
                            v107 = v77;
                            v40[1] = v77;
                            if ( v86 )
                            {
                              if ( v98 )
                              {
                                v78 = *(float *)(v137 + 4 * v42 + 4);
                                v44 = v95;
                                v89 = *(float *)(v137 + 4 * v42 + 8);
                                v120 = *(float *)(v137 + 4 * v42);
                                *(float *)((char *)v39 + LODWORD(v95)) = v120;
                                v121 = v78;
                                *(float *)((char *)v39 + LODWORD(v44) + 4) = v78;
                                v122 = v89;
                                *(float *)((char *)v39 + LODWORD(v44) + 8) = v89;
                                v79 = *(float *)(v136 + 4 * v42 + 4);
                                v90 = *(float *)(v136 + 4 * v42 + 8);
                                v127 = *(float *)(v136 + 4 * v42);
                                *(float *)((char *)v39 + v83) = v127;
                                v128 = v79;
                                *(float *)((char *)v39 + v83 + 4) = v79;
                                v129 = v90;
                                *(float *)((char *)v39 + v83 + 8) = v90;
                              }
                            }
                            ++v91;
                            v40 += 2;
                            v39 += 3;
                            --v111;
                          }
                          while ( v111 );
                        }
                        v45 = FormHeapAlloc((unsigned __int64)v35 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v35);
                        v46 = v45;
                        v80 = v45;
                        if ( v103 )
                        {
                          v47 = v101;
                          v126 = 0.0;
                          v48 = v35;
                          v49 = dbl_A3DDD8;
                          do
                          {
                            v50 = *v47;
                            v84 = *(unsigned __int8 *)(v134 + 4 * *v47++ + 1);
                            v45 += 0x10;
                            v82 = (double)v84 / v49;
                            v95 = *(float *)(v140 + 4 * v50);
                            --v48;
                            v85 = (float)(4 * *(unsigned __int8 *)(v50 + v141));
                            v123 = v95;
                            *(float *)(v45 - 0x10) = v95;
                            v124 = v85;
                            *(float *)(v45 - 0xC) = v85;
                            v125 = v82;
                            *(float *)(v45 - 8) = v82;
                            *(float *)(v45 - 4) = 0.0;
                          }
                          while ( v48 );
                          v46 = v80;
                        }
                        v51 = (_DWORD *)FormHeapAlloc(0x10u);
                        LOBYTE(v142) = 6;
                        if ( v51 )
                        {
                          v52 = sub_7F2360(v51);
                          v92 = (int)v52;
                        }
                        else
                        {
                          v52 = 0;
                          v92 = 0;
                        }
                        if ( v52 )
                          InterlockedIncrement(v52 + 1);
                        LOBYTE(v142) = 7;
                        v52[2] = v46;
                        *((_WORD *)v52 + 6) = v35;
                        v53 = COERCE_FLOAT(FormHeapAlloc(0x50u));
                        v95 = v53;
                        LOBYTE(v142) = 8;
                        if ( v53 == 0.0 )
                          v54 = 0;
                        else
                          v54 = (volatile LONG *)sub_719CB0(
                                                   (_WORD *)LODWORD(v53),
                                                   v35,
                                                   v112,
                                                   (int)v110,
                                                   0,
                                                   (int)v109,
                                                   1,
                                                   0,
                                                   *v131 - 2,
                                                   1,
                                                   (int)v94,
                                                   (int)v113);
                        v55 = v96[5];
                        v56 = 4 * (unsigned __int16)i;
                        v57 = *(volatile LONG **)(v55 + v56);
                        v58 = (volatile LONG **)(v56 + v55);
                        LOBYTE(v142) = 7;
                        if ( v57 != v54 )
                        {
                          if ( v57 )
                          {
                            if ( !InterlockedDecrement(v57 + 1) )
                              (**(void (__thiscall ***)(volatile LONG *, int))v57)(v57, 1);
                          }
                          *v58 = v54;
                          if ( v54 )
                            InterlockedIncrement(v54 + 1);
                        }
                        v59 = v96;
                        *(_WORD *)(*(_DWORD *)(v56 + v96[5]) + 0x2E) = *(_WORD *)(*(_DWORD *)(v56 + v96[5]) + 0x2E)
                                                                     & 0xFFF
                                                                     | 0x4000;
                        *(_BYTE *)(*(_DWORD *)(v56 + v59[5]) + 0x30) = 0x11;
                        *(_BYTE *)(*(_DWORD *)(v56 + v59[5]) + 0x31) = 0x1F;
                        v60 = (SpeedTreeShaderPPLightingProperty *)FormHeapAlloc(0xF4u);
                        v94 = v60;
                        LOBYTE(v142) = 9;
                        if ( v60 )
                          v87 = sub_7F2030(v60, v92);
                        else
                          v87 = 0;
                        v61 = v59[9];
                        v62 = *(volatile LONG **)(v61 + v56);
                        v63 = (SpeedTreeShaderPPLightingProperty **)(v56 + v61);
                        LOBYTE(v142) = 7;
                        if ( v62 != (volatile LONG *)v87 )
                        {
                          if ( v62 )
                          {
                            if ( !InterlockedDecrement(v62 + 1) )
                              (**(void (__thiscall ***)(volatile LONG *, int))v62)(v62, 1);
                          }
                          *v63 = v87;
                          if ( v87 )
                            InterlockedIncrement((volatile LONG *)v87 + 1);
                        }
                        v64 = v93;
                        if ( v93 )
                        {
                          v65 = *(_DWORD *)(v56 + v59[9]);
                          v66 = *(volatile LONG **)(v65 + 0xD4);
                          if ( v66 != (volatile LONG *)v93 )
                          {
                            if ( v66 )
                            {
                              if ( !InterlockedDecrement(v66 + 1) )
                                (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
                            }
                            *(_DWORD *)(v65 + 0xD4) = v64;
                            InterlockedIncrement((volatile LONG *)v64 + 1);
                          }
                        }
                        LOBYTE(v142) = 4;
                        if ( !InterlockedDecrement((volatile LONG *)(v92 + 4)) )
                          (**(void (__thiscall ***)(int, int))v92)(v92, 1);
                        LOBYTE(v142) = 0;
                        v100 = &NiTArray<unsigned int>::`vftable';
                        FormHeapFree((unsigned int)v101);
                        v23 = i;
                        v1 = v96;
                      }
                    }
                  }
                  ++v23;
                }
                sub_788FD0((_DWORD *)v1[3]);
                v67 = (_DWORD *)v1[3];
                v134 = 0;
                unknown_libname_13_0(v67);
                v140 = 0;
                v141 = 0;
LABEL_106:
                v142 = 0xFFFFFFFF;
                return sub_787B20(Src);
              }
            }
          }
        }
      }
    }
  }
  v142 = 0xFFFFFFFF;
  return sub_787B20(Src);
}
