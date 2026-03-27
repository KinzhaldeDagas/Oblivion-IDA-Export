void __thiscall sub_56ECD0(float *this)
{
  int v2; // eax
  _DWORD *v3; // ebp
  float *v4; // eax
  float *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  unsigned __int16 v10; // ax
  _WORD *v11; // ecx
  __int16 v12; // si
  int v13; // ebp
  int v14; // edx
  int v15; // ebp
  int v16; // esi
  bool v17; // sf
  int v18; // ebp
  int v19; // edi
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ebp
  int v24; // edi
  _WORD *j; // esi
  __int64 v26; // rax
  int v27; // eax
  int v28; // edi
  _WORD *i; // esi
  bool v30; // cc
  float *v31; // esi
  int v32; // ebp
  int v33; // edi
  float v34; // ecx
  float v35; // edx
  float v36; // eax
  int v37; // ebx
  float v38; // ebx
  float v39; // ebx
  double v40; // st6
  double v41; // st7
  unsigned int v42; // eax
  double v43; // st6
  bool v44; // zf
  int v45; // edi
  int v46; // ebx
  unsigned __int16 *v47; // eax
  unsigned __int16 v48; // dx
  unsigned __int16 v49; // cx
  unsigned __int16 v50; // si
  int v51; // eax
  __int16 v52; // cx
  __int16 v53; // dx
  __int16 v54; // ax
  int v55; // esi
  unsigned __int16 v56; // ax
  unsigned __int16 v57; // ax
  _DWORD *v58; // eax
  int v59; // edi
  int v60; // ecx
  unsigned __int16 v61; // ax
  int v62; // eax
  _DWORD *v63; // eax
  int v64; // edi
  unsigned __int16 v65; // ax
  _DWORD *v66; // eax
  __int16 v67; // cx
  int v68; // eax
  int v69; // ebx
  int v70; // eax
  double v71; // st7
  int v72; // ebp
  float *v73; // ecx
  _DWORD *v74; // esi
  _DWORD *v75; // edx
  float *v76; // eax
  int v77; // edi
  float *v78; // edi
  _DWORD *v79; // edi
  int v80; // edi
  float *v81; // edi
  _DWORD *v82; // edi
  float *v83; // edi
  _DWORD *v84; // edi
  int v85; // edi
  float *v86; // edi
  _DWORD *v87; // edi
  float *v88; // edx
  float *v89; // eax
  int v90; // esi
  int v91; // ecx
  float *v92; // ecx
  _DWORD *v93; // ecx
  unsigned int v94; // esi
  _WORD *v95; // edi
  int v96; // eax
  int v97; // edx
  void *v98; // ebp
  int v99; // eax
  _WORD *v100; // ebp
  void *v101; // eax
  int v102; // edi
  unsigned int *v103; // esi
  __int64 v104; // [esp-24h] [ebp-204h]
  __int64 v105; // [esp-10h] [ebp-1F0h]
  size_t v106; // [esp-4h] [ebp-1E4h]
  size_t v107; // [esp+0h] [ebp-1E0h]
  int v108; // [esp+1Ch] [ebp-1C4h]
  char v109; // [esp+1Ch] [ebp-1C4h]
  float v110; // [esp+1Ch] [ebp-1C4h]
  float v111; // [esp+1Ch] [ebp-1C4h]
  float v112; // [esp+1Ch] [ebp-1C4h]
  float v113; // [esp+1Ch] [ebp-1C4h]
  float v114; // [esp+1Ch] [ebp-1C4h]
  float v115; // [esp+1Ch] [ebp-1C4h]
  float v116; // [esp+1Ch] [ebp-1C4h]
  float v117; // [esp+1Ch] [ebp-1C4h]
  float v118; // [esp+1Ch] [ebp-1C4h]
  float v119; // [esp+1Ch] [ebp-1C4h]
  unsigned __int16 v120; // [esp+20h] [ebp-1C0h]
  float v121; // [esp+20h] [ebp-1C0h]
  float v122; // [esp+20h] [ebp-1C0h]
  float v123; // [esp+20h] [ebp-1C0h]
  float v124; // [esp+20h] [ebp-1C0h]
  float v125; // [esp+20h] [ebp-1C0h]
  float v126; // [esp+20h] [ebp-1C0h]
  float v127; // [esp+20h] [ebp-1C0h]
  float v128; // [esp+20h] [ebp-1C0h]
  float v129; // [esp+20h] [ebp-1C0h]
  float v130; // [esp+20h] [ebp-1C0h]
  unsigned __int16 *v131; // [esp+24h] [ebp-1BCh]
  float v132; // [esp+24h] [ebp-1BCh]
  float v133; // [esp+24h] [ebp-1BCh]
  float v134; // [esp+24h] [ebp-1BCh]
  float v135; // [esp+24h] [ebp-1BCh]
  float v136; // [esp+24h] [ebp-1BCh]
  float v137; // [esp+24h] [ebp-1BCh]
  float v138; // [esp+24h] [ebp-1BCh]
  float v139; // [esp+24h] [ebp-1BCh]
  float v140; // [esp+24h] [ebp-1BCh]
  float v141; // [esp+24h] [ebp-1BCh]
  bool v142; // [esp+2Bh] [ebp-1B5h]
  int v143; // [esp+2Ch] [ebp-1B4h]
  float v144; // [esp+2Ch] [ebp-1B4h]
  int v145; // [esp+2Ch] [ebp-1B4h]
  int v146; // [esp+2Ch] [ebp-1B4h]
  char *v147; // [esp+30h] [ebp-1B0h]
  unsigned __int16 *v148; // [esp+30h] [ebp-1B0h]
  char *v149; // [esp+30h] [ebp-1B0h]
  void *v150; // [esp+30h] [ebp-1B0h]
  void *v151; // [esp+30h] [ebp-1B0h]
  int v152; // [esp+34h] [ebp-1ACh]
  unsigned __int16 *v153; // [esp+34h] [ebp-1ACh]
  int v154; // [esp+34h] [ebp-1ACh]
  _DWORD *v155; // [esp+38h] [ebp-1A8h]
  float v156; // [esp+38h] [ebp-1A8h]
  int v157; // [esp+38h] [ebp-1A8h]
  unsigned __int16 v158; // [esp+38h] [ebp-1A8h]
  float v159; // [esp+3Ch] [ebp-1A4h]
  float v160; // [esp+44h] [ebp-19Ch]
  int v161; // [esp+48h] [ebp-198h]
  unsigned int v162; // [esp+48h] [ebp-198h]
  int v163; // [esp+48h] [ebp-198h]
  float Dstb; // [esp+4Ch] [ebp-194h]
  float Dstc; // [esp+4Ch] [ebp-194h]
  char *Dst; // [esp+4Ch] [ebp-194h]
  void *Dsta; // [esp+4Ch] [ebp-194h]
  unsigned int v168; // [esp+50h] [ebp-190h]
  unsigned int v169; // [esp+54h] [ebp-18Ch]
  int v170; // [esp+58h] [ebp-188h]
  int v172; // [esp+60h] [ebp-180h]
  int k; // [esp+60h] [ebp-180h]
  int v174; // [esp+64h] [ebp-17Ch]
  double v175; // [esp+68h] [ebp-178h]
  int v176; // [esp+68h] [ebp-178h]
  int v177; // [esp+74h] [ebp-16Ch]
  float *v178; // [esp+78h] [ebp-168h]
  _WORD *Src; // [esp+7Ch] [ebp-164h]
  double v180; // [esp+80h] [ebp-160h]
  void *v181; // [esp+80h] [ebp-160h]
  double v182; // [esp+88h] [ebp-158h]
  int v183; // [esp+88h] [ebp-158h]
  float *v184; // [esp+90h] [ebp-150h]
  float v185; // [esp+94h] [ebp-14Ch] BYREF
  float v186; // [esp+98h] [ebp-148h]
  float v187; // [esp+9Ch] [ebp-144h]
  _DWORD v188[3]; // [esp+A0h] [ebp-140h] BYREF
  _DWORD v189[3]; // [esp+ACh] [ebp-134h] BYREF
  float v190[3]; // [esp+B8h] [ebp-128h] BYREF
  float v191[13]; // [esp+C4h] [ebp-11Ch] BYREF
  float v192[9]; // [esp+F8h] [ebp-E8h] BYREF
  float v193[9]; // [esp+11Ch] [ebp-C4h] BYREF
  _BYTE v194[36]; // [esp+140h] [ebp-A0h] BYREF
  float v195[9]; // [esp+164h] [ebp-7Ch] BYREF
  float v196[9]; // [esp+188h] [ebp-58h] BYREF
  float v197[10]; // [esp+1ACh] [ebp-34h] BYREF
  int v198; // [esp+1DCh] [ebp-4h]

  v2 = *((_DWORD *)this + 0xB);
  v3 = *(_DWORD **)(v2 + 0xB8);
  v152 = *(_DWORD *)(v3[3] + 8);
  qmemcpy(v192, (const void *)(v2 + 0x64), sizeof(v192));
  sub_7103C0(v192, v197);
  sub_7107A0(v192, 1, (int)(this + 0x10), (int)v190);
  NiMatrix33_InitRotationTransform(v193, *(this + 0x14));
  v4 = sub_6F9290(v195, *(this + 0x10), *(this + 0x11), *(this + 0x12));
  v5 = NiMAtrix33_Multiply(v193, v196, v4);
  v6 = *((_DWORD *)this + 0xB);
  qmemcpy(v194, v5, sizeof(v194));
  qmemcpy(v191, (const void *)(v6 + 0x64), sizeof(v191));
  v191[9] = v191[9] - *(this + 0xD);
  v191[0xA] = v191[0xA] - *(this + 0xE);
  v191[0xB] = v191[0xB] - *(this + 0xF);
  v7 = *(_DWORD *)(v3[2] + 0x44);
  if ( !v7 || !*(_DWORD *)(v7 + 0x44) )
    return;
  v8 = v152;
  v9 = *(unsigned __int16 *)(*(_DWORD *)(v6 + 0xB4) + 8);
  v10 = 0;
  v177 = v9;
  v108 = *(_DWORD *)(v3[3] + 0xC);
  if ( v152 > 0 )
  {
    v11 = (_WORD *)(*(_DWORD *)(v3[3] + 0xC) + 0x22);
    v12 = 0;
    do
    {
      v12 += v11[0xFFFFFFFE];
      if ( *v11 )
        v10 = v12 + 2;
      else
        v10 = 3 * v12;
      v11 += 0x16;
      --v8;
    }
    while ( v8 );
  }
  Src = (_WORD *)FormHeapAlloc((unsigned __int64)(3 * (unsigned int)v10) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * v10);
  v169 = FormHeapAlloc((unsigned __int64)(unsigned int)v9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v9);
  _memset(v169, 0xFFFFFFFF, 4 * v9);
  v174 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v9) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v9);
  v178 = (float *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v9) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v9);
  v184 = (float *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v9) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v9);
  sub_72AF20(
    v3,
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4) + 0x1C),
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4) + 0x20),
    *(unsigned __int16 *)(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4) + 8),
    v178,
    v184,
    0,
    0,
    0xC);
  v13 = v3[2];
  v14 = *(_DWORD *)(v13 + 0x44);
  v15 = *(_DWORD *)(v13 + 0x40);
  v172 = v14;
  v170 = v15;
  v16 = FormHeapAlloc((0x4C * (unsigned __int64)(unsigned int)v15) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * v15);
  v198 = 0;
  if ( v16 )
  {
    v17 = v15 - 1 < 0;
    v18 = v15 - 1;
    v19 = v16;
    if ( !v17 )
    {
      do
      {
        sub_72EF90(v19);
        v19 += 0x4C;
        --v18;
      }
      while ( v18 >= 0 );
    }
    v168 = v16;
  }
  else
  {
    v168 = 0;
  }
  v20 = 0;
  v198 = 0xFFFFFFFF;
  v143 = 0;
  if ( v170 > 0 )
  {
    while ( 1 )
    {
      v155 = (_DWORD *)(0x4C * v20 + v168);
      qmemcpy(v155, (const void *)(0x4C * v20 + v172), 0x34u);
      v21 = 0;
      if ( v20 )
      {
        v26 = 8LL * (unsigned int)v9;
        LOBYTE(v21) = HIDWORD(v26) != 0;
        v27 = FormHeapAlloc(v26 | -v21);
        v23 = v27;
        v198 = 2;
        if ( !v27 )
        {
LABEL_26:
          v23 = 0;
          goto LABEL_27;
        }
        v28 = v9 - 1;
        for ( i = (_WORD *)v27; v28 >= 0; --v28 )
        {
          sub_72EFA0(i);
          i += 4;
        }
      }
      else
      {
        LOBYTE(v21) = (unsigned __int64)(unsigned int)(4 * v9) >> 0x1D != 0;
        v22 = FormHeapAlloc((0x20 * v9) | -v21);
        v23 = v22;
        v198 = 1;
        if ( !v22 )
          goto LABEL_26;
        v24 = 4 * v9 - 1;
        for ( j = (_WORD *)v22; v24 >= 0; --v24 )
        {
          sub_72EFA0(j);
          j += 4;
        }
      }
LABEL_27:
      v155[0x11] = v23;
      v30 = v143 + 1 < v170;
      v198 = 0xFFFFFFFF;
      ++v143;
      if ( !v30 )
        break;
      v20 = v143;
    }
  }
  if ( v9 > 0 )
  {
    v31 = v184;
    v180 = v190[1];
    v182 = v190[0];
    v32 = v174 + 8;
    v33 = (char *)v178 - (char *)v184;
    v175 = v190[2];
    v147 = (char *)v9;
    do
    {
      v34 = *(&Vector3_InitValue_ + 1);
      v35 = dword_B3F9B0;
      v36 = Vector3_InitValue_;
      *(float *)v189 = *(float *)((char *)v31 + v33);
      *(float *)&v189[1] = *(float *)((char *)v31 + v33 + 4);
      v37 = *(_DWORD *)((char *)v31 + v33 + 8);
      v186 = v34;
      *(float *)&v188[1] = v34;
      v189[2] = v37;
      v38 = *v31;
      v187 = v35;
      *(float *)&v188[2] = v35;
      v185 = v36;
      v159 = v38;
      v39 = v31[1];
      *(float *)v188 = v36;
      HIDWORD(v105) = &v191[9];
      LODWORD(v105) = v191;
      v160 = v31[2];
      sub_710580(v105, 1, (int)v189, (int)v188);
      HIDWORD(v104) = &Vector3_InitValue_;
      LODWORD(v104) = v194;
      sub_710580(v104, 1, (int)v188, (int)&v185);
      v40 = dbl_A2FAA0;
      *(float *)(v32 - 8) = v185 / *(this + 0x13) + v40;
      *(float *)(v32 - 4) = v40 + v186 / *(this + 0x13);
      Dstb = v39 * v180 + v159 * v182 + v160 * v175;
      v41 = Dstb;
      if ( Dstb < 0.0 )
        v41 = 0.0;
      v42 = 0xA;
      v156 = 1.0 - v41;
      v144 = 1.0;
      while ( 1 )
      {
        v43 = v156;
        if ( (v42 & 1) != 0 )
          v144 = v144 * v43;
        v42 >>= 1;
        if ( !v42 )
          break;
        v156 = v43 * v43;
      }
      v31 += 3;
      v32 += 0xC;
      v44 = v147-- == (char *)1;
      Dstc = fabs(v187);
      *(float *)(v32 - 0xC) = (1.0 - Dstc * dbl_A4C2D0) * v144;
    }
    while ( !v44 );
  }
  v45 = 0;
  v176 = 0;
  if ( v152 <= 0 )
    goto LABEL_105;
  v46 = v108 + 0x14;
  v161 = v152;
  do
  {
    v157 = *(_DWORD *)v46;
    v109 = *(_WORD *)(v46 + 0xE) != 0;
    v120 = *(_WORD *)(v46 + 0xA);
    v142 = 0;
    v145 = 0;
    if ( v120 )
    {
      v131 = (unsigned __int16 *)(v157 + 4);
      v148 = (unsigned __int16 *)(v157 + 4);
      v153 = (unsigned __int16 *)(v157 + 4);
      do
      {
        v47 = v131;
        if ( !v109 )
          v47 = v148;
        v48 = v47[0xFFFFFFFF];
        v49 = v47[0xFFFFFFFE];
        v50 = *v47;
        v51 = *(_DWORD *)(v46 - 8);
        v52 = *(_WORD *)(v51 + 2 * v49);
        v53 = *(_WORD *)(v51 + 2 * v48);
        v54 = *(_WORD *)(v51 + 2 * v50);
        if ( v52 == v53 || v52 == v54 || v53 == v54 )
        {
          if ( v109 )
            v142 = !v142;
          goto LABEL_73;
        }
        v55 = *(_DWORD *)(v46 - 8);
        if ( sub_56CB70(v145, 0, v109, v157, v174, v55) )
        {
          if ( v109 )
            v56 = v131[0xFFFFFFFE];
          else
            v56 = v153[0xFFFFFFFE];
          v57 = *(_WORD *)(v55 + 2 * v56);
          v44 = *(_DWORD *)(v169 + 4 * v57) == 0xFFFFFFFF;
          v58 = (_DWORD *)(v169 + 4 * v57);
          if ( v44 )
          {
            *v58 = (unsigned __int16)v176;
            Src[(unsigned __int16)v45] = v176;
            v59 = v45 + 1;
            v60 = ++v176;
          }
          else
          {
            Src[(unsigned __int16)v45] = *(_WORD *)v58;
            v60 = v176;
            v59 = v45 + 1;
          }
          if ( v109 )
            v61 = v131[0xFFFFFFFF];
          else
            v61 = v153[0xFFFFFFFF];
          v62 = *(unsigned __int16 *)(*(_DWORD *)(v46 - 8) + 2 * v61);
          v44 = *(_DWORD *)(v169 + 4 * v62) == 0xFFFFFFFF;
          v63 = (_DWORD *)(v169 + 4 * v62);
          if ( v44 )
          {
            *v63 = (unsigned __int16)v60;
            Src[(unsigned __int16)v59] = v60;
            v64 = v59 + 1;
            v176 = ++v60;
          }
          else
          {
            Src[(unsigned __int16)v59] = *(_WORD *)v63;
            v64 = v59 + 1;
          }
          if ( v109 )
            v65 = *v131;
          else
            v65 = *v153;
          v66 = (_DWORD *)(v169 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v46 - 8) + 2 * v65));
          if ( *v66 == 0xFFFFFFFF )
          {
            *v66 = (unsigned __int16)v60;
            Src[(unsigned __int16)v64] = v60;
            v45 = v64 + 1;
            v176 = v60 + 1;
          }
          else
          {
            Src[(unsigned __int16)v64] = *(_WORD *)v66;
            v45 = v64 + 1;
          }
          if ( !v109 )
            goto LABEL_73;
          if ( v142 )
          {
            v67 = Src[(unsigned __int16)v45 - 3];
            Src[(unsigned __int16)v45 - 3] = Src[(unsigned __int16)v45 - 1];
            Src[(unsigned __int16)v45 - 1] = v67;
          }
        }
        if ( v109 )
          v142 = !v142;
LABEL_73:
        ++v131;
        v148 += 3;
        v153 += 3;
        ++v145;
      }
      while ( v145 < v120 );
    }
    v46 += 0x2C;
    --v161;
  }
  while ( v161 );
  v158 = v45;
  if ( (_WORD)v176 )
  {
    LODWORD(v106) = 2 * (unsigned __int16)v45;
    v181 = (void *)FormHeapAlloc((unsigned __int64)(unsigned __int16)v45 >> 0x1F != 0 ? 0xFFFFFFFF : v106);
    memcpy(v181, Src, v106);
    v68 = *(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4);
    Dst = *(char **)(v68 + 0x1C);
    v149 = *(char **)(v68 + 0x20);
    v69 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned __int16)v176) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * (unsigned __int16)v176);
    v146 = v69;
    v70 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned __int16)v176) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * (unsigned __int16)v176);
    v71 = dbl_A68610;
    v72 = 0;
    v154 = v70;
    if ( v177 >= 4 )
    {
      v73 = (float *)(Dst + 0x1C);
      v74 = (_DWORD *)(v169 + 8);
      v75 = (_DWORD *)(v174 + 0x18);
      v76 = (float *)(v149 + 0x14);
      v162 = ((unsigned int)(v177 - 4) >> 2) + 1;
      v72 = 4 * v162;
      do
      {
        v77 = v74[0xFFFFFFFE];
        if ( v77 != 0xFFFFFFFF )
        {
          v78 = (float *)(v69 + 0xC * v77);
          v132 = v76[0xFFFFFFFB] * v71;
          v121 = v76[0xFFFFFFFC] * v71;
          v110 = v76[0xFFFFFFFD] * v71;
          v133 = v73[0xFFFFFFF9] + v132;
          v122 = v73[0xFFFFFFFA] + v121;
          v111 = v73[0xFFFFFFFB] + v110;
          *v78 = v133;
          v78[1] = v122;
          v78[2] = v111;
          v79 = (_DWORD *)(v154 + 0xC * v74[0xFFFFFFFE]);
          *v79 = v75[0xFFFFFFFA];
          v79[1] = v75[0xFFFFFFFB];
          v79[2] = v75[0xFFFFFFFC];
          v69 = v146;
        }
        v80 = v74[0xFFFFFFFF];
        if ( v80 != 0xFFFFFFFF )
        {
          v134 = v76[0xFFFFFFFE] * v71;
          v123 = v76[0xFFFFFFFF] * v71;
          v112 = *v76 * v71;
          v135 = v73[0xFFFFFFFC] + v134;
          v124 = v73[0xFFFFFFFD] + v123;
          v81 = (float *)(v146 + 0xC * v80);
          v113 = *(float *)((char *)v76 + Dst - v149) + v112;
          *v81 = v135;
          v81[1] = v124;
          v81[2] = v113;
          v82 = (_DWORD *)(v154 + 0xC * v74[0xFFFFFFFF]);
          *v82 = v75[0xFFFFFFFD];
          v82[1] = v75[0xFFFFFFFE];
          v82[2] = v75[0xFFFFFFFF];
          v69 = v146;
        }
        if ( *v74 != 0xFFFFFFFF )
        {
          v83 = (float *)(v69 + 0xC * *v74);
          v136 = v76[1] * v71;
          v125 = v76[2] * v71;
          v114 = v76[3] * v71;
          v137 = v73[0xFFFFFFFF] + v136;
          v126 = *v73 + v125;
          v115 = v73[1] + v114;
          *v83 = v137;
          v83[1] = v126;
          v83[2] = v115;
          v84 = (_DWORD *)(v154 + 0xC * *v74);
          *v84 = *v75;
          v84[1] = v75[1];
          v84[2] = v75[2];
          v69 = v146;
        }
        v85 = v74[1];
        if ( v85 != 0xFFFFFFFF )
        {
          v86 = (float *)(v69 + 0xC * v85);
          v138 = v76[4] * v71;
          v127 = v76[5] * v71;
          v116 = v76[6] * v71;
          v139 = v73[2] + v138;
          v128 = v73[3] + v127;
          v117 = v73[4] + v116;
          *v86 = v139;
          v86[1] = v128;
          v86[2] = v117;
          v87 = (_DWORD *)(v154 + 0xC * v74[1]);
          *v87 = v75[3];
          v87[1] = v75[4];
          v87[2] = v75[5];
          v69 = v146;
        }
        v76 += 0xC;
        v73 += 0xC;
        v75 += 0xC;
        v74 += 4;
        --v162;
      }
      while ( v162 );
    }
    if ( v72 < v177 )
    {
      v88 = (float *)&Dst[0xC * v72];
      v89 = (float *)&v149[0xC * v72 + 8];
      v90 = Dst - v149;
      v150 = (void *)(v174 - (_DWORD)Dst);
      do
      {
        v91 = *(_DWORD *)(v169 + 4 * v72);
        if ( v91 != 0xFFFFFFFF )
        {
          v92 = (float *)(v69 + 0xC * v91);
          v140 = v89[0xFFFFFFFE] * v71;
          v129 = v89[0xFFFFFFFF] * v71;
          v118 = *v89 * v71;
          v141 = *v88 + v140;
          v130 = v88[1] + v129;
          v119 = *(float *)((char *)v89 + v90) + v118;
          *v92 = v141;
          v92[1] = v130;
          v92[2] = v119;
          v93 = (_DWORD *)(v154 + 0xC * *(_DWORD *)(v169 + 4 * v72));
          *v93 = *(_DWORD *)((char *)v88 + (_DWORD)v150);
          v93[1] = *(_DWORD *)((char *)v88 + (_DWORD)v150 + 4);
          v93[2] = *(_DWORD *)((char *)v88 + (_DWORD)v150 + 8);
        }
        ++v72;
        v88 += 3;
        v89 += 3;
      }
      while ( v72 < v177 );
    }
    if ( v170 > 0 )
    {
      v94 = v168;
      v95 = (_WORD *)(v172 + 0x48);
      v163 = v170;
      do
      {
        v96 = 0;
        if ( *v95 )
        {
          do
          {
            v97 = *(unsigned __int16 *)(*((_DWORD *)v95 + 0xFFFFFFFF) + 8 * v96);
            if ( *(_DWORD *)(v169 + 4 * v97) != 0xFFFFFFFF )
            {
              *(_WORD *)(*(_DWORD *)(v94 + 0x44) + 8 * *(unsigned __int16 *)(v94 + 0x48)) = *(_WORD *)(v169 + 4 * v97);
              *(float *)(*(_DWORD *)(v94 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v94 + 0x48))++ + 4) = *(float *)(*((_DWORD *)v95 + 0xFFFFFFFF) + 8 * v96 + 4);
            }
            ++v96;
          }
          while ( v96 < (unsigned __int16)*v95 );
        }
        v98 = *(void **)(v94 + 0x44);
        v183 = *(unsigned __int16 *)(v94 + 0x48);
        v151 = v98;
        v99 = FormHeapAlloc((unsigned __int64)*(unsigned __int16 *)(v94 + 0x48) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v183);
        Dsta = (void *)v99;
        v198 = 3;
        if ( v99 )
        {
          v100 = (_WORD *)v99;
          for ( k = v183 - 1; k >= 0; --k )
          {
            sub_72EFA0(v100);
            v100 += 4;
          }
          v101 = Dsta;
          v98 = v151;
        }
        else
        {
          v101 = 0;
        }
        *(_DWORD *)(v94 + 0x44) = v101;
        LODWORD(v107) = 8 * *(unsigned __int16 *)(v94 + 0x48);
        v198 = 0xFFFFFFFF;
        memcpy(v101, v98, v107);
        FormHeapFree((unsigned int)v98);
        v95 += 0x26;
        v94 += 0x4C;
        --v163;
      }
      while ( v163 );
    }
    sub_56CFF0((int *)this, *((_DWORD *)this + 0xB), v176, v158, v69, v154, (int)v181, v168);
    goto LABEL_109;
  }
LABEL_105:
  v102 = v170;
  if ( v170 > 0 )
  {
    v103 = (unsigned int *)(v168 + 0x44);
    do
    {
      FormHeapFree(*v103);
      *v103 = 0;
      v103 += 0x13;
      --v102;
    }
    while ( v102 );
  }
  FormHeapFree(v168);
LABEL_109:
  FormHeapFree((unsigned int)v178);
  FormHeapFree((unsigned int)v184);
  FormHeapFree((unsigned int)Src);
  FormHeapFree(v169);
  FormHeapFree(v174);
}
