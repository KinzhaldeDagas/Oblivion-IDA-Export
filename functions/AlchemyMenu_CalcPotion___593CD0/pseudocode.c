void __usercall AlchemyMenu_CalcPotion_(_DWORD *a1@<ecx>, double a2@<st2>, double st6_0@<st1>, double a4@<st0>)
{
  int v5; // ecx
  _DWORD *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int *v8; // ebp
  int v9; // esi
  int v10; // esi
  _DWORD *v11; // edi
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  int *v14; // ecx
  int v15; // esi
  SInt32 BaseCalcAVi; // eax
  _DWORD *v17; // ebx
  void *v18; // eax
  unsigned int v19; // ecx
  _DWORD *v20; // eax
  int v21; // eax
  int *v22; // ecx
  int v23; // eax
  int *v24; // eax
  SInt32 v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // esi
  _DWORD *v30; // eax
  int v31; // ecx
  int v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // ebp
  int j; // edi
  _DWORD *v36; // eax
  int *v37; // esi
  _DWORD *v38; // ecx
  int v39; // eax
  _DWORD *v40; // ebx
  _DWORD *v41; // eax
  _DWORD *v42; // ebp
  int k; // edi
  _DWORD *v44; // eax
  int *v45; // esi
  _DWORD *v46; // ecx
  int v47; // ecx
  int v48; // eax
  _DWORD *v49; // eax
  _DWORD *v50; // ebp
  int v51; // edi
  _DWORD *v52; // eax
  int *v53; // esi
  _DWORD *v54; // ecx
  int v55; // ecx
  _DWORD *v56; // eax
  _DWORD *v57; // ebp
  int m; // edi
  _DWORD *v59; // eax
  int *v60; // esi
  _DWORD *v61; // ecx
  int v62; // eax
  _DWORD *v63; // eax
  _DWORD *v64; // ebp
  int n; // edi
  _DWORD *v66; // eax
  int *v67; // esi
  _DWORD *v68; // ecx
  int v69; // eax
  _DWORD *v70; // eax
  _DWORD *v71; // ebp
  int ii; // edi
  _DWORD *v73; // eax
  int *v74; // esi
  _DWORD *v75; // ecx
  _DWORD *v76; // ebx
  int v77; // ecx
  int v78; // eax
  _DWORD *v79; // eax
  _DWORD *v80; // ebp
  int kk; // edi
  _DWORD *v82; // eax
  int *v83; // esi
  _DWORD *v84; // ecx
  char *v85; // ebx
  _DWORD *v86; // eax
  _DWORD *v87; // ebp
  int v88; // edi
  _DWORD *v89; // eax
  int *v90; // esi
  _DWORD *v91; // ecx
  int v92; // eax
  _DWORD *v93; // eax
  _DWORD *v94; // ebp
  int mm; // edi
  _DWORD *v96; // eax
  int *v97; // esi
  _DWORD *v98; // ecx
  int v99; // eax
  _DWORD *v100; // eax
  _DWORD *v101; // ebp
  int nn; // edi
  _DWORD *v103; // eax
  int *v104; // esi
  _DWORD *v105; // ecx
  float *v106; // ebp
  unsigned __int8 v107; // al
  int v108; // ecx
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // esi
  int v113; // ebx
  int v114; // ecx
  int *v115; // eax
  int *v116; // edi
  char IsHostile; // al
  int v118; // ecx
  double v119; // st7
  int v120; // ecx
  double v121; // st7
  int v122; // ecx
  double v123; // st7
  double v124; // st6
  bool v125; // c0
  bool v126; // c3
  double v127; // st7
  double v128; // st6
  int v129; // ecx
  int v130; // eax
  int v131; // eax
  char v132; // al
  CHAR *v133; // eax
  int v134; // [esp+74h] [ebp-A4h]
  int v135; // [esp+74h] [ebp-A4h]
  int v136; // [esp+74h] [ebp-A4h]
  int v137; // [esp+74h] [ebp-A4h]
  int v138; // [esp+74h] [ebp-A4h]
  int v139; // [esp+74h] [ebp-A4h]
  int v140; // [esp+74h] [ebp-A4h]
  int v141; // [esp+74h] [ebp-A4h]
  int v142; // [esp+74h] [ebp-A4h]
  int v143; // [esp+74h] [ebp-A4h]
  int a3; // [esp+78h] [ebp-A0h]
  int a3a; // [esp+78h] [ebp-A0h]
  int a3b; // [esp+78h] [ebp-A0h]
  int a3c; // [esp+78h] [ebp-A0h]
  int a3d; // [esp+78h] [ebp-A0h]
  int a3e; // [esp+78h] [ebp-A0h]
  int a3f; // [esp+78h] [ebp-A0h]
  int a3g; // [esp+78h] [ebp-A0h]
  int a3h; // [esp+78h] [ebp-A0h]
  int a3i; // [esp+78h] [ebp-A0h]
  unsigned int v154; // [esp+90h] [ebp-88h]
  int v155; // [esp+90h] [ebp-88h]
  int i; // [esp+90h] [ebp-88h]
  int v157; // [esp+90h] [ebp-88h]
  int v158; // [esp+90h] [ebp-88h]
  int v159; // [esp+90h] [ebp-88h]
  int v160; // [esp+90h] [ebp-88h]
  int v161; // [esp+90h] [ebp-88h]
  int jj; // [esp+90h] [ebp-88h]
  int v163; // [esp+90h] [ebp-88h]
  int v164; // [esp+90h] [ebp-88h]
  int v165; // [esp+90h] [ebp-88h]
  float LuckModifiedBaseAV; // [esp+90h] [ebp-88h]
  float v167; // [esp+90h] [ebp-88h]
  const char *v168; // [esp+94h] [ebp-84h]
  float v169; // [esp+94h] [ebp-84h]
  int v170; // [esp+98h] [ebp-80h]
  _DWORD *v171; // [esp+9Ch] [ebp-7Ch]
  char v172; // [esp+9Ch] [ebp-7Ch]
  int v173; // [esp+A0h] [ebp-78h]
  char *v174; // [esp+A0h] [ebp-78h]
  char *v175; // [esp+A0h] [ebp-78h]
  int v176; // [esp+A0h] [ebp-78h]
  int v177; // [esp+A0h] [ebp-78h]
  float v178; // [esp+A0h] [ebp-78h]
  const char *WortcraftMaxEffects; // [esp+A4h] [ebp-74h]
  int v180; // [esp+A4h] [ebp-74h]
  int v181; // [esp+A4h] [ebp-74h]
  int v182; // [esp+A4h] [ebp-74h]
  int v183; // [esp+A4h] [ebp-74h]
  int v184; // [esp+A4h] [ebp-74h]
  int v185; // [esp+A4h] [ebp-74h]
  int v186; // [esp+A4h] [ebp-74h]
  char *v187; // [esp+A4h] [ebp-74h]
  int v188; // [esp+A4h] [ebp-74h]
  float v189; // [esp+A4h] [ebp-74h]
  int v190; // [esp+A8h] [ebp-70h] BYREF
  int v191; // [esp+ACh] [ebp-6Ch] BYREF
  int v192; // [esp+B0h] [ebp-68h]
  int v193; // [esp+B4h] [ebp-64h]
  int v194; // [esp+B8h] [ebp-60h]
  int v195; // [esp+BCh] [ebp-5Ch]
  float v196; // [esp+C0h] [ebp-58h]
  float v197; // [esp+C4h] [ebp-54h]
  char v198[64]; // [esp+C8h] [ebp-50h] BYREF
  int v199; // [esp+114h] [ebp-4h]

  v5 = a1[0x25] + 0x30; /*0x593d0f*/
  v171 = a1; /*0x593d12*/
  v192 = 0; /*0x593d16*/
  v193 = 0; /*0x593d1a*/
  v194 = 0; /*0x593d1e*/
  v195 = 0; /*0x593d22*/
  EffectItemList_Clear(v5); /*0x593d26*/
  v6 = *(_DWORD **)(a1[0x14] + 0x34); /*0x593d2e*/
  while ( v6 ) /*0x593d33*/
  {
    v7 = (void (__thiscall ***)(_DWORD, int))v6[2]; /*0x593d35*/
    v6 = (_DWORD *)*v6; /*0x593d3d*/
    if ( v7 ) /*0x593d3f*/
      (**v7)(v7, 1); /*0x593d47*/
  }
  v8 = a1 + 0x2A; /*0x593d54*/
  if ( a1[0x2B] ) /*0x593d4d*/
  {
    do /*0x593d74*/
    {
      v9 = *(_DWORD *)(a1[0x2B] + 4); /*0x593d63*/
      FormHeapFree(a1[0x2B]); /*0x593d67*/
      a1[0x2B] = v9; /*0x593d71*/
    }
    while ( v9 ); /*0x593d74*/
  }
  *v8 = 0; /*0x593d76*/
  v10 = a1[0x14]; /*0x593d7d*/
  v11 = *(_DWORD **)(v10 + 0x34); /*0x593d80*/
  v12 = (_DWORD *)(v10 + 0x30); /*0x593d83*/
  while ( v11 ) /*0x593d8a*/
  {
    v13 = v11; /*0x593d92*/
    v11 = (_DWORD *)*v11; /*0x593d94*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v12 + 8))(v12, v13); /*0x593d9c*/
  }
  v12[3] = 0; /*0x593da4*/
  v12[1] = 0; /*0x593da7*/
  v12[2] = 0; /*0x593daa*/
  sub_58E870(a1[0x14], a2, st6_0, a4); /*0x593db0*/
  v14 = (int *)reference; /*0x593db5*/
  v15 = 0; /*0x593dbb*/
  v196 = 0.0; /*0x593dbf*/
  BaseCalcAVi = Actor_GetBaseCalcAVi(v14, (int)a1, (int)v11, 0, 0x13); /*0x593dc3*/
  v17 = a1 + 0x2C; /*0x593dd1*/
  WortcraftMaxEffects = Magic_GetWortcraftMaxEffects(BaseCalcAVi); /*0x593dd7*/
  v173 = 0; /*0x593ddb*/
  v190 = (int)v17; /*0x593ddf*/
  do /*0x593ecb*/
  {
    if ( *(_DWORD *)v190 ) /*0x593de7*/
    {
      v18 = OblivionDynamicCast( /*0x593e03*/
              *(void **)(*(_DWORD *)v190 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &MagicItem `RTTI Type Descriptor',
              0);
      ++LODWORD(v196); /*0x593e0c*/
      *(&v192 + v173) = (int)v18; /*0x593e11*/
      v17 = *(_DWORD **)(*(_DWORD *)v190 + 8); /*0x593e1b*/
      v11 = 0; /*0x593e21*/
      if ( v17 ) /*0x593e25*/
      {
        v19 = 0; /*0x593e2b*/
        v20 = v17 + 0xD; /*0x593e2d*/
        v154 = 0; /*0x593e32*/
        if ( v17 != (_DWORD *)0xFFFFFFCC ) /*0x593e36*/
        {
          do /*0x593e45*/
          {
            if ( *v20 ) /*0x593e38*/
              ++v19; /*0x593e3d*/
            v20 = (_DWORD *)v20[1]; /*0x593e40*/
          }
          while ( v20 ); /*0x593e45*/
          v154 = v19; /*0x593e47*/
        }
        if ( v19 ) /*0x593e4d*/
        {
          do /*0x593eb6*/
          {
            if ( (int)v11 >= (int)WortcraftMaxEffects ) /*0x593e53*/
              break; /*0x593e53*/
            v15 = (int)(v17 + 0xC); /*0x593e55*/
            EffectItemList_GetItemByIndex2((char *)v17 + 0x30, (int)v11); /*0x593e5b*/
            v22 = v8; /*0x593e60*/
            if ( v8 ) /*0x593e64*/
            {
              while ( *v22 != v21 ) /*0x593e68*/
              {
                v22 = (int *)v22[1]; /*0x593e6a*/
                if ( !v22 ) /*0x593e6f*/
                  goto LABEL_22; /*0x593e6f*/
              }
            }
            else
            {
LABEL_22:
              EffectItemList_GetItemByIndex2((char *)v17 + 0x30, (int)v11); /*0x593e71*/
              v15 = v23; /*0x593e79*/
              if ( v23 ) /*0x593e7d*/
              {
                if ( *v8 ) /*0x593e7f*/
                {
                  v24 = (int *)FormHeapAlloc(8u); /*0x593e87*/
                  if ( v24 ) /*0x593e91*/
                  {
                    *v24 = *v8; /*0x593e96*/
                    v24[1] = 0; /*0x593e98*/
                  }
                  else
                  {
                    v24 = 0; /*0x593ea1*/
                  }
                  v24[1] = v8[1]; /*0x593ea6*/
                  v8[1] = (int)v24; /*0x593ea9*/
                }
                *v8 = v15; /*0x593eac*/
              }
            }
            v11 = (_DWORD *)((char *)v11 + 1); /*0x593eaf*/
          }
          while ( (unsigned int)v11 < v154 ); /*0x593eb6*/
        }
      }
    }
    v190 += 4; /*0x593ebc*/
    ++v173; /*0x593ec7*/
  }
  while ( v173 < 4 ); /*0x593ecb*/
  v25 = Actor_GetBaseCalcAVi((int *)reference, (int)v17, (int)v11, v15, 0x13); /*0x593ed9*/
  v168 = Magic_GetWortcraftMaxEffects(v25); /*0x593eef*/
  v170 = 0; /*0x593ef3*/
  if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Alchemy) >= kSkillMastery_Master && LODWORD(v196) == 1 ) /*0x593f0e*/
  {
    v26 = 0; /*0x593f14*/
    v27 = 0; /*0x593f16*/
    while ( !*(&v192 + v27) ) /*0x593f1c*/
    {
      if ( ++v27 >= 4 ) /*0x593f24*/
        goto LABEL_38; /*0x593f24*/
    }
    v26 = *(&v192 + v27); /*0x593f28*/
LABEL_38:
    EffectItemList_GetItemByIndex2((char *)(v26 + 0xC), 0); /*0x593f2c*/
    v29 = v28; /*0x593f36*/
    if ( v28 ) /*0x593f3a*/
    {
      v155 = FormHeapAlloc(0x24u); /*0x593f4a*/
      v199 = 0; /*0x593f50*/
      if ( v155 ) /*0x593f5b*/
        v30 = (_DWORD *)EffectItem_constrCopy(v29); /*0x593f60*/
      else
        v30 = 0; /*0x593f67*/
      v31 = v171[0x25]; /*0x593f6d*/
      v199 = 0xFFFFFFFF; /*0x593f77*/
      EffectItemList_AddItem((_DWORD *)(v31 + 0x30), v30); /*0x593f82*/
      v170 = 1; /*0x593f87*/
    }
    goto LABEL_186; /*0x593f8f*/
  }
  if ( v192 ) /*0x593f99*/
  {
    if ( v193 ) /*0x593fa4*/
    {
      v32 = 0; /*0x593faa*/
      for ( i = 0; i < (int)v168; ++i ) /*0x593fb4*/
      {
        EffectItemList_GetItemByIndex2((char *)(v192 + 0xC), v32); /*0x593fc8*/
        v34 = v33; /*0x593fcd*/
        for ( j = 0; j < (int)v168; ++j ) /*0x593fcf*/
        {
          EffectItemList_GetItemByIndex2((char *)(v193 + 0xC), j); /*0x593fd9*/
          if ( v34 ) /*0x593fe0*/
          {
            if ( v36 ) /*0x593fe4*/
            {
              if ( EffectItem_Match(v34, v36) ) /*0x593fe9*/
              {
                v180 = FormHeapAlloc(0x24u); /*0x593ffc*/
                v199 = 1; /*0x594002*/
                if ( v180 ) /*0x59400d*/
                  v37 = (int *)EffectItem_constrCopy(v34); /*0x594017*/
                else
                  v37 = 0; /*0x59401b*/
                a3 = v37[5]; /*0x594026*/
                v134 = *v37; /*0x594027*/
                v38 = (_DWORD *)(v171[0x25] + 0x30); /*0x59402e*/
                v199 = 0xFFFFFFFF; /*0x594031*/
                if ( !EffectItemList_HasEffect(v38, v134, a3) ) /*0x59403c*/
                {
                  EffectItemList_AddItem((_DWORD *)(v171[0x25] + 0x30), v37); /*0x59404f*/
                  ++v170; /*0x594054*/
                }
              }
            }
          }
        }
        v32 = i + 1; /*0x59406a*/
      }
      if ( v194 && (v39 = 0, v157 = 0, (int)v168 > 0) ) /*0x594090*/
      {
        v40 = v171; /*0x594096*/
        do /*0x59414b*/
        {
          EffectItemList_GetItemByIndex2((char *)(v193 + 0xC), v39); /*0x5940a2*/
          v42 = v41; /*0x5940a7*/
          for ( k = 0; k < (int)v168; ++k ) /*0x5940a9*/
          {
            EffectItemList_GetItemByIndex2((char *)(v194 + 0xC), k); /*0x5940b3*/
            if ( v42 ) /*0x5940ba*/
            {
              if ( v44 ) /*0x5940be*/
              {
                if ( EffectItem_Match(v42, v44) ) /*0x5940c3*/
                {
                  v181 = FormHeapAlloc(0x24u); /*0x5940d6*/
                  v199 = 2; /*0x5940dc*/
                  if ( v181 ) /*0x5940e7*/
                    v45 = (int *)EffectItem_constrCopy(v42); /*0x5940f1*/
                  else
                    v45 = 0; /*0x5940f5*/
                  a3a = v45[5]; /*0x5940fc*/
                  v135 = *v45; /*0x5940fd*/
                  v46 = (_DWORD *)(v171[0x25] + 0x30); /*0x594104*/
                  v199 = 0xFFFFFFFF; /*0x594107*/
                  if ( !EffectItemList_HasEffect(v46, v135, a3a) ) /*0x594112*/
                  {
                    EffectItemList_AddItem((_DWORD *)(v171[0x25] + 0x30), v45); /*0x594125*/
                    ++v170; /*0x59412a*/
                  }
                }
              }
            }
            v47 = (int)v168; /*0x59412f*/
          }
          v39 = ++v157; /*0x594142*/
        }
        while ( v157 < (int)v168 ); /*0x59414b*/
      }
      else
      {
        v40 = v171; /*0x594153*/
        v47 = (int)v168; /*0x594157*/
      }
      if ( v195 ) /*0x594160*/
      {
        v48 = 0; /*0x594166*/
        v158 = 0; /*0x59416a*/
        if ( v47 > 0 ) /*0x59416e*/
        {
          do /*0x594225*/
          {
            EffectItemList_GetItemByIndex2((char *)(v193 + 0xC), v48); /*0x59417c*/
            v50 = v49; /*0x594181*/
            v51 = 0; /*0x594183*/
            do /*0x594212*/
            {
              EffectItemList_GetItemByIndex2((char *)(v195 + 0xC), v51); /*0x59418d*/
              if ( v50 ) /*0x594194*/
              {
                if ( v52 ) /*0x594198*/
                {
                  if ( EffectItem_Match(v50, v52) ) /*0x59419d*/
                  {
                    v182 = FormHeapAlloc(0x24u); /*0x5941b0*/
                    v199 = 3; /*0x5941b6*/
                    if ( v182 ) /*0x5941c1*/
                      v53 = (int *)EffectItem_constrCopy(v50); /*0x5941cb*/
                    else
                      v53 = 0; /*0x5941cf*/
                    a3b = v53[5]; /*0x5941d6*/
                    v136 = *v53; /*0x5941d7*/
                    v54 = (_DWORD *)(v40[0x25] + 0x30); /*0x5941de*/
                    v199 = 0xFFFFFFFF; /*0x5941e1*/
                    if ( !EffectItemList_HasEffect(v54, v136, a3b) ) /*0x5941ec*/
                    {
                      EffectItemList_AddItem((_DWORD *)(v40[0x25] + 0x30), v53); /*0x5941ff*/
                      ++v170; /*0x594204*/
                    }
                  }
                }
              }
              ++v51; /*0x59420d*/
            }
            while ( v51 < (int)v168 ); /*0x594212*/
            v48 = ++v158; /*0x59421c*/
          }
          while ( v158 < (int)v168 ); /*0x594225*/
        }
      }
    }
    if ( !v194 ) /*0x594235*/
      goto LABEL_114; /*0x594235*/
    v55 = 0; /*0x59423b*/
    v159 = 0; /*0x594241*/
    if ( (int)v168 > 0 ) /*0x594245*/
    {
      v174 = (char *)(v192 + 0xC); /*0x594255*/
      v191 = v194 + 0xC; /*0x594259*/
      do /*0x594308*/
      {
        EffectItemList_GetItemByIndex2(v174, v55); /*0x594262*/
        v57 = v56; /*0x594267*/
        for ( m = 0; m < (int)v168; ++m ) /*0x594269*/
        {
          EffectItemList_GetItemByIndex2((char *)v191, m); /*0x594270*/
          if ( v57 ) /*0x594277*/
          {
            if ( v59 ) /*0x59427b*/
            {
              if ( EffectItem_Match(v57, v59) ) /*0x594280*/
              {
                v183 = FormHeapAlloc(0x24u); /*0x594293*/
                v199 = 4; /*0x594299*/
                if ( v183 ) /*0x5942a4*/
                  v60 = (int *)EffectItem_constrCopy(v57); /*0x5942ae*/
                else
                  v60 = 0; /*0x5942b2*/
                a3c = v60[5]; /*0x5942b9*/
                v137 = *v60; /*0x5942ba*/
                v61 = (_DWORD *)(v171[0x25] + 0x30); /*0x5942c1*/
                v199 = 0xFFFFFFFF; /*0x5942c4*/
                if ( !EffectItemList_HasEffect(v61, v137, a3c) ) /*0x5942cf*/
                {
                  EffectItemList_AddItem((_DWORD *)(v171[0x25] + 0x30), v60); /*0x5942e2*/
                  ++v170; /*0x5942e7*/
                }
              }
            }
          }
        }
        v55 = ++v159; /*0x5942fd*/
      }
      while ( v159 < (int)v168 ); /*0x594308*/
    }
    if ( v195 ) /*0x594313*/
    {
      v62 = 0; /*0x594319*/
      v160 = 0; /*0x59431f*/
      if ( (int)v168 > 0 ) /*0x594323*/
      {
        v191 = v194 + 0xC; /*0x594337*/
        v190 = v195 + 0xC; /*0x59433b*/
        do /*0x5943ea*/
        {
          EffectItemList_GetItemByIndex2((char *)v191, v62); /*0x594344*/
          v64 = v63; /*0x594349*/
          for ( n = 0; n < (int)v168; ++n ) /*0x59434b*/
          {
            EffectItemList_GetItemByIndex2((char *)v190, n); /*0x594352*/
            if ( v64 ) /*0x594359*/
            {
              if ( v66 ) /*0x59435d*/
              {
                if ( EffectItem_Match(v64, v66) ) /*0x594362*/
                {
                  v184 = FormHeapAlloc(0x24u); /*0x594375*/
                  v199 = 5; /*0x59437b*/
                  if ( v184 ) /*0x594386*/
                    v67 = (int *)EffectItem_constrCopy(v64); /*0x594390*/
                  else
                    v67 = 0; /*0x594394*/
                  a3d = v67[5]; /*0x59439b*/
                  v138 = *v67; /*0x59439c*/
                  v68 = (_DWORD *)(v171[0x25] + 0x30); /*0x5943a3*/
                  v199 = 0xFFFFFFFF; /*0x5943a6*/
                  if ( !EffectItemList_HasEffect(v68, v138, a3d) ) /*0x5943b1*/
                  {
                    EffectItemList_AddItem((_DWORD *)(v171[0x25] + 0x30), v67); /*0x5943c4*/
                    ++v170; /*0x5943c9*/
                  }
                }
              }
            }
          }
          v62 = ++v160; /*0x5943df*/
        }
        while ( v160 < (int)v168 ); /*0x5943ea*/
      }
LABEL_114:
      if ( v195 ) /*0x5943f5*/
      {
        v69 = 0; /*0x5943fb*/
        v161 = 0; /*0x594401*/
        if ( (int)v168 > 0 ) /*0x594405*/
        {
          v175 = (char *)(v192 + 0xC); /*0x594419*/
          v190 = v195 + 0xC; /*0x59441d*/
          do /*0x5944cc*/
          {
            EffectItemList_GetItemByIndex2(v175, v69); /*0x594426*/
            v71 = v70; /*0x59442b*/
            for ( ii = 0; ii < (int)v168; ++ii ) /*0x59442d*/
            {
              EffectItemList_GetItemByIndex2((char *)v190, ii); /*0x594434*/
              if ( v71 ) /*0x59443b*/
              {
                if ( v73 ) /*0x59443f*/
                {
                  if ( EffectItem_Match(v71, v73) ) /*0x594444*/
                  {
                    v185 = FormHeapAlloc(0x24u); /*0x594457*/
                    v199 = 6; /*0x59445d*/
                    if ( v185 ) /*0x594468*/
                      v74 = (int *)EffectItem_constrCopy(v71); /*0x594472*/
                    else
                      v74 = 0; /*0x594476*/
                    a3e = v74[5]; /*0x59447d*/
                    v139 = *v74; /*0x59447e*/
                    v75 = (_DWORD *)(v171[0x25] + 0x30); /*0x594485*/
                    v199 = 0xFFFFFFFF; /*0x594488*/
                    if ( !EffectItemList_HasEffect(v75, v139, a3e) ) /*0x594493*/
                    {
                      EffectItemList_AddItem((_DWORD *)(v171[0x25] + 0x30), v74); /*0x5944a6*/
                      ++v170; /*0x5944ab*/
                    }
                  }
                }
              }
            }
            v69 = ++v161; /*0x5944c1*/
          }
          while ( v161 < (int)v168 ); /*0x5944cc*/
        }
      }
    }
  }
  v76 = v171; /*0x5944d2*/
  if ( v193 ) /*0x5944db*/
  {
    if ( v194 ) /*0x5944e6*/
    {
      v77 = (int)v168; /*0x5944ec*/
      v78 = 0; /*0x5944f0*/
      for ( jj = 0; jj < (int)v168; ++jj ) /*0x5944f8*/
      {
        EffectItemList_GetItemByIndex2((char *)(v193 + 0xC), v78); /*0x594506*/
        v80 = v79; /*0x59450b*/
        for ( kk = 0; kk < (int)v168; ++kk ) /*0x59450d*/
        {
          EffectItemList_GetItemByIndex2((char *)(v194 + 0xC), kk); /*0x594517*/
          if ( v80 ) /*0x59451e*/
          {
            if ( v82 ) /*0x594522*/
            {
              if ( EffectItem_Match(v80, v82) ) /*0x594527*/
              {
                v186 = FormHeapAlloc(0x24u); /*0x59453a*/
                v199 = 7; /*0x594540*/
                if ( v186 ) /*0x59454b*/
                  v83 = (int *)EffectItem_constrCopy(v80); /*0x594555*/
                else
                  v83 = 0; /*0x594559*/
                a3f = v83[5]; /*0x594560*/
                v140 = *v83; /*0x594561*/
                v84 = (_DWORD *)(v171[0x25] + 0x30); /*0x594568*/
                v199 = 0xFFFFFFFF; /*0x59456b*/
                if ( !EffectItemList_HasEffect(v84, v140, a3f) ) /*0x594576*/
                {
                  EffectItemList_AddItem((_DWORD *)(v171[0x25] + 0x30), v83); /*0x594589*/
                  ++v170; /*0x59458e*/
                }
              }
            }
          }
          v77 = (int)v168; /*0x594593*/
        }
        v78 = jj + 1; /*0x5945a6*/
      }
      if ( !v195 ) /*0x5945ba*/
        goto LABEL_171; /*0x5945ba*/
      v176 = 0; /*0x5945c2*/
      if ( v77 > 0 ) /*0x5945ca*/
      {
        v85 = (char *)(v195 + 0xC); /*0x5945d4*/
        do /*0x594693*/
        {
          EffectItemList_GetItemByIndex2((char *)(v194 + 0xC), v176); /*0x5945e3*/
          v87 = v86; /*0x5945e8*/
          v88 = 0; /*0x5945ea*/
          do /*0x594680*/
          {
            EffectItemList_GetItemByIndex2(v85, v88); /*0x5945ef*/
            if ( v87 ) /*0x5945f6*/
            {
              if ( v89 ) /*0x5945fe*/
              {
                if ( EffectItem_Match(v87, v89) ) /*0x594603*/
                {
                  v163 = FormHeapAlloc(0x24u); /*0x594616*/
                  v199 = 8; /*0x59461c*/
                  if ( v163 ) /*0x594627*/
                    v90 = (int *)EffectItem_constrCopy(v87); /*0x594631*/
                  else
                    v90 = 0; /*0x594635*/
                  a3g = v90[5]; /*0x59463c*/
                  v141 = *v90; /*0x59463d*/
                  v91 = (_DWORD *)(v171[0x25] + 0x30); /*0x594648*/
                  v199 = 0xFFFFFFFF; /*0x59464b*/
                  if ( !EffectItemList_HasEffect(v91, v141, a3g) ) /*0x594656*/
                  {
                    EffectItemList_AddItem((_DWORD *)(v171[0x25] + 0x30), v90); /*0x59466d*/
                    ++v170; /*0x594672*/
                  }
                }
              }
            }
            ++v88; /*0x59467b*/
          }
          while ( v88 < (int)v168 ); /*0x594680*/
          ++v176; /*0x59468f*/
        }
        while ( v176 < (int)v168 ); /*0x594693*/
        v76 = v171; /*0x594699*/
      }
    }
    if ( v195 ) /*0x5946a2*/
    {
      v92 = 0; /*0x5946a8*/
      v164 = 0; /*0x5946ae*/
      if ( (int)v168 > 0 ) /*0x5946b2*/
      {
        v187 = (char *)(v193 + 0xC); /*0x5946bf*/
        do /*0x594771*/
        {
          EffectItemList_GetItemByIndex2(v187, v92); /*0x5946c8*/
          v94 = v93; /*0x5946cd*/
          for ( mm = 0; mm < (int)v168; ++mm ) /*0x5946cf*/
          {
            EffectItemList_GetItemByIndex2((char *)(v195 + 0xC), mm); /*0x5946d9*/
            if ( v94 ) /*0x5946e0*/
            {
              if ( v96 ) /*0x5946e4*/
              {
                if ( EffectItem_Match(v94, v96) ) /*0x5946e9*/
                {
                  v177 = FormHeapAlloc(0x24u); /*0x5946fc*/
                  v199 = 9; /*0x594702*/
                  if ( v177 ) /*0x59470d*/
                    v97 = (int *)EffectItem_constrCopy(v94); /*0x594717*/
                  else
                    v97 = 0; /*0x59471b*/
                  a3h = v97[5]; /*0x594722*/
                  v142 = *v97; /*0x594723*/
                  v98 = (_DWORD *)(v76[0x25] + 0x30); /*0x59472a*/
                  v199 = 0xFFFFFFFF; /*0x59472d*/
                  if ( !EffectItemList_HasEffect(v98, v142, a3h) ) /*0x594738*/
                  {
                    EffectItemList_AddItem((_DWORD *)(v76[0x25] + 0x30), v97); /*0x59474b*/
                    ++v170; /*0x594750*/
                  }
                }
              }
            }
          }
          v92 = ++v164; /*0x594768*/
        }
        while ( v164 < (int)v168 ); /*0x594771*/
      }
    }
  }
LABEL_171:
  if ( v194 ) /*0x59477d*/
  {
    if ( v195 ) /*0x594789*/
    {
      v99 = 0; /*0x59478f*/
      v165 = 0; /*0x594795*/
      if ( (int)v168 > 0 ) /*0x594799*/
      {
        v191 = v194 + 0xC; /*0x5947a5*/
        v190 = v195 + 0xC; /*0x5947a9*/
        do /*0x594858*/
        {
          EffectItemList_GetItemByIndex2((char *)v191, v99); /*0x5947b2*/
          v101 = v100; /*0x5947b7*/
          for ( nn = 0; nn < (int)v168; ++nn ) /*0x5947b9*/
          {
            EffectItemList_GetItemByIndex2((char *)v190, nn); /*0x5947c0*/
            if ( v101 ) /*0x5947c7*/
            {
              if ( v103 ) /*0x5947cb*/
              {
                if ( EffectItem_Match(v101, v103) ) /*0x5947d0*/
                {
                  v188 = FormHeapAlloc(0x24u); /*0x5947e3*/
                  v199 = 0xA; /*0x5947e9*/
                  if ( v188 ) /*0x5947f4*/
                    v104 = (int *)EffectItem_constrCopy(v101); /*0x5947fe*/
                  else
                    v104 = 0; /*0x594802*/
                  a3i = v104[5]; /*0x594809*/
                  v143 = *v104; /*0x59480a*/
                  v105 = (_DWORD *)(v76[0x25] + 0x30); /*0x594811*/
                  v199 = 0xFFFFFFFF; /*0x594814*/
                  if ( !EffectItemList_HasEffect(v105, v143, a3i) ) /*0x59481f*/
                  {
                    EffectItemList_AddItem((_DWORD *)(v76[0x25] + 0x30), v104); /*0x594832*/
                    ++v170; /*0x594837*/
                  }
                }
              }
            }
          }
          v99 = ++v165; /*0x59484f*/
        }
        while ( v165 < (int)v168 ); /*0x594858*/
      }
    }
  }
LABEL_186:
  v106 = (float *)v171; /*0x59485e*/
  v107 = sub_46E3F0(*(void **)(v171[0x1E] + 8)); /*0x594869*/
  v108 = v171[0x25]; /*0x59486e*/
  v189 = (float)v107; /*0x59488a*/
  v197 = 0.0; /*0x594890*/
  v196 = 0.0; /*0x594894*/
  v169 = 0.0; /*0x594898*/
  v172 = EffectItemList_AllEffectsHostile((_DWORD *)(v108 + 0x30)) != 0; /*0x5948a5*/
  v109 = *((_DWORD *)v106 + 0x1F); /*0x5948aa*/
  if ( v109 ) /*0x5948af*/
    v197 = (float)sub_46E3F0(*(void **)(v109 + 8)); /*0x5948c8*/
  v110 = *((_DWORD *)v106 + 0x21); /*0x5948cc*/
  if ( v110 ) /*0x5948d4*/
    v196 = (float)sub_46E3F0(*(void **)(v110 + 8)); /*0x5948ed*/
  v111 = *((_DWORD *)v106 + 0x20); /*0x5948f1*/
  if ( v111 ) /*0x5948f9*/
    v169 = (float)sub_46E3F0(*(void **)(v111 + 8)); /*0x594912*/
  v112 = 0; /*0x59491e*/
  LuckModifiedBaseAV = Actor_GetLuckModifiedBaseAV((Actor *)reference, kSkillAV_Alchemy);// AVU decode: AlchemyMenu_CalcPotion effective Alchemy entry. ECX is player actor, pushed arg is AV 0x13 Alchemy. Vanilla calls Actor_GetLuckModifiedBaseAV, stores ST0 on menu state, then calls Calc_MortarPestleModifiedSkill. /*0x594925*/
  v106[0x22] = LuckModifiedBaseAV; /*0x594930*/
  v178 = Calc_MortarPestleModifiedSkill(v189, LuckModifiedBaseAV); /*0x594949*/
  v113 = 0; /*0x59494d*/
  while ( 1 )
  {
    v114 = *((_DWORD *)v106 + 0x25); /*0x594951*/
    *(float *)&v190 = 1.0; /*0x594957*/
    *(float *)&v191 = 1.0; /*0x59495f*/
    EffectItemList_GetItemByIndex2((char *)(v114 + 0x30), v113); /*0x594963*/
    v116 = v115; /*0x594968*/
    if ( v115 )
    {
      IsHostile = EffectItem_IsHostile(v115); /*0x594974*/
      v118 = v116[7]; /*0x59497b*/
      if ( IsHostile )
      {
        if ( *((_DWORD *)v106 + 0x1F) )
        {
          v112 = *((_DWORD *)v106 + 0x20) != 0 ? 5 : 2;
          goto LABEL_201; /*0x59499a*/
        }
      }
      else if ( *((_DWORD *)v106 + 0x21) )
      {
        v112 = *((_DWORD *)v106 + 0x20) != 0 ? 4 : 1;
        goto LABEL_201; /*0x5949b5*/
      }
      if ( *((_DWORD *)v106 + 0x20) ) /*0x5949b7*/
        v112 = 3; /*0x5949c0*/
LABEL_201:
      v119 = *(float *)(v118 + 0x5C); /*0x5949c5*/
      v120 = *(_DWORD *)(v118 + 0x58); /*0x5949c8*/
      v167 = v119; /*0x5949cd*/
      if ( (v120 & 0x80) == 0 && (v120 & 0x100) == 0 ) /*0x5949e0*/
      {
        Calc_T1PotionStrength((float *)&v191, (float *)&v190, v167, v178, v112, IsHostile, v196, v197, v169, v172); /*0x594a23*/
LABEL_210:
        v121 = *(float *)&v190; /*0x594ad1*/
        v122 = Double_To_SInt32(*(float *)&v190); /*0x594adc*/
        v123 = v121 - (double)v122; /*0x594ae2*/
        v124 = dbl_A2FAA0; /*0x594ae6*/
        v125 = v124 < v123; /*0x594aec*/
        v126 = v124 == v123; /*0x594aec*/
        v127 = v124; /*0x594af0*/
        *(float *)&v190 = (float)((v125 || v126) + v122); /*0x594b0a*/
        v128 = *(float *)&v191; /*0x594b0e*/
        v129 = Double_To_SInt32(v127); /*0x594b19*/
        *(float *)&v191 = (float)((v128 - (double)v129 >= v127) + v129); /*0x594b3f*/
        v130 = Double_To_SInt32(*(float *)&v190); /*0x594b47*/
        if ( v130 < 1 ) /*0x594b4f*/
          v130 = 1; /*0x594b51*/
        EffectItem_SetDuration((int)v116, v130); /*0x594b59*/
        v131 = Double_To_SInt32(*(float *)&v191); /*0x594b62*/
        if ( v131 < 1 ) /*0x594b6a*/
          v131 = 1; /*0x594b6c*/
        EffectItem_SetMagnitude((int)v116, v131); /*0x594b74*/
        EffectItem_SetArea((int)v116, 0); /*0x594b7d*/
        sub_593B20((Menu *)v106, v116, v113); /*0x594b86*/
        v132 = *((_BYTE *)v106 + 0xA4); /*0x594b8b*/
        if ( v132 == 2 || v132 == 3 ) /*0x594b97*/
        {
          v133 = sub_588C10(*((_DWORD **)v106 + 0xB), 0xFDE); /*0x594bd1*/
          BSStringT_Set((BSStringT *)(*((_DWORD *)v106 + 0x25) + 0x28), v133, 0); /*0x594be2*/
        }
        else if ( !v113 ) /*0x594b9b*/
        {
          EffectItem_GetQualifiedName_SkillAttr(v116, (int)v198); /*0x594ba4*/
          sub_57FF20(*((BSStringT **)v106 + 0x28), v198); /*0x594bb4*/
          *((_BYTE *)v106 + 0xA4) = 1; /*0x594bbb*/
          sub_593710((char **)v106); /*0x594bc2*/
        }
        Tile_SetFloat(*((Tile **)v106 + 0x16), 0xFAFu, fConstant_2); /*0x594bf9*/
        goto LABEL_221; /*0x594bfe*/
      }
      if ( (v120 & 0x80) == 0 ) /*0x594a32*/
      {
        if ( (v120 & 0x100) != 0 ) /*0x594a3c*/
        {
          Calc_T2PotionStrength((float *)&v190, v167, v178, v112, IsHostile, v196, v197, v169, v172); /*0x594a7a*/
          goto LABEL_210; /*0x594a7f*/
        }
        if ( (v120 & 0x80) == 0 ) /*0x594a83*/
          goto LABEL_210; /*0x594a83*/
      }
      if ( (v120 & 0x100) == 0 ) /*0x594a8b*/
        Calc_T3PotionStrength((float *)&v191, v167, v178, v112, IsHostile, v196, v197, v169, v172); /*0x594ac9*/
      goto LABEL_210; /*0x594ac9*/
    }
    if ( !v113 ) /*0x594c02*/
      break; /*0x594c02*/
LABEL_221:
    *(_DWORD *)(*((_DWORD *)v106 + 0x25) + 0x78) = Double_To_SInt32(v178 * MEMORY[0xB37A48]); /*0x594c04*/
    *(_BYTE *)(*((_DWORD *)v106 + 0x25) + 0x7C) |= 1u; /*0x594c22*/
    if ( ++v113 >= v170 ) /*0x594c2d*/
      return; /*0x594c2d*/
  }
  if ( *((_BYTE *)v106 + 0xA4) != 2 ) /*0x594c3b*/
  {
    sub_57FF20(*((BSStringT **)v106 + 0x28), (char *)stru_B38900.value); /*0x594c49*/
    sub_593710((char **)v106); /*0x594c50*/
    *((_BYTE *)v106 + 0xA4) = 0; /*0x594c55*/
  }
  Tile_SetFloat(*((Tile **)v106 + 0x16), 0xFAFu, 1.0); /*0x594c6a*/
}
