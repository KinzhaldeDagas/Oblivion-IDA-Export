void __thiscall sub_7925B0(
        int *this,
        int a2,
        float a3,
        int a4,
        _DWORD *a5,
        float a6,
        float a7,
        float *a8,
        float *a9,
        int a10,
        int a11,
        float a12,
        int a13,
        float a14)
{
  int *v14; // ebp
  char v15; // bl
  _BYTE *v16; // ecx
  int v17; // esi
  double v18; // st7
  float *v19; // ecx
  double v20; // st7
  float *v21; // ecx
  double v22; // st7
  float *v23; // ecx
  double v24; // st7
  float *v25; // ecx
  double v26; // st7
  __int16 v27; // dx
  double v28; // st7
  int v29; // eax
  double v30; // st7
  double v31; // st7
  double v32; // st6
  float *v33; // ecx
  double v34; // st7
  int v35; // edi
  bool v36; // sf
  float v37; // eax
  int v38; // ebx
  int v39; // eax
  float v40; // edi
  int v41; // ecx
  bool v42; // cc
  int v43; // edx
  int v44; // ebx
  __int16 v45; // dx
  int v46; // ecx
  __int16 v47; // dx
  int v48; // ecx
  float v49; // ebx
  int v50; // esi
  double v51; // st7
  float *v52; // ecx
  _DWORD *v54; // esi
  double v55; // st6
  double v56; // st7
  double v57; // st5
  double v58; // st7
  double v59; // st7
  double v60; // st7
  double v61; // st6
  double v62; // st5
  double v63; // st7
  float *v64; // ecx
  double v65; // st7
  double v66; // st7
  double v67; // st6
  double v68; // st7
  double v69; // st5
  double v70; // st7
  double v71; // st7
  int v72; // edx
  bool v73; // zf
  double v74; // st7
  double v75; // st7
  int v76; // esi
  int v77; // edx
  float v78; // ecx
  int v79; // eax
  int v80; // esi
  float v81; // ebp
  float *v82; // ecx
  double v83; // st7
  double v84; // st7
  double v85; // st7
  float *v86; // ebx
  double v87; // st6
  double v88; // st7
  double v89; // st5
  float v90; // eax
  float v91; // ecx
  double v92; // st6
  double v93; // st7
  double v94; // st5
  double v95; // st6
  float *v96; // ecx
  double v97; // st7
  double v98; // st7
  float *v99; // eax
  double v100; // st7
  int v101; // esi
  float *v102; // ecx
  double v103; // st7
  float *v104; // ecx
  double v105; // st6
  double v106; // st7
  double v107; // st5
  double v108; // st7
  double v109; // st7
  int v110; // edx
  double v111; // st7
  double v112; // st7
  int v113; // eax
  double v114; // st7
  double v115; // st7
  double v116; // st7
  int v117; // esi
  int v118; // eax
  int v119; // ebp
  int v120; // esi
  float v121; // eax
  _BYTE *v122; // ecx
  int v123; // edx
  int v124; // ebx
  int v125; // eax
  bool v126; // al
  int v127; // edi
  double v128; // st7
  int v129; // esi
  double v130; // st7
  int v131; // eax
  int v132; // edi
  float *v133; // ecx
  double v134; // st6
  int v135; // eax
  int *v136; // esi
  _BYTE *v137; // eax
  char *v138; // esi
  char *v139; // edi
  int v140; // eax
  char *v141; // ebx
  _BYTE v142[40]; // [esp+4h] [ebp-12Ch] BYREF
  int v143; // [esp+2Ch] [ebp-104h]
  rsize_t v144; // [esp+30h] [ebp-100h]
  char v145; // [esp+4Bh] [ebp-E5h]
  float v146; // [esp+4Ch] [ebp-E4h]
  float v147; // [esp+50h] [ebp-E0h]
  float v148; // [esp+54h] [ebp-DCh]
  float v149; // [esp+58h] [ebp-D8h]
  float v150; // [esp+5Ch] [ebp-D4h]
  float v151; // [esp+60h] [ebp-D0h]
  float v152; // [esp+64h] [ebp-CCh]
  float v153; // [esp+68h] [ebp-C8h]
  double v154; // [esp+6Ch] [ebp-C4h] BYREF
  float v155; // [esp+74h] [ebp-BCh]
  int v156; // [esp+78h] [ebp-B8h]
  float v157; // [esp+7Ch] [ebp-B4h]
  float v158; // [esp+80h] [ebp-B0h]
  float v159; // [esp+84h] [ebp-ACh]
  int v160; // [esp+88h] [ebp-A8h]
  int v161; // [esp+8Ch] [ebp-A4h]
  float v162; // [esp+90h] [ebp-A0h]
  float v163; // [esp+94h] [ebp-9Ch]
  float v164; // [esp+98h] [ebp-98h]
  float v165; // [esp+9Ch] [ebp-94h]
  float v166; // [esp+A0h] [ebp-90h]
  int v167; // [esp+A4h] [ebp-8Ch] BYREF
  float v168; // [esp+A8h] [ebp-88h]
  float v169; // [esp+ACh] [ebp-84h]
  float v170; // [esp+B0h] [ebp-80h]
  float v171; // [esp+B4h] [ebp-7Ch]
  float v172; // [esp+B8h] [ebp-78h]
  float v173; // [esp+BCh] [ebp-74h]
  float v174; // [esp+C0h] [ebp-70h]
  double v175; // [esp+C4h] [ebp-6Ch]
  float v176; // [esp+CCh] [ebp-64h]
  float v177; // [esp+D0h] [ebp-60h]
  float v178; // [esp+D4h] [ebp-5Ch]
  float v179; // [esp+D8h] [ebp-58h]
  float v180[9]; // [esp+DCh] [ebp-54h] BYREF
  float v181[9]; // [esp+100h] [ebp-30h] BYREF
  unsigned int v182; // [esp+12Ch] [ebp-4h]

  v14 = this;
  v161 = (int)this;
  if ( sub_799EA0((_BYTE *)dword_B429C4) && a4 >= (int)ValueModifierEffect_GetAV((HighProcess *)dword_B429C4) )
  {
    v15 = 1;
    v145 = 1;
  }
  else
  {
    v145 = 0;
    v15 = 0;
  }
  if ( a4 == dword_B2B708 )
    a13 = dword_B429C0++;
  if ( *(float *)&a4 == 0.0 )
    sub_791870(v14);
  v16 = dword_B429E0;
  if ( !dword_B429E0 || a4 >= (unsigned int)(((_BYTE *)dword_B429E4 - v16) >> 2) )
  {
    _invalid_parameter_noinfo();
    v16 = dword_B429E0;
  }
  v17 = *(_DWORD *)&v16[4 * a4];
  v160 = v17;
  if ( !v15 )
    v14[9] = *(unsigned __int16 *)(a10 + 0x22);
  *((float *)v14 + 1) = a6;
  if ( !v15 )
    sub_791E80((char *)v14, v17);
  v164 = sub_784210((float *)*(_DWORD *)(v17 + 0x60), a6) * a3;
  v18 = sub_78EA00(flt_A8C694, flt_A3F420);
  v19 = *(float **)(v17 + 0x6C);
  v151 = v18;
  v20 = sub_784210(v19, a6);
  v21 = *(float **)(v17 + 0x54);
  v152 = v20;
  v22 = sub_784210(v21, a6);
  v23 = *(float **)(v17 + 0x64);
  v171 = v22;
  v24 = sub_784210(v23, a6);
  v25 = *(float **)(v17 + 0x58);
  v165 = v24 * a3;
  v26 = sub_784210(v25, a6);
  v27 = *(_WORD *)v17;
  v170 = v26;
  *((_WORD *)v14 + 0x10) = v27;
  if ( *(_BYTE *)(v17 + 0x1E) )
    v28 = v151 + dbl_A2FAA0 + a6;
  else
    v28 = 0.0;
  v29 = v14[3];
  v166 = v28;
  if ( v29 )
    v29 = (v14[4] - v29) / 0xC;
  v30 = *(float *)(v17 + 0x20);
  if ( (((_BYTE)v29 + (_BYTE)a2) & 1) != 0 )
    v30 = -v30;
  v73 = *(_BYTE *)(v17 + 0x1D) == 0;
  v148 = v30;
  if ( v73 )
    v31 = v164 / a3 * *(float *)(v17 + 0x18);
  else
    v31 = *(float *)(v17 + 0x18);
  v32 = *(float *)(v17 + 0x14);
  if ( !*(_BYTE *)(v17 + 0x1C) )
    v32 = v32 * v165 * flt_B2B714;
  v33 = *(float **)(v17 + 0x68);
  *(float *)&v167 = v32;
  v168 = v31;
  v169 = v148;
  v162 = sub_784210(v33, 0.0) * v165;
  if ( a14 > 0.0 )
  {
    v34 = a14 * dbl_A563D8;
    if ( v162 > v34 )
    {
      v162 = v34;
      v165 = v162;
    }
  }
  v35 = *(_DWORD *)(v17 + 4) + 1;
  v36 = *(_DWORD *)(v17 + 4) - 1 < 0;
  v14[7] = v35;
  if ( v36 == __OFSUB__(v35, 2) )
  {
    v37 = COERCE_FLOAT(FormHeapAlloc((0x48 * (unsigned __int64)(unsigned int)v35) >> 0x20 != 0 ? 0xFFFFFFFF : 0x48 * v35));
    v38 = LODWORD(v37);
    v147 = v37;
    v182 = 0;
    if ( v37 == 0.0 )
      v38 = 0;
    else
      sub_401080((void *)LODWORD(v37), 0x48, v35, (void *(__thiscall *)(void *))sub_78F3E0);
    v73 = v145 == 0;
    v182 = 0xFFFFFFFF;
    v14[6] = v38;
    if ( v73 )
    {
      LODWORD(v153) = (unsigned __int16)(2 * (*(_WORD *)v17 + 2) * (*((_WORD *)v14 + 0xE) - 1));
      v39 = FormHeapAlloc((unsigned __int64)LOWORD(v153) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * LOWORD(v153));
      LODWORD(v148) = *(unsigned __int16 *)(a10 + 0x22);
      v40 = 0.0;
      v41 = 0;
      v42 = v14[7] - 1 <= 0;
      v157 = 0.0;
      if ( !v42 )
      {
        do
        {
          v43 = *(_DWORD *)v17 + 1;
          v44 = 0;
          v146 = v40;
          if ( v43 > 0 )
          {
            do
            {
              v45 = LOWORD(v40) + LOWORD(v148);
              *(_WORD *)(v39 + 2 * v41) = LOWORD(v40) + LOWORD(v148) + *(_WORD *)v17 + 1;
              v46 = v41 + 1;
              *(_WORD *)(v39 + 2 * v46) = v45;
              ++v44;
              v41 = v46 + 1;
              ++LODWORD(v40);
            }
            while ( v44 < *(_DWORD *)v17 + 1 );
            v14 = (int *)v161;
          }
          ++LODWORD(v157);
          v47 = LOWORD(v146) + LOWORD(v148);
          *(_WORD *)(v39 + 2 * v41) = LOWORD(v146) + LOWORD(v148) + *(_WORD *)v17 + 1;
          v48 = v41 + 1;
          *(_WORD *)(v39 + 2 * v48) = v47 + *(_WORD *)v17 + 1;
          v41 = v48 + 1;
        }
        while ( SLODWORD(v157) < v14[7] - 1 );
      }
      sub_796100((_DWORD *)a10, 0, v39, LOWORD(v153));
      ++*(_WORD *)(a10 + 0x26);
    }
    v49 = *(float *)(v161 + 0x18);
    v50 = v160;
    *(_DWORD *)(LODWORD(v49) + 0xC) = *a5;
    *(_DWORD *)(LODWORD(v49) + 0x10) = a5[1];
    *(_DWORD *)(LODWORD(v49) + 0x14) = a5[2];
    v51 = sub_784370((float *)*(_DWORD *)(v50 + 0x50), 0.0);
    v52 = *(float **)(v50 + 0x50);
    v159 = v51;
    v163 = sub_784370(v52, 0.0);
    qmemcpy((void *)(LODWORD(v49) + 0x1C), a8, 0x24u);
    v146 = a8[1] * a9[1] + *a9 * *a8 + a8[2] * a9[2];
    v153 = a8[3] * *a9 + a8[4] * a9[1] + a8[5] * a9[2];
    v149 = a8[6] * *a9 + a8[7] * a9[1] + a8[8] * a9[2];
    *(float *)&v154 = v146;
    *((float *)&v154 + 1) = v153;
    v155 = v149;
    sub_78F050((float *)(LODWORD(v49) + 0x1C), v151, COERCE_DOUBLE(__PAIR64__(LODWORD(v153), LODWORD(v146))), v149);
    v146 = v163 + v152;
    sub_78EF60((float *)(LODWORD(v49) + 0x1C), v146, v159);
    v54 = (_DWORD *)v160;
    v55 = flt_B2B71C;
    v56 = flt_B2B718;
    v57 = flt_B2B720;
    v146 = *(float *)(LODWORD(v49) + 0x34) * v57
         + *(float *)(LODWORD(v49) + 0x1C) * v56
         + *(float *)(LODWORD(v49) + 0x28) * v55;
    v153 = *(float *)(LODWORD(v49) + 0x2C) * v55
         + *(float *)(LODWORD(v49) + 0x20) * v56
         + *(float *)(LODWORD(v49) + 0x38) * v57;
    v149 = v56 * *(float *)(LODWORD(v49) + 0x24)
         + v55 * *(float *)(LODWORD(v49) + 0x30)
         + v57 * *(float *)(LODWORD(v49) + 0x3C);
    *(float *)&v154 = v146;
    v58 = v153;
    *(_DWORD *)LODWORD(v49) = LODWORD(v146);
    *((float *)&v154 + 1) = v58;
    v59 = v149;
    *(_DWORD *)(LODWORD(v49) + 4) = HIDWORD(v154);
    v155 = v59;
    *(float *)(LODWORD(v49) + 8) = v155;
    *(float *)(LODWORD(v49) + 0x18) = sub_784210((float *)v54[0x1A], 0.0) * v165;
    v158 = sub_784210((float *)v54[0x17], 0.0) * v170;
    v152 = sub_78FCC0((float *)LODWORD(v49), &flt_B2B724) * dbl_A8BA48;
    v146 = dbl_A65A18 - v152;
    v146 = fabs(v146);
    v153 = 1.0 - v146 * dbl_A8C698;
    v60 = flt_B2B72C;
    v61 = flt_B2B728;
    v148 = v60 * *(float *)(LODWORD(v49) + 4) - *(float *)(LODWORD(v49) + 8) * v61;
    v62 = *(float *)(LODWORD(v49) + 8) * flt_B2B724 - v60 * *(float *)LODWORD(v49);
    v63 = flt_B2B724;
    v151 = v62;
    v157 = v61 * *(float *)LODWORD(v49) - v63 * *(float *)(LODWORD(v49) + 4);
    v146 = v151 * v151 + v148 * v148 + v157 * v157;
    v146 = sqrt(v146);
    v64 = (float *)v54[0x1C];
    v146 = 1.0 / v146;
    *(float *)&v154 = v148 * v146;
    *((float *)&v154 + 1) = v151 * v146;
    v155 = v146 * v157;
    v65 = sub_784210(v64, 0.0);
    v66 = v65 - dbl_A2FAA0 + v65 - dbl_A2FAA0;
    *(double *)&v142[0x20] = v154;
    v146 = v66 * dbl_A3D360;
    v180[0] = 1.0;
    v180[1] = 0.0;
    v180[2] = 0.0;
    v180[3] = 0.0;
    v180[5] = 0.0;
    v180[6] = 0.0;
    v180[7] = 0.0;
    v180[4] = 1.0;
    v180[8] = 1.0;
    v146 = v146 * v171 * v152 * v153;
    sub_78F160(v180, v146, v154, v155);
    qmemcpy((void *)(LODWORD(v49) + 0x1C), sub_78EDD0((float *)(LODWORD(v49) + 0x1C), v181, v180), 0x24u);
    v67 = flt_B2B71C;
    v68 = flt_B2B718;
    v69 = flt_B2B720;
    v146 = *(float *)(LODWORD(v49) + 0x34) * v69
         + *(float *)(LODWORD(v49) + 0x1C) * v68
         + *(float *)(LODWORD(v49) + 0x28) * v67;
    v153 = *(float *)(LODWORD(v49) + 0x2C) * v67
         + *(float *)(LODWORD(v49) + 0x20) * v68
         + *(float *)(LODWORD(v49) + 0x38) * v69;
    v149 = v68 * *(float *)(LODWORD(v49) + 0x24)
         + v67 * *(float *)(LODWORD(v49) + 0x30)
         + v69 * *(float *)(LODWORD(v49) + 0x3C);
    *(float *)&v154 = v146;
    v70 = v153;
    *(_DWORD *)LODWORD(v49) = LODWORD(v146);
    *((float *)&v154 + 1) = v70;
    v71 = v149;
    *(_DWORD *)(LODWORD(v49) + 4) = HIDWORD(v154);
    v155 = v71;
    *(float *)(LODWORD(v49) + 8) = v155;
    if ( a10 )
    {
      if ( *(float *)&a4 == 0.0 )
      {
        v72 = v160;
        v146 = *(float *)(LODWORD(v49) + 0x18) + *(float *)(LODWORD(v49) + 0x18);
        *(float *)(a10 + 0x18) = v146;
        v146 = *(float *)(v72 + 8) * v164;
        *(float *)(a10 + 0x1C) = v146;
      }
    }
    v73 = a4 == dword_B2B708;
    v42 = a4 <= dword_B2B708;
    *(float *)&v156 = a12;
    if ( v42 )
    {
      v148 = 1.0;
      if ( v73 )
        v148 = 1.0 - v158 * dbl_A2FC68;
      v74 = v148;
      *(float *)(LODWORD(v49) + 0x44) = v148;
      *(float *)&v156 = v74;
    }
    else if ( byte_B429C8 )
    {
      v146 = a12 + (0.0 - a12) * v158;
      v75 = v146;
      *(float *)(LODWORD(v49) + 0x44) = v146;
      *(float *)&v156 = v75;
    }
    if ( v145 )
      sub_7A0EE0((_DWORD *)dword_B429C4);
    v148 = 0.0;
    if ( *(float *)&a4 != 0.0 )
      v148 = a7;
    v76 = v161;
    v143 = a4;
    *(float *)&v142[0x24] = v166;
    *(_DWORD *)&v142[0x20] = a13;
    sub_78FEB0(
      (_DWORD *)v161,
      (float *)LODWORD(v49),
      0.0,
      v148,
      *(unsigned __int16 *)(v161 + 0x20),
      a10,
      (float *)&v167,
      v156,
      a13,
      v166,
      a4);
    v79 = *(_DWORD *)(v161 + 0x18);
    v157 = 0.0;
    v151 = v49;
    *(float *)(v79 + 0x40) = 0.0;
    v42 = *(_DWORD *)(v76 + 0x1C) <= 1;
    v156 = 1;
    if ( !v42 )
    {
      LODWORD(v148) = 0x48;
      do
      {
        LODWORD(v146) = *(_DWORD *)(v161 + 0x1C) - 1;
        v80 = v160;
        LODWORD(v81) = LODWORD(v148) + *(_DWORD *)(v161 + 0x18);
        v146 = (double)v156 / (double)SLODWORD(v146);
        v153 = *(float *)(v160 + 0x24);
        v146 = pow(v146, v153);
        v82 = *(float **)(v160 + 0x68);
        v158 = v146;
        v83 = v146;
        v146 = v146 * v164 - v157;
        *(float *)&v143 = v83;
        v84 = sub_784210(v82, *(float *)&v143);
        *(float *)(LODWORD(v81) + 0x18) = v84 * v165;
        v85 = sub_784210((float *)*(_DWORD *)(v80 + 0x5C), v158);
        v86 = (float *)(LODWORD(v81) + 0x1C);
        v153 = v85 * v170;
        qmemcpy((void *)(LODWORD(v81) + 0x1C), (const void *)(LODWORD(v151) + 0x1C), 0x24u);
        v87 = flt_B2B71C;
        v88 = flt_B2B718;
        v89 = flt_B2B720;
        v149 = *(float *)(LODWORD(v81) + 0x34) * v89
             + *(float *)(LODWORD(v81) + 0x1C) * v88
             + *(float *)(LODWORD(v81) + 0x28) * v87;
        v159 = *(float *)(LODWORD(v81) + 0x2C) * v87
             + *(float *)(LODWORD(v81) + 0x20) * v88
             + *(float *)(LODWORD(v81) + 0x38) * v89;
        v163 = v88 * *(float *)(LODWORD(v81) + 0x24)
             + v87 * *(float *)(LODWORD(v81) + 0x30)
             + v89 * *(float *)(LODWORD(v81) + 0x3C);
        v177 = v149;
        v178 = v159;
        v90 = v159;
        v179 = v163;
        v91 = v163;
        *(float *)LODWORD(v81) = v149;
        *(float *)(LODWORD(v81) + 4) = v90;
        *(float *)(LODWORD(v81) + 8) = v91;
        v152 = *(float *)(LODWORD(v81) + 4) * flt_B2B728
             + *(float *)LODWORD(v81) * flt_B2B724
             + *(float *)(LODWORD(v81) + 8) * flt_B2B72C;
        if ( v152 >= (double)flt_A30634 )
        {
          if ( v152 > 1.0 )
            v152 = 1.0;
        }
        else
        {
          v152 = flt_A30634;
        }
        v149 = acos(v152);
        v149 = v149 * dbl_A8BA48;
        v159 = dbl_A65A18 - v149;
        v159 = fabs(v159);
        v147 = 1.0 - v159 * dbl_A8C698;
        v92 = flt_B2B72C;
        v93 = flt_B2B728;
        v152 = *(float *)(LODWORD(v81) + 4) * v92 - *(float *)(LODWORD(v81) + 8) * v93;
        v94 = *(float *)(LODWORD(v81) + 8) * flt_B2B724 - v92 * *(float *)LODWORD(v81);
        v95 = flt_B2B724;
        v163 = v94;
        v159 = v93 * *(float *)LODWORD(v81) - v95 * *(float *)(LODWORD(v81) + 4);
        v150 = v152 * v152 + v163 * v163 + v159 * v159;
        v150 = sqrt(v150);
        v96 = *(float **)(v160 + 0x70);
        v150 = 1.0 / v150;
        *(float *)&v175 = v152 * v150;
        *((float *)&v175 + 1) = v163 * v150;
        v176 = v150 * v159;
        v97 = sub_784210(v96, v158);
        v98 = v97 - dbl_A2FAA0 + v97 - dbl_A2FAA0;
        *(double *)&v142[0x20] = v175;
        v150 = v98 * dbl_A3D360;
        v147 = v150 * v171 * v149 * v147;
        sub_78F160(v180, v147, v175, v176);
        v99 = sub_78EDD0((float *)(LODWORD(v81) + 0x1C), v181, v180);
        v100 = v158;
        qmemcpy(v86, v99, 0x24u);
        v101 = v160;
        v102 = *(float **)(v160 + 0x50);
        *(float *)&v143 = v100;
        v103 = sub_784370(v102, *(float *)&v143);
        v104 = *(float **)(v101 + 0x50);
        v147 = v103;
        v150 = sub_784370(v104, v158);
        sub_78EF60((float *)(LODWORD(v81) + 0x1C), v150, v147);
        v105 = flt_B2B71C;
        v106 = flt_B2B718;
        v107 = flt_B2B720;
        v147 = *(float *)(LODWORD(v81) + 0x34) * v107
             + *(float *)(LODWORD(v81) + 0x1C) * v106
             + *(float *)(LODWORD(v81) + 0x28) * v105;
        v150 = *(float *)(LODWORD(v81) + 0x2C) * v105
             + *(float *)(LODWORD(v81) + 0x20) * v106
             + *(float *)(LODWORD(v81) + 0x38) * v107;
        v149 = v106 * *(float *)(LODWORD(v81) + 0x24)
             + v105 * *(float *)(LODWORD(v81) + 0x30)
             + v107 * *(float *)(LODWORD(v81) + 0x3C);
        v172 = v147;
        v108 = v150;
        *(float *)LODWORD(v81) = v147;
        v173 = v108;
        v109 = v149;
        *(float *)(LODWORD(v81) + 4) = v173;
        v174 = v109;
        *(float *)(LODWORD(v81) + 8) = v174;
        v147 = *(float *)LODWORD(v151) * v146;
        v150 = *(float *)(LODWORD(v151) + 4) * v146;
        v149 = v146 * *(float *)(LODWORD(v151) + 8);
        v147 = v147 + *(float *)(LODWORD(v151) + 0xC);
        v150 = *(float *)(LODWORD(v151) + 0x10) + v150;
        v149 = *(float *)(LODWORD(v151) + 0x14) + v149;
        *(float *)&v154 = v147;
        v110 = LODWORD(v147);
        v111 = v150;
        *(float *)(LODWORD(v81) + 0xC) = v147;
        *((float *)&v154 + 1) = v111;
        v112 = v149;
        *(_DWORD *)(LODWORD(v81) + 0x10) = HIDWORD(v154);
        v155 = v112;
        *(float *)(LODWORD(v81) + 0x14) = v155;
        v113 = dword_B2B708;
        v152 = a12;
        if ( a4 > v113 )
        {
          if ( byte_B429C8 )
          {
            v147 = a12 + (0.0 - a12) * v153;
            v115 = v147;
            *(float *)(LODWORD(v81) + 0x44) = v147;
            v152 = v115;
          }
        }
        else
        {
          v149 = 1.0;
          if ( a4 == v113 )
            v149 = 1.0 - v153 * v158;
          v114 = v149;
          *(float *)(LODWORD(v81) + 0x44) = v149;
          v152 = v114;
        }
        if ( v145 )
        {
          qmemcpy(v142, v86, 0x24u);
          sub_79C490(
            (_DWORD *)dword_B429C4,
            v110,
            SHIDWORD(v154),
            SLODWORD(v155),
            v142[0],
            *(int *)&v142[4],
            *(int *)&v142[8],
            *(int *)&v142[0xC],
            *(int *)&v142[0x10],
            *(int *)&v142[0x14],
            *(int *)&v142[0x18],
            *(int *)&v142[0x1C],
            *(int *)&v142[0x20],
            v152,
            a13);
          v117 = v161;
        }
        else
        {
          if ( *(float *)&a4 == 0.0 )
          {
            if ( v158 >= (double)*(float *)(v160 + 8) )
              v116 = *(float *)(v160 + 8) * dbl_A3D360 / (1.0 - *(float *)(v160 + 8));
            else
              v116 = 1.0;
          }
          else
          {
            v116 = a7;
          }
          v117 = v161;
          v151 = v116;
          v143 = a4;
          *(float *)&v142[0x24] = v166;
          *(_DWORD *)&v142[0x20] = a13;
          *(_DWORD *)&v142[0x1C] = a13;
          sub_78FEB0(
            (_DWORD *)v161,
            (float *)LODWORD(v81),
            v158,
            v151,
            *(unsigned __int16 *)(v161 + 0x20),
            a10,
            (float *)&v167,
            SLODWORD(v152),
            a13,
            v166,
            a4);
        }
        v118 = *(_DWORD *)(v117 + 0x18);
        LODWORD(v78) = LODWORD(v148) + 0x48;
        v151 = v81;
        v157 = v157 + v146;
        v148 = v78;
        *(float *)(LODWORD(v78) + v118 - 8) = v157;
        v42 = ++v156 < *(_DWORD *)(v117 + 0x1C);
      }
      while ( v42 );
    }
    if ( v145 )
    {
      *(float *)&v143 = v78;
      sub_79A000(dword_B429C4, v77, v162);
      v119 = v161;
    }
    else
    {
      v119 = v161;
      *(_WORD *)(a10 + 0x22) = *(_WORD *)(v161 + 0x24);
      sub_78F7A0((_DWORD *)v119, a10, *(_WORD *)(v119 + 0x20));
    }
    v120 = v160;
    v121 = COERCE_FLOAT(Double_To_SInt32(*(float *)(v160 + 0x10) / a3 * v164));
    v122 = dword_B429E0;
    v123 = LODWORD(v121);
    v124 = a4 + 1;
    v73 = dword_B429E0 == 0;
    v166 = v121;
    if ( v73 )
      v125 = 0;
    else
      v125 = ((_BYTE *)dword_B429E4 - v122) >> 2;
    v126 = v124 >= v125 - 1;
    v145 = v126;
    if ( !v126 || byte_B2B704 )
    {
      *(float *)&v156 = 0.0;
      if ( v123 > 0 )
      {
        while ( 1 )
        {
          v127 = a2;
          *((float *)&v154 + 1) = 0.0;
          LODWORD(v154) = 0;
          v155 = 0.0;
          if ( v126 || (v127 = a2 + 3, a2 += 3, sub_78EA30(a2), *(float *)&v156 != 0.0) )
          {
            v143 = *(int *)(v120 + 0xC);
            v128 = *(float *)(v120 + 8);
          }
          else
          {
            v147 = *(float *)(v120 + 8);
            v150 = v147 + (*(float *)(v120 + 0xC) - v147) * dbl_A77838;
            v147 = *(float *)(v120 + 8);
            v147 = v147 + (*(float *)(v120 + 0xC) - v147) * dbl_A563D8;
            *(float *)&v143 = v150;
            v128 = v147;
          }
          *(float *)&v142[0x24] = v128;
          v148 = sub_78EA00(*(float *)&v142[0x24], *(float *)&v143);
          v147 = v148 * v164;
          sub_78F720((int *)v119, (int)&v154, v147);
          v129 = LODWORD(v154);
          v162 = a12;
          v130 = *((float *)&v154 + 1);
          if ( a4 == dword_B2B708 || byte_B429C8 )
          {
            v131 = *(_DWORD *)(v119 + 0x18) + 0x48 * LODWORD(v154);
            v147 = *(float *)(v131 + 0x44);
            v162 = (*(float *)(v131 + 0x8C) - v147) * v130 + v147;
          }
          if ( !v145 )
          {
            sub_78EA30(v127);
            sub_78EA00(0.0, flt_A2FE7C);
            v130 = *((float *)&v154 + 1);
          }
          v132 = 0x48 * v129;
          v133 = (float *)(*(_DWORD *)(v119 + 0x18) + 0x48 * v129);
          v147 = v133[0x15] - v133[3];
          v150 = v133[0x16] - v133[4];
          v146 = v133[0x17] - v133[5];
          v147 = v147 * v130;
          v150 = v150 * v130;
          v146 = v146 * v130;
          v147 = v147 + v133[3];
          v150 = v150 + v133[4];
          v146 = v146 + v133[5];
          *(float *)&v167 = v147;
          v168 = v150;
          v169 = v146;
          v151 = 1.0;
          if ( *(float *)(v160 + 8) != *(float *)(v160 + 0xC) )
            v151 = (v148 - *(float *)(v160 + 8)) / (*(float *)(v160 + 0xC) - *(float *)(v160 + 8));
          if ( v145 )
          {
            sub_7920A0((void *)v119, (_DWORD *)v119, a3, v124, (float *)&v167, v151, v133 + 7, v133, a11, v162, a13);
          }
          else
          {
            v134 = v133[6];
            v143 = 0x40;
            v147 = v134;
            v147 = v130 * (v133[0x18] - v147) + v147;
            *(float *)&v135 = COERCE_FLOAT(FormHeapAlloc(0x40u));
            if ( *(float *)&v135 == 0.0 )
            {
              *(float *)&v136 = 0.0;
            }
            else
            {
              *(float *)(v135 + 4) = 0.0;
              *(_DWORD *)v135 = v119;
              *(_DWORD *)(v135 + 0xC) = 0;
              *(_DWORD *)(v135 + 0x10) = 0;
              *(_DWORD *)(v135 + 0x14) = 0;
              *(float *)(v135 + 0x28) = 0.0;
              *(float *)(v135 + 0x2C) = 0.0;
              *(_DWORD *)(v135 + 0x18) = 0;
              *(_DWORD *)(v135 + 0x1C) = 0xFFFFFFFF;
              *(_WORD *)(v135 + 0x20) = 0;
              *(_DWORD *)(v135 + 0x24) = 0xFFFFFFFF;
              *(_DWORD *)(v135 + 0x34) = 0;
              *(_DWORD *)(v135 + 0x38) = 0;
              *(_DWORD *)(v135 + 0x3C) = 0;
              v136 = (int *)v135;
            }
            v182 = 0xFFFFFFFF;
            v155 = *(float *)&v136;
            v148 = a7 + (1.0 - a7) * v151;
            if ( v124 <= 1 )
              v148 = v148 * v148;
            sub_7925B0(
              v136,
              a2,
              a3,
              v124,
              &v167,
              v151,
              v148,
              (float *)(*(_DWORD *)(v119 + 0x18) + v132 + 0x1C),
              (float *)(*(_DWORD *)(v119 + 0x18) + v132),
              a10,
              a11,
              v162,
              a13,
              v147);
            if ( sub_799EA0((_BYTE *)dword_B429C4)
              && v124 >= (int)ValueModifierEffect_GetAV((HighProcess *)dword_B429C4) )
            {
              if ( *(float *)&v136 != 0.0 )
              {
                sub_790D00((unsigned int *)v136);
                FormHeapFree((unsigned int)v136);
              }
              v155 = 0.0;
            }
            else
            {
              sub_791630((unsigned int *)(v119 + 8), (int *)&v154);
            }
          }
          v42 = ++v156 < SLODWORD(v166);
          v126 = v145;
          if ( !v42 )
            break;
          v120 = v160;
        }
      }
    }
    if ( v126 )
    {
      v137 = Src;
      v138 = (char *)dword_B42A00;
      v139 = (char *)Src;
      if ( dword_B42A00 > Src )
      {
        _invalid_parameter_noinfo();
        v137 = Src;
        v138 = (char *)dword_B42A00;
        if ( dword_B42A00 > Src )
        {
          _invalid_parameter_noinfo();
          v137 = Src;
        }
      }
      if ( v138 != v139 )
      {
        v140 = (v137 - v139) >> 2;
        v141 = &v138[4 * v140];
        if ( v140 > 0 )
          memmove_s(v138, __PAIR64__((unsigned int)v139, 4 * v140), (const void *)(4 * v140), v144);
        Src = v141;
      }
    }
    sub_78F690(v119);
  }
}
