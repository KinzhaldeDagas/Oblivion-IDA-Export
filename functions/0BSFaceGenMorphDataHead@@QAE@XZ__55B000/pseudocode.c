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
  char *v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  char *v15; // eax
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
  int v31; // eax
  int v32; // eax
  int v33; // edi
  int v34; // eax
  double v35; // st7
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  char *v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edx
  unsigned int v43; // edi
  unsigned int v44; // edx
  _DWORD *v45; // eax
  _DWORD *v46; // eax
  int v47; // ecx
  unsigned int v48; // ebx
  int v49; // ebp
  int v50; // eax
  int v51; // edi
  int v52; // eax
  int v53; // eax
  int v54; // edi
  int v55; // eax
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // ebx
  int v60; // eax
  int v61; // eax
  char *v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // edx
  unsigned int v66; // edi
  unsigned int v67; // edx
  _DWORD *v68; // eax
  _DWORD *v69; // eax
  int v70; // ecx
  unsigned int v71; // ebx
  int v72; // ebp
  int v73; // eax
  int v74; // edi
  int v75; // eax
  int v76; // eax
  int v77; // edi
  int v78; // eax
  int v79; // eax
  int v80; // edi
  int v81; // eax
  _DWORD *v82; // eax
  int v83; // eax
  int v84; // edx
  unsigned int v85; // edi
  _DWORD *v86; // eax
  _DWORD *v87; // eax
  int v88; // edi
  int v89; // eax
  int v90; // ebp
  int v91; // eax
  int v92; // eax
  int v93; // edx
  int v94; // ebp
  int v95; // eax
  int v96; // eax
  int v97; // ebx
  int v98; // ecx
  int v99; // eax
  int v100; // ebp
  double v101; // st7
  float v102; // ecx
  int v103; // eax
  int v104; // edi
  int v105; // ebp
  int v106; // eax
  int v107; // eax
  char *v108; // eax
  int v109; // edi
  int v110; // eax
  int v111; // eax
  char *v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  const char *v116; // eax
  void (__thiscall ***v117)(_DWORD, int); // ecx
  int v118; // eax
  int *v119; // ebp
  int v120; // eax
  unsigned int v121; // ebx
  _DWORD *v122; // eax
  _DWORD *v123; // eax
  int v124; // ecx
  unsigned int v125; // edi
  int v126; // ecx
  int v127; // edi
  int v128; // eax
  int v129; // eax
  char *v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  const char *v134; // eax
  void (__thiscall ***v135)(_DWORD, int); // ecx
  int v136; // eax
  int *v137; // ebp
  int v138; // eax
  unsigned int v139; // ebx
  _DWORD *v140; // eax
  _DWORD *v141; // eax
  int v142; // ecx
  unsigned int v143; // edi
  int v144; // ecx
  int v145; // edi
  int v146; // eax
  int v147; // eax
  char *v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // eax
  const char *v152; // eax
  void (__thiscall ***v153)(_DWORD, int); // ecx
  int v154; // eax
  int *v155; // ebp
  int v156; // eax
  unsigned int v157; // ebx
  _DWORD *v158; // eax
  _DWORD *v159; // eax
  int v160; // ecx
  unsigned int v161; // edi
  int v162; // ecx
  _DWORD *v163; // eax
  int v164; // eax
  int v165; // eax
  const char *v166; // eax
  void (__thiscall ***v167)(_DWORD, int); // ecx
  int v168; // eax
  int *v169; // ebp
  int v170; // eax
  unsigned int v171; // ebx
  _DWORD *v172; // eax
  _DWORD *v173; // eax
  int v174; // edx
  unsigned int v175; // edi
  int v176; // ecx
  unsigned int v179; // [esp+18h] [ebp-54h]
  unsigned int v180; // [esp+18h] [ebp-54h]
  unsigned int v181; // [esp+18h] [ebp-54h]
  unsigned int v182; // [esp+18h] [ebp-54h]
  int v183; // [esp+1Ch] [ebp-50h]
  int v184; // [esp+20h] [ebp-4Ch]
  int v185; // [esp+20h] [ebp-4Ch]
  int v186; // [esp+20h] [ebp-4Ch]
  int v187; // [esp+20h] [ebp-4Ch]
  int v188; // [esp+20h] [ebp-4Ch]
  int v189; // [esp+20h] [ebp-4Ch]
  int v190; // [esp+20h] [ebp-4Ch]
  int i; // [esp+20h] [ebp-4Ch]
  int v192; // [esp+24h] [ebp-48h]
  float v193; // [esp+24h] [ebp-48h]
  float v194; // [esp+24h] [ebp-48h]
  unsigned int v195; // [esp+24h] [ebp-48h]
  int v196; // [esp+24h] [ebp-48h]
  int v197; // [esp+28h] [ebp-44h]
  float v198; // [esp+28h] [ebp-44h]
  int v199; // [esp+28h] [ebp-44h]
  float v200; // [esp+28h] [ebp-44h]
  int v201; // [esp+28h] [ebp-44h]
  float v202; // [esp+28h] [ebp-44h]
  float v203; // [esp+2Ch] [ebp-40h]
  int v204; // [esp+2Ch] [ebp-40h]
  float v205; // [esp+2Ch] [ebp-40h]
  int v206; // [esp+2Ch] [ebp-40h]
  float v207; // [esp+2Ch] [ebp-40h]
  int v208; // [esp+2Ch] [ebp-40h]
  float v209; // [esp+34h] [ebp-38h]
  float v210; // [esp+54h] [ebp-18h]
  float v211; // [esp+5Ch] [ebp-10h]
  unsigned int v212; // [esp+70h] [ebp+4h]
  int v213; // [esp+70h] [ebp+4h]

  v2 = this;
  v3 = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)v2 = &BSFaceGenMorphDataHead::`vftable';
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  if ( a2 )
  {
    v5 = 0;
LABEL_3:
    while ( 1 )
    {
      v6 = a2[0x21];
      v212 = v5;
      if ( !v6 || v5 >= (a2[0x22] - v6) / 0x2C )
        break;
      v7 = 0;
      v8 = 0x2C * v5;
      v183 = 0x2C * v5;
      while ( 1 )
      {
        v9 = a2[0x21];
        if ( !v9 || v5 >= (a2[0x22] - v9) / 0x2C )
          _invalid_parameter_noinfo();
        v10 = v8 + a2[0x21];
        v11 = *(_DWORD *)(v10 + 0x18) < 0x10u ? (char *)(v10 + 4) : *(char **)(v10 + 4);
        if ( !_strcmp(*(char **)(4 * v7 + 0xB11FF0), v11) )
          break;
        if ( ++v7 >= 0xD )
        {
          v12 = 0;
          while ( 1 )
          {
            v13 = a2[0x21];
            if ( !v13 || v5 >= (a2[0x22] - v13) / 0x2C )
              _invalid_parameter_noinfo();
            v14 = v8 + a2[0x21];
            v15 = *(_DWORD *)(v14 + 0x18) < 0x10u ? (char *)(v14 + 4) : *(char **)(v14 + 4);
            if ( !_strcmp(*(char **)(4 * v12 + 0xB12028), v15) )
              break;
            if ( ++v12 >= 0x11 )
            {
              v36 = 0;
              while ( 1 )
              {
                v37 = a2[0x21];
                if ( !v37 || v5 >= (a2[0x22] - v37) / 0x2C )
                  _invalid_parameter_noinfo();
                v38 = v8 + a2[0x21];
                v39 = *(_DWORD *)(v38 + 0x18) < 0x10u ? (char *)(v38 + 4) : *(char **)(v38 + 4);
                if ( !_strcmp(*(char **)(4 * v36 + 0xB12070), v39) )
                  break;
                if ( ++v36 >= 0x10 )
                {
                  v59 = 0;
                  while ( 1 )
                  {
                    v60 = a2[0x21];
                    if ( !v60 || v5 >= (a2[0x22] - v60) / 0x2C )
                      _invalid_parameter_noinfo();
                    v61 = v8 + a2[0x21];
                    v62 = *(_DWORD *)(v61 + 0x18) < 0x10u ? (char *)(v61 + 4) : *(char **)(v61 + 4);
                    if ( !_strcmp(*(char **)(4 * v59 + 0xB12024), v62) )
                      break;
                    if ( ++v59 >= 1 )
                    {
                      v2 = this;
                      ++v5;
                      v3 = 0;
                      goto LABEL_3;
                    }
                  }
                  if ( !*((_DWORD *)this + 5) )
                  {
                    v82 = (_DWORD *)FormHeapAlloc(4u);
                    *((_DWORD *)this + 5) = v82;
                    *v82 = 0;
                  }
                  v83 = a2[0x21];
                  if ( !v83 || v5 >= (a2[0x22] - v83) / 0x2C )
                    _invalid_parameter_noinfo();
                  v84 = *(_DWORD *)(a2[0x21] + v8 + 0x20);
                  if ( v84 )
                  {
                    v182 = (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v84) / 0xC;
                    v85 = v182;
                  }
                  else
                  {
                    v85 = 0;
                    v182 = 0;
                  }
                  v86 = (_DWORD *)FormHeapAlloc(0xCu);
                  if ( v86 )
                    v87 = sub_55A0C0(v86, v85);
                  else
                    v87 = 0;
                  *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v59) = v87;
                  v187 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * v59) + 4);
                  v195 = 0;
                  if ( v85 )
                  {
                    v88 = 0;
                    do
                    {
                      v89 = a2[0x21];
                      if ( !v89 || v212 >= (a2[0x22] - v89) / 0x2C )
                        _invalid_parameter_noinfo();
                      v90 = v183 + a2[0x21] + 0x1C;
                      v91 = *(_DWORD *)(v183 + a2[0x21] + 0x20);
                      if ( !v91 || v195 >= (*(_DWORD *)(v183 + a2[0x21] + 0x24) - v91) / 0xC )
                        _invalid_parameter_noinfo();
                      v92 = a2[0x21];
                      v208 = v88 + *(_DWORD *)(v90 + 4);
                      if ( !v92 || v212 >= (a2[0x22] - v92) / 0x2C )
                        _invalid_parameter_noinfo();
                      v93 = a2[0x21];
                      v94 = v183 + v93 + 0x1C;
                      v95 = *(_DWORD *)(v183 + v93 + 0x20);
                      if ( !v95 || v195 >= (*(_DWORD *)(v183 + v93 + 0x24) - v95) / 0xC )
                        _invalid_parameter_noinfo();
                      v96 = a2[0x21];
                      v97 = v88 + *(_DWORD *)(v94 + 4);
                      if ( !v96 || v212 >= (a2[0x22] - v96) / 0x2C )
                        _invalid_parameter_noinfo();
                      v98 = a2[0x21];
                      v99 = *(_DWORD *)(v183 + v98 + 0x20);
                      v100 = v183 + v98 + 0x1C;
                      if ( !v99 || v195 >= (*(_DWORD *)(v183 + v98 + 0x24) - v99) / 0xC )
                        _invalid_parameter_noinfo();
                      v210 = *(float *)(v88 + *(_DWORD *)(v100 + 4));
                      v88 += 0xC;
                      v101 = *(float *)(v208 + 8);
                      v102 = *(float *)(v97 + 4);
                      *(float *)(v88 + v187 - 0xC) = v210;
                      v211 = v101;
                      *(float *)(v88 + v187 - 8) = v102;
                      *(float *)(v88 + v187 - 4) = v211;
                      ++v195;
                    }
                    while ( v195 < v182 );
                  }
                  goto LABEL_174;
                }
              }
              if ( !*((_DWORD *)this + 4) )
              {
                v63 = FormHeapAlloc(0x40u);
                *((_DWORD *)this + 4) = v63;
                _memset(v63, 0, 0x40);
              }
              v64 = a2[0x21];
              if ( !v64 || v5 >= (a2[0x22] - v64) / 0x2C )
                _invalid_parameter_noinfo();
              v65 = *(_DWORD *)(a2[0x21] + v8 + 0x20);
              if ( v65 )
              {
                v67 = (int)((unsigned __int64)(0x2AAAAAABLL * (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v65)) >> 0x20) >> 1;
                v66 = v67 + (v67 >> 0x1F);
              }
              else
              {
                v66 = 0;
              }
              v181 = v66;
              v68 = (_DWORD *)FormHeapAlloc(0xCu);
              if ( v68 )
                v69 = sub_55A0C0(v68, v66);
              else
                v69 = 0;
              *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v36) = v69;
              v70 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v36) + 4);
              v71 = 0;
              v186 = v70;
              if ( v66 )
              {
                v72 = 0;
                do
                {
                  v73 = a2[0x21];
                  if ( !v73 || v212 >= (a2[0x22] - v73) / 0x2C )
                    _invalid_parameter_noinfo();
                  v74 = v183 + a2[0x21];
                  v75 = *(_DWORD *)(v74 + 0x20);
                  if ( !v75 || v71 >= (*(_DWORD *)(v74 + 0x24) - v75) / 0xC )
                    _invalid_parameter_noinfo();
                  v76 = a2[0x21];
                  v201 = v72 + *(_DWORD *)(v74 + 0x20);
                  if ( !v76 || v212 >= (a2[0x22] - v76) / 0x2C )
                    _invalid_parameter_noinfo();
                  v77 = v183 + a2[0x21];
                  v78 = *(_DWORD *)(v77 + 0x20);
                  if ( !v78 || v71 >= (*(_DWORD *)(v77 + 0x24) - v78) / 0xC )
                    _invalid_parameter_noinfo();
                  v79 = a2[0x21];
                  v206 = v72 + *(_DWORD *)(v77 + 0x20);
                  if ( !v79 || v212 >= (a2[0x22] - v79) / 0x2C )
                    _invalid_parameter_noinfo();
                  v80 = v183 + a2[0x21];
                  v81 = *(_DWORD *)(v80 + 0x20);
                  if ( !v81 || v71 >= (*(_DWORD *)(v80 + 0x24) - v81) / 0xC )
                    _invalid_parameter_noinfo();
                  v194 = *(float *)(*(_DWORD *)(v80 + 0x20) + v72);
                  v207 = *(float *)(v206 + 4);
                  ++v71;
                  v202 = *(float *)(v201 + 8);
                  v72 += 0xC;
                  *(float *)(v186 + v72 - 0xC) = v194;
                  *(float *)(v186 + v72 - 8) = v207;
                  *(float *)(v186 + v72 - 4) = v202;
                }
                while ( v71 < v181 );
                v2 = this;
                v5 = v212 + 1;
                v3 = 0;
                goto LABEL_3;
              }
              goto LABEL_174;
            }
          }
          if ( !*((_DWORD *)this + 3) )
          {
            v40 = FormHeapAlloc(0x44u);
            *((_DWORD *)this + 3) = v40;
            _memset(v40, 0, 0x44);
          }
          v41 = a2[0x21];
          if ( !v41 || v5 >= (a2[0x22] - v41) / 0x2C )
            _invalid_parameter_noinfo();
          v42 = *(_DWORD *)(a2[0x21] + v8 + 0x20);
          if ( v42 )
          {
            v44 = (int)((unsigned __int64)(0x2AAAAAABLL * (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v42)) >> 0x20) >> 1;
            v43 = v44 + (v44 >> 0x1F);
          }
          else
          {
            v43 = 0;
          }
          v180 = v43;
          v45 = (_DWORD *)FormHeapAlloc(0xCu);
          if ( v45 )
            v46 = sub_55A0C0(v45, v43);
          else
            v46 = 0;
          *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12) = v46;
          v47 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * v12) + 4);
          v48 = 0;
          v185 = v47;
          if ( v43 )
          {
            v49 = 0;
            do
            {
              v50 = a2[0x21];
              if ( !v50 || v212 >= (a2[0x22] - v50) / 0x2C )
                _invalid_parameter_noinfo();
              v51 = v183 + a2[0x21];
              v52 = *(_DWORD *)(v51 + 0x20);
              if ( !v52 || v48 >= (*(_DWORD *)(v51 + 0x24) - v52) / 0xC )
                _invalid_parameter_noinfo();
              v53 = a2[0x21];
              v199 = v49 + *(_DWORD *)(v51 + 0x20);
              if ( !v53 || v212 >= (a2[0x22] - v53) / 0x2C )
                _invalid_parameter_noinfo();
              v54 = v183 + a2[0x21];
              v55 = *(_DWORD *)(v54 + 0x20);
              if ( !v55 || v48 >= (*(_DWORD *)(v54 + 0x24) - v55) / 0xC )
                _invalid_parameter_noinfo();
              v56 = a2[0x21];
              v204 = v49 + *(_DWORD *)(v54 + 0x20);
              if ( !v56 || v212 >= (a2[0x22] - v56) / 0x2C )
                _invalid_parameter_noinfo();
              v57 = v183 + a2[0x21];
              v58 = *(_DWORD *)(v57 + 0x20);
              if ( !v58 || v48 >= (*(_DWORD *)(v57 + 0x24) - v58) / 0xC )
                _invalid_parameter_noinfo();
              v193 = *(float *)(*(_DWORD *)(v57 + 0x20) + v49);
              v205 = *(float *)(v204 + 4);
              ++v48;
              v200 = *(float *)(v199 + 8);
              v49 += 0xC;
              *(float *)(v185 + v49 - 0xC) = v193;
              *(float *)(v185 + v49 - 8) = v205;
              *(float *)(v185 + v49 - 4) = v200;
            }
            while ( v48 < v180 );
            v2 = this;
            v5 = v212 + 1;
            v3 = 0;
            goto LABEL_3;
          }
          goto LABEL_174;
        }
      }
      if ( !*((_DWORD *)this + 2) )
      {
        v16 = FormHeapAlloc(0x34u);
        *((_DWORD *)this + 2) = v16;
        _memset(v16, 0, 0x34);
      }
      v17 = a2[0x21];
      if ( !v17 || v5 >= (a2[0x22] - v17) / 0x2C )
        _invalid_parameter_noinfo();
      v18 = *(_DWORD *)(a2[0x21] + v8 + 0x20);
      if ( v18 )
      {
        v20 = (int)((unsigned __int64)(0x2AAAAAABLL * (*(_DWORD *)(a2[0x21] + v8 + 0x24) - v18)) >> 0x20) >> 1;
        v19 = v20 + (v20 >> 0x1F);
      }
      else
      {
        v19 = 0;
      }
      v179 = v19;
      v21 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v21 )
        v22 = sub_55A0C0(v21, v19);
      else
        v22 = 0;
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v7) = v22;
      v23 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v7) + 4);
      v24 = 0;
      v184 = v23;
      if ( !v19 )
      {
LABEL_174:
        v2 = this;
        v5 = v212 + 1;
        v3 = 0;
        continue;
      }
      v25 = 0;
      while ( 1 )
      {
        v26 = a2[0x21];
        if ( !v26 || v5 >= (a2[0x22] - v26) / 0x2C )
          _invalid_parameter_noinfo();
        v27 = v183 + a2[0x21];
        v28 = *(_DWORD *)(v27 + 0x20);
        if ( !v28 || v24 >= (*(_DWORD *)(v27 + 0x24) - v28) / 0xC )
          _invalid_parameter_noinfo();
        v29 = a2[0x21];
        v197 = v25 + *(_DWORD *)(v27 + 0x20);
        if ( !v29 || v212 >= (a2[0x22] - v29) / 0x2C )
          _invalid_parameter_noinfo();
        v30 = v183 + a2[0x21];
        v31 = *(_DWORD *)(v30 + 0x20);
        if ( !v31 || v24 >= (*(_DWORD *)(v30 + 0x24) - v31) / 0xC )
          _invalid_parameter_noinfo();
        v32 = a2[0x21];
        v192 = v25 + *(_DWORD *)(v30 + 0x20);
        if ( !v32 || v212 >= (a2[0x22] - v32) / 0x2C )
          _invalid_parameter_noinfo();
        v33 = v183 + a2[0x21];
        v34 = *(_DWORD *)(v33 + 0x20);
        if ( !v34 || v24 >= (*(_DWORD *)(v33 + 0x24) - v34) / 0xC )
          _invalid_parameter_noinfo();
        v203 = *(float *)(*(_DWORD *)(v33 + 0x20) + v25);
        ++v24;
        v198 = *(float *)(v197 + 8);
        v25 += 0xC;
        v35 = *(float *)(v192 + 4);
        *(float *)(v184 + v25 - 0xC) = v203;
        v209 = v35;
        *(float *)(v184 + v25 - 8) = v209;
        *(float *)(v184 + v25 - 4) = v198;
        if ( v24 >= v179 )
          break;
        v5 = v212;
      }
      v2 = this;
      v5 = v212 + 1;
      v3 = 0;
    }
    v213 = 0;
LABEL_176:
    while ( 1 )
    {
      v103 = a2[0x25];
      if ( !v103 || v3 >= (a2[0x26] - v103) / 0x30 )
        break;
      v104 = 0;
      v105 = 0x30 * v3;
      v196 = 0x30 * v3;
      while ( 1 )
      {
        v106 = a2[0x25];
        if ( !v106 || v3 >= (a2[0x26] - v106) / 0x30 )
          _invalid_parameter_noinfo();
        v107 = v105 + a2[0x25];
        v108 = *(_DWORD *)(v107 + 0x18) < 0x10u ? (char *)(v107 + 4) : *(char **)(v107 + 4);
        if ( !_strcmp(*(char **)(4 * v104 + 0xB11FF0), v108) )
          break;
        if ( ++v104 >= 0xD )
        {
          v109 = 0;
          while ( 1 )
          {
            v110 = a2[0x25];
            if ( !v110 || v3 >= (a2[0x26] - v110) / 0x30 )
              _invalid_parameter_noinfo();
            v111 = v105 + a2[0x25];
            v112 = *(_DWORD *)(v111 + 0x18) < 0x10u ? (char *)(v111 + 4) : *(char **)(v111 + 4);
            if ( !_strcmp(*(char **)(4 * v109 + 0xB12028), v112) )
              break;
            if ( ++v109 >= 0x11 )
            {
              v127 = 0;
              while ( 1 )
              {
                v128 = a2[0x25];
                if ( !v128 || v3 >= (a2[0x26] - v128) / 0x30 )
                  _invalid_parameter_noinfo();
                v129 = v105 + a2[0x25];
                v130 = *(_DWORD *)(v129 + 0x18) < 0x10u ? (char *)(v129 + 4) : *(char **)(v129 + 4);
                if ( !_strcmp(*(char **)(4 * v127 + 0xB12070), v130) )
                  break;
                if ( ++v127 >= 0x10 )
                {
                  v145 = 0;
                  while ( 1 )
                  {
                    v146 = a2[0x25];
                    if ( !v146 || v3 >= (a2[0x26] - v146) / 0x30 )
                      _invalid_parameter_noinfo();
                    v147 = v105 + a2[0x25];
                    v148 = *(_DWORD *)(v147 + 0x18) < 0x10u ? (char *)(v147 + 4) : *(char **)(v147 + 4);
                    if ( !_strcmp(*(char **)(4 * v145 + 0xB12024), v148) )
                      break;
                    if ( ++v145 >= 1 )
                    {
                      v3 = ++v213;
                      v2 = this;
                      goto LABEL_176;
                    }
                  }
                  if ( !*((_DWORD *)this + 5) )
                  {
                    v163 = (_DWORD *)FormHeapAlloc(4u);
                    *((_DWORD *)this + 5) = v163;
                    *v163 = 0;
                  }
                  if ( *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v145) )
                  {
                    v164 = a2[0x25];
                    if ( !v164 || v3 >= (a2[0x26] - v164) / 0x30 )
                      _invalid_parameter_noinfo();
                    v165 = v105 + a2[0x25];
                    if ( *(_DWORD *)(v165 + 0x18) < 0x10u )
                      v166 = (const char *)(v165 + 4);
                    else
                      v166 = *(const char **)(v165 + 4);
                    PrintError(
                      "Statistical and Differential FaceGen morphs found for Custom Morph \"%s\".  Only statistical will be used.",
                      v166);
                    v167 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 5) + 4 * v145);
                    if ( v167 )
                      (**v167)(v167, 1);
                  }
                  v168 = a2[0x25];
                  if ( !v168 || v3 >= (a2[0x26] - v168) / 0x30 )
                    _invalid_parameter_noinfo();
                  v169 = (int *)(v196 + a2[0x25]);
                  v170 = v169[9];
                  if ( v170 )
                    v171 = (v169[0xA] - v170) >> 2;
                  else
                    v171 = 0;
                  v172 = (_DWORD *)FormHeapAlloc(0x10u);
                  if ( v172 )
                    v173 = sub_55A010(v172, v171, v169[7]);
                  else
                    v173 = 0;
                  *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v145) = v173;
                  v174 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 5) + 4 * v145) + 4);
                  v175 = 0;
                  for ( i = v174; v175 < v171; ++v175 )
                  {
                    v176 = v169[9];
                    if ( !v176 || v175 >= (v169[0xA] - v176) >> 2 )
                      _invalid_parameter_noinfo();
                    *(_DWORD *)(i + 4 * v175) = *(_DWORD *)(v169[9] + 4 * v175);
                  }
                  goto LABEL_318;
                }
              }
              if ( !*((_DWORD *)this + 4) )
              {
                v149 = FormHeapAlloc(0x40u);
                *((_DWORD *)this + 4) = v149;
                _memset(v149, 0, 0x40);
              }
              if ( *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v127) )
              {
                v150 = a2[0x25];
                if ( !v150 || v3 >= (a2[0x26] - v150) / 0x30 )
                  _invalid_parameter_noinfo();
                v151 = v105 + a2[0x25];
                if ( *(_DWORD *)(v151 + 0x18) < 0x10u )
                  v152 = (const char *)(v151 + 4);
                else
                  v152 = *(const char **)(v151 + 4);
                PrintError(
                  "Statistical and Differential FaceGen morphs found for phoneme \"%s\".  Only statistical will be used.",
                  v152);
                v153 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 4) + 4 * v127);
                if ( v153 )
                  (**v153)(v153, 1);
              }
              v154 = a2[0x25];
              if ( !v154 || v3 >= (a2[0x26] - v154) / 0x30 )
                _invalid_parameter_noinfo();
              v155 = (int *)(v196 + a2[0x25]);
              v156 = v155[9];
              if ( v156 )
                v157 = (v155[0xA] - v156) >> 2;
              else
                v157 = 0;
              v158 = (_DWORD *)FormHeapAlloc(0x10u);
              if ( v158 )
                v159 = sub_55A010(v158, v157, v155[7]);
              else
                v159 = 0;
              *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v127) = v159;
              v160 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v127) + 4);
              v161 = 0;
              v190 = v160;
              if ( v157 )
              {
                do
                {
                  v162 = v155[9];
                  if ( !v162 || v161 >= (v155[0xA] - v162) >> 2 )
                    _invalid_parameter_noinfo();
                  *(_DWORD *)(v190 + 4 * v161) = *(_DWORD *)(v155[9] + 4 * v161);
                  ++v161;
                }
                while ( v161 < v157 );
                v3 = ++v213;
                v2 = this;
                goto LABEL_176;
              }
              goto LABEL_318;
            }
          }
          if ( !*((_DWORD *)this + 3) )
          {
            v131 = FormHeapAlloc(0x44u);
            *((_DWORD *)this + 3) = v131;
            _memset(v131, 0, 0x44);
          }
          if ( *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v109) )
          {
            v132 = a2[0x25];
            if ( !v132 || v3 >= (a2[0x26] - v132) / 0x30 )
              _invalid_parameter_noinfo();
            v133 = v105 + a2[0x25];
            if ( *(_DWORD *)(v133 + 0x18) < 0x10u )
              v134 = (const char *)(v133 + 4);
            else
              v134 = *(const char **)(v133 + 4);
            PrintError(
              "Statistical and Differential FaceGen morphs found for modifier \"%s\".  Only statistical will be used.",
              v134);
            v135 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 3) + 4 * v109);
            if ( v135 )
              (**v135)(v135, 1);
          }
          v136 = a2[0x25];
          if ( !v136 || v3 >= (a2[0x26] - v136) / 0x30 )
            _invalid_parameter_noinfo();
          v137 = (int *)(v196 + a2[0x25]);
          v138 = v137[9];
          if ( v138 )
            v139 = (v137[0xA] - v138) >> 2;
          else
            v139 = 0;
          v140 = (_DWORD *)FormHeapAlloc(0x10u);
          if ( v140 )
            v141 = sub_55A010(v140, v139, v137[7]);
          else
            v141 = 0;
          *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v109) = v141;
          v142 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * v109) + 4);
          v143 = 0;
          v189 = v142;
          if ( v139 )
          {
            do
            {
              v144 = v137[9];
              if ( !v144 || v143 >= (v137[0xA] - v144) >> 2 )
                _invalid_parameter_noinfo();
              *(_DWORD *)(v189 + 4 * v143) = *(_DWORD *)(v137[9] + 4 * v143);
              ++v143;
            }
            while ( v143 < v139 );
            v3 = ++v213;
            v2 = this;
            goto LABEL_176;
          }
          goto LABEL_318;
        }
      }
      if ( !*((_DWORD *)this + 2) )
      {
        v113 = FormHeapAlloc(0x34u);
        *((_DWORD *)this + 2) = v113;
        _memset(v113, 0, 0x34);
      }
      if ( *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v104) )
      {
        v114 = a2[0x25];
        if ( !v114 || v3 >= (a2[0x26] - v114) / 0x30 )
          _invalid_parameter_noinfo();
        v115 = v105 + a2[0x25];
        if ( *(_DWORD *)(v115 + 0x18) < 0x10u )
          v116 = (const char *)(v115 + 4);
        else
          v116 = *(const char **)(v115 + 4);
        PrintError(
          "Statistical and Differential FaceGen morphs found for expression \"%s\".  Only statistical will be used.",
          v116);
        v117 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 2) + 4 * v104);
        if ( v117 )
          (**v117)(v117, 1);
      }
      v118 = a2[0x25];
      if ( !v118 || v3 >= (a2[0x26] - v118) / 0x30 )
        _invalid_parameter_noinfo();
      v119 = (int *)(v196 + a2[0x25]);
      v120 = v119[9];
      if ( v120 )
        v121 = (v119[0xA] - v120) >> 2;
      else
        v121 = 0;
      v122 = (_DWORD *)FormHeapAlloc(0x10u);
      if ( v122 )
        v123 = sub_55A010(v122, v121, v119[7]);
      else
        v123 = 0;
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v104) = v123;
      v124 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * v104) + 4);
      v125 = 0;
      v188 = v124;
      if ( !v121 )
      {
LABEL_318:
        v3 = ++v213;
        v2 = this;
        continue;
      }
      do
      {
        v126 = v119[9];
        if ( !v126 || v125 >= (v119[0xA] - v126) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(v188 + 4 * v125) = *(_DWORD *)(v119[9] + 4 * v125);
        ++v125;
      }
      while ( v125 < v121 );
      v3 = ++v213;
      v2 = this;
    }
  }
  return v2;
}
