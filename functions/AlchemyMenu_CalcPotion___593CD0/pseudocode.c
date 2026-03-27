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
  int BaseCalcAVi; // eax
  void *v15; // eax
  int v16; // ebx
  int v17; // edi
  unsigned int v18; // ecx
  _DWORD *v19; // eax
  int ItemByIndex2; // eax
  int *v21; // ecx
  int v22; // esi
  int *v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // esi
  _DWORD *v28; // eax
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // ebp
  int j; // edi
  _DWORD *v33; // eax
  int *v34; // esi
  _DWORD *v35; // ecx
  int v36; // eax
  _DWORD *v37; // ebx
  _DWORD *v38; // ebp
  int k; // edi
  _DWORD *v40; // eax
  int *v41; // esi
  _DWORD *v42; // ecx
  int v43; // ecx
  int v44; // eax
  _DWORD *v45; // ebp
  int v46; // edi
  _DWORD *v47; // eax
  int *v48; // esi
  _DWORD *v49; // ecx
  int v50; // ecx
  _DWORD *v51; // ebp
  int m; // edi
  _DWORD *v53; // eax
  int *v54; // esi
  _DWORD *v55; // ecx
  int v56; // eax
  _DWORD *v57; // ebp
  int n; // edi
  _DWORD *v59; // eax
  int *v60; // esi
  _DWORD *v61; // ecx
  int v62; // eax
  _DWORD *v63; // ebp
  int ii; // edi
  _DWORD *v65; // eax
  int *v66; // esi
  _DWORD *v67; // ecx
  _DWORD *v68; // ebx
  int v69; // ecx
  int v70; // eax
  _DWORD *v71; // ebp
  int kk; // edi
  _DWORD *v73; // eax
  int *v74; // esi
  _DWORD *v75; // ecx
  char *v76; // ebx
  _DWORD *v77; // ebp
  int v78; // edi
  _DWORD *v79; // eax
  int *v80; // esi
  _DWORD *v81; // ecx
  int v82; // eax
  _DWORD *v83; // ebp
  int mm; // edi
  _DWORD *v85; // eax
  int *v86; // esi
  _DWORD *v87; // ecx
  int v88; // eax
  _DWORD *v89; // ebp
  int nn; // edi
  _DWORD *v91; // eax
  int *v92; // esi
  _DWORD *v93; // ecx
  float *v94; // ebp
  unsigned __int8 v95; // al
  int v96; // ecx
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // esi
  int v101; // ebx
  int v102; // ecx
  int *v103; // eax
  int *v104; // edi
  char IsHostile; // al
  int v106; // ecx
  double v107; // st7
  int v108; // ecx
  double v109; // st7
  int v110; // ecx
  double v111; // st7
  double v112; // st6
  bool v113; // c0
  bool v114; // c3
  double v115; // st7
  double v116; // st6
  double v117; // st5
  int v118; // ecx
  double v119; // st6
  int v120; // eax
  double v121; // st7
  int v122; // eax
  char v123; // al
  CHAR *v124; // eax
  int v125; // [esp+74h] [ebp-A4h]
  int v126; // [esp+74h] [ebp-A4h]
  int v127; // [esp+74h] [ebp-A4h]
  int v128; // [esp+74h] [ebp-A4h]
  int v129; // [esp+74h] [ebp-A4h]
  int v130; // [esp+74h] [ebp-A4h]
  int v131; // [esp+74h] [ebp-A4h]
  int v132; // [esp+74h] [ebp-A4h]
  int v133; // [esp+74h] [ebp-A4h]
  int v134; // [esp+74h] [ebp-A4h]
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
  unsigned int v145; // [esp+90h] [ebp-88h]
  int v146; // [esp+90h] [ebp-88h]
  int i; // [esp+90h] [ebp-88h]
  int v148; // [esp+90h] [ebp-88h]
  int v149; // [esp+90h] [ebp-88h]
  int v150; // [esp+90h] [ebp-88h]
  int v151; // [esp+90h] [ebp-88h]
  int v152; // [esp+90h] [ebp-88h]
  int jj; // [esp+90h] [ebp-88h]
  int v154; // [esp+90h] [ebp-88h]
  int v155; // [esp+90h] [ebp-88h]
  int v156; // [esp+90h] [ebp-88h]
  float LuckModifiedBaseAV; // [esp+90h] [ebp-88h]
  float v158; // [esp+90h] [ebp-88h]
  int v159; // [esp+94h] [ebp-84h]
  float v160; // [esp+94h] [ebp-84h]
  int v161; // [esp+98h] [ebp-80h]
  _DWORD *v162; // [esp+9Ch] [ebp-7Ch]
  char v163; // [esp+9Ch] [ebp-7Ch]
  int v164; // [esp+A0h] [ebp-78h]
  char *v165; // [esp+A0h] [ebp-78h]
  char *v166; // [esp+A0h] [ebp-78h]
  int v167; // [esp+A0h] [ebp-78h]
  int v168; // [esp+A0h] [ebp-78h]
  float v169; // [esp+A0h] [ebp-78h]
  int WortcraftMaxEffects; // [esp+A4h] [ebp-74h]
  int v171; // [esp+A4h] [ebp-74h]
  int v172; // [esp+A4h] [ebp-74h]
  int v173; // [esp+A4h] [ebp-74h]
  int v174; // [esp+A4h] [ebp-74h]
  int v175; // [esp+A4h] [ebp-74h]
  int v176; // [esp+A4h] [ebp-74h]
  int v177; // [esp+A4h] [ebp-74h]
  char *v178; // [esp+A4h] [ebp-74h]
  int v179; // [esp+A4h] [ebp-74h]
  float v180; // [esp+A4h] [ebp-74h]
  int v181; // [esp+A8h] [ebp-70h] BYREF
  int v182; // [esp+ACh] [ebp-6Ch] BYREF
  int v183; // [esp+B0h] [ebp-68h]
  int v184; // [esp+B4h] [ebp-64h]
  int v185; // [esp+B8h] [ebp-60h]
  int v186; // [esp+BCh] [ebp-5Ch]
  float v187; // [esp+C0h] [ebp-58h]
  float v188; // [esp+C4h] [ebp-54h]
  char v189[64]; // [esp+C8h] [ebp-50h] BYREF
  int v190; // [esp+114h] [ebp-4h]

  v5 = a1[0x25] + 0x30;
  v162 = a1;
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v186 = 0;
  EffectItemList_Clear(v5);
  v6 = *(_DWORD **)(a1[0x14] + 0x34);
  while ( v6 )
  {
    v7 = (void (__thiscall ***)(_DWORD, int))v6[2];
    v6 = (_DWORD *)*v6;
    if ( v7 )
      (**v7)(v7, 1);
  }
  v8 = a1 + 0x2A;
  if ( a1[0x2B] )
  {
    do
    {
      v9 = *(_DWORD *)(a1[0x2B] + 4);
      FormHeapFree(a1[0x2B]);
      a1[0x2B] = v9;
    }
    while ( v9 );
  }
  *v8 = 0;
  v10 = a1[0x14];
  v11 = *(_DWORD **)(v10 + 0x34);
  v12 = (_DWORD *)(v10 + 0x30);
  while ( v11 )
  {
    v13 = v11;
    v11 = (_DWORD *)*v11;
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v12 + 8))(v12, v13);
  }
  v12[3] = 0;
  v12[1] = 0;
  v12[2] = 0;
  sub_58E870(a1[0x14], a2, st6_0, a4);
  v187 = 0.0;
  BaseCalcAVi = Actor_GetBaseCalcAVi(0x13);
  WortcraftMaxEffects = Magic_GetWortcraftMaxEffects(BaseCalcAVi);
  v164 = 0;
  v181 = (int)(a1 + 0x2C);
  do
  {
    if ( *(_DWORD *)v181 )
    {
      v15 = OblivionDynamicCast(
              *(void **)(*(_DWORD *)v181 + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &MagicItem `RTTI Type Descriptor',
              0);
      ++LODWORD(v187);
      *(&v183 + v164) = (int)v15;
      v16 = *(_DWORD *)(*(_DWORD *)v181 + 8);
      v17 = 0;
      if ( v16 )
      {
        v18 = 0;
        v19 = (_DWORD *)(v16 + 0x34);
        v145 = 0;
        if ( v16 != 0xFFFFFFCC )
        {
          do
          {
            if ( *v19 )
              ++v18;
            v19 = (_DWORD *)v19[1];
          }
          while ( v19 );
          v145 = v18;
        }
        if ( v18 )
        {
          do
          {
            if ( v17 >= WortcraftMaxEffects )
              break;
            ItemByIndex2 = EffectItemList_GetItemByIndex2((char *)(v16 + 0x30), v17);
            v21 = v8;
            if ( v8 )
            {
              while ( *v21 != ItemByIndex2 )
              {
                v21 = (int *)v21[1];
                if ( !v21 )
                  goto LABEL_22;
              }
            }
            else
            {
LABEL_22:
              v22 = EffectItemList_GetItemByIndex2((char *)(v16 + 0x30), v17);
              if ( v22 )
              {
                if ( *v8 )
                {
                  v23 = (int *)FormHeapAlloc(8u);
                  if ( v23 )
                  {
                    *v23 = *v8;
                    v23[1] = 0;
                  }
                  else
                  {
                    v23 = 0;
                  }
                  v23[1] = v8[1];
                  v8[1] = (int)v23;
                }
                *v8 = v22;
              }
            }
            ++v17;
          }
          while ( v17 < v145 );
        }
      }
    }
    v181 += 4;
    ++v164;
  }
  while ( v164 < 4 );
  v24 = Actor_GetBaseCalcAVi(0x13);
  v159 = Magic_GetWortcraftMaxEffects(v24);
  v161 = 0;
  if ( (int)Actor_GetSkillMasteryLevel(0x13) >= 4 && LODWORD(v187) == 1 )
  {
    v25 = 0;
    v26 = 0;
    while ( !*(&v183 + v26) )
    {
      if ( ++v26 >= 4 )
        goto LABEL_38;
    }
    v25 = *(&v183 + v26);
LABEL_38:
    v27 = EffectItemList_GetItemByIndex2((char *)(v25 + 0xC), 0);
    if ( v27 )
    {
      v146 = FormHeapAlloc(0x24u);
      v190 = 0;
      if ( v146 )
        v28 = (_DWORD *)EffectItem_constrCopy(v27);
      else
        v28 = 0;
      v29 = v162[0x25];
      v190 = 0xFFFFFFFF;
      EffectItemList_AddItem((_DWORD *)(v29 + 0x30), v28);
      v161 = 1;
    }
    goto LABEL_186;
  }
  if ( v183 )
  {
    if ( v184 )
    {
      v30 = 0;
      for ( i = 0; i < v159; ++i )
      {
        v31 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v183 + 0xC), v30);
        for ( j = 0; j < v159; ++j )
        {
          v33 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v184 + 0xC), j);
          if ( v31 )
          {
            if ( v33 )
            {
              if ( EffectItem_Match(v31, v33) )
              {
                v171 = FormHeapAlloc(0x24u);
                v190 = 1;
                if ( v171 )
                  v34 = (int *)EffectItem_constrCopy(v31);
                else
                  v34 = 0;
                a3 = v34[5];
                v125 = *v34;
                v35 = (_DWORD *)(v162[0x25] + 0x30);
                v190 = 0xFFFFFFFF;
                if ( !EffectItemList_HasEffect(v35, v125, a3) )
                {
                  EffectItemList_AddItem((_DWORD *)(v162[0x25] + 0x30), v34);
                  ++v161;
                }
              }
            }
          }
        }
        v30 = i + 1;
      }
      if ( v185 && (v36 = 0, v148 = 0, v159 > 0) )
      {
        v37 = v162;
        do
        {
          v38 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v184 + 0xC), v36);
          for ( k = 0; k < v159; ++k )
          {
            v40 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v185 + 0xC), k);
            if ( v38 )
            {
              if ( v40 )
              {
                if ( EffectItem_Match(v38, v40) )
                {
                  v172 = FormHeapAlloc(0x24u);
                  v190 = 2;
                  if ( v172 )
                    v41 = (int *)EffectItem_constrCopy(v38);
                  else
                    v41 = 0;
                  a3a = v41[5];
                  v126 = *v41;
                  v42 = (_DWORD *)(v162[0x25] + 0x30);
                  v190 = 0xFFFFFFFF;
                  if ( !EffectItemList_HasEffect(v42, v126, a3a) )
                  {
                    EffectItemList_AddItem((_DWORD *)(v162[0x25] + 0x30), v41);
                    ++v161;
                  }
                }
              }
            }
            v43 = v159;
          }
          v36 = ++v148;
        }
        while ( v148 < v159 );
      }
      else
      {
        v37 = v162;
        v43 = v159;
      }
      if ( v186 )
      {
        v44 = 0;
        v149 = 0;
        if ( v43 > 0 )
        {
          do
          {
            v45 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v184 + 0xC), v44);
            v46 = 0;
            do
            {
              v47 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v186 + 0xC), v46);
              if ( v45 )
              {
                if ( v47 )
                {
                  if ( EffectItem_Match(v45, v47) )
                  {
                    v173 = FormHeapAlloc(0x24u);
                    v190 = 3;
                    if ( v173 )
                      v48 = (int *)EffectItem_constrCopy(v45);
                    else
                      v48 = 0;
                    a3b = v48[5];
                    v127 = *v48;
                    v49 = (_DWORD *)(v37[0x25] + 0x30);
                    v190 = 0xFFFFFFFF;
                    if ( !EffectItemList_HasEffect(v49, v127, a3b) )
                    {
                      EffectItemList_AddItem((_DWORD *)(v37[0x25] + 0x30), v48);
                      ++v161;
                    }
                  }
                }
              }
              ++v46;
            }
            while ( v46 < v159 );
            v44 = ++v149;
          }
          while ( v149 < v159 );
        }
      }
    }
    if ( !v185 )
      goto LABEL_114;
    v50 = 0;
    v150 = 0;
    if ( v159 > 0 )
    {
      v165 = (char *)(v183 + 0xC);
      v182 = v185 + 0xC;
      do
      {
        v51 = (_DWORD *)EffectItemList_GetItemByIndex2(v165, v50);
        for ( m = 0; m < v159; ++m )
        {
          v53 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)v182, m);
          if ( v51 )
          {
            if ( v53 )
            {
              if ( EffectItem_Match(v51, v53) )
              {
                v174 = FormHeapAlloc(0x24u);
                v190 = 4;
                if ( v174 )
                  v54 = (int *)EffectItem_constrCopy(v51);
                else
                  v54 = 0;
                a3c = v54[5];
                v128 = *v54;
                v55 = (_DWORD *)(v162[0x25] + 0x30);
                v190 = 0xFFFFFFFF;
                if ( !EffectItemList_HasEffect(v55, v128, a3c) )
                {
                  EffectItemList_AddItem((_DWORD *)(v162[0x25] + 0x30), v54);
                  ++v161;
                }
              }
            }
          }
        }
        v50 = ++v150;
      }
      while ( v150 < v159 );
    }
    if ( v186 )
    {
      v56 = 0;
      v151 = 0;
      if ( v159 > 0 )
      {
        v182 = v185 + 0xC;
        v181 = v186 + 0xC;
        do
        {
          v57 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)v182, v56);
          for ( n = 0; n < v159; ++n )
          {
            v59 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)v181, n);
            if ( v57 )
            {
              if ( v59 )
              {
                if ( EffectItem_Match(v57, v59) )
                {
                  v175 = FormHeapAlloc(0x24u);
                  v190 = 5;
                  if ( v175 )
                    v60 = (int *)EffectItem_constrCopy(v57);
                  else
                    v60 = 0;
                  a3d = v60[5];
                  v129 = *v60;
                  v61 = (_DWORD *)(v162[0x25] + 0x30);
                  v190 = 0xFFFFFFFF;
                  if ( !EffectItemList_HasEffect(v61, v129, a3d) )
                  {
                    EffectItemList_AddItem((_DWORD *)(v162[0x25] + 0x30), v60);
                    ++v161;
                  }
                }
              }
            }
          }
          v56 = ++v151;
        }
        while ( v151 < v159 );
      }
LABEL_114:
      if ( v186 )
      {
        v62 = 0;
        v152 = 0;
        if ( v159 > 0 )
        {
          v166 = (char *)(v183 + 0xC);
          v181 = v186 + 0xC;
          do
          {
            v63 = (_DWORD *)EffectItemList_GetItemByIndex2(v166, v62);
            for ( ii = 0; ii < v159; ++ii )
            {
              v65 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)v181, ii);
              if ( v63 )
              {
                if ( v65 )
                {
                  if ( EffectItem_Match(v63, v65) )
                  {
                    v176 = FormHeapAlloc(0x24u);
                    v190 = 6;
                    if ( v176 )
                      v66 = (int *)EffectItem_constrCopy(v63);
                    else
                      v66 = 0;
                    a3e = v66[5];
                    v130 = *v66;
                    v67 = (_DWORD *)(v162[0x25] + 0x30);
                    v190 = 0xFFFFFFFF;
                    if ( !EffectItemList_HasEffect(v67, v130, a3e) )
                    {
                      EffectItemList_AddItem((_DWORD *)(v162[0x25] + 0x30), v66);
                      ++v161;
                    }
                  }
                }
              }
            }
            v62 = ++v152;
          }
          while ( v152 < v159 );
        }
      }
    }
  }
  v68 = v162;
  if ( v184 )
  {
    if ( v185 )
    {
      v69 = v159;
      v70 = 0;
      for ( jj = 0; jj < v159; ++jj )
      {
        v71 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v184 + 0xC), v70);
        for ( kk = 0; kk < v159; ++kk )
        {
          v73 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v185 + 0xC), kk);
          if ( v71 )
          {
            if ( v73 )
            {
              if ( EffectItem_Match(v71, v73) )
              {
                v177 = FormHeapAlloc(0x24u);
                v190 = 7;
                if ( v177 )
                  v74 = (int *)EffectItem_constrCopy(v71);
                else
                  v74 = 0;
                a3f = v74[5];
                v131 = *v74;
                v75 = (_DWORD *)(v162[0x25] + 0x30);
                v190 = 0xFFFFFFFF;
                if ( !EffectItemList_HasEffect(v75, v131, a3f) )
                {
                  EffectItemList_AddItem((_DWORD *)(v162[0x25] + 0x30), v74);
                  ++v161;
                }
              }
            }
          }
          v69 = v159;
        }
        v70 = jj + 1;
      }
      if ( !v186 )
        goto LABEL_171;
      v167 = 0;
      if ( v69 > 0 )
      {
        v76 = (char *)(v186 + 0xC);
        do
        {
          v77 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v185 + 0xC), v167);
          v78 = 0;
          do
          {
            v79 = (_DWORD *)EffectItemList_GetItemByIndex2(v76, v78);
            if ( v77 )
            {
              if ( v79 )
              {
                if ( EffectItem_Match(v77, v79) )
                {
                  v154 = FormHeapAlloc(0x24u);
                  v190 = 8;
                  if ( v154 )
                    v80 = (int *)EffectItem_constrCopy(v77);
                  else
                    v80 = 0;
                  a3g = v80[5];
                  v132 = *v80;
                  v81 = (_DWORD *)(v162[0x25] + 0x30);
                  v190 = 0xFFFFFFFF;
                  if ( !EffectItemList_HasEffect(v81, v132, a3g) )
                  {
                    EffectItemList_AddItem((_DWORD *)(v162[0x25] + 0x30), v80);
                    ++v161;
                  }
                }
              }
            }
            ++v78;
          }
          while ( v78 < v159 );
          ++v167;
        }
        while ( v167 < v159 );
        v68 = v162;
      }
    }
    if ( v186 )
    {
      v82 = 0;
      v155 = 0;
      if ( v159 > 0 )
      {
        v178 = (char *)(v184 + 0xC);
        do
        {
          v83 = (_DWORD *)EffectItemList_GetItemByIndex2(v178, v82);
          for ( mm = 0; mm < v159; ++mm )
          {
            v85 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)(v186 + 0xC), mm);
            if ( v83 )
            {
              if ( v85 )
              {
                if ( EffectItem_Match(v83, v85) )
                {
                  v168 = FormHeapAlloc(0x24u);
                  v190 = 9;
                  if ( v168 )
                    v86 = (int *)EffectItem_constrCopy(v83);
                  else
                    v86 = 0;
                  a3h = v86[5];
                  v133 = *v86;
                  v87 = (_DWORD *)(v68[0x25] + 0x30);
                  v190 = 0xFFFFFFFF;
                  if ( !EffectItemList_HasEffect(v87, v133, a3h) )
                  {
                    EffectItemList_AddItem((_DWORD *)(v68[0x25] + 0x30), v86);
                    ++v161;
                  }
                }
              }
            }
          }
          v82 = ++v155;
        }
        while ( v155 < v159 );
      }
    }
  }
LABEL_171:
  if ( v185 )
  {
    if ( v186 )
    {
      v88 = 0;
      v156 = 0;
      if ( v159 > 0 )
      {
        v182 = v185 + 0xC;
        v181 = v186 + 0xC;
        do
        {
          v89 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)v182, v88);
          for ( nn = 0; nn < v159; ++nn )
          {
            v91 = (_DWORD *)EffectItemList_GetItemByIndex2((char *)v181, nn);
            if ( v89 )
            {
              if ( v91 )
              {
                if ( EffectItem_Match(v89, v91) )
                {
                  v179 = FormHeapAlloc(0x24u);
                  v190 = 0xA;
                  if ( v179 )
                    v92 = (int *)EffectItem_constrCopy(v89);
                  else
                    v92 = 0;
                  a3i = v92[5];
                  v134 = *v92;
                  v93 = (_DWORD *)(v68[0x25] + 0x30);
                  v190 = 0xFFFFFFFF;
                  if ( !EffectItemList_HasEffect(v93, v134, a3i) )
                  {
                    EffectItemList_AddItem((_DWORD *)(v68[0x25] + 0x30), v92);
                    ++v161;
                  }
                }
              }
            }
          }
          v88 = ++v156;
        }
        while ( v156 < v159 );
      }
    }
  }
LABEL_186:
  v94 = (float *)v162;
  v95 = sub_46E3F0(*(void **)(v162[0x1E] + 8));
  v96 = v162[0x25];
  v180 = (float)v95;
  v188 = 0.0;
  v187 = 0.0;
  v160 = 0.0;
  v163 = (unsigned __int8)EffectItemList_AllEffectsHostile((_DWORD *)(v96 + 0x30)) != 0;
  v97 = *((_DWORD *)v94 + 0x1F);
  if ( v97 )
    v188 = (float)sub_46E3F0(*(void **)(v97 + 8));
  v98 = *((_DWORD *)v94 + 0x21);
  if ( v98 )
    v187 = (float)sub_46E3F0(*(void **)(v98 + 8));
  v99 = *((_DWORD *)v94 + 0x20);
  if ( v99 )
    v160 = (float)sub_46E3F0(*(void **)(v99 + 8));
  v100 = 0;
  LuckModifiedBaseAV = Actor_GetLuckModifiedBaseAV(0x13);
  v94[0x22] = LuckModifiedBaseAV;
  v169 = Calc_MortarPestleModifiedSkill(v180, LuckModifiedBaseAV);
  v101 = 0;
  while ( 1 )
  {
    v102 = *((_DWORD *)v94 + 0x25);
    *(float *)&v181 = 1.0;
    *(float *)&v182 = 1.0;
    v103 = (int *)EffectItemList_GetItemByIndex2((char *)(v102 + 0x30), v101);
    v104 = v103;
    if ( v103 )
    {
      IsHostile = EffectItem_IsHostile(v103);
      v106 = v104[7];
      if ( IsHostile )
      {
        if ( *((_DWORD *)v94 + 0x1F) )
        {
          v100 = *((_DWORD *)v94 + 0x20) != 0 ? 5 : 2;
          goto LABEL_201;
        }
      }
      else if ( *((_DWORD *)v94 + 0x21) )
      {
        v100 = *((_DWORD *)v94 + 0x20) != 0 ? 4 : 1;
        goto LABEL_201;
      }
      if ( *((_DWORD *)v94 + 0x20) )
        v100 = 3;
LABEL_201:
      v107 = *(float *)(v106 + 0x5C);
      v108 = *(_DWORD *)(v106 + 0x58);
      v158 = v107;
      if ( (v108 & 0x80) == 0 && (v108 & 0x100) == 0 )
      {
        Calc_T1PotionStrength((float *)&v182, (float *)&v181, v158, v169, v100, IsHostile, v187, v188, v160, v163);
LABEL_210:
        v109 = *(float *)&v181;
        v110 = Double_To_SInt32(*(float *)&v181);
        v111 = v109 - (double)v110;
        v112 = dbl_A2FAA0;
        v113 = v112 < v111;
        v114 = v112 == v111;
        v115 = v112;
        *(float *)&v181 = (float)((v113 || v114) + v110);
        v116 = *(float *)&v182;
        v117 = *(float *)&v182;
        v118 = Double_To_SInt32(v115);
        v119 = v116 - (double)v118;
        *(float *)&v182 = (float)((v119 >= v115) + v118);
        v120 = Double_To_SInt32(*(float *)&v181);
        if ( v120 < 1 )
          v120 = 1;
        EffectItem_SetDuration((int)v104, v120);
        v121 = *(float *)&v182;
        v122 = Double_To_SInt32(*(float *)&v182);
        if ( v122 < 1 )
          v122 = 1;
        EffectItem_SetMagnitude((int)v104, v122);
        EffectItem_SetArea((int)v104, 0);
        sub_593B20(v94, v117, v119, v121, v104, v101);
        v123 = *((_BYTE *)v94 + 0xA4);
        if ( v123 == 2 || v123 == 3 )
        {
          v124 = sub_588C10(*((_DWORD **)v94 + 0xB), 0xFDE);
          BSStringT_Set((BSStringT *)(*((_DWORD *)v94 + 0x25) + 0x28), v124, 0);
        }
        else if ( !v101 )
        {
          EffectItem_GetQualifiedName_SkillAttr(v104, (int)v189);
          sub_57FF20(*((BSStringT **)v94 + 0x28), v189);
          *((_BYTE *)v94 + 0xA4) = 1;
          sub_593710((char **)v94);
        }
        Tile_SetFloat(*((Tile **)v94 + 0x16), (_DWORD *)0xFAF, fConstant_2);
        goto LABEL_221;
      }
      if ( (v108 & 0x80) == 0 )
      {
        if ( (v108 & 0x100) != 0 )
        {
          Calc_T2PotionStrength((float *)&v181, v158, v169, v100, IsHostile, v187, v188, v160, v163);
          goto LABEL_210;
        }
        if ( (v108 & 0x80) == 0 )
          goto LABEL_210;
      }
      if ( (v108 & 0x100) == 0 )
        Calc_T3PotionStrength((float *)&v182, v158, v169, v100, IsHostile, v187, v188, v160, v163);
      goto LABEL_210;
    }
    if ( !v101 )
      break;
LABEL_221:
    *(_DWORD *)(*((_DWORD *)v94 + 0x25) + 0x78) = Double_To_SInt32(v169 * fPotionGoldValueMult);
    *(_BYTE *)(*((_DWORD *)v94 + 0x25) + 0x7C) |= 1u;
    if ( ++v101 >= v161 )
      return;
  }
  if ( *((_BYTE *)v94 + 0xA4) != 2 )
  {
    sub_57FF20(*((BSStringT **)v94 + 0x28), (char *)dword_B38900);
    sub_593710((char **)v94);
    *((_BYTE *)v94 + 0xA4) = 0;
  }
  Tile_SetFloat(*((Tile **)v94 + 0x16), (_DWORD *)0xFAF, 1.0);
}
