char __thiscall sub_5C7BA0(float *this, char arg0)
{
  _DWORD *v3; // eax
  int v4; // ebp
  int v5; // ecx
  char *v6; // eax
  const char *v7; // eax
  Tile *v8; // eax
  double v9; // st7
  const char *v10; // eax
  _DWORD *v11; // eax
  _BYTE *v12; // ecx
  CHAR *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  _DWORD *v16; // eax
  CHAR *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  _DWORD *v20; // eax
  bool v21; // zf
  _DWORD *v22; // eax
  int v23; // ebp
  char *v24; // eax
  CHAR *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  _DWORD *v28; // eax
  const char *v29; // eax
  const char *v30; // eax
  Tile *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  Tile *v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  _DWORD *v37; // eax
  double Float; // st7
  const char *v39; // eax
  const char *v40; // eax
  Tile *v41; // eax
  _DWORD *v42; // eax
  TESRace *v43; // ebp
  CHAR *m_data; // eax
  const char *v45; // eax
  const char *v46; // eax
  _DWORD *v47; // eax
  CHAR *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  _DWORD *v51; // eax
  _DWORD *v52; // ebp
  int (__thiscall *v53)(_DWORD *, _DWORD, int); // edx
  _DWORD *v54; // ebp
  const char *v55; // eax
  const char *v56; // eax
  const char *v57; // eax
  _DWORD *v58; // eax
  const char *v59; // eax
  const char *v60; // eax
  Tile *v61; // eax
  const char *v62; // eax
  const char *v63; // eax
  Tile *v64; // eax
  const char *v65; // eax
  const char *v66; // eax
  _DWORD *v67; // eax
  double v68; // st7
  const char *v69; // eax
  const char *v70; // eax
  Tile *v71; // eax
  CHAR ***v72; // eax
  CHAR **v73; // ebp
  CHAR *v74; // eax
  char *v75; // edx
  char *v76; // eax
  _DWORD *v77; // eax
  CHAR *v78; // eax
  char *v79; // edx
  char *v80; // eax
  _DWORD *v81; // eax
  CHAR *v82; // eax
  const char *v83; // eax
  const char *v84; // eax
  _DWORD *v85; // eax
  CHAR *v86; // eax
  const char *v87; // eax
  const char *v88; // eax
  _DWORD *v89; // eax
  const char *v90; // eax
  const char *v91; // eax
  _DWORD *v92; // eax
  const char *v93; // eax
  const char *v94; // eax
  Tile *v95; // eax
  const char *v96; // eax
  const char *v97; // eax
  Tile *v98; // eax
  const char *v99; // eax
  const char *v100; // eax
  _DWORD *v101; // eax
  double v102; // st7
  const char *v103; // eax
  const char *v104; // eax
  Tile *v105; // eax
  const char *v106; // eax
  const char *v107; // eax
  Tile *v108; // eax
  const char *v109; // eax
  const char *v110; // eax
  Tile *v111; // eax
  const char *v112; // eax
  const char *v113; // eax
  _DWORD *v114; // eax
  double v115; // st7
  const char *v116; // eax
  double v117; // st7
  const char *v118; // eax
  Tile *v119; // ebp
  const char *v120; // eax
  double v121; // st7
  const char *v122; // eax
  Tile *v123; // ebp
  int v124; // ecx
  const char *v125; // eax
  double v126; // st7
  const char *v127; // eax
  Tile *v128; // ebp
  const char *v129; // eax
  const char *v130; // eax
  Tile *v131; // eax
  double v132; // st7
  int v133; // ecx
  Tile *v134; // ebp
  TESNPC *v135; // ebp
  char *v136; // eax
  const char *v137; // eax
  const char *v138; // eax
  _DWORD *v139; // eax
  const char *v140; // eax
  const char *v141; // eax
  Tile *v142; // eax
  const char *v143; // eax
  const char *v144; // eax
  Tile *v145; // eax
  const char *v146; // eax
  const char *v147; // eax
  _DWORD *v148; // eax
  BOOL v149; // eax
  _DWORD *v150; // ecx
  const char *v151; // eax
  const char *v152; // eax
  Tile *v153; // eax
  TESRace *race; // ebp
  char *v155; // eax
  const char *v156; // eax
  Tile *v157; // eax
  double v158; // st7
  int v159; // ecx
  Tile *v160; // ebp
  double v161; // st7
  const char *v162; // eax
  Tile *v163; // eax
  double v164; // st7
  int v165; // ecx
  Tile *v166; // ebx
  BSStringT v168; // [esp-Ch] [ebp-B8h] BYREF
  BSStringT v169; // [esp-4h] [ebp-B0h] BYREF
  BSStringT a2; // [esp+4h] [ebp-A8h] BYREF
  double v171; // [esp+1Ch] [ebp-90h]
  TESNPC *v172; // [esp+24h] [ebp-88h]
  _DWORD *v173[2]; // [esp+28h] [ebp-84h]
  _DWORD *v174[2]; // [esp+30h] [ebp-7Ch]
  _DWORD *v175[2]; // [esp+38h] [ebp-74h]
  int a1; // [esp+40h] [ebp-6Ch] BYREF
  int v177; // [esp+A8h] [ebp-4h]

  v172 = (TESNPC *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  v4 = 0;
  v173[0] = &v172->member.form.race->eyes.node.data;
  v3 = v173[0];
  HIDWORD(v171) = 0;
  *(this + 0x21F) = 0.0;
  if ( v3 && (v3[1] || *v3) )
  {
    v5 = 0;
    do
    {
      if ( *v3 )
        ++v5;
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
    v6 = (char *)dword_B38F90;
    v174[0] = &a2;
    *(_DWORD *)&v169.m_dataLen = 0;
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    v169.m_data = v6;
    if ( v5 == 1 )
    {
      BSStringT_Set(&a2, v169.m_data, *(unsigned int *)&v169.m_dataLen);
      v7 = (const char *)dword_B38F70;
      HIDWORD(v171) = &v169;
      v177 = 0;
      v169.m_data = 0;
      v169.m_dataLen = 0;
      v169.m_bufLen = 0;
      BSStringT_Set(&v169, v7, 0);
      v177 = 0xFFFFFFFF;
      v8 = (Tile *)sub_5C3440(
                     this,
                     v169.m_data,
                     *(int *)&v169.m_dataLen,
                     (unsigned __int8 *)a2.m_data,
                     *(int *)&a2.m_dataLen);
      v9 = 1.0;
    }
    else
    {
      BSStringT_Set(&a2, v169.m_data, *(unsigned int *)&v169.m_dataLen);
      v10 = (const char *)dword_B38F70;
      HIDWORD(v171) = &v169;
      v177 = 1;
      v169.m_data = 0;
      v169.m_dataLen = 0;
      v169.m_bufLen = 0;
      BSStringT_Set(&v169, v10, 0);
      v177 = 0xFFFFFFFF;
      v8 = (Tile *)sub_5C3440(
                     this,
                     v169.m_data,
                     *(int *)&v169.m_dataLen,
                     (unsigned __int8 *)a2.m_data,
                     *(int *)&a2.m_dataLen);
      v9 = fConstant_2;
    }
    *(float *)&a2.m_dataLen = v9;
    Tile_SetFloat(v8, (_DWORD *)0xFBB, *(float *)&a2.m_dataLen);
    v11 = v173[0];
    do
    {
      v12 = (_BYTE *)*v11;
      HIDWORD(v171) = *v11;
      if ( HIDWORD(v171) )
      {
        if ( v172->member.eyes || !sub_51ED80(v12) || v4 )
        {
          if ( v172->member.eyes == (TESEyes *)HIDWORD(v171) )
          {
            v17 = *(CHAR **)(HIDWORD(v171) + 0x1C);
            if ( !v17 )
              v17 = EmptyString;
            *(_DWORD *)&a2.m_dataLen = v17;
            v18 = (const char *)dword_B38F90;
            a2.m_data = (char *)0xFB4;
            v174[1] = &v169;
            v169.m_data = 0;
            v169.m_dataLen = 0;
            v169.m_bufLen = 0;
            BSStringT_Set(&v169, v18, 0);
            v19 = (const char *)dword_B38F70;
            v174[0] = &v168;
            v177 = 3;
            v168.m_data = 0;
            v168.m_dataLen = 0;
            v168.m_bufLen = 0;
            BSStringT_Set(&v168, v19, 0);
            v177 = 0xFFFFFFFF;
            v20 = (_DWORD *)sub_5C3440(
                              this,
                              v168.m_data,
                              *(int *)&v168.m_dataLen,
                              (unsigned __int8 *)v169.m_data,
                              *(int *)&v169.m_dataLen);
            Tile_SetString(v20, a2.m_data, *(char **)&a2.m_dataLen);
            *((_DWORD *)this + 0x21F) = v4;
          }
        }
        else
        {
          v13 = *(CHAR **)(HIDWORD(v171) + 0x1C);
          if ( !v13 )
            v13 = EmptyString;
          *(_DWORD *)&a2.m_dataLen = v13;
          v14 = (const char *)dword_B38F90;
          a2.m_data = (char *)0xFB4;
          v174[0] = &v169;
          v169.m_data = 0;
          v169.m_dataLen = 0;
          v169.m_bufLen = 0;
          BSStringT_Set(&v169, v14, 0);
          v15 = (const char *)dword_B38F70;
          v174[1] = &v168;
          v177 = 2;
          v168.m_data = 0;
          v168.m_dataLen = 0;
          v168.m_bufLen = 0;
          BSStringT_Set(&v168, v15, 0);
          v177 = 0xFFFFFFFF;
          v16 = (_DWORD *)sub_5C3440(
                            this,
                            v168.m_data,
                            *(int *)&v168.m_dataLen,
                            (unsigned __int8 *)v169.m_data,
                            *(int *)&v169.m_dataLen);
          Tile_SetString(v16, a2.m_data, *(char **)&a2.m_dataLen);
          *(this + 0x21F) = 0.0;
        }
        v21 = sub_51ED80((_BYTE *)HIDWORD(v171)) == 0;
        v11 = v173[0];
        if ( !v21 )
          ++v4;
      }
      v11 = (_DWORD *)v11[1];
      v173[0] = v11;
    }
    while ( v11 );
    goto LABEL_38;
  }
  v173[0] = (_DWORD *)(TESDataHandler + 0x3C);
  v22 = v173[0];
  if ( !v173[0] )
    goto LABEL_38;
  while ( 1 )
  {
    v23 = *v22;
    if ( *v22 )
      break;
LABEL_33:
    v22 = (_DWORD *)v22[1];
    v173[0] = v22;
    if ( !v22 )
    {
      v4 = 0;
      goto LABEL_38;
    }
  }
  v24 = *(char **)(v23 + 0x28);
  if ( !v24 )
    v24 = EmptyString;
  if ( _strcmp(v24, "Characters\\Eyes\\EyeDefault.dds") )
  {
    v22 = v173[0];
    goto LABEL_33;
  }
  v25 = *(CHAR **)(v23 + 0x1C);
  if ( !v25 )
    v25 = EmptyString;
  *(_DWORD *)&a2.m_dataLen = v25;
  v26 = (const char *)dword_B38F90;
  a2.m_data = (char *)0xFB4;
  v174[1] = &v169;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v26, 0);
  v27 = (const char *)dword_B38F70;
  v174[0] = &v168;
  v177 = 4;
  v168.m_data = 0;
  v168.m_dataLen = 0;
  v168.m_bufLen = 0;
  BSStringT_Set(&v168, v27, 0);
  v177 = 0xFFFFFFFF;
  v28 = (_DWORD *)sub_5C3440(
                    this,
                    v168.m_data,
                    *(int *)&v168.m_dataLen,
                    (unsigned __int8 *)v169.m_data,
                    *(int *)&v169.m_dataLen);
  Tile_SetString(v28, a2.m_data, *(char **)&a2.m_dataLen);
  v4 = HIDWORD(v171);
LABEL_38:
  v29 = (const char *)dword_B38F90;
  v174[1] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v29, 0);
  v30 = (const char *)dword_B38F70;
  v174[0] = &v169;
  v177 = 5;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v30, 0);
  v177 = 0xFFFFFFFF;
  v31 = (Tile *)sub_5C3440(
                  this,
                  v169.m_data,
                  *(int *)&v169.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  Tile_SetFloat(v31, (_DWORD *)0xFB2, 0.0);
  v32 = (const char *)dword_B38F90;
  v174[1] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v32, 0);
  v33 = (const char *)dword_B38F70;
  v174[0] = &v169;
  v177 = 6;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v33, 0);
  v177 = 0xFFFFFFFF;
  v34 = (Tile *)sub_5C3440(
                  this,
                  v169.m_data,
                  *(int *)&v169.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  v174[0] = (_DWORD *)(v4 - 1);
  *(float *)&a2.m_dataLen = (float)(v4 - 1);
  Tile_SetFloat(v34, (_DWORD *)0xFB3, *(float *)&a2.m_dataLen);
  v35 = (const char *)dword_B38F90;
  *(_DWORD *)&a2.m_dataLen = 0xFAE;
  v174[1] = &v169.m_dataLen;
  *(_DWORD *)&v169.m_dataLen = 0;
  a2.m_data = 0;
  BSStringT_Set((BSStringT *)&v169.m_dataLen, v35, 0);
  v36 = (const char *)dword_B38F70;
  v177 = 7;
  v174[0] = &v168.m_dataLen;
  *(_DWORD *)&v168.m_dataLen = 0;
  v169.m_data = 0;
  BSStringT_Set((BSStringT *)&v168.m_dataLen, v36, 0);
  v177 = 0xFFFFFFFF;
  v37 = (_DWORD *)sub_5C3440(
                    this,
                    *(char **)&v168.m_dataLen,
                    (int)v169.m_data,
                    *(unsigned __int8 **)&v169.m_dataLen,
                    (int)a2.m_data);
  *(double *)v175 = (double)*((int *)this + 0x21F);
  Float = Tile_GetFloat(v37, *(int *)&a2.m_dataLen);
  if ( Float != *(double *)v175 )
  {
    v39 = (const char *)dword_B38F90;
    *(float *)&a2.m_dataLen = (float)*((int *)this + 0x21F);
    v174[1] = &v169.m_dataLen;
    *(_DWORD *)&v169.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v169.m_dataLen, v39, 0);
    v40 = (const char *)dword_B38F70;
    v174[0] = &v168.m_dataLen;
    v177 = 8;
    *(_DWORD *)&v168.m_dataLen = 0;
    v169.m_data = 0;
    BSStringT_Set((BSStringT *)&v168.m_dataLen, v40, 0);
    v177 = 0xFFFFFFFF;
    v41 = (Tile *)sub_5C3440(
                    this,
                    *(char **)&v168.m_dataLen,
                    (int)v169.m_data,
                    *(unsigned __int8 **)&v169.m_dataLen,
                    (int)a2.m_data);
    sub_5C2B50(v41, *(float *)&a2.m_dataLen);
  }
  v174[0] = (_DWORD *)(TESDataHandler + 0x44);
  v42 = v174[0];
  for ( HIDWORD(v171) = 0; v42; v174[0] = v42 )
  {
    v43 = (TESRace *)*v42;
    v173[0] = *(_DWORD **)v42;
    if ( v173[0] )
    {
      if ( v172->member.form.race == v43 )
      {
        m_data = v43->name.name.m_data;
        if ( !m_data )
          m_data = EmptyString;
        *(_DWORD *)&a2.m_dataLen = m_data;
        v45 = (const char *)dword_B38F78;
        a2.m_data = (char *)0xFB4;
        v174[1] = &v169;
        v169.m_data = 0;
        v169.m_dataLen = 0;
        v169.m_bufLen = 0;
        BSStringT_Set(&v169, v45, 0);
        v46 = (const char *)dword_B38F70;
        v175[0] = &v168;
        v177 = 9;
        v168.m_data = 0;
        v168.m_dataLen = 0;
        v168.m_bufLen = 0;
        BSStringT_Set(&v168, v46, 0);
        v177 = 0xFFFFFFFF;
        v47 = (_DWORD *)sub_5C3440(
                          this,
                          v168.m_data,
                          *(int *)&v168.m_dataLen,
                          (unsigned __int8 *)v169.m_data,
                          *(int *)&v169.m_dataLen);
        Tile_SetString(v47, a2.m_data, *(char **)&a2.m_dataLen);
        v48 = v43->name.name.m_data;
        if ( !v48 )
          v48 = EmptyString;
        *(_DWORD *)&a2.m_dataLen = v48;
        v49 = (const char *)dword_B38F78;
        a2.m_data = (char *)0xFB4;
        v175[0] = &v169;
        v169.m_data = 0;
        v169.m_dataLen = 0;
        v169.m_bufLen = 0;
        BSStringT_Set(&v169, v49, 0);
        v50 = (const char *)dword_B38F78;
        v174[1] = &v168;
        v177 = 0xA;
        v168.m_data = 0;
        v168.m_dataLen = 0;
        v168.m_bufLen = 0;
        BSStringT_Set(&v168, v50, 0);
        v177 = 0xFFFFFFFF;
        v51 = (_DWORD *)sub_5C3440(
                          this,
                          v168.m_data,
                          *(int *)&v168.m_dataLen,
                          (unsigned __int8 *)v169.m_data,
                          *(int *)&v169.m_dataLen);
        Tile_SetString(v51, a2.m_data, *(char **)&a2.m_dataLen);
        v52 = v173[0];
        *(this + 0x21B) = *((float *)&v171 + 1);
        v53 = *(int (__thiscall **)(_DWORD *, _DWORD, int))(v52[9] + 0x10);
        v54 = v52 + 9;
        if ( v53(v54, 0, 0x43534544) )
        {
          *(_DWORD *)&a2.m_dataLen = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v54 + 0x10))(v54, 0, 0x43534544);
          v55 = (const char *)dword_B38FB0;
          a2.m_data = (char *)0xFB4;
          v175[0] = &v169;
          v169.m_data = 0;
          v169.m_dataLen = 0;
          v169.m_bufLen = 0;
          BSStringT_Set(&v169, v55, 0);
          v177 = 0xB;
        }
        else
        {
          v56 = (const char *)dword_B38FB0;
          *(_DWORD *)&a2.m_dataLen = word_A36430;
          a2.m_data = (char *)0xFB4;
          v175[0] = &v169;
          v169.m_data = 0;
          v169.m_dataLen = 0;
          v169.m_bufLen = 0;
          BSStringT_Set(&v169, v56, 0);
          v177 = 0xC;
        }
        v57 = (const char *)dword_B38F78;
        v174[1] = &v168;
        v168.m_data = 0;
        v168.m_dataLen = 0;
        v168.m_bufLen = 0;
        BSStringT_Set(&v168, v57, 0);
        v177 = 0xFFFFFFFF;
        v58 = (_DWORD *)sub_5C3440(
                          this,
                          v168.m_data,
                          *(int *)&v168.m_dataLen,
                          (unsigned __int8 *)v169.m_data,
                          *(int *)&v169.m_dataLen);
        Tile_SetString(v58, a2.m_data, *(char **)&a2.m_dataLen);
        v43 = (TESRace *)v173[0];
        v42 = v174[0];
      }
      if ( (v43->isPlayable & 1) != 0 )
        ++HIDWORD(v171);
    }
    v42 = (_DWORD *)v42[1];
  }
  v59 = (const char *)dword_B38F78;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v59, 0);
  v60 = (const char *)dword_B38F78;
  v174[1] = &v169;
  v177 = 0xD;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v60, 0);
  v177 = 0xFFFFFFFF;
  v61 = (Tile *)sub_5C3440(
                  this,
                  v169.m_data,
                  *(int *)&v169.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  Tile_SetFloat(v61, (_DWORD *)0xFB2, 0.0);
  v62 = (const char *)dword_B38F78;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v62, 0);
  v63 = (const char *)dword_B38F78;
  v174[1] = &v169;
  v177 = 0xE;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v63, 0);
  v177 = 0xFFFFFFFF;
  v64 = (Tile *)sub_5C3440(
                  this,
                  v169.m_data,
                  *(int *)&v169.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  v174[0] = (_DWORD *)(HIDWORD(v171) - 1);
  *(float *)&a2.m_dataLen = (float)(HIDWORD(v171) - 1);
  Tile_SetFloat(v64, (_DWORD *)0xFB3, *(float *)&a2.m_dataLen);
  v65 = (const char *)dword_B38F78;
  *(_DWORD *)&a2.m_dataLen = 0xFAE;
  v175[0] = &v169.m_dataLen;
  *(_DWORD *)&v169.m_dataLen = 0;
  a2.m_data = 0;
  BSStringT_Set((BSStringT *)&v169.m_dataLen, v65, 0);
  v66 = (const char *)dword_B38F78;
  v177 = 0xF;
  v174[1] = &v168.m_dataLen;
  *(_DWORD *)&v168.m_dataLen = 0;
  v169.m_data = 0;
  BSStringT_Set((BSStringT *)&v168.m_dataLen, v66, 0);
  v177 = 0xFFFFFFFF;
  v67 = (_DWORD *)sub_5C3440(
                    this,
                    *(char **)&v168.m_dataLen,
                    (int)v169.m_data,
                    *(unsigned __int8 **)&v169.m_dataLen,
                    (int)a2.m_data);
  *(double *)v175 = (double)*((int *)this + 0x21B);
  v68 = Tile_GetFloat(v67, *(int *)&a2.m_dataLen);
  if ( v68 != *(double *)v175 )
  {
    v69 = (const char *)dword_B38F78;
    *(float *)&a2.m_dataLen = (float)*((int *)this + 0x21B);
    v175[0] = &v169.m_dataLen;
    *(_DWORD *)&v169.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v169.m_dataLen, v69, 0);
    v70 = (const char *)dword_B38F78;
    v174[1] = &v168.m_dataLen;
    v177 = 0x10;
    *(_DWORD *)&v168.m_dataLen = 0;
    v169.m_data = 0;
    BSStringT_Set((BSStringT *)&v168.m_dataLen, v70, 0);
    v177 = 0xFFFFFFFF;
    v71 = (Tile *)sub_5C3440(
                    this,
                    *(char **)&v168.m_dataLen,
                    (int)v169.m_data,
                    *(unsigned __int8 **)&v169.m_dataLen,
                    (int)a2.m_data);
    sub_5C2B50(v71, *(float *)&a2.m_dataLen);
  }
  v173[0] = &v172->member.form.race->hairs.node.data;
  v72 = (CHAR ***)v173[0];
  HIDWORD(v171) = 0;
  if ( v173[0] && (v173[0][1] || *v173[0]) )
  {
    do
    {
      v73 = *v72;
      if ( *v72 )
      {
        if ( v172->member.hair || !sub_51FE80(v73) || !sub_51FFD0(v73, (int)v172) || HIDWORD(v171) )
        {
          if ( (CHAR **)v172->member.hair == v73 )
          {
            v82 = v73[7];
            if ( !v82 )
              v82 = EmptyString;
            *(_DWORD *)&a2.m_dataLen = v82;
            v83 = (const char *)dword_B38F88;
            a2.m_data = (char *)0xFB4;
            v175[0] = &v169;
            v169.m_data = 0;
            v169.m_dataLen = 0;
            v169.m_bufLen = 0;
            BSStringT_Set(&v169, v83, 0);
            v84 = (const char *)dword_B38F70;
            v174[1] = &v168;
            v177 = 0x13;
            v168.m_data = 0;
            v168.m_dataLen = 0;
            v168.m_bufLen = 0;
            BSStringT_Set(&v168, v84, 0);
            v177 = 0xFFFFFFFF;
            v85 = (_DWORD *)sub_5C3440(
                              this,
                              v168.m_data,
                              *(int *)&v168.m_dataLen,
                              (unsigned __int8 *)v169.m_data,
                              *(int *)&v169.m_dataLen);
            Tile_SetString(v85, a2.m_data, *(char **)&a2.m_dataLen);
            v86 = v73[7];
            if ( !v86 )
              v86 = EmptyString;
            *(_DWORD *)&a2.m_dataLen = v86;
            v87 = (const char *)dword_B38FB8;
            a2.m_data = (char *)0xFB4;
            v175[0] = &v169;
            v169.m_data = 0;
            v169.m_dataLen = 0;
            v169.m_bufLen = 0;
            BSStringT_Set(&v169, v87, 0);
            v88 = (const char *)dword_B38F88;
            v174[1] = &v168;
            v177 = 0x14;
            v168.m_data = 0;
            v168.m_dataLen = 0;
            v168.m_bufLen = 0;
            BSStringT_Set(&v168, v88, 0);
            v177 = 0xFFFFFFFF;
            v89 = (_DWORD *)sub_5C3440(
                              this,
                              v168.m_data,
                              *(int *)&v168.m_dataLen,
                              (unsigned __int8 *)v169.m_data,
                              *(int *)&v169.m_dataLen);
            Tile_SetString(v89, a2.m_data, *(char **)&a2.m_dataLen);
            *(this + 0x21C) = *((float *)&v171 + 1);
          }
        }
        else
        {
          v74 = v73[7];
          if ( !v74 )
            v74 = EmptyString;
          v75 = (char *)dword_B38F88;
          *(_DWORD *)&a2.m_dataLen = v74;
          a2.m_data = (char *)0xFB4;
          v175[0] = &v169;
          BSStringT_constr_str(&v169, v75);
          v76 = (char *)dword_B38F70;
          v174[1] = &v168;
          v177 = 0x11;
          BSStringT_constr_str(&v168, v76);
          v177 = 0xFFFFFFFF;
          v77 = (_DWORD *)sub_5C3440(
                            this,
                            v168.m_data,
                            *(int *)&v168.m_dataLen,
                            (unsigned __int8 *)v169.m_data,
                            *(int *)&v169.m_dataLen);
          Tile_SetString(v77, a2.m_data, *(char **)&a2.m_dataLen);
          v78 = v73[7];
          if ( !v78 )
            v78 = EmptyString;
          v79 = (char *)dword_B38FB8;
          *(_DWORD *)&a2.m_dataLen = v78;
          a2.m_data = (char *)0xFB4;
          v175[0] = &v169;
          BSStringT_constr_str(&v169, v79);
          v80 = (char *)dword_B38F88;
          v174[1] = &v168;
          v177 = 0x12;
          BSStringT_constr_str(&v168, v80);
          v177 = 0xFFFFFFFF;
          v81 = (_DWORD *)sub_5C3440(
                            this,
                            v168.m_data,
                            *(int *)&v168.m_dataLen,
                            (unsigned __int8 *)v169.m_data,
                            *(int *)&v169.m_dataLen);
          Tile_SetString(v81, a2.m_data, *(char **)&a2.m_dataLen);
          *(this + 0x21C) = 0.0;
        }
        if ( sub_51FE80(v73) )
        {
          if ( sub_51FFD0(v73, (int)v172) )
            ++HIDWORD(v171);
        }
        v72 = (CHAR ***)v173[0];
      }
      v72 = (CHAR ***)v72[1];
      v173[0] = v72;
    }
    while ( v72 );
  }
  else
  {
    v90 = (const char *)dword_B38F88;
    *(_DWORD *)&a2.m_dataLen = dword_B38B80;
    a2.m_data = (char *)0xFB4;
    v175[0] = &v169;
    v169.m_data = 0;
    v169.m_dataLen = 0;
    v169.m_bufLen = 0;
    BSStringT_Set(&v169, v90, 0);
    v91 = (const char *)dword_B38F70;
    v174[1] = &v168;
    v177 = 0x15;
    v168.m_data = 0;
    v168.m_dataLen = 0;
    v168.m_bufLen = 0;
    BSStringT_Set(&v168, v91, 0);
    v177 = 0xFFFFFFFF;
    v92 = (_DWORD *)sub_5C3440(
                      this,
                      v168.m_data,
                      *(int *)&v168.m_dataLen,
                      (unsigned __int8 *)v169.m_data,
                      *(int *)&v169.m_dataLen);
    Tile_SetString(v92, a2.m_data, *(char **)&a2.m_dataLen);
  }
  v93 = (const char *)dword_B38FB8;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v93, 0);
  v94 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x16;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v94, 0);
  v177 = 0xFFFFFFFF;
  v95 = (Tile *)sub_5C3440(
                  this,
                  v169.m_data,
                  *(int *)&v169.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  Tile_SetFloat(v95, (_DWORD *)0xFB2, 0.0);
  v96 = (const char *)dword_B38FB8;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v96, 0);
  v97 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x17;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v97, 0);
  v177 = 0xFFFFFFFF;
  v98 = (Tile *)sub_5C3440(
                  this,
                  v169.m_data,
                  *(int *)&v169.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  v174[0] = (_DWORD *)(HIDWORD(v171) - 1);
  *(float *)&a2.m_dataLen = (float)(HIDWORD(v171) - 1);
  Tile_SetFloat(v98, (_DWORD *)0xFB3, *(float *)&a2.m_dataLen);
  v99 = (const char *)dword_B38FB8;
  *(_DWORD *)&a2.m_dataLen = 0xFAE;
  v175[0] = &v169.m_dataLen;
  *(_DWORD *)&v169.m_dataLen = 0;
  a2.m_data = 0;
  BSStringT_Set((BSStringT *)&v169.m_dataLen, v99, 0);
  v100 = (const char *)dword_B38F88;
  v177 = 0x18;
  v174[1] = &v168.m_dataLen;
  *(_DWORD *)&v168.m_dataLen = 0;
  v169.m_data = 0;
  BSStringT_Set((BSStringT *)&v168.m_dataLen, v100, 0);
  v177 = 0xFFFFFFFF;
  v101 = (_DWORD *)sub_5C3440(
                     this,
                     *(char **)&v168.m_dataLen,
                     (int)v169.m_data,
                     *(unsigned __int8 **)&v169.m_dataLen,
                     (int)a2.m_data);
  *(double *)v175 = (double)*((int *)this + 0x21C);
  v102 = Tile_GetFloat(v101, *(int *)&a2.m_dataLen);
  if ( v102 != *(double *)v175 )
  {
    v103 = (const char *)dword_B38FB8;
    *(float *)&a2.m_dataLen = (float)*((int *)this + 0x21C);
    v175[0] = &v169.m_dataLen;
    *(_DWORD *)&v169.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v169.m_dataLen, v103, 0);
    v104 = (const char *)dword_B38F88;
    v174[1] = &v168.m_dataLen;
    v177 = 0x19;
    *(_DWORD *)&v168.m_dataLen = 0;
    v169.m_data = 0;
    BSStringT_Set((BSStringT *)&v168.m_dataLen, v104, 0);
    v177 = 0xFFFFFFFF;
    v105 = (Tile *)sub_5C3440(
                     this,
                     *(char **)&v168.m_dataLen,
                     (int)v169.m_data,
                     *(unsigned __int8 **)&v169.m_dataLen,
                     (int)a2.m_data);
    sub_5C2B50(v105, *(float *)&a2.m_dataLen);
  }
  v106 = (const char *)dword_B39330;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v106, 0);
  v107 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x1A;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v107, 0);
  v177 = 0xFFFFFFFF;
  v108 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  Tile_SetFloat(v108, (_DWORD *)0xFB2, 0.0);
  v109 = (const char *)dword_B39330;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v109, 0);
  v110 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x1B;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v110, 0);
  v177 = 0xFFFFFFFF;
  v111 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  Tile_SetFloat(v111, (_DWORD *)0xFB3, flt_A468FC);
  v112 = (const char *)dword_B39330;
  *(_DWORD *)&a2.m_dataLen = 0xFAE;
  v175[0] = &v169.m_dataLen;
  *(_DWORD *)&v169.m_dataLen = 0;
  a2.m_data = 0;
  BSStringT_Set((BSStringT *)&v169.m_dataLen, v112, 0);
  v113 = (const char *)dword_B38F88;
  v177 = 0x1C;
  v174[1] = &v168.m_dataLen;
  *(_DWORD *)&v168.m_dataLen = 0;
  v169.m_data = 0;
  BSStringT_Set((BSStringT *)&v168.m_dataLen, v113, 0);
  v177 = 0xFFFFFFFF;
  v114 = (_DWORD *)sub_5C3440(
                     this,
                     *(char **)&v168.m_dataLen,
                     (int)v169.m_data,
                     *(unsigned __int8 **)&v169.m_dataLen,
                     (int)a2.m_data);
  v115 = Tile_GetFloat(v114, *(int *)&a2.m_dataLen);
  *((_DWORD *)this + 0x223) = Double_To_SInt32(v115);
  *(this + 0x21E) = *(float *)v172->member.hairColorRGB;
  if ( !arg0 || byte_B14500 )
    sub_5C5F00(this);
  v174[0] = (_DWORD *)*((unsigned __int8 *)this + 0x878);
  v116 = (const char *)dword_B38FC0;
  v175[0] = &a2;
  v117 = (double)(int)v174[0] / dbl_A3DDD8;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  *(float *)v173 = v117;
  BSStringT_Set(&a2, v116, 0);
  v118 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x1D;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v118, 0);
  v177 = 0xFFFFFFFF;
  v119 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  Tile_SetFloat(v119, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v119, (_DWORD *)0xFB1, *(float *)v173);
  Tile_SetFloat(v119, (_DWORD *)0xFB1, 0.0);
  v174[0] = (_DWORD *)*((unsigned __int8 *)this + 0x879);
  v120 = (const char *)dword_B38FC8;
  v175[0] = &a2;
  v121 = (double)(int)v174[0] / dbl_A3DDD8;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  *(float *)v173 = v121;
  BSStringT_Set(&a2, v120, 0);
  v122 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x1E;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v122, 0);
  v177 = 0xFFFFFFFF;
  v123 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  *(_DWORD *)&a2.m_dataLen = v124;
  Tile_SetFloat(v123, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v123, (_DWORD *)0xFB1, *(float *)v173);
  Tile_SetFloat(v123, (_DWORD *)0xFB1, 0.0);
  v174[0] = (_DWORD *)*((unsigned __int8 *)this + 0x87A);
  v125 = (const char *)dword_B38FD0;
  v175[0] = &a2;
  v126 = (double)(int)v174[0] / dbl_A3DDD8;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  *(float *)v173 = v126;
  BSStringT_Set(&a2, v125, 0);
  v127 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x1F;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v127, 0);
  v177 = 0xFFFFFFFF;
  v128 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  Tile_SetFloat(v128, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v128, (_DWORD *)0xFB1, *(float *)v173);
  Tile_SetFloat(v128, (_DWORD *)0xFB1, 0.0);
  v174[0] = (_DWORD *)v172->member.hairLength;
  v175[0] = &a2;
  *(this + 0x21D) = *(float *)v174;
  v129 = (const char *)dword_B38FD8;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v129, 0);
  v130 = (const char *)dword_B38F88;
  v174[1] = &v169;
  v177 = 0x20;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v130, 0);
  v177 = 0xFFFFFFFF;
  v131 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  v132 = *(this + 0x21D);
  *(_DWORD *)&a2.m_dataLen = v133;
  *(float *)v174 = v132;
  v134 = v131;
  Tile_SetFloat(v131, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v134, (_DWORD *)0xFB1, *(float *)v174);
  Tile_SetFloat(v134, (_DWORD *)0xFB1, 0.0);
  v135 = v172;
  *((_BYTE *)this + 0x868) = TESActorBase_IsFemale(v172) == 1;
  v21 = TESActorBase_IsFemale(v135) == 0;
  v136 = sMale;
  if ( !v21 )
    v136 = (char *)sFemale;
  *(_DWORD *)&a2.m_dataLen = v136;
  v137 = (const char *)dword_B38FA8;
  a2.m_data = (char *)0xFB4;
  v175[0] = &v169;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v137, 0);
  v138 = (const char *)dword_B38F78;
  v174[1] = &v168;
  v177 = 0x21;
  v168.m_data = 0;
  v168.m_dataLen = 0;
  v168.m_bufLen = 0;
  BSStringT_Set(&v168, v138, 0);
  v177 = 0xFFFFFFFF;
  v139 = (_DWORD *)sub_5C3440(
                     this,
                     v168.m_data,
                     *(int *)&v168.m_dataLen,
                     (unsigned __int8 *)v169.m_data,
                     *(int *)&v169.m_dataLen);
  Tile_SetString(v139, a2.m_data, *(char **)&a2.m_dataLen);
  v140 = (const char *)dword_B38FA8;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v140, 0);
  v141 = (const char *)dword_B38F78;
  v174[1] = &v169;
  v177 = 0x22;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v141, 0);
  v177 = 0xFFFFFFFF;
  v142 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  Tile_SetFloat(v142, (_DWORD *)0xFB2, 0.0);
  v143 = (const char *)dword_B38FA8;
  v175[0] = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v143, 0);
  v144 = (const char *)dword_B38F78;
  v174[1] = &v169;
  v177 = 0x23;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v144, 0);
  v177 = 0xFFFFFFFF;
  v145 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  Tile_SetFloat(v145, (_DWORD *)0xFB3, 1.0);
  v146 = (const char *)dword_B38FA8;
  *(_DWORD *)&a2.m_dataLen = 0xFAE;
  v175[0] = &v169.m_dataLen;
  *(_DWORD *)&v169.m_dataLen = 0;
  a2.m_data = 0;
  BSStringT_Set((BSStringT *)&v169.m_dataLen, v146, 0);
  v147 = (const char *)dword_B38F78;
  v174[1] = &v168.m_dataLen;
  v177 = 0x24;
  *(_DWORD *)&v168.m_dataLen = 0;
  v169.m_data = 0;
  BSStringT_Set((BSStringT *)&v168.m_dataLen, v147, 0);
  v177 = 0xFFFFFFFF;
  v148 = (_DWORD *)sub_5C3440(
                     this,
                     *(char **)&v168.m_dataLen,
                     (int)v169.m_data,
                     *(unsigned __int8 **)&v169.m_dataLen,
                     (int)a2.m_data);
  v149 = Tile_GetFloat(v148, *(int *)&a2.m_dataLen) == fConstant_2;
  v150 = (_DWORD *)*((unsigned __int8 *)this + 0x868);
  v174[0] = v150;
  if ( v150 != (_DWORD *)v149 )
  {
    v151 = (const char *)dword_B38FA8;
    *(float *)&a2.m_dataLen = (float)(int)v174[0];
    v175[0] = &v169.m_dataLen;
    *(_DWORD *)&v169.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v169.m_dataLen, v151, 0);
    v152 = (const char *)dword_B38F78;
    v174[1] = &v168.m_dataLen;
    v177 = 0x25;
    *(_DWORD *)&v168.m_dataLen = 0;
    v169.m_data = 0;
    BSStringT_Set((BSStringT *)&v168.m_dataLen, v152, 0);
    v177 = 0xFFFFFFFF;
    v153 = (Tile *)sub_5C3440(
                     this,
                     *(char **)&v168.m_dataLen,
                     (int)v169.m_data,
                     *(unsigned __int8 **)&v169.m_dataLen,
                     (int)a2.m_data);
    sub_5C2B50(v153, *(float *)&a2.m_dataLen);
  }
  ArrayConstructor(&a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  race = v172->member.form.race;
  *(float *)&a2.m_dataLen = 0.0;
  a2.m_data = 0;
  *(_DWORD *)&v169.m_dataLen = &a1;
  v177 = 0x26;
  v155 = (char *)sub_521A10(v172);
  sub_552990((char *)race->unk12, v155, *(int *)&v169.m_dataLen, (char)a2.m_data, *(float *)&a2.m_dataLen);
  BSFaceGen_GetAge((int)&a1, 0, 0);
  *(float *)v174 = 0.0;
  v175[0] = &a2;
  *(_DWORD *)&v169.m_dataLen = 0;
  *(double *)v173 = 1.0 - 0.0;
  *(this + 0x220) = *(double *)v173 * (((float)0.0 - dbl_A492F0) / dbl_A3F3D0) + 0.0;
  v169.m_data = (char *)dword_B38F98;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v169.m_data, *(unsigned int *)&v169.m_dataLen);
  v156 = (const char *)dword_B38F70;
  v174[1] = &v169;
  LOBYTE(v177) = 0x27;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v156, 0);
  LOBYTE(v177) = 0x26;
  v157 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  v158 = *(this + 0x220);
  *(_DWORD *)&a2.m_dataLen = v159;
  *(float *)v174 = v158;
  v160 = v157;
  Tile_SetFloat(v157, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v160, (_DWORD *)0xFB1, *(float *)v174);
  Tile_SetFloat(v160, (_DWORD *)0xFB1, 0.0);
  if ( TESActorBase_IsFemale(v172) )
    v161 = fConstant_2;
  else
    v161 = flt_A53954;
  *(float *)v174 = v161;
  BSFaceGen_GetAge((int)&a1, 1, 0);
  *(float *)v174 = v161 - *(float *)v174;
  v175[0] = &a2;
  *(_DWORD *)&v169.m_dataLen = 0;
  *(this + 0x221) = (*(float *)v174 - dbl_A3F400) * dbl_A3C770 * *(double *)v173 + dbl_A2FC68;
  v169.m_data = (char *)dword_B38FA0;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Set(&a2, v169.m_data, *(unsigned int *)&v169.m_dataLen);
  v162 = (const char *)dword_B38F70;
  v174[1] = &v169;
  LOBYTE(v177) = 0x28;
  v169.m_data = 0;
  v169.m_dataLen = 0;
  v169.m_bufLen = 0;
  BSStringT_Set(&v169, v162, 0);
  LOBYTE(v177) = 0x26;
  v163 = (Tile *)sub_5C3440(
                   this,
                   v169.m_data,
                   *(int *)&v169.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
  v164 = *(this + 0x221);
  *(_DWORD *)&a2.m_dataLen = v165;
  *(float *)v174 = v164;
  v166 = v163;
  Tile_SetFloat(v163, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v166, (_DWORD *)0xFB1, *(float *)v174);
  Tile_SetFloat(v166, (_DWORD *)0xFB1, 0.0);
  v177 = 0xFFFFFFFF;
  _LN21(&a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  return 1;
}
