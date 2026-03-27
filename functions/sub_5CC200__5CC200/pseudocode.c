void __userpurge sub_5CC200(int a1@<ecx>, double st5_0@<st2>, signed int a3, int a4)
{
  Tile *v6; // ecx
  const char *v7; // eax
  _DWORD *v8; // edi
  double v9; // st7
  const char *v10; // eax
  _DWORD *v11; // edi
  double v12; // st7
  const char *v13; // eax
  _DWORD *v14; // edi
  double v15; // st7
  char *v16; // eax
  _DWORD *v17; // edi
  double v18; // st7
  char *v19; // edx
  _DWORD *v20; // edi
  double v21; // st7
  char *v22; // eax
  _DWORD *v23; // edi
  double v24; // st7
  char *v25; // edx
  _DWORD *v26; // edi
  double v27; // st7
  char *v28; // eax
  _DWORD *v29; // edi
  double v30; // st7
  char *v31; // edx
  _DWORD *v32; // edi
  double v33; // st7
  char *v34; // eax
  _DWORD *v35; // edi
  double v36; // st7
  char *v37; // edx
  _DWORD *v38; // edi
  double v39; // st7
  char *v40; // eax
  _DWORD *v41; // edi
  double v42; // st7
  char *v43; // edx
  _DWORD *v44; // edi
  double v45; // st7
  char *v46; // eax
  _DWORD *v47; // edi
  double v48; // st7
  char *v49; // edx
  _DWORD *v50; // edi
  double v51; // st7
  char *v52; // eax
  _DWORD *v53; // edi
  double v54; // st7
  char *v55; // edx
  _DWORD *v56; // edi
  double v57; // st7
  char *v58; // eax
  _DWORD *v59; // edi
  double v60; // st7
  char *v61; // edx
  _DWORD *v62; // edi
  double v63; // st7
  char *v64; // eax
  _DWORD *v65; // eax
  Tile *v66; // edi
  unsigned __int8 *v67; // edx
  _DWORD *v68; // eax
  Tile *v69; // esi
  const char *v70; // eax
  const char *v71; // eax
  _DWORD *v72; // eax
  double Float; // st7
  double v74; // st6
  int v75; // edx
  const char *v76; // eax
  char *v77; // ecx
  char *v78; // eax
  _DWORD *v79; // eax
  Tile *v80; // edi
  char *v81; // eax
  _DWORD *v82; // eax
  Tile *v83; // edi
  const char *v84; // eax
  _DWORD *v85; // eax
  Tile *v86; // edi
  const char *v87; // eax
  _DWORD *v88; // ecx
  unsigned int v89; // edi
  const unsigned __int8 *v90; // edi
  CHAR *v91; // eax
  Actor *v92; // ecx
  char *m_data; // ecx
  char v94; // al
  bool v95; // zf
  const char *v96; // eax
  char *v97; // ecx
  const char *v98; // edx
  void *v99; // esi
  TESForm *v100; // eax
  const char *v101; // eax
  const char *v102; // eax
  _DWORD *v103; // eax
  double v104; // st7
  char *v105; // ecx
  const char *v106; // edx
  const char *v107; // eax
  char *v108; // edx
  char *v109; // eax
  _DWORD *v110; // eax
  double v111; // st7
  double v112; // st6
  char *v113; // edx
  char *v114; // eax
  _DWORD *v115; // eax
  double v116; // st7
  char *v117; // edx
  char *v118; // eax
  _DWORD *v119; // eax
  double v120; // st7
  char *v121; // edx
  char *v122; // eax
  _DWORD *v123; // eax
  double v124; // st7
  char *v125; // edx
  char *v126; // eax
  _DWORD *v127; // eax
  double v128; // st7
  char *v129; // edx
  char *v130; // eax
  _DWORD *v131; // eax
  double v132; // st7
  char *v133; // edx
  char *v134; // eax
  _DWORD *v135; // eax
  double v136; // st7
  char *v137; // edx
  unsigned __int8 *v138; // eax
  char *v139; // edx
  char *v140; // eax
  _DWORD *v141; // eax
  double v142; // st7
  char *v143; // edx
  char *v144; // edx
  char *v145; // eax
  _DWORD *v146; // eax
  double v147; // st7
  char *v148; // edx
  char *v149; // edx
  char *v150; // eax
  _DWORD *v151; // eax
  double v152; // st7
  char *v153; // edx
  char *v154; // edx
  char *v155; // eax
  _DWORD *v156; // eax
  double v157; // st7
  char *v158; // edx
  char *v159; // edx
  char *v160; // eax
  _DWORD *v161; // eax
  double v162; // st7
  char *v163; // edx
  char *v164; // edx
  char *v165; // eax
  _DWORD *v166; // eax
  double v167; // st7
  char *v168; // edx
  char *v169; // edx
  char *v170; // eax
  _DWORD *v171; // eax
  double v172; // st7
  char *v173; // edx
  char *v174; // edx
  char *v175; // eax
  _DWORD *v176; // eax
  double v177; // st7
  char *v178; // edx
  char *v179; // edx
  char *v180; // eax
  _DWORD *v181; // eax
  double v182; // st7
  char *v183; // edx
  char *v184; // edx
  char *v185; // eax
  _DWORD *v186; // eax
  double v187; // st7
  char *v188; // edx
  char *v189; // edx
  char *v190; // eax
  _DWORD *v191; // eax
  double v192; // st7
  char *v193; // edx
  char *v194; // edx
  char *v195; // eax
  _DWORD *v196; // eax
  double v197; // st7
  char *v198; // edx
  char *v199; // edx
  char *v200; // eax
  _DWORD *v201; // eax
  double v202; // st7
  char *v203; // edx
  char *v204; // edx
  char *v205; // eax
  _DWORD *v206; // eax
  double v207; // st7
  char *v208; // edx
  char *v209; // edx
  char *v210; // eax
  _DWORD *v211; // eax
  double v212; // st7
  char *v213; // edx
  char *v214; // edx
  char *v215; // eax
  _DWORD *v216; // eax
  double v217; // st7
  char *v218; // edx
  char *v219; // edx
  char *v220; // eax
  _DWORD *v221; // eax
  double v222; // st7
  char *v223; // edx
  char *v224; // edx
  char *v225; // eax
  _DWORD *v226; // eax
  double v227; // st7
  char *v228; // edx
  char *v229; // edx
  char *v230; // eax
  _DWORD *v231; // eax
  double v232; // st7
  char *v233; // edx
  _DWORD *ShadowSceneNode; // eax
  _DWORD *v235; // eax
  BSStringT v236; // [esp-10h] [ebp-48h] BYREF
  BSStringT v237; // [esp-8h] [ebp-40h] BYREF
  _DWORD *a2; // [esp+0h] [ebp-38h]
  char v239; // [esp+16h] [ebp-22h]
  char v240; // [esp+17h] [ebp-21h]
  void *v241; // [esp+18h] [ebp-20h]
  void *v242; // [esp+1Ch] [ebp-1Ch]
  void *v243[2]; // [esp+20h] [ebp-18h] BYREF
  int v244; // [esp+34h] [ebp-4h]
  int _38; // [esp+38h] [ebp+0h] BYREF

  v6 = *(Tile **)(a1 + 0x30);
  *(float *)&a2 = 1.0;
  *(_DWORD *)&v237.m_dataLen = 0xFF0;
  v240 = 0;
  *(_BYTE *)(a1 + 0x8D0) = 0;
  Tile_SetFloat(v6, *(_DWORD **)&v237.m_dataLen, *(float *)&a2);
  if ( sub_57D2F0(*(void **)(a1 + 0x8EC)) )
  {
    sub_57DD90(*(void **)(a1 + 0x8EC), 0);
    sub_5C30C0((char **)a1);
  }
  else if ( a3 == 0xA )
  {
    sub_5C2730((void **)a1);
    sub_5C30C0((char **)a1);
LABEL_28:
    v70 = (const char *)dword_B38FF0;
    a2 = (_DWORD *)0xFA8;
    *(float *)&v241 = COERCE_FLOAT(&v237);
    v237.m_data = 0;
    v237.m_dataLen = 0;
    v237.m_bufLen = 0;
    BSStringT_Set(&v237, v70, 0);
    v71 = (const char *)dword_B38F80;
    v242 = &v236;
    v244 = 1;
    v236.m_data = 0;
    v236.m_dataLen = 0;
    v236.m_bufLen = 0;
    BSStringT_Set(&v236, v71, 0);
    v244 = 0xFFFFFFFF;
    v72 = (_DWORD *)sub_5C3440(
                      (_DWORD *)a1,
                      v236.m_data,
                      *(int *)&v236.m_dataLen,
                      (unsigned __int8 *)v237.m_data,
                      *(int *)&v237.m_dataLen);
    *(float *)&v241 = (float)a3;
    *(double *)v243 = *(float *)&v241;
    Float = Tile_GetFloat(v72, (int)a2);
    v74 = *(double *)v243;
    if ( *(double *)v243 == Float )
    {
      if ( byte_B3B4C8 )
      {
        sub_5C9CD0(st5_0, *(double *)v243, Float);
      }
      else
      {
        v75 = MessageButtonTextYes;
        v76 = (const char *)MessageButtonTextNo;
        v77 = (char *)dword_B39450;
        *(float *)&a2 = 0.0;
        ShowUIMessageBox(v77, (char)&_38, st5_0, *(double *)v243, Float, v77, (int)sub_5C9FC0, 1, v76, v75);
        byte_B3B4C8 = 1;
      }
      v240 = 1;
      goto LABEL_115;
    }
    if ( a3 == 0x62 )
    {
      v100 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      sub_526F00(v100);
      sub_5C91E0(st5_0, v74, Float);
      goto LABEL_115;
    }
    v101 = (const char *)dword_B38FF8;
    a2 = (_DWORD *)0xFA8;
    v242 = &v237;
    v237.m_data = 0;
    v237.m_dataLen = 0;
    v237.m_bufLen = 0;
    BSStringT_Set(&v237, v101, 0);
    v102 = (const char *)dword_B38F80;
    v243[0] = &v236;
    v244 = 2;
    v236.m_data = 0;
    v236.m_dataLen = 0;
    v236.m_bufLen = 0;
    BSStringT_Set(&v236, v102, 0);
    v244 = 0xFFFFFFFF;
    v103 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v104 = Tile_GetFloat(v103, (int)a2);
    if ( *(double *)v243 == v104 )
    {
      if ( byte_B3B4C9 )
      {
        sub_5C9C70(st5_0, *(double *)v243, v104);
      }
      else
      {
        v105 = (char *)MessageButtonTextYes;
        v106 = (const char *)MessageButtonTextNo;
        v107 = (const char *)dword_B39448;
        *(float *)&a2 = 0.0;
        ShowUIMessageBox(v105, (char)&_38, st5_0, *(double *)v243, v104, v107, (int)sub_5C9F70, 1, v106, (char)v105);
        byte_B3B4C9 = 1;
      }
      goto LABEL_116;
    }
    v108 = (char *)dword_B38F98;
    a2 = (_DWORD *)0xFA8;
    v243[0] = &v237;
    BSStringT_constr_str(&v237, v108);
    v109 = (char *)dword_B38F70;
    v242 = &v236;
    v244 = 3;
    BSStringT_constr_str(&v236, v109);
    v244 = 0xFFFFFFFF;
    v110 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v111 = Tile_GetFloat(v110, (int)a2);
    v112 = *(double *)v243;
    if ( *(double *)v243 == v111 )
    {
      sub_5C7070(0);
      UpdatePlayerHead(st5_0, v112, v111);
      goto LABEL_115;
    }
    v113 = (char *)dword_B38FC0;
    a2 = (_DWORD *)0xFA8;
    v243[0] = &v237;
    BSStringT_constr_str(&v237, v113);
    v114 = (char *)dword_B38F88;
    v242 = &v236;
    v244 = 4;
    BSStringT_constr_str(&v236, v114);
    v244 = 0xFFFFFFFF;
    v115 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v116 = Tile_GetFloat(v115, (int)a2);
    if ( *(double *)v243 == v116 )
      goto LABEL_114;
    v117 = (char *)dword_B38FC8;
    a2 = (_DWORD *)0xFA8;
    v243[0] = &v237;
    BSStringT_constr_str(&v237, v117);
    v118 = (char *)dword_B38F88;
    v242 = &v236;
    v244 = 5;
    BSStringT_constr_str(&v236, v118);
    v244 = 0xFFFFFFFF;
    v119 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v120 = Tile_GetFloat(v119, (int)a2);
    if ( *(double *)v243 == v120 )
      goto LABEL_114;
    v121 = (char *)dword_B38FD0;
    a2 = (_DWORD *)0xFA8;
    v243[0] = &v237;
    BSStringT_constr_str(&v237, v121);
    v122 = (char *)dword_B38F88;
    v242 = &v236;
    v244 = 6;
    BSStringT_constr_str(&v236, v122);
    v244 = 0xFFFFFFFF;
    v123 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v124 = Tile_GetFloat(v123, (int)a2);
    if ( *(double *)v243 == v124 )
    {
LABEL_114:
      sub_5C5C30((_DWORD *)a1, 1);
      goto LABEL_115;
    }
    v125 = (char *)dword_B38FD8;
    a2 = (_DWORD *)0xFA8;
    v243[0] = &v237;
    BSStringT_constr_str(&v237, v125);
    v126 = (char *)dword_B38F88;
    v242 = &v236;
    v244 = 7;
    BSStringT_constr_str(&v236, v126);
    v244 = 0xFFFFFFFF;
    v127 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v128 = Tile_GetFloat(v127, (int)a2);
    if ( *(double *)v243 == v128 )
    {
      sub_5C62D0((_DWORD *)a1);
      goto LABEL_115;
    }
    v129 = (char *)dword_B38FA8;
    a2 = (_DWORD *)0xFA8;
    v243[0] = &v237;
    BSStringT_constr_str(&v237, v129);
    v130 = (char *)dword_B38F78;
    v242 = &v236;
    v244 = 8;
    BSStringT_constr_str(&v236, v130);
    v244 = 0xFFFFFFFF;
    v131 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v132 = Tile_GetFloat(v131, (int)a2);
    if ( *(double *)v243 == v132 )
    {
      sub_5C9770((float *)a1, st5_0, *(double *)v243, v132);
      goto LABEL_115;
    }
    v133 = (char *)dword_B38F80;
    a2 = (_DWORD *)0xFA8;
    v243[0] = &v237;
    BSStringT_constr_str(&v237, v133);
    v134 = (char *)dword_B38F70;
    v242 = &v236;
    v244 = 9;
    BSStringT_constr_str(&v236, v134);
    v244 = 0xFFFFFFFF;
    v135 = (_DWORD *)sub_5C3440(
                       (_DWORD *)a1,
                       v236.m_data,
                       *(int *)&v236.m_dataLen,
                       (unsigned __int8 *)v237.m_data,
                       *(int *)&v237.m_dataLen);
    *(double *)v243 = *(float *)&v241;
    v136 = Tile_GetFloat(v135, (int)a2);
    if ( *(double *)v243 == v136 )
    {
      v137 = (char *)dword_B38F80;
      *(float *)&a2 = 0.0;
      v243[0] = &v237;
      BSStringT_constr_str(&v237, v137);
      v244 = 0xA;
    }
    else
    {
      v139 = (char *)dword_B38FE0;
      a2 = (_DWORD *)0xFA8;
      v243[0] = &v237;
      BSStringT_constr_str(&v237, v139);
      v140 = (char *)dword_B38F80;
      v242 = &v236;
      v244 = 0xB;
      BSStringT_constr_str(&v236, v140);
      v244 = 0xFFFFFFFF;
      v141 = (_DWORD *)sub_5C3440(
                         (_DWORD *)a1,
                         v236.m_data,
                         *(int *)&v236.m_dataLen,
                         (unsigned __int8 *)v237.m_data,
                         *(int *)&v237.m_dataLen);
      *(double *)v243 = *(float *)&v241;
      v142 = Tile_GetFloat(v141, (int)a2);
      if ( *(double *)v243 == v142 )
      {
        v143 = (char *)dword_B38FE0;
        a2 = (_DWORD *)1;
        v243[0] = &v237;
        BSStringT_constr_str(&v237, v143);
        v138 = dword_B38F80;
        v244 = 0xC;
        goto LABEL_75;
      }
      v144 = (char *)dword_B38FE8;
      a2 = (_DWORD *)0xFA8;
      v243[0] = &v237;
      BSStringT_constr_str(&v237, v144);
      v145 = (char *)dword_B38F80;
      v242 = &v236;
      v244 = 0xD;
      BSStringT_constr_str(&v236, v145);
      v244 = 0xFFFFFFFF;
      v146 = (_DWORD *)sub_5C3440(
                         (_DWORD *)a1,
                         v236.m_data,
                         *(int *)&v236.m_dataLen,
                         (unsigned __int8 *)v237.m_data,
                         *(int *)&v237.m_dataLen);
      *(double *)v243 = *(float *)&v241;
      v147 = Tile_GetFloat(v146, (int)a2);
      if ( *(double *)v243 == v147 )
      {
        v148 = (char *)dword_B38FE8;
        a2 = (_DWORD *)1;
        v243[0] = &v237;
        BSStringT_constr_str(&v237, v148);
        v138 = dword_B38F80;
        v244 = 0xE;
        goto LABEL_75;
      }
      v149 = (char *)dword_B38F88;
      a2 = (_DWORD *)0xFA8;
      v243[0] = &v237;
      BSStringT_constr_str(&v237, v149);
      v150 = (char *)dword_B38F70;
      v242 = &v236;
      v244 = 0xF;
      BSStringT_constr_str(&v236, v150);
      v244 = 0xFFFFFFFF;
      v151 = (_DWORD *)sub_5C3440(
                         (_DWORD *)a1,
                         v236.m_data,
                         *(int *)&v236.m_dataLen,
                         (unsigned __int8 *)v237.m_data,
                         *(int *)&v237.m_dataLen);
      *(double *)v243 = *(float *)&v241;
      v152 = Tile_GetFloat(v151, (int)a2);
      if ( *(double *)v243 == v152 )
      {
        v153 = (char *)dword_B38F88;
        *(float *)&a2 = 0.0;
        v243[0] = &v237;
        BSStringT_constr_str(&v237, v153);
        v244 = 0x10;
      }
      else
      {
        v154 = (char *)dword_B38F78;
        a2 = (_DWORD *)0xFA8;
        v243[0] = &v237;
        BSStringT_constr_str(&v237, v154);
        v155 = (char *)dword_B38F70;
        v242 = &v236;
        v244 = 0x11;
        BSStringT_constr_str(&v236, v155);
        v244 = 0xFFFFFFFF;
        v156 = (_DWORD *)sub_5C3440(
                           (_DWORD *)a1,
                           v236.m_data,
                           *(int *)&v236.m_dataLen,
                           (unsigned __int8 *)v237.m_data,
                           *(int *)&v237.m_dataLen);
        *(double *)v243 = *(float *)&v241;
        v157 = Tile_GetFloat(v156, (int)a2);
        if ( *(double *)v243 != v157 )
        {
          v159 = (char *)dword_B39000;
          a2 = (_DWORD *)0xFA8;
          v243[0] = &v237;
          BSStringT_constr_str(&v237, v159);
          v160 = (char *)dword_B38FE0;
          v242 = &v236;
          v244 = 0x13;
          BSStringT_constr_str(&v236, v160);
          v244 = 0xFFFFFFFF;
          v161 = (_DWORD *)sub_5C3440(
                             (_DWORD *)a1,
                             v236.m_data,
                             *(int *)&v236.m_dataLen,
                             (unsigned __int8 *)v237.m_data,
                             *(int *)&v237.m_dataLen);
          *(double *)v243 = *(float *)&v241;
          v162 = Tile_GetFloat(v161, (int)a2);
          if ( *(double *)v243 == v162 )
          {
            v163 = (char *)dword_B39000;
            a2 = (_DWORD *)1;
            v243[0] = &v237;
            BSStringT_constr_str(&v237, v163);
            v138 = dword_B38FE0;
            v244 = 0x14;
          }
          else
          {
            v164 = (char *)dword_B39008;
            a2 = (_DWORD *)0xFA8;
            v243[0] = &v237;
            BSStringT_constr_str(&v237, v164);
            v165 = (char *)dword_B38FE0;
            v242 = &v236;
            v244 = 0x15;
            BSStringT_constr_str(&v236, v165);
            v244 = 0xFFFFFFFF;
            v166 = (_DWORD *)sub_5C3440(
                               (_DWORD *)a1,
                               v236.m_data,
                               *(int *)&v236.m_dataLen,
                               (unsigned __int8 *)v237.m_data,
                               *(int *)&v237.m_dataLen);
            *(double *)v243 = *(float *)&v241;
            v167 = Tile_GetFloat(v166, (int)a2);
            if ( *(double *)v243 == v167 )
            {
              v168 = (char *)dword_B39008;
              a2 = (_DWORD *)1;
              v243[0] = &v237;
              BSStringT_constr_str(&v237, v168);
              v138 = dword_B38FE0;
              v244 = 0x16;
            }
            else
            {
              v169 = (char *)dword_B39010;
              a2 = (_DWORD *)0xFA8;
              v243[0] = &v237;
              BSStringT_constr_str(&v237, v169);
              v170 = (char *)dword_B38FE0;
              v242 = &v236;
              v244 = 0x17;
              BSStringT_constr_str(&v236, v170);
              v244 = 0xFFFFFFFF;
              v171 = (_DWORD *)sub_5C3440(
                                 (_DWORD *)a1,
                                 v236.m_data,
                                 *(int *)&v236.m_dataLen,
                                 (unsigned __int8 *)v237.m_data,
                                 *(int *)&v237.m_dataLen);
              *(double *)v243 = *(float *)&v241;
              v172 = Tile_GetFloat(v171, (int)a2);
              if ( *(double *)v243 == v172 )
              {
                v173 = (char *)dword_B39010;
                a2 = (_DWORD *)1;
                v243[0] = &v237;
                BSStringT_constr_str(&v237, v173);
                v138 = dword_B38FE0;
                v244 = 0x18;
              }
              else
              {
                v174 = (char *)dword_B39018;
                a2 = (_DWORD *)0xFA8;
                v243[0] = &v237;
                BSStringT_constr_str(&v237, v174);
                v175 = (char *)dword_B38FE0;
                v242 = &v236;
                v244 = 0x19;
                BSStringT_constr_str(&v236, v175);
                v244 = 0xFFFFFFFF;
                v176 = (_DWORD *)sub_5C3440(
                                   (_DWORD *)a1,
                                   v236.m_data,
                                   *(int *)&v236.m_dataLen,
                                   (unsigned __int8 *)v237.m_data,
                                   *(int *)&v237.m_dataLen);
                *(double *)v243 = *(float *)&v241;
                v177 = Tile_GetFloat(v176, (int)a2);
                if ( *(double *)v243 == v177 )
                {
                  v178 = (char *)dword_B39018;
                  a2 = (_DWORD *)1;
                  v243[0] = &v237;
                  BSStringT_constr_str(&v237, v178);
                  v138 = dword_B38FE0;
                  v244 = 0x1A;
                }
                else
                {
                  v179 = (char *)dword_B38F90;
                  a2 = (_DWORD *)0xFA8;
                  v243[0] = &v237;
                  BSStringT_constr_str(&v237, v179);
                  v180 = (char *)dword_B38FE0;
                  v242 = &v236;
                  v244 = 0x1B;
                  BSStringT_constr_str(&v236, v180);
                  v244 = 0xFFFFFFFF;
                  v181 = (_DWORD *)sub_5C3440(
                                     (_DWORD *)a1,
                                     v236.m_data,
                                     *(int *)&v236.m_dataLen,
                                     (unsigned __int8 *)v237.m_data,
                                     *(int *)&v237.m_dataLen);
                  *(double *)v243 = *(float *)&v241;
                  v182 = Tile_GetFloat(v181, (int)a2);
                  if ( *(double *)v243 == v182 )
                  {
                    v183 = (char *)dword_B38F90;
                    a2 = (_DWORD *)1;
                    v243[0] = &v237;
                    BSStringT_constr_str(&v237, v183);
                    v138 = dword_B38FE0;
                    v244 = 0x1C;
                  }
                  else
                  {
                    v184 = (char *)dword_B39020;
                    a2 = (_DWORD *)0xFA8;
                    v243[0] = &v237;
                    BSStringT_constr_str(&v237, v184);
                    v185 = (char *)dword_B38FE0;
                    v242 = &v236;
                    v244 = 0x1D;
                    BSStringT_constr_str(&v236, v185);
                    v244 = 0xFFFFFFFF;
                    v186 = (_DWORD *)sub_5C3440(
                                       (_DWORD *)a1,
                                       v236.m_data,
                                       *(int *)&v236.m_dataLen,
                                       (unsigned __int8 *)v237.m_data,
                                       *(int *)&v237.m_dataLen);
                    *(double *)v243 = *(float *)&v241;
                    v187 = Tile_GetFloat(v186, (int)a2);
                    if ( *(double *)v243 == v187 )
                    {
                      v188 = (char *)dword_B39020;
                      a2 = (_DWORD *)1;
                      v243[0] = &v237;
                      BSStringT_constr_str(&v237, v188);
                      v138 = dword_B38FE0;
                      v244 = 0x1E;
                    }
                    else
                    {
                      v189 = (char *)dword_B39028;
                      a2 = (_DWORD *)0xFA8;
                      v243[0] = &v237;
                      BSStringT_constr_str(&v237, v189);
                      v190 = (char *)dword_B38FE0;
                      v242 = &v236;
                      v244 = 0x1F;
                      BSStringT_constr_str(&v236, v190);
                      v244 = 0xFFFFFFFF;
                      v191 = (_DWORD *)sub_5C3440(
                                         (_DWORD *)a1,
                                         v236.m_data,
                                         *(int *)&v236.m_dataLen,
                                         (unsigned __int8 *)v237.m_data,
                                         *(int *)&v237.m_dataLen);
                      *(double *)v243 = *(float *)&v241;
                      v192 = Tile_GetFloat(v191, (int)a2);
                      if ( *(double *)v243 == v192 )
                      {
                        v193 = (char *)dword_B39028;
                        a2 = (_DWORD *)1;
                        v243[0] = &v237;
                        BSStringT_constr_str(&v237, v193);
                        v138 = dword_B38FE0;
                        v244 = 0x20;
                      }
                      else
                      {
                        v194 = (char *)dword_B39030;
                        a2 = (_DWORD *)0xFA8;
                        v243[0] = &v237;
                        BSStringT_constr_str(&v237, v194);
                        v195 = (char *)dword_B38FE0;
                        v242 = &v236;
                        v244 = 0x21;
                        BSStringT_constr_str(&v236, v195);
                        v244 = 0xFFFFFFFF;
                        v196 = (_DWORD *)sub_5C3440(
                                           (_DWORD *)a1,
                                           v236.m_data,
                                           *(int *)&v236.m_dataLen,
                                           (unsigned __int8 *)v237.m_data,
                                           *(int *)&v237.m_dataLen);
                        *(double *)v243 = *(float *)&v241;
                        v197 = Tile_GetFloat(v196, (int)a2);
                        if ( *(double *)v243 == v197 )
                        {
                          v198 = (char *)dword_B39030;
                          a2 = (_DWORD *)1;
                          v243[0] = &v237;
                          BSStringT_constr_str(&v237, v198);
                          v138 = dword_B38FE0;
                          v244 = 0x22;
                        }
                        else
                        {
                          v199 = (char *)dword_B39038;
                          a2 = (_DWORD *)0xFA8;
                          v243[0] = &v237;
                          BSStringT_constr_str(&v237, v199);
                          v200 = (char *)dword_B38FE0;
                          v242 = &v236;
                          v244 = 0x23;
                          BSStringT_constr_str(&v236, v200);
                          v244 = 0xFFFFFFFF;
                          v201 = (_DWORD *)sub_5C3440(
                                             (_DWORD *)a1,
                                             v236.m_data,
                                             *(int *)&v236.m_dataLen,
                                             (unsigned __int8 *)v237.m_data,
                                             *(int *)&v237.m_dataLen);
                          *(double *)v243 = *(float *)&v241;
                          v202 = Tile_GetFloat(v201, (int)a2);
                          if ( *(double *)v243 == v202 )
                          {
                            v203 = (char *)dword_B39038;
                            a2 = (_DWORD *)1;
                            v243[0] = &v237;
                            BSStringT_constr_str(&v237, v203);
                            v138 = dword_B38FE0;
                            v244 = 0x24;
                          }
                          else
                          {
                            v204 = (char *)dword_B39040;
                            a2 = (_DWORD *)0xFA8;
                            v243[0] = &v237;
                            BSStringT_constr_str(&v237, v204);
                            v205 = (char *)dword_B38FE8;
                            v242 = &v236;
                            v244 = 0x25;
                            BSStringT_constr_str(&v236, v205);
                            v244 = 0xFFFFFFFF;
                            v206 = (_DWORD *)sub_5C3440(
                                               (_DWORD *)a1,
                                               v236.m_data,
                                               *(int *)&v236.m_dataLen,
                                               (unsigned __int8 *)v237.m_data,
                                               *(int *)&v237.m_dataLen);
                            *(double *)v243 = *(float *)&v241;
                            v207 = Tile_GetFloat(v206, (int)a2);
                            if ( *(double *)v243 == v207 )
                            {
                              v208 = (char *)dword_B39040;
                              a2 = (_DWORD *)1;
                              v243[0] = &v237;
                              BSStringT_constr_str(&v237, v208);
                              v138 = dword_B38FE8;
                              v244 = 0x26;
                            }
                            else
                            {
                              v209 = (char *)dword_B39050;
                              a2 = (_DWORD *)0xFA8;
                              v243[0] = &v237;
                              BSStringT_constr_str(&v237, v209);
                              v210 = (char *)dword_B38FE8;
                              v242 = &v236;
                              v244 = 0x27;
                              BSStringT_constr_str(&v236, v210);
                              v244 = 0xFFFFFFFF;
                              v211 = (_DWORD *)sub_5C3440(
                                                 (_DWORD *)a1,
                                                 v236.m_data,
                                                 *(int *)&v236.m_dataLen,
                                                 (unsigned __int8 *)v237.m_data,
                                                 *(int *)&v237.m_dataLen);
                              *(double *)v243 = *(float *)&v241;
                              v212 = Tile_GetFloat(v211, (int)a2);
                              if ( *(double *)v243 == v212 )
                              {
                                v213 = (char *)dword_B39050;
                                a2 = (_DWORD *)1;
                                v243[0] = &v237;
                                BSStringT_constr_str(&v237, v213);
                                v138 = dword_B38FE8;
                                v244 = 0x28;
                              }
                              else
                              {
                                v214 = (char *)dword_B39320;
                                a2 = (_DWORD *)0xFA8;
                                v243[0] = &v237;
                                BSStringT_constr_str(&v237, v214);
                                v215 = (char *)dword_B38FE8;
                                v242 = &v236;
                                v244 = 0x29;
                                BSStringT_constr_str(&v236, v215);
                                v244 = 0xFFFFFFFF;
                                v216 = (_DWORD *)sub_5C3440(
                                                   (_DWORD *)a1,
                                                   v236.m_data,
                                                   *(int *)&v236.m_dataLen,
                                                   (unsigned __int8 *)v237.m_data,
                                                   *(int *)&v237.m_dataLen);
                                *(double *)v243 = *(float *)&v241;
                                v217 = Tile_GetFloat(v216, (int)a2);
                                if ( *(double *)v243 == v217 )
                                {
                                  v218 = (char *)dword_B39320;
                                  a2 = (_DWORD *)1;
                                  v243[0] = &v237;
                                  BSStringT_constr_str(&v237, v218);
                                  v138 = dword_B38FE8;
                                  v244 = 0x2A;
                                }
                                else
                                {
                                  v219 = (char *)dword_B39058;
                                  a2 = (_DWORD *)0xFA8;
                                  v243[0] = &v237;
                                  BSStringT_constr_str(&v237, v219);
                                  v220 = (char *)dword_B38FE8;
                                  v242 = &v236;
                                  v244 = 0x2B;
                                  BSStringT_constr_str(&v236, v220);
                                  v244 = 0xFFFFFFFF;
                                  v221 = (_DWORD *)sub_5C3440(
                                                     (_DWORD *)a1,
                                                     v236.m_data,
                                                     *(int *)&v236.m_dataLen,
                                                     (unsigned __int8 *)v237.m_data,
                                                     *(int *)&v237.m_dataLen);
                                  *(double *)v243 = *(float *)&v241;
                                  v222 = Tile_GetFloat(v221, (int)a2);
                                  if ( *(double *)v243 == v222 )
                                  {
                                    v223 = (char *)dword_B39058;
                                    a2 = (_DWORD *)1;
                                    v243[0] = &v237;
                                    BSStringT_constr_str(&v237, v223);
                                    v138 = dword_B38FE8;
                                    v244 = 0x2C;
                                  }
                                  else
                                  {
                                    v224 = (char *)dword_B39060;
                                    a2 = (_DWORD *)0xFA8;
                                    v243[0] = &v237;
                                    BSStringT_constr_str(&v237, v224);
                                    v225 = (char *)dword_B38FE8;
                                    v242 = &v236;
                                    v244 = 0x2D;
                                    BSStringT_constr_str(&v236, v225);
                                    v244 = 0xFFFFFFFF;
                                    v226 = (_DWORD *)sub_5C3440(
                                                       (_DWORD *)a1,
                                                       v236.m_data,
                                                       *(int *)&v236.m_dataLen,
                                                       (unsigned __int8 *)v237.m_data,
                                                       *(int *)&v237.m_dataLen);
                                    *(double *)v243 = *(float *)&v241;
                                    v227 = Tile_GetFloat(v226, (int)a2);
                                    if ( *(double *)v243 == v227 )
                                    {
                                      v228 = (char *)dword_B39060;
                                      a2 = (_DWORD *)1;
                                      v243[0] = &v237;
                                      BSStringT_constr_str(&v237, v228);
                                      v138 = dword_B38FE8;
                                      v244 = 0x2E;
                                    }
                                    else
                                    {
                                      v229 = (char *)dword_B39328;
                                      a2 = (_DWORD *)0xFA8;
                                      v243[0] = &v237;
                                      BSStringT_constr_str(&v237, v229);
                                      v230 = (char *)dword_B38FE8;
                                      v242 = &v236;
                                      v244 = 0x2F;
                                      BSStringT_constr_str(&v236, v230);
                                      v244 = 0xFFFFFFFF;
                                      v231 = (_DWORD *)sub_5C3440(
                                                         (_DWORD *)a1,
                                                         v236.m_data,
                                                         *(int *)&v236.m_dataLen,
                                                         (unsigned __int8 *)v237.m_data,
                                                         *(int *)&v237.m_dataLen);
                                      *(double *)v243 = *(float *)&v241;
                                      v232 = Tile_GetFloat(v231, (int)a2);
                                      if ( *(double *)v243 != v232 )
                                        return;
                                      v233 = (char *)dword_B39328;
                                      a2 = (_DWORD *)1;
                                      v243[0] = &v237;
                                      BSStringT_constr_str(&v237, v233);
                                      v138 = dword_B38FE8;
                                      v244 = 0x30;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_75;
        }
        v158 = (char *)dword_B38F78;
        *(float *)&a2 = 0.0;
        v243[0] = &v237;
        BSStringT_constr_str(&v237, v158);
        v244 = 0x12;
      }
    }
    v138 = dword_B38F70;
LABEL_75:
    v242 = &v236;
    BSStringT_constr_str(&v236, (char *)v138);
    v244 = 0xFFFFFFFF;
    sub_5C9650(
      (Tile **)a1,
      (unsigned int)v236.m_data,
      *(int *)&v236.m_dataLen,
      v237.m_data,
      *(int *)&v237.m_dataLen,
      (char)a2);
    goto LABEL_115;
  }
  if ( a3 != 0x5A )
    goto LABEL_28;
  v7 = (const char *)dword_B38F70;
  a2 = (_DWORD *)0xFA8;
  *(float *)&v241 = COERCE_FLOAT(&v237);
  v237.m_data = 0;
  v237.m_dataLen = 0;
  v237.m_bufLen = 0;
  BSStringT_Set(&v237, v7, 0);
  v8 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
  *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
  v9 = Tile_GetFloat(v8, (int)a2);
  if ( v9 == *(double *)v243 )
  {
    v88 = *(_DWORD **)(a1 + 0x30);
    v239 = 1;
    v89 = 0;
    if ( strlen(sub_588C10(v88, 0xFDE)) )
    {
      do
      {
        if ( sub_588C10(*(_DWORD **)(a1 + 0x30), 0xFDE)[v89] != 0x20 )
          v239 = 0;
        ++v89;
      }
      while ( v89 < strlen(sub_588C10(*(_DWORD **)(a1 + 0x30), 0xFDE)) );
    }
    v90 = dword_B39440;
    v91 = sub_588C10(*(_DWORD **)(a1 + 0x30), 0xFDE);
    if ( !_mbscmp((const unsigned __int8 *)v91, v90) || v239 )
    {
      ShowUIMessageBox(
        (char *)dword_B39438,
        (char)&_38,
        st5_0,
        1.0,
        v9,
        (const char *)dword_B39438,
        0,
        1,
        (const char *)sOk,
        0);
      return;
    }
    v243[0] = 0;
    v243[1] = 0;
    v92 = (Actor *)TESDataHandler_g_PlayerRef;
    v244 = 0;
    m_data = Actor::GetRaceIfNPC(v92)->name.name.m_data;
    if ( !m_data )
      m_data = EmptyString;
    v94 = *m_data;
    if ( *m_data == 0x61
      || v94 == 0x65
      || v94 == 0x69
      || v94 == 0x6F
      || v94 == 0x75
      || v94 == 0x41
      || v94 == 0x45
      || v94 == 0x49
      || v94 == 0x4F
      || (v95 = v94 == 0x55, v96 = *(const char **)dword_B38660, v95) )
    {
      v96 = (const char *)dword_B38668;
    }
    BSStringT_Static_Format((BSStringT *)v243, "%s %s?", v96, m_data);
    v97 = (char *)MessageButtonTextYes;
    v98 = (const char *)MessageButtonTextNo;
    v99 = v243[0];
    v236.m_data = 0;
    ShowUIMessageBox(v97, (char)&_38, st5_0, 1.0, v9, (const char *)v243[0], (int)sub_5C2BA0, 1, v98, (char)v97);
    v244 = 0xFFFFFFFF;
    FormHeapFree((unsigned int)v99);
  }
  else
  {
    v10 = (const char *)dword_B38FE0;
    a2 = (_DWORD *)0xFA8;
    *(float *)&v241 = COERCE_FLOAT(&v237);
    v237.m_data = 0;
    v237.m_dataLen = 0;
    v237.m_bufLen = 0;
    BSStringT_Set(&v237, v10, 0);
    v11 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
    *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
    v12 = Tile_GetFloat(v11, (int)a2);
    if ( v12 == *(double *)v243 )
      goto LABEL_34;
    v13 = (const char *)dword_B38FE8;
    a2 = (_DWORD *)0xFA8;
    *(float *)&v241 = COERCE_FLOAT(&v237);
    v237.m_data = 0;
    v237.m_dataLen = 0;
    v237.m_bufLen = 0;
    BSStringT_Set(&v237, v13, 0);
    v14 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
    *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
    v15 = Tile_GetFloat(v14, (int)a2);
    if ( v15 == *(double *)v243 )
    {
LABEL_34:
      v84 = (const char *)dword_B38F80;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      v237.m_data = 0;
      v237.m_dataLen = 0;
      v237.m_bufLen = 0;
      BSStringT_Set(&v237, v84, 0);
      v85 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      v86 = *(Tile **)(a1 + 4);
      *(float *)&a2 = Tile_GetFloat(v85, (int)a2);
      Tile_SetFloat(v86, (_DWORD *)0xFAE, *(float *)&a2);
      v87 = (const char *)dword_B38F80;
      a2 = (_DWORD *)0xFD0;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      v237.m_data = 0;
      v237.m_dataLen = 0;
      v237.m_bufLen = 0;
      BSStringT_Set(&v237, v87, 0);
    }
    else
    {
      v16 = (char *)dword_B39000;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v16);
      v17 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v18 = Tile_GetFloat(v17, (int)a2);
      if ( v18 == *(double *)v243 )
        goto LABEL_33;
      v19 = (char *)dword_B39008;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v19);
      v20 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v21 = Tile_GetFloat(v20, (int)a2);
      if ( v21 == *(double *)v243 )
        goto LABEL_33;
      v22 = (char *)dword_B39010;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v22);
      v23 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v24 = Tile_GetFloat(v23, (int)a2);
      if ( v24 == *(double *)v243 )
        goto LABEL_33;
      v25 = (char *)dword_B39018;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v25);
      v26 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v27 = Tile_GetFloat(v26, (int)a2);
      if ( v27 == *(double *)v243 )
        goto LABEL_33;
      v28 = (char *)dword_B38F90;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v28);
      v29 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v30 = Tile_GetFloat(v29, (int)a2);
      if ( v30 == *(double *)v243 )
        goto LABEL_33;
      v31 = (char *)dword_B39020;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v31);
      v32 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v33 = Tile_GetFloat(v32, (int)a2);
      if ( v33 == *(double *)v243 )
        goto LABEL_33;
      v34 = (char *)dword_B39028;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v34);
      v35 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v36 = Tile_GetFloat(v35, (int)a2);
      if ( v36 == *(double *)v243 )
        goto LABEL_33;
      v37 = (char *)dword_B39008;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v37);
      v38 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v39 = Tile_GetFloat(v38, (int)a2);
      if ( v39 == *(double *)v243 )
        goto LABEL_33;
      v40 = (char *)dword_B39030;
      a2 = (_DWORD *)0xFA8;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, v40);
      v41 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
      *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
      v42 = Tile_GetFloat(v41, (int)a2);
      if ( v42 == *(double *)v243
        || (v43 = (char *)dword_B39038,
            a2 = (_DWORD *)0xFA8,
            *(float *)&v241 = COERCE_FLOAT(&v237),
            BSStringT_constr_str(&v237, v43),
            v44 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen),
            *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE),
            v45 = Tile_GetFloat(v44, (int)a2),
            v45 == *(double *)v243) )
      {
LABEL_33:
        v81 = (char *)dword_B38FE0;
        a2 = (_DWORD *)0xFA8;
        *(float *)&v241 = COERCE_FLOAT(&v237);
        BSStringT_constr_str(&v237, v81);
        v82 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
        v83 = *(Tile **)(a1 + 4);
        *(float *)&a2 = Tile_GetFloat(v82, (int)a2);
        Tile_SetFloat(v83, (_DWORD *)0xFAE, *(float *)&a2);
        v67 = dword_B38FE0;
      }
      else
      {
        v46 = (char *)dword_B39040;
        a2 = (_DWORD *)0xFA8;
        *(float *)&v241 = COERCE_FLOAT(&v237);
        BSStringT_constr_str(&v237, v46);
        v47 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
        *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
        v48 = Tile_GetFloat(v47, (int)a2);
        if ( v48 == *(double *)v243 )
          goto LABEL_32;
        v49 = (char *)dword_B39050;
        a2 = (_DWORD *)0xFA8;
        *(float *)&v241 = COERCE_FLOAT(&v237);
        BSStringT_constr_str(&v237, v49);
        v50 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
        *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
        v51 = Tile_GetFloat(v50, (int)a2);
        if ( v51 == *(double *)v243 )
          goto LABEL_32;
        v52 = (char *)dword_B39320;
        a2 = (_DWORD *)0xFA8;
        *(float *)&v241 = COERCE_FLOAT(&v237);
        BSStringT_constr_str(&v237, v52);
        v53 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
        *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
        v54 = Tile_GetFloat(v53, (int)a2);
        if ( v54 == *(double *)v243 )
          goto LABEL_32;
        v55 = (char *)dword_B39058;
        a2 = (_DWORD *)0xFA8;
        *(float *)&v241 = COERCE_FLOAT(&v237);
        BSStringT_constr_str(&v237, v55);
        v56 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
        *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
        v57 = Tile_GetFloat(v56, (int)a2);
        if ( v57 == *(double *)v243 )
          goto LABEL_32;
        v58 = (char *)dword_B39060;
        a2 = (_DWORD *)0xFA8;
        *(float *)&v241 = COERCE_FLOAT(&v237);
        BSStringT_constr_str(&v237, v58);
        v59 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
        *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
        v60 = Tile_GetFloat(v59, (int)a2);
        if ( v60 == *(double *)v243
          || (v61 = (char *)dword_B39328,
              a2 = (_DWORD *)0xFA8,
              *(float *)&v241 = COERCE_FLOAT(&v237),
              BSStringT_constr_str(&v237, v61),
              v62 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen),
              *(double *)v243 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE),
              v63 = Tile_GetFloat(v62, (int)a2),
              v63 == *(double *)v243) )
        {
LABEL_32:
          v78 = (char *)dword_B38FE8;
          a2 = (_DWORD *)0xFA8;
          *(float *)&v241 = COERCE_FLOAT(&v237);
          BSStringT_constr_str(&v237, v78);
          v79 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
          v80 = *(Tile **)(a1 + 4);
          *(float *)&a2 = Tile_GetFloat(v79, (int)a2);
          Tile_SetFloat(v80, (_DWORD *)0xFAE, *(float *)&a2);
          v67 = dword_B38FE8;
        }
        else
        {
          Tile_SetFloat(*(Tile **)(a1 + 0x3C), (_DWORD *)0xFB3, 1.0);
          v64 = (char *)dword_B38F70;
          a2 = (_DWORD *)0xFA8;
          *(float *)&v241 = COERCE_FLOAT(&v237);
          BSStringT_constr_str(&v237, v64);
          v65 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
          v66 = *(Tile **)(a1 + 4);
          *(float *)&a2 = Tile_GetFloat(v65, (int)a2);
          Tile_SetFloat(v66, (_DWORD *)0xFAE, *(float *)&a2);
          v67 = dword_B38F70;
        }
      }
      a2 = (_DWORD *)0xFD0;
      *(float *)&v241 = COERCE_FLOAT(&v237);
      BSStringT_constr_str(&v237, (char *)v67);
    }
    v68 = (_DWORD *)sub_5C3110((_DWORD *)a1, (unsigned __int8 *)v237.m_data, *(int *)&v237.m_dataLen);
    v69 = *(Tile **)(a1 + 4);
    *(float *)&a2 = Tile_GetFloat(v68, (int)a2);
    Tile_SetFloat(v69, (_DWORD *)0xFAF, *(float *)&a2);
  }
LABEL_115:
  v95 = v240 == 0;
  byte_B3B4C9 = 0;
  if ( v95 )
LABEL_116:
    byte_B3B4C8 = 0;
  *(float *)&a2 = COERCE_FLOAT((int)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef));
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
  sub_7C5E70(ShadowSceneNode, (int)a2);
  a2 = (_DWORD *)1;
  *(_DWORD *)&v237.m_dataLen = 1;
  v235 = (_DWORD *)GetShadowSceneNode(0);
  sub_7C7EB0(v235, v237.m_dataLen, (char)a2);
}
