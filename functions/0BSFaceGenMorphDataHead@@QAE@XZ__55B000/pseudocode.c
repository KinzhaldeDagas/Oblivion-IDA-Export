BSFaceGenMorphDataHead *__thiscall BSFaceGenMorphDataHead::BSFaceGenMorphDataHead(
        BSFaceGenMorphDataHead *this,
        _DWORD *a2)
{
  BSFaceGenMorphDataHead *v2; // ebp
  unsigned int v3; // ebx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  const char *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // ebp
  unsigned int v20; // edx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // ecx
  unsigned int v24; // ebx
  int v25; // ebp
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // edi
  int v32; // eax
  int v33; // eax
  int v34; // edi
  int v35; // edi
  int v36; // eax
  double v37; // st7
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  const char *v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // edx
  unsigned int v45; // edi
  unsigned int v46; // edx
  _DWORD *v47; // eax
  _DWORD *v48; // eax
  int v49; // ecx
  unsigned int v50; // ebx
  int v51; // ebp
  int v52; // eax
  int v53; // edi
  int v54; // eax
  int v55; // eax
  int v56; // edi
  int v57; // edi
  int v58; // eax
  int v59; // eax
  int v60; // edi
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  int v64; // eax
  const char *v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // edx
  unsigned int v69; // edi
  unsigned int v70; // edx
  _DWORD *v71; // eax
  _DWORD *v72; // eax
  int v73; // ecx
  unsigned int v74; // ebx
  int v75; // ebp
  int v76; // eax
  int v77; // edi
  int v78; // eax
  int v79; // eax
  int v80; // edi
  int v81; // edi
  int v82; // eax
  int v83; // eax
  int v84; // edi
  int v85; // eax
  _DWORD *v86; // eax
  int v87; // eax
  int v88; // edx
  unsigned int v89; // edi
  _DWORD *v90; // eax
  _DWORD *v91; // eax
  int v92; // edi
  int v93; // eax
  int v94; // ebp
  int v95; // eax
  int v96; // eax
  int v97; // edx
  int v98; // ebp
  int v99; // eax
  int v100; // eax
  int v101; // ebx
  int v102; // ecx
  int v103; // eax
  int v104; // ebp
  double v105; // st7
  float v106; // ecx
  int v107; // eax
  int v108; // edi
  int v109; // ebp
  int v110; // eax
  int v111; // eax
  const char *v112; // eax
  int v113; // edi
  int v114; // eax
  int v115; // eax
  const char *v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  const char *v120; // eax
  void (__thiscall ***v121)(_DWORD, int); // ecx
  int v122; // eax
  int *v123; // ebp
  int v124; // eax
  unsigned int v125; // ebx
  _DWORD *v126; // eax
  _DWORD *v127; // eax
  int v128; // ecx
  unsigned int v129; // edi
  int v130; // ecx
  int v131; // edi
  int v132; // eax
  int v133; // eax
  const char *v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  const char *v138; // eax
  void (__thiscall ***v139)(_DWORD, int); // ecx
  int v140; // eax
  int *v141; // ebp
  int v142; // eax
  unsigned int v143; // ebx
  _DWORD *v144; // eax
  _DWORD *v145; // eax
  int v146; // ecx
  unsigned int v147; // edi
  int v148; // ecx
  int v149; // edi
  int v150; // eax
  int v151; // eax
  const char *v152; // eax
  int v153; // eax
  int v154; // eax
  int v155; // eax
  const char *v156; // eax
  void (__thiscall ***v157)(_DWORD, int); // ecx
  int v158; // eax
  int *v159; // ebp
  int v160; // eax
  unsigned int v161; // ebx
  _DWORD *v162; // eax
  _DWORD *v163; // eax
  int v164; // ecx
  unsigned int v165; // edi
  int v166; // ecx
  _DWORD *v167; // eax
  int v168; // eax
  int v169; // eax
  const char *v170; // eax
  void (__thiscall ***v171)(_DWORD, int); // ecx
  int v172; // eax
  int *v173; // ebp
  int v174; // eax
  unsigned int v175; // ebx
  _DWORD *v176; // eax
  _DWORD *v177; // eax
  int v178; // edx
  unsigned int v179; // edi
  int v180; // ecx
  unsigned int v183; // [esp+18h] [ebp-54h]
  unsigned int v184; // [esp+18h] [ebp-54h]
  unsigned int v185; // [esp+18h] [ebp-54h]
  unsigned int v186; // [esp+18h] [ebp-54h]
  int v187; // [esp+1Ch] [ebp-50h]
  int v188; // [esp+20h] [ebp-4Ch]
  int v189; // [esp+20h] [ebp-4Ch]
  int v190; // [esp+20h] [ebp-4Ch]
  int v191; // [esp+20h] [ebp-4Ch]
  int v192; // [esp+20h] [ebp-4Ch]
  int v193; // [esp+20h] [ebp-4Ch]
  int v194; // [esp+20h] [ebp-4Ch]
  int i; // [esp+20h] [ebp-4Ch]
  int v196; // [esp+24h] [ebp-48h]
  float v197; // [esp+24h] [ebp-48h]
  float v198; // [esp+24h] [ebp-48h]
  unsigned int v199; // [esp+24h] [ebp-48h]
  int v200; // [esp+24h] [ebp-48h]
  int v201; // [esp+28h] [ebp-44h]
  float v202; // [esp+28h] [ebp-44h]
  int v203; // [esp+28h] [ebp-44h]
  float v204; // [esp+28h] [ebp-44h]
  int v205; // [esp+28h] [ebp-44h]
  float v206; // [esp+28h] [ebp-44h]
  float v207; // [esp+2Ch] [ebp-40h]
  int v208; // [esp+2Ch] [ebp-40h]
  float v209; // [esp+2Ch] [ebp-40h]
  int v210; // [esp+2Ch] [ebp-40h]
  float v211; // [esp+2Ch] [ebp-40h]
  int v212; // [esp+2Ch] [ebp-40h]
  float v213; // [esp+34h] [ebp-38h]
  float v214; // [esp+54h] [ebp-18h]
  float v215; // [esp+5Ch] [ebp-10h]
  unsigned int v216; // [esp+70h] [ebp+4h]
  int v217; // [esp+70h] [ebp+4h]

  v2 = this; /*0x55b027*/
  v3 = 0; /*0x55b02d*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x55b034*/
  *((_DWORD *)this + 1) = 0; /*0x55b03b*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x55b03e*/
  *(_DWORD *)v2 = &BSFaceGenMorphDataHead::`vftable'; /*0x55b04e*/
  *((_DWORD *)v2 + 2) = 0; /*0x55b055*/
  *((_DWORD *)v2 + 3) = 0; /*0x55b058*/
  *((_DWORD *)v2 + 4) = 0; /*0x55b05b*/
  *((_DWORD *)v2 + 5) = 0; /*0x55b05e*/
  if ( a2 )
  {
    v5 = 0; /*0x55b067*/
LABEL_3:
    while ( 1 )
    {
      v6 = a2[0x21]; /*0x55b069*/
      v216 = v5; /*0x55b071*/
      if ( !v6 || v5 >= (a2[0x22] - v6) / 0x2C ) /*0x55b096*/
        break; /*0x55b096*/
      v7 = 0; /*0x55b09e*/
      v8 = 0x2C * v5; /*0x55b0a0*/
      v187 = 0x2C * v5; /*0x55b0a3*/
      while ( 1 )
      {
        v9 = a2[0x21]; /*0x55b0a7*/
        if ( !v9 || v5 >= (a2[0x22] - v9) / 0x2C ) /*0x55b0cc*/
          _invalid_parameter_noinfo(v7, v5, (int)a2); /*0x55b0ce*/
        v10 = v8 + a2[0x21]; /*0x55b0d9*/
        v11 = *(_DWORD *)(v10 + 0x18) < 0x10u ? (const char *)(v10 + 4) : *(const char **)(v10 + 4);
        if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v7 + 0xB11FF0), v11) ) /*0x55b0f2*/
          break; /*0x55b0f2*/
        if ( ++v7 >= 0xD )
        {
          v12 = 0; /*0x55b106*/
          while ( 1 )
          {
            v13 = a2[0x21]; /*0x55b108*/
            if ( !v13 || v5 >= (a2[0x22] - v13) / 0x2C ) /*0x55b12d*/
              _invalid_parameter_noinfo(v12, v5, (int)a2); /*0x55b12f*/
            v14 = v8 + a2[0x21]; /*0x55b13a*/
            v15 = *(_DWORD *)(v14 + 0x18) < 0x10u ? (const char *)(v14 + 4) : *(const char **)(v14 + 4);
            if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v12 + 0xB12028), v15) ) /*0x55b3cf*/
              break; /*0x55b3cf*/
            if ( ++v12 >= 0x11 )
            {
              v38 = 0; /*0x55b3e7*/
              while ( 1 )
              {
                v39 = a2[0x21]; /*0x55b3e9*/
                if ( !v39 || v5 >= (a2[0x22] - v39) / 0x2C ) /*0x55b40e*/
                  _invalid_parameter_noinfo(v38, v5, (int)a2); /*0x55b410*/
                v40 = v8 + a2[0x21]; /*0x55b41b*/
                v41 = *(_DWORD *)(v40 + 0x18) < 0x10u ? (const char *)(v40 + 4) : *(const char **)(v40 + 4);
                if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v38 + 0xB12070), v41) ) /*0x55b6a8*/
                  break; /*0x55b6a8*/
                if ( ++v38 >= 0x10 )
                {
                  v62 = 0; /*0x55b6c0*/
                  while ( 1 )
                  {
                    v63 = a2[0x21]; /*0x55b6c2*/
                    if ( !v63 || v5 >= (a2[0x22] - v63) / 0x2C ) /*0x55b6e7*/
                      _invalid_parameter_noinfo(v62, v5, (int)a2); /*0x55b6e9*/
                    v64 = v8 + a2[0x21]; /*0x55b6f4*/
                    v65 = *(_DWORD *)(v64 + 0x18) < 0x10u ? (const char *)(v64 + 4) : *(const char **)(v64 + 4);
                    if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v62 + 0xB12024), v65) ) /*0x55b981*/
                      break; /*0x55b981*/
                    if ( ++v62 >= 1 ) /*0x55b993*/
                    {
                      v2 = this; /*0x55b99d*/
                      ++v5; /*0x55b9a1*/
                      v3 = 0; /*0x55b9a4*/
                      goto LABEL_3; /*0x55b9a6*/
                    }
                  }
                  if ( !*((_DWORD *)this + 5) ) /*0x55b9af*/
                  {
                    v86 = (_DWORD *)FormHeapAlloc(4u); /*0x55b9b7*/
                    *((_DWORD *)this + 5) = v86; /*0x55b9c0*/
                    *v86 = 0; /*0x55b9c6*/
                  }
                  v87 = a2[0x21]; /*0x55b9cc*/
                  if ( !v87 || v5 >= (a2[0x22] - v87) / 0x2C ) /*0x55b9f1*/
                    _invalid_parameter_noinfo(v62, v5, (int)a2); /*0x55b9f3*/
                  v88 = *(_DWORD *)(a2[0x21] + v8 + 0x20); /*0x55ba02*/
                  if ( v88 ) /*0x55ba07*/
                  {
                    v186 = (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v88) / 0xC; /*0x55ba26*/
                    v89 = v186; /*0x55ba2a*/
                  }
                  else
                  {
                    v89 = 0; /*0x55ba09*/
                    v186 = 0; /*0x55ba0b*/
                  }
                  v90 = (_DWORD *)FormHeapAlloc(0xCu); /*0x55ba2e*/
                  if ( v90 ) /*0x55ba41*/
                    v91 = sub_55A0C0(v90, v89); /*0x55ba46*/
                  else
                    v91 = 0; /*0x55ba4d*/
                  *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v62) = v91; /*0x55ba58*/
                  v191 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * v62) + 4); /*0x55ba69*/
                  v199 = 0; /*0x55ba6d*/
                  if ( v89 ) /*0x55ba75*/
                  {
                    v92 = 0; /*0x55ba7b*/
                    do /*0x55bc02*/
                    {
                      v93 = a2[0x21]; /*0x55ba80*/
                      if ( !v93 || v216 >= (a2[0x22] - v93) / 0x2C ) /*0x55baa9*/
                        _invalid_parameter_noinfo(v216, v92, (int)a2); /*0x55baab*/
                      v94 = v187 + a2[0x21] + 0x1C; /*0x55baba*/
                      v95 = *(_DWORD *)(v187 + a2[0x21] + 0x20); /*0x55babe*/
                      if ( !v95 || v199 >= (*(_DWORD *)(v187 + a2[0x21] + 0x24) - v95) / 0xC ) /*0x55bade*/
                        _invalid_parameter_noinfo(v216, v92, (int)a2); /*0x55bae0*/
                      v96 = a2[0x21]; /*0x55bae8*/
                      v212 = v92 + *(_DWORD *)(v94 + 4); /*0x55baf2*/
                      if ( !v96 || v216 >= (a2[0x22] - v96) / 0x2C ) /*0x55bb13*/
                        _invalid_parameter_noinfo(v216, v92, (int)a2); /*0x55bb15*/
                      v97 = a2[0x21]; /*0x55bb1e*/
                      v98 = v187 + v97 + 0x1C; /*0x55bb24*/
                      v99 = *(_DWORD *)(v187 + v97 + 0x20); /*0x55bb28*/
                      if ( !v99 || v199 >= (*(_DWORD *)(v187 + v97 + 0x24) - v99) / 0xC ) /*0x55bb48*/
                        _invalid_parameter_noinfo(v216, v92, (int)a2); /*0x55bb4a*/
                      v100 = a2[0x21]; /*0x55bb52*/
                      v101 = v92 + *(_DWORD *)(v98 + 4); /*0x55bb58*/
                      if ( !v100 || v216 >= (a2[0x22] - v100) / 0x2C ) /*0x55bb7b*/
                        _invalid_parameter_noinfo(v101, v92, (int)a2); /*0x55bb7d*/
                      v102 = a2[0x21]; /*0x55bb82*/
                      v103 = *(_DWORD *)(v187 + v102 + 0x20); /*0x55bb8c*/
                      v104 = v187 + v102 + 0x1C; /*0x55bb92*/
                      if ( !v103 || v199 >= (*(_DWORD *)(v187 + v102 + 0x24) - v103) / 0xC ) /*0x55bbb1*/
                        _invalid_parameter_noinfo(v101, v92, (int)a2); /*0x55bbb3*/
                      v214 = *(float *)(v92 + *(_DWORD *)(v104 + 4)); /*0x55bbc6*/
                      v92 += 0xC; /*0x55bbd5*/
                      v105 = *(float *)(v212 + 8); /*0x55bbd8*/
                      v106 = *(float *)(v101 + 4); /*0x55bbdb*/
                      *(float *)(v92 + v191 - 0xC) = v214; /*0x55bbdf*/
                      v215 = v105; /*0x55bbe3*/
                      *(float *)(v92 + v191 - 8) = v106; /*0x55bbeb*/
                      *(float *)(v92 + v191 - 4) = v215; /*0x55bbef*/
                      ++v199; /*0x55bbfe*/
                    }
                    while ( v199 < v186 ); /*0x55bc02*/
                  }
                  goto LABEL_174; /*0x55bc02*/
                }
              }
              if ( !*((_DWORD *)this + 4) ) /*0x55b70c*/
              {
                v66 = FormHeapAlloc(0x40u); /*0x55b714*/
                *((_DWORD *)this + 4) = v66; /*0x55b722*/
                _memset(v66, 0, 0x40u); /*0x55b725*/
              }
              v67 = a2[0x21]; /*0x55b72d*/
              if ( !v67 || v5 >= (a2[0x22] - v67) / 0x2C ) /*0x55b752*/
                _invalid_parameter_noinfo(v38, v5, (int)a2); /*0x55b754*/
              v68 = *(_DWORD *)(a2[0x21] + v8 + 0x20); /*0x55b763*/
              if ( v68 ) /*0x55b768*/
              {
                v70 = (int)((unsigned __int64)(0x2AAAAAABLL * (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v68)) >> 0x20) >> 1; /*0x55b77a*/
                v69 = v70 + (v70 >> 0x1F); /*0x55b781*/
              }
              else
              {
                v69 = 0; /*0x55b76a*/
              }
              v185 = v69; /*0x55b785*/
              v71 = (_DWORD *)FormHeapAlloc(0xCu); /*0x55b789*/
              if ( v71 ) /*0x55b79c*/
                v72 = sub_55A0C0(v71, v69); /*0x55b7a1*/
              else
                v72 = 0; /*0x55b7a8*/
              *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v38) = v72; /*0x55b7b1*/
              v73 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v38) + 4); /*0x55b7ba*/
              v74 = 0; /*0x55b7bd*/
              v190 = v73; /*0x55b7c8*/
              if ( v69 ) /*0x55b7cc*/
              {
                v75 = 0; /*0x55b7d2*/
                do /*0x55b95d*/
                {
                  v76 = a2[0x21]; /*0x55b7d4*/
                  if ( !v76 || v216 >= (a2[0x22] - v76) / 0x2C ) /*0x55b7fb*/
                    _invalid_parameter_noinfo(v74, v69, (int)a2); /*0x55b7fd*/
                  v77 = v187 + a2[0x21]; /*0x55b808*/
                  v78 = *(_DWORD *)(v77 + 0x20); /*0x55b80c*/
                  if ( !v78 || v74 >= (*(_DWORD *)(v77 + 0x24) - v78) / 0xC ) /*0x55b82a*/
                    _invalid_parameter_noinfo(v74, v77, (int)a2); /*0x55b82c*/
                  v79 = a2[0x21]; /*0x55b834*/
                  v80 = v75 + *(_DWORD *)(v77 + 0x20); /*0x55b83a*/
                  v205 = v80; /*0x55b83e*/
                  if ( !v79 || v216 >= (a2[0x22] - v79) / 0x2C ) /*0x55b861*/
                    _invalid_parameter_noinfo(v74, v80, (int)a2); /*0x55b863*/
                  v81 = v187 + a2[0x21]; /*0x55b86e*/
                  v82 = *(_DWORD *)(v81 + 0x20); /*0x55b872*/
                  if ( !v82 || v74 >= (*(_DWORD *)(v81 + 0x24) - v82) / 0xC ) /*0x55b890*/
                    _invalid_parameter_noinfo(v74, v81, (int)a2); /*0x55b892*/
                  v83 = a2[0x21]; /*0x55b89a*/
                  v84 = v75 + *(_DWORD *)(v81 + 0x20); /*0x55b8a0*/
                  v210 = v84; /*0x55b8a4*/
                  if ( !v83 || v216 >= (a2[0x22] - v83) / 0x2C ) /*0x55b8c7*/
                    _invalid_parameter_noinfo(v74, v84, (int)a2); /*0x55b8c9*/
                  v69 = v187 + a2[0x21]; /*0x55b8d4*/
                  v85 = *(_DWORD *)(v69 + 0x20); /*0x55b8d8*/
                  if ( !v85 || v74 >= (*(_DWORD *)(v69 + 0x24) - v85) / 0xC ) /*0x55b8f6*/
                    _invalid_parameter_noinfo(v74, v69, (int)a2); /*0x55b8f8*/
                  v198 = *(float *)(*(_DWORD *)(v69 + 0x20) + v75); /*0x55b907*/
                  v211 = *(float *)(v210 + 4); /*0x55b914*/
                  ++v74; /*0x55b918*/
                  v206 = *(float *)(v205 + 8); /*0x55b922*/
                  v75 += 0xC; /*0x55b926*/
                  *(float *)(v190 + v75 - 0xC) = v198; /*0x55b93d*/
                  *(float *)(v190 + v75 - 8) = v211; /*0x55b94d*/
                  *(float *)(v190 + v75 - 4) = v206; /*0x55b959*/
                }
                while ( v74 < v185 ); /*0x55b95d*/
                v2 = this; /*0x55b967*/
                v5 = v216 + 1; /*0x55b96b*/
                v3 = 0; /*0x55b96e*/
                goto LABEL_3; /*0x55b970*/
              }
              goto LABEL_174; /*0x55b7cc*/
            }
          }
          if ( !*((_DWORD *)this + 3) ) /*0x55b433*/
          {
            v42 = FormHeapAlloc(0x44u); /*0x55b43b*/
            *((_DWORD *)this + 3) = v42; /*0x55b449*/
            _memset(v42, 0, 0x44u); /*0x55b44c*/
          }
          v43 = a2[0x21]; /*0x55b454*/
          if ( !v43 || v5 >= (a2[0x22] - v43) / 0x2C ) /*0x55b479*/
            _invalid_parameter_noinfo(v12, v5, (int)a2); /*0x55b47b*/
          v44 = *(_DWORD *)(a2[0x21] + v8 + 0x20); /*0x55b48a*/
          if ( v44 ) /*0x55b48f*/
          {
            v46 = (int)((unsigned __int64)(0x2AAAAAABLL * (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v44)) >> 0x20) >> 1; /*0x55b4a1*/
            v45 = v46 + (v46 >> 0x1F); /*0x55b4a8*/
          }
          else
          {
            v45 = 0; /*0x55b491*/
          }
          v184 = v45; /*0x55b4ac*/
          v47 = (_DWORD *)FormHeapAlloc(0xCu); /*0x55b4b0*/
          if ( v47 ) /*0x55b4c3*/
            v48 = sub_55A0C0(v47, v45); /*0x55b4c8*/
          else
            v48 = 0; /*0x55b4cf*/
          *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12) = v48; /*0x55b4d8*/
          v49 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12) + 4); /*0x55b4e1*/
          v50 = 0; /*0x55b4e4*/
          v189 = v49; /*0x55b4ef*/
          if ( v45 ) /*0x55b4f3*/
          {
            v51 = 0; /*0x55b4f9*/
            do /*0x55b684*/
            {
              v52 = a2[0x21]; /*0x55b4fb*/
              if ( !v52 || v216 >= (a2[0x22] - v52) / 0x2C ) /*0x55b522*/
                _invalid_parameter_noinfo(v50, v45, (int)a2); /*0x55b524*/
              v53 = v187 + a2[0x21]; /*0x55b52f*/
              v54 = *(_DWORD *)(v53 + 0x20); /*0x55b533*/
              if ( !v54 || v50 >= (*(_DWORD *)(v53 + 0x24) - v54) / 0xC ) /*0x55b551*/
                _invalid_parameter_noinfo(v50, v53, (int)a2); /*0x55b553*/
              v55 = a2[0x21]; /*0x55b55b*/
              v56 = v51 + *(_DWORD *)(v53 + 0x20); /*0x55b561*/
              v203 = v56; /*0x55b565*/
              if ( !v55 || v216 >= (a2[0x22] - v55) / 0x2C ) /*0x55b588*/
                _invalid_parameter_noinfo(v50, v56, (int)a2); /*0x55b58a*/
              v57 = v187 + a2[0x21]; /*0x55b595*/
              v58 = *(_DWORD *)(v57 + 0x20); /*0x55b599*/
              if ( !v58 || v50 >= (*(_DWORD *)(v57 + 0x24) - v58) / 0xC ) /*0x55b5b7*/
                _invalid_parameter_noinfo(v50, v57, (int)a2); /*0x55b5b9*/
              v59 = a2[0x21]; /*0x55b5c1*/
              v60 = v51 + *(_DWORD *)(v57 + 0x20); /*0x55b5c7*/
              v208 = v60; /*0x55b5cb*/
              if ( !v59 || v216 >= (a2[0x22] - v59) / 0x2C ) /*0x55b5ee*/
                _invalid_parameter_noinfo(v50, v60, (int)a2); /*0x55b5f0*/
              v45 = v187 + a2[0x21]; /*0x55b5fb*/
              v61 = *(_DWORD *)(v45 + 0x20); /*0x55b5ff*/
              if ( !v61 || v50 >= (*(_DWORD *)(v45 + 0x24) - v61) / 0xC ) /*0x55b61d*/
                _invalid_parameter_noinfo(v50, v45, (int)a2); /*0x55b61f*/
              v197 = *(float *)(*(_DWORD *)(v45 + 0x20) + v51); /*0x55b62e*/
              v209 = *(float *)(v208 + 4); /*0x55b63b*/
              ++v50; /*0x55b63f*/
              v204 = *(float *)(v203 + 8); /*0x55b649*/
              v51 += 0xC; /*0x55b64d*/
              *(float *)(v189 + v51 - 0xC) = v197; /*0x55b664*/
              *(float *)(v189 + v51 - 8) = v209; /*0x55b674*/
              *(float *)(v189 + v51 - 4) = v204; /*0x55b680*/
            }
            while ( v50 < v184 ); /*0x55b684*/
            v2 = this; /*0x55b68e*/
            v5 = v216 + 1; /*0x55b692*/
            v3 = 0; /*0x55b695*/
            goto LABEL_3; /*0x55b697*/
          }
          goto LABEL_174; /*0x55b4f3*/
        }
      }
      if ( !*((_DWORD *)this + 2) ) /*0x55b152*/
      {
        v16 = FormHeapAlloc(0x34u); /*0x55b15a*/
        *((_DWORD *)this + 2) = v16; /*0x55b168*/
        _memset(v16, 0, 0x34u); /*0x55b16b*/
      }
      v17 = a2[0x21]; /*0x55b173*/
      if ( !v17 || v5 >= (a2[0x22] - v17) / 0x2C ) /*0x55b198*/
        _invalid_parameter_noinfo(v7, v5, (int)a2); /*0x55b19a*/
      v18 = *(_DWORD *)(a2[0x21] + v8 + 0x20); /*0x55b1a9*/
      if ( v18 ) /*0x55b1ae*/
      {
        v20 = (int)((unsigned __int64)(0x2AAAAAABLL * (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v18)) >> 0x20) >> 1; /*0x55b1c0*/
        v19 = v20 + (v20 >> 0x1F); /*0x55b1c7*/
      }
      else
      {
        v19 = 0; /*0x55b1b0*/
      }
      v183 = v19; /*0x55b1cb*/
      v21 = (_DWORD *)FormHeapAlloc(0xCu); /*0x55b1cf*/
      if ( v21 ) /*0x55b1e2*/
        v22 = sub_55A0C0(v21, v19); /*0x55b1e7*/
      else
        v22 = 0; /*0x55b1ee*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v7) = v22; /*0x55b1f7*/
      v23 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v7) + 4); /*0x55b200*/
      v24 = 0; /*0x55b203*/
      v188 = v23; /*0x55b20c*/
      if ( !v19 ) /*0x55b210*/
      {
LABEL_174:
        v2 = this; /*0x55bc08*/
        v5 = v216 + 1; /*0x55bc10*/
        v3 = 0; /*0x55bc13*/
        continue; /*0x55bc15*/
      }
      v25 = 0; /*0x55b216*/
      while ( 1 ) /*0x55b224*/
      {
        v26 = a2[0x21]; /*0x55b224*/
        if ( !v26 || v5 >= (a2[0x22] - v26) / 0x2C ) /*0x55b249*/
          _invalid_parameter_noinfo(v24, v5, (int)a2); /*0x55b24b*/
        v27 = v187 + a2[0x21]; /*0x55b256*/
        v28 = *(_DWORD *)(v27 + 0x20); /*0x55b25a*/
        if ( !v28 || v24 >= (*(_DWORD *)(v27 + 0x24) - v28) / 0xC ) /*0x55b278*/
          _invalid_parameter_noinfo(v24, v27, (int)a2); /*0x55b27a*/
        v29 = a2[0x21]; /*0x55b282*/
        v30 = v25 + *(_DWORD *)(v27 + 0x20); /*0x55b288*/
        v201 = v30; /*0x55b28c*/
        if ( !v29 || v216 >= (a2[0x22] - v29) / 0x2C ) /*0x55b2af*/
          _invalid_parameter_noinfo(v24, v30, (int)a2); /*0x55b2b1*/
        v31 = v187 + a2[0x21]; /*0x55b2bc*/
        v32 = *(_DWORD *)(v31 + 0x20); /*0x55b2c0*/
        if ( !v32 || v24 >= (*(_DWORD *)(v31 + 0x24) - v32) / 0xC ) /*0x55b2de*/
          _invalid_parameter_noinfo(v24, v31, (int)a2); /*0x55b2e0*/
        v33 = a2[0x21]; /*0x55b2e8*/
        v34 = v25 + *(_DWORD *)(v31 + 0x20); /*0x55b2ee*/
        v196 = v34; /*0x55b2f2*/
        if ( !v33 || v216 >= (a2[0x22] - v33) / 0x2C ) /*0x55b315*/
          _invalid_parameter_noinfo(v24, v34, (int)a2); /*0x55b317*/
        v35 = v187 + a2[0x21]; /*0x55b322*/
        v36 = *(_DWORD *)(v35 + 0x20); /*0x55b326*/
        if ( !v36 || v24 >= (*(_DWORD *)(v35 + 0x24) - v36) / 0xC ) /*0x55b344*/
          _invalid_parameter_noinfo(v24, v35, (int)a2); /*0x55b346*/
        v207 = *(float *)(*(_DWORD *)(v35 + 0x20) + v25); /*0x55b355*/
        ++v24; /*0x55b366*/
        v202 = *(float *)(v201 + 8); /*0x55b370*/
        v25 += 0xC; /*0x55b374*/
        v37 = *(float *)(v196 + 4); /*0x55b387*/
        *(float *)(v188 + v25 - 0xC) = v207; /*0x55b38b*/
        v213 = v37; /*0x55b38f*/
        *(float *)(v188 + v25 - 8) = v213; /*0x55b39b*/
        *(float *)(v188 + v25 - 4) = v202; /*0x55b3a7*/
        if ( v24 >= v183 ) /*0x55b3ab*/
          break; /*0x55b3ab*/
        v5 = v216; /*0x55b220*/
      }
      v2 = this; /*0x55b3b5*/
      v5 = v216 + 1; /*0x55b3b9*/
      v3 = 0; /*0x55b3bc*/
    }
    v217 = 0; /*0x55bc1a*/
LABEL_176:
    while ( 1 )
    {
      v107 = a2[0x25]; /*0x55bc20*/
      if ( !v107 || v3 >= (a2[0x26] - v107) / 0x30 ) /*0x55bc49*/
        break; /*0x55bc49*/
      v108 = 0; /*0x55bc52*/
      v109 = 0x30 * v3; /*0x55bc54*/
      v200 = 0x30 * v3; /*0x55bc57*/
      while ( 1 )
      {
        v110 = a2[0x25]; /*0x55bc5b*/
        if ( !v110 || v3 >= (a2[0x26] - v110) / 0x30 ) /*0x55bc80*/
          _invalid_parameter_noinfo(v3, v108, (int)a2); /*0x55bc82*/
        v111 = v109 + a2[0x25]; /*0x55bc8d*/
        v112 = *(_DWORD *)(v111 + 0x18) < 0x10u ? (const char *)(v111 + 4) : *(const char **)(v111 + 4);
        if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v108 + 0xB11FF0), v112) ) /*0x55bca6*/
          break; /*0x55bca6*/
        if ( ++v108 >= 0xD )
        {
          v113 = 0; /*0x55bcba*/
          while ( 1 )
          {
            v114 = a2[0x25]; /*0x55bcbc*/
            if ( !v114 || v3 >= (a2[0x26] - v114) / 0x30 ) /*0x55bce1*/
              _invalid_parameter_noinfo(v3, v113, (int)a2); /*0x55bce3*/
            v115 = v109 + a2[0x25]; /*0x55bcee*/
            v116 = *(_DWORD *)(v115 + 0x18) < 0x10u ? (const char *)(v115 + 4) : *(const char **)(v115 + 4);
            if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v113 + 0xB12028), v116) ) /*0x55be7a*/
              break; /*0x55be7a*/
            if ( ++v113 >= 0x11 )
            {
              v131 = 0; /*0x55be92*/
              while ( 1 )
              {
                v132 = a2[0x25]; /*0x55be94*/
                if ( !v132 || v3 >= (a2[0x26] - v132) / 0x30 ) /*0x55beb9*/
                  _invalid_parameter_noinfo(v3, v131, (int)a2); /*0x55bebb*/
                v133 = v109 + a2[0x25]; /*0x55bec6*/
                v134 = *(_DWORD *)(v133 + 0x18) < 0x10u ? (const char *)(v133 + 4) : *(const char **)(v133 + 4);
                if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v131 + 0xB12070), v134) ) /*0x55c052*/
                  break; /*0x55c052*/
                if ( ++v131 >= 0x10 )
                {
                  v149 = 0; /*0x55c06a*/
                  while ( 1 )
                  {
                    v150 = a2[0x25]; /*0x55c06c*/
                    if ( !v150 || v3 >= (a2[0x26] - v150) / 0x30 ) /*0x55c091*/
                      _invalid_parameter_noinfo(v3, v149, (int)a2); /*0x55c093*/
                    v151 = v109 + a2[0x25]; /*0x55c09e*/
                    v152 = *(_DWORD *)(v151 + 0x18) < 0x10u ? (const char *)(v151 + 4) : *(const char **)(v151 + 4);
                    if ( !CRT_StricmpLocaleDispatch(*(const char **)(4 * v149 + 0xB12024), v152) ) /*0x55c22a*/
                      break; /*0x55c22a*/
                    if ( ++v149 >= 1 ) /*0x55c23c*/
                    {
                      v3 = ++v217; /*0x55c247*/
                      v2 = this; /*0x55c24b*/
                      goto LABEL_176; /*0x55c24f*/
                    }
                  }
                  if ( !*((_DWORD *)this + 5) ) /*0x55c258*/
                  {
                    v167 = (_DWORD *)FormHeapAlloc(4u); /*0x55c260*/
                    *((_DWORD *)this + 5) = v167; /*0x55c269*/
                    *v167 = 0; /*0x55c26f*/
                  }
                  if ( *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v149) ) /*0x55c27c*/
                  {
                    v168 = a2[0x25]; /*0x55c282*/
                    if ( !v168 || v3 >= (a2[0x26] - v168) / 0x30 ) /*0x55c2a7*/
                      _invalid_parameter_noinfo(v3, v149, (int)a2); /*0x55c2a9*/
                    v169 = v109 + a2[0x25]; /*0x55c2b4*/
                    if ( *(_DWORD *)(v169 + 0x18) < 0x10u ) /*0x55c2ba*/
                      v170 = (const char *)(v169 + 4); /*0x55c2c1*/
                    else
                      v170 = *(const char **)(v169 + 4); /*0x55c2bc*/
                    PrintError( /*0x55c2ca*/
                      "Statistical and Differential FaceGen morphs found for Custom Morph \"%s\".  Only statistical will be used.",
                      v170);
                    v171 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 5) + 4 * v149); /*0x55c2d6*/
                    if ( v171 ) /*0x55c2de*/
                      (**v171)(v171, 1); /*0x55c2e6*/
                  }
                  v172 = a2[0x25]; /*0x55c2e8*/
                  if ( !v172 || v3 >= (a2[0x26] - v172) / 0x30 ) /*0x55c30d*/
                    _invalid_parameter_noinfo(v3, v149, (int)a2); /*0x55c30f*/
                  v173 = (int *)(v200 + a2[0x25]); /*0x55c31a*/
                  v174 = v173[9]; /*0x55c31e*/
                  if ( v174 ) /*0x55c323*/
                    v175 = (v173[0xA] - v174) >> 2; /*0x55c32e*/
                  else
                    v175 = 0; /*0x55c325*/
                  v176 = (_DWORD *)FormHeapAlloc(0x10u); /*0x55c333*/
                  if ( v176 ) /*0x55c346*/
                    v177 = sub_55A010(v176, v175, v173[7]); /*0x55c34f*/
                  else
                    v177 = 0; /*0x55c356*/
                  *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v149) = v177; /*0x55c35f*/
                  v178 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * v149) + 4); /*0x55c368*/
                  v179 = 0; /*0x55c36b*/
                  for ( i = v178; v179 < v175; ++v179 ) /*0x55c378*/
                  {
                    v180 = v173[9]; /*0x55c37a*/
                    if ( !v180 || v179 >= (v173[0xA] - v180) >> 2 ) /*0x55c38b*/
                      _invalid_parameter_noinfo(v175, v179, (int)a2); /*0x55c38d*/
                    *(_DWORD *)(i + 4 * v179) = *(_DWORD *)(v173[9] + 4 * v179); /*0x55c39c*/
                  }
                  goto LABEL_318; /*0x55c3a4*/
                }
              }
              if ( !*((_DWORD *)this + 4) ) /*0x55c0b6*/
              {
                v153 = FormHeapAlloc(0x40u); /*0x55c0be*/
                *((_DWORD *)this + 4) = v153; /*0x55c0cc*/
                _memset(v153, 0, 0x40u); /*0x55c0cf*/
              }
              if ( *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v131) ) /*0x55c0de*/
              {
                v154 = a2[0x25]; /*0x55c0e4*/
                if ( !v154 || v3 >= (a2[0x26] - v154) / 0x30 ) /*0x55c109*/
                  _invalid_parameter_noinfo(v3, v131, (int)a2); /*0x55c10b*/
                v155 = v109 + a2[0x25]; /*0x55c116*/
                if ( *(_DWORD *)(v155 + 0x18) < 0x10u ) /*0x55c11c*/
                  v156 = (const char *)(v155 + 4); /*0x55c123*/
                else
                  v156 = *(const char **)(v155 + 4); /*0x55c11e*/
                PrintError( /*0x55c12c*/
                  "Statistical and Differential FaceGen morphs found for phoneme \"%s\".  Only statistical will be used.",
                  v156);
                v157 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 4) + 4 * v131); /*0x55c138*/
                if ( v157 ) /*0x55c140*/
                  (**v157)(v157, 1); /*0x55c148*/
              }
              v158 = a2[0x25]; /*0x55c14a*/
              if ( !v158 || v3 >= (a2[0x26] - v158) / 0x30 ) /*0x55c16f*/
                _invalid_parameter_noinfo(v3, v131, (int)a2); /*0x55c171*/
              v159 = (int *)(v200 + a2[0x25]); /*0x55c17c*/
              v160 = v159[9]; /*0x55c180*/
              if ( v160 ) /*0x55c185*/
                v161 = (v159[0xA] - v160) >> 2; /*0x55c190*/
              else
                v161 = 0; /*0x55c187*/
              v162 = (_DWORD *)FormHeapAlloc(0x10u); /*0x55c195*/
              if ( v162 ) /*0x55c1a8*/
                v163 = sub_55A010(v162, v161, v159[7]); /*0x55c1b1*/
              else
                v163 = 0; /*0x55c1b8*/
              *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v131) = v163; /*0x55c1c1*/
              v164 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v131) + 4); /*0x55c1ca*/
              v165 = 0; /*0x55c1cd*/
              v194 = v164; /*0x55c1d6*/
              if ( v161 ) /*0x55c1da*/
              {
                do /*0x55c20a*/
                {
                  v166 = v159[9]; /*0x55c1e0*/
                  if ( !v166 || v165 >= (v159[0xA] - v166) >> 2 ) /*0x55c1f1*/
                    _invalid_parameter_noinfo(v161, v165, (int)a2); /*0x55c1f3*/
                  *(_DWORD *)(v194 + 4 * v165) = *(_DWORD *)(v159[9] + 4 * v165); /*0x55c202*/
                  ++v165; /*0x55c205*/
                }
                while ( v165 < v161 ); /*0x55c20a*/
                v3 = ++v217; /*0x55c211*/
                v2 = this; /*0x55c215*/
                goto LABEL_176; /*0x55c219*/
              }
              goto LABEL_318; /*0x55c1da*/
            }
          }
          if ( !*((_DWORD *)this + 3) ) /*0x55bede*/
          {
            v135 = FormHeapAlloc(0x44u); /*0x55bee6*/
            *((_DWORD *)this + 3) = v135; /*0x55bef4*/
            _memset(v135, 0, 0x44u); /*0x55bef7*/
          }
          if ( *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v113) ) /*0x55bf06*/
          {
            v136 = a2[0x25]; /*0x55bf0c*/
            if ( !v136 || v3 >= (a2[0x26] - v136) / 0x30 ) /*0x55bf31*/
              _invalid_parameter_noinfo(v3, v113, (int)a2); /*0x55bf33*/
            v137 = v109 + a2[0x25]; /*0x55bf3e*/
            if ( *(_DWORD *)(v137 + 0x18) < 0x10u ) /*0x55bf44*/
              v138 = (const char *)(v137 + 4); /*0x55bf4b*/
            else
              v138 = *(const char **)(v137 + 4); /*0x55bf46*/
            PrintError( /*0x55bf54*/
              "Statistical and Differential FaceGen morphs found for modifier \"%s\".  Only statistical will be used.",
              v138);
            v139 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 3) + 4 * v113); /*0x55bf60*/
            if ( v139 ) /*0x55bf68*/
              (**v139)(v139, 1); /*0x55bf70*/
          }
          v140 = a2[0x25]; /*0x55bf72*/
          if ( !v140 || v3 >= (a2[0x26] - v140) / 0x30 ) /*0x55bf97*/
            _invalid_parameter_noinfo(v3, v113, (int)a2); /*0x55bf99*/
          v141 = (int *)(v200 + a2[0x25]); /*0x55bfa4*/
          v142 = v141[9]; /*0x55bfa8*/
          if ( v142 ) /*0x55bfad*/
            v143 = (v141[0xA] - v142) >> 2; /*0x55bfb8*/
          else
            v143 = 0; /*0x55bfaf*/
          v144 = (_DWORD *)FormHeapAlloc(0x10u); /*0x55bfbd*/
          if ( v144 ) /*0x55bfd0*/
            v145 = sub_55A010(v144, v143, v141[7]); /*0x55bfd9*/
          else
            v145 = 0; /*0x55bfe0*/
          *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v113) = v145; /*0x55bfe9*/
          v146 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * v113) + 4); /*0x55bff2*/
          v147 = 0; /*0x55bff5*/
          v193 = v146; /*0x55bffe*/
          if ( v143 ) /*0x55c002*/
          {
            do /*0x55c032*/
            {
              v148 = v141[9]; /*0x55c008*/
              if ( !v148 || v147 >= (v141[0xA] - v148) >> 2 ) /*0x55c019*/
                _invalid_parameter_noinfo(v143, v147, (int)a2); /*0x55c01b*/
              *(_DWORD *)(v193 + 4 * v147) = *(_DWORD *)(v141[9] + 4 * v147); /*0x55c02a*/
              ++v147; /*0x55c02d*/
            }
            while ( v147 < v143 ); /*0x55c032*/
            v3 = ++v217; /*0x55c039*/
            v2 = this; /*0x55c03d*/
            goto LABEL_176; /*0x55c041*/
          }
          goto LABEL_318; /*0x55c002*/
        }
      }
      if ( !*((_DWORD *)this + 2) ) /*0x55bd06*/
      {
        v117 = FormHeapAlloc(0x34u); /*0x55bd0e*/
        *((_DWORD *)this + 2) = v117; /*0x55bd1c*/
        _memset(v117, 0, 0x34u); /*0x55bd1f*/
      }
      if ( *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v108) ) /*0x55bd2e*/
      {
        v118 = a2[0x25]; /*0x55bd34*/
        if ( !v118 || v3 >= (a2[0x26] - v118) / 0x30 ) /*0x55bd59*/
          _invalid_parameter_noinfo(v3, v108, (int)a2); /*0x55bd5b*/
        v119 = v109 + a2[0x25]; /*0x55bd66*/
        if ( *(_DWORD *)(v119 + 0x18) < 0x10u ) /*0x55bd6c*/
          v120 = (const char *)(v119 + 4); /*0x55bd73*/
        else
          v120 = *(const char **)(v119 + 4); /*0x55bd6e*/
        PrintError( /*0x55bd7c*/
          "Statistical and Differential FaceGen morphs found for expression \"%s\".  Only statistical will be used.",
          v120);
        v121 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 2) + 4 * v108); /*0x55bd88*/
        if ( v121 ) /*0x55bd90*/
          (**v121)(v121, 1); /*0x55bd98*/
      }
      v122 = a2[0x25]; /*0x55bd9a*/
      if ( !v122 || v3 >= (a2[0x26] - v122) / 0x30 ) /*0x55bdbf*/
        _invalid_parameter_noinfo(v3, v108, (int)a2); /*0x55bdc1*/
      v123 = (int *)(v200 + a2[0x25]); /*0x55bdcc*/
      v124 = v123[9]; /*0x55bdd0*/
      if ( v124 ) /*0x55bdd5*/
        v125 = (v123[0xA] - v124) >> 2; /*0x55bde0*/
      else
        v125 = 0; /*0x55bdd7*/
      v126 = (_DWORD *)FormHeapAlloc(0x10u); /*0x55bde5*/
      if ( v126 ) /*0x55bdf8*/
        v127 = sub_55A010(v126, v125, v123[7]); /*0x55be01*/
      else
        v127 = 0; /*0x55be08*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v108) = v127; /*0x55be11*/
      v128 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v108) + 4); /*0x55be1a*/
      v129 = 0; /*0x55be1d*/
      v192 = v128; /*0x55be26*/
      if ( !v125 ) /*0x55be2a*/
      {
LABEL_318:
        v3 = ++v217; /*0x55c3ab*/
        v2 = this; /*0x55c3af*/
        continue; /*0x55c3b3*/
      }
      do /*0x55be5a*/
      {
        v130 = v123[9]; /*0x55be30*/
        if ( !v130 || v129 >= (v123[0xA] - v130) >> 2 ) /*0x55be41*/
          _invalid_parameter_noinfo(v125, v129, (int)a2); /*0x55be43*/
        *(_DWORD *)(v192 + 4 * v129) = *(_DWORD *)(v123[9] + 4 * v129); /*0x55be52*/
        ++v129; /*0x55be55*/
      }
      while ( v129 < v125 ); /*0x55be5a*/
      v3 = ++v217; /*0x55be61*/
      v2 = this; /*0x55be65*/
    }
  }
  return v2; /*0x55c3ba*/
}
