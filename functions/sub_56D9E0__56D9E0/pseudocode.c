void __thiscall sub_56D9E0(float *this)
{
  int v2; // eax
  int v3; // ebp
  float *v4; // eax
  float *v5; // esi
  int v6; // eax
  double v7; // st7
  _WORD *v8; // eax
  unsigned __int16 v9; // cx
  int v10; // edi
  _WORD *v11; // eax
  __int16 v12; // dx
  int v13; // esi
  float v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  int v20; // ebp
  int i; // edi
  int v22; // ecx
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  _WORD *k; // esi
  __int64 v27; // rax
  int v28; // eax
  int v29; // edi
  _WORD *j; // esi
  bool v31; // cc
  unsigned int v32; // edi
  int v33; // ebp
  float *v34; // esi
  double v35; // st7
  float v36; // ecx
  float v37; // edx
  float v38; // ecx
  float v39; // edx
  float *v40; // eax
  int v41; // edx
  float v42; // eax
  float *v43; // eax
  double v44; // st6
  double v45; // st7
  unsigned int v46; // eax
  double v47; // st6
  double v48; // st6
  int v49; // edi
  char *v50; // esi
  _WORD *v51; // edx
  _WORD *v52; // ebp
  __int16 *v53; // edx
  __int16 v54; // ax
  __int16 v55; // cx
  __int16 v56; // dx
  __int16 v57; // ax
  __int16 v58; // cx
  __int16 v59; // dx
  unsigned int v60; // edi
  __int16 v61; // ax
  int v62; // edx
  int v63; // ecx
  int v64; // eax
  bool v65; // c3
  void *v66; // edx
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  _WORD *v71; // ebp
  __int16 v72; // cx
  bool v73; // zf
  int v74; // ebp
  int v75; // eax
  double v76; // st7
  int v77; // esi
  _DWORD *v78; // edx
  int v79; // edi
  _DWORD *v80; // ecx
  int v81; // eax
  int v82; // ebx
  int v83; // eax
  float v84; // eax
  float *v85; // eax
  _DWORD *v86; // eax
  float *v87; // eax
  int v88; // ebx
  float v89; // eax
  int v90; // eax
  float v91; // eax
  float *v92; // eax
  _DWORD *v93; // eax
  int v94; // eax
  int v95; // ebx
  int v96; // eax
  float v97; // eax
  float *v98; // eax
  _DWORD *v99; // eax
  int v100; // eax
  int v101; // ebx
  int v102; // eax
  float v103; // eax
  float *v104; // eax
  _DWORD *v105; // eax
  _DWORD *v106; // ecx
  int v107; // edx
  int v108; // eax
  int v109; // edi
  int v110; // eax
  float v111; // edi
  float v112; // eax
  float *v113; // eax
  _DWORD *v114; // eax
  unsigned int v115; // esi
  unsigned int v116; // edi
  int v117; // eax
  _WORD *v118; // edi
  void *v119; // eax
  void *v120; // edi
  float *v121; // esi
  float v122; // edi
  unsigned int *v123; // esi
  __int64 v124; // [esp-24h] [ebp-25Ch]
  __int64 v125; // [esp-10h] [ebp-248h]
  size_t v126; // [esp-4h] [ebp-23Ch]
  size_t v127; // [esp+0h] [ebp-238h]
  int v128; // [esp+18h] [ebp-220h]
  unsigned __int16 v129; // [esp+18h] [ebp-220h]
  float v130; // [esp+18h] [ebp-220h]
  float v131; // [esp+18h] [ebp-220h]
  float v132; // [esp+18h] [ebp-220h]
  float v133; // [esp+18h] [ebp-220h]
  float v134; // [esp+18h] [ebp-220h]
  float v135; // [esp+18h] [ebp-220h]
  float v136; // [esp+18h] [ebp-220h]
  float v137; // [esp+18h] [ebp-220h]
  float v138; // [esp+18h] [ebp-220h]
  float v139; // [esp+18h] [ebp-220h]
  int v140; // [esp+1Ch] [ebp-21Ch]
  char v141; // [esp+1Ch] [ebp-21Ch]
  float v142; // [esp+1Ch] [ebp-21Ch]
  float v143; // [esp+1Ch] [ebp-21Ch]
  float v144; // [esp+1Ch] [ebp-21Ch]
  float v145; // [esp+1Ch] [ebp-21Ch]
  float v146; // [esp+1Ch] [ebp-21Ch]
  float v147; // [esp+1Ch] [ebp-21Ch]
  float v148; // [esp+1Ch] [ebp-21Ch]
  float v149; // [esp+1Ch] [ebp-21Ch]
  float v150; // [esp+1Ch] [ebp-21Ch]
  float v151; // [esp+1Ch] [ebp-21Ch]
  unsigned int v152; // [esp+20h] [ebp-218h]
  float v153; // [esp+20h] [ebp-218h]
  float v154; // [esp+20h] [ebp-218h]
  float v155; // [esp+20h] [ebp-218h]
  float v156; // [esp+20h] [ebp-218h]
  float v157; // [esp+20h] [ebp-218h]
  float v158; // [esp+20h] [ebp-218h]
  float v159; // [esp+20h] [ebp-218h]
  float v160; // [esp+20h] [ebp-218h]
  float v161; // [esp+20h] [ebp-218h]
  float v162; // [esp+20h] [ebp-218h]
  int v163; // [esp+24h] [ebp-214h]
  float v164; // [esp+24h] [ebp-214h]
  float v165; // [esp+24h] [ebp-214h]
  float v166; // [esp+24h] [ebp-214h]
  float v167; // [esp+24h] [ebp-214h]
  int v168; // [esp+24h] [ebp-214h]
  int v169; // [esp+24h] [ebp-214h]
  bool v170; // [esp+2Bh] [ebp-20Dh]
  float Dstb; // [esp+2Ch] [ebp-20Ch]
  float Dstc; // [esp+2Ch] [ebp-20Ch]
  float Dstd; // [esp+2Ch] [ebp-20Ch]
  float Dste; // [esp+2Ch] [ebp-20Ch]
  char *Dst; // [esp+2Ch] [ebp-20Ch]
  void *Dsta; // [esp+2Ch] [ebp-20Ch]
  int v177; // [esp+30h] [ebp-208h]
  float v178; // [esp+34h] [ebp-204h]
  float v179; // [esp+34h] [ebp-204h]
  float v180; // [esp+34h] [ebp-204h]
  int v181; // [esp+34h] [ebp-204h]
  int v182; // [esp+38h] [ebp-200h]
  int v183; // [esp+38h] [ebp-200h]
  int v184; // [esp+38h] [ebp-200h]
  int v185; // [esp+38h] [ebp-200h]
  unsigned int v186; // [esp+38h] [ebp-200h]
  int m; // [esp+38h] [ebp-200h]
  float v188; // [esp+3Ch] [ebp-1FCh] BYREF
  float v189; // [esp+40h] [ebp-1F8h]
  float v190; // [esp+44h] [ebp-1F4h]
  double v191; // [esp+48h] [ebp-1F0h]
  float v192; // [esp+50h] [ebp-1E8h]
  double v193; // [esp+58h] [ebp-1E0h]
  float v194; // [esp+60h] [ebp-1D8h]
  unsigned int v195; // [esp+6Ch] [ebp-1CCh]
  float v196; // [esp+70h] [ebp-1C8h]
  void *v197; // [esp+74h] [ebp-1C4h]
  float v198; // [esp+78h] [ebp-1C0h]
  char v199; // [esp+7Fh] [ebp-1B9h]
  float v200; // [esp+80h] [ebp-1B8h]
  float v201; // [esp+84h] [ebp-1B4h]
  int v202; // [esp+88h] [ebp-1B0h]
  void *Src; // [esp+8Ch] [ebp-1ACh]
  unsigned int v204; // [esp+90h] [ebp-1A8h]
  int v205; // [esp+94h] [ebp-1A4h] BYREF
  int v206; // [esp+98h] [ebp-1A0h]
  char v207; // [esp+9Ch] [ebp-19Ch]
  int v208; // [esp+A0h] [ebp-198h] BYREF
  int v209; // [esp+A4h] [ebp-194h]
  char v210; // [esp+A8h] [ebp-190h]
  float *v211; // [esp+ACh] [ebp-18Ch]
  unsigned int v212; // [esp+B0h] [ebp-188h]
  int v213; // [esp+B4h] [ebp-184h]
  void *v214[3]; // [esp+B8h] [ebp-180h]
  unsigned int v215; // [esp+C4h] [ebp-174h]
  int v216; // [esp+C8h] [ebp-170h] BYREF
  int v217; // [esp+CCh] [ebp-16Ch]
  char v218; // [esp+D0h] [ebp-168h]
  int v219; // [esp+D4h] [ebp-164h] BYREF
  int v220; // [esp+D8h] [ebp-160h]
  char v221; // [esp+DCh] [ebp-15Ch]
  float v222; // [esp+E0h] [ebp-158h]
  float v223; // [esp+E4h] [ebp-154h]
  float v224; // [esp+E8h] [ebp-150h]
  _DWORD v225[3]; // [esp+ECh] [ebp-14Ch] BYREF
  _DWORD v226[3]; // [esp+F8h] [ebp-140h] BYREF
  _DWORD v227[2]; // [esp+104h] [ebp-134h] BYREF
  char v228; // [esp+10Ch] [ebp-12Ch]
  float v229[3]; // [esp+110h] [ebp-128h] BYREF
  float v230[13]; // [esp+11Ch] [ebp-11Ch] BYREF
  float v231[9]; // [esp+150h] [ebp-E8h] BYREF
  float v232[9]; // [esp+174h] [ebp-C4h] BYREF
  _BYTE v233[36]; // [esp+198h] [ebp-A0h] BYREF
  float v234[9]; // [esp+1BCh] [ebp-7Ch] BYREF
  float v235[9]; // [esp+1E0h] [ebp-58h] BYREF
  float v236[10]; // [esp+204h] [ebp-34h] BYREF
  int v237; // [esp+234h] [ebp-4h]

  v211 = this;
  v2 = *((_DWORD *)this + 0xB);
  v3 = *(_DWORD *)(v2 + 0xB8);
  v140 = *(_DWORD *)(*(_DWORD *)(v3 + 0xC) + 8);
  qmemcpy(v231, (const void *)(v2 + 0x64), sizeof(v231));
  sub_7103C0(v231, v236);
  sub_7107A0(v231, 1, (int)(this + 0x10), (int)v229);
  NiMatrix33_InitRotationTransform(v232, *(this + 0x14));
  v4 = sub_6F9290(v234, *(this + 0x10), *(this + 0x11), *(this + 0x12));
  v5 = NiMAtrix33_Multiply(v232, v235, v4);
  v6 = *((_DWORD *)this + 0xB);
  qmemcpy(v233, v5, sizeof(v233));
  qmemcpy(v230, (const void *)(v6 + 0x64), sizeof(v230));
  v230[9] = v230[9] - *(this + 0xD);
  v230[0xA] = v230[0xA] - *(this + 0xE);
  v7 = v230[0xB] - *(this + 0xF);
  v208 = 0;
  v209 = 0;
  v230[0xB] = v7;
  v210 = 0;
  v205 = 0;
  v206 = 0;
  v207 = 0;
  v227[0] = 0;
  v227[1] = 0;
  v228 = 0;
  v216 = 0;
  v217 = 0;
  v218 = 0;
  v219 = 0;
  v220 = 0;
  v221 = 0;
  v177 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v6 + 0xB4) + 0x34) + 0xC);
  v199 = sub_728AB0(*(_DWORD *)(v6 + 0xB4), 0);
  sub_728B60(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4), (int)&v208);
  sub_728D00(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4), (int)&v205);
  sub_728E70(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4), 0, (int)v227);
  sub_728C00(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4), (int)&v216);
  sub_728C80(*(_DWORD *)(*((_DWORD *)this + 0xB) + 0xB4), (int)&v219);
  v8 = *(_WORD **)(*(_DWORD *)(v3 + 0xC) + 0xC);
  v9 = 0;
  v197 = v8;
  if ( v140 > 0 )
  {
    v10 = v140;
    v11 = v8 + 0x11;
    v12 = 0;
    do
    {
      v12 += v11[0xFFFFFFFE];
      if ( *v11 )
        v9 = v12 + 2;
      else
        v9 = 3 * v12;
      v11 += 0x16;
      --v10;
    }
    while ( v10 );
  }
  v13 = v177;
  Src = (void *)FormHeapAlloc((unsigned __int64)(3 * (unsigned int)v9) >> 0x1F != 0 ? 0xFFFFFFFF : 6 * v9);
  v14 = 0.0;
  v204 = FormHeapAlloc((unsigned __int64)(unsigned int)v177 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v177);
  v198 = 0.0;
  _memset(v204, 0xFFFFFFFF, 4 * v177);
  v202 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v13) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v13);
  v15 = FormHeapAlloc((unsigned __int64)(unsigned int)v13 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v13);
  if ( v15 )
  {
    v16 = v177 - 1;
    if ( v177 - 1 >= 0 )
    {
      v17 = v15 + 8;
      do
      {
        *(float *)(v17 + 4) = 0.0;
        v17 += 0x10;
        --v16;
        *(float *)(v17 - 0x10) = 0.0;
        *(float *)(v17 - 0x14) = 0.0;
        *(float *)(v17 - 0x18) = 0.0;
      }
      while ( v16 >= 0 );
    }
    v152 = v15;
  }
  else
  {
    v152 = 0;
  }
  if ( *(_DWORD *)(*(_DWORD *)(v3 + 8) + 0x44) )
  {
    v212 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v177) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v177);
    v215 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v177) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v177);
    nullsub_4(&v208, &v216, &v219, &v205, v177, v212, v215, 0xC);
    v18 = *(_DWORD *)(v3 + 8);
    v182 = *(_DWORD *)(v18 + 0x44);
    v201 = *(float *)(v18 + 0x40);
    v19 = FormHeapAlloc((0x4C * (unsigned __int64)LODWORD(v201)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * LODWORD(v201));
    v237 = 0;
    if ( v19 )
    {
      v20 = LODWORD(v201) - 1;
      for ( i = v19; v20 >= 0; --v20 )
      {
        sub_72EF90(i);
        i += 0x4C;
      }
      v195 = v19;
    }
    else
    {
      v195 = 0;
    }
    v237 = 0xFFFFFFFF;
    v163 = 0;
    if ( SLODWORD(v201) > 0 )
    {
      do
      {
        LODWORD(v196) = 0x4C * v163 + v195;
        qmemcpy((void *)LODWORD(v196), (const void *)(0x4C * v163 + v182), 0x34u);
        v22 = 0;
        if ( v163 )
        {
          v27 = 8LL * (unsigned int)v177;
          LOBYTE(v22) = HIDWORD(v27) != 0;
          v28 = FormHeapAlloc(v27 | -v22);
          v24 = v28;
          v237 = 2;
          if ( v28 )
          {
            v29 = v177 - 1;
            for ( j = (_WORD *)v28; v29 >= 0; --v29 )
            {
              sub_72EFA0(j);
              j += 4;
            }
            goto LABEL_30;
          }
        }
        else
        {
          LOBYTE(v22) = (unsigned __int64)(unsigned int)(4 * v177) >> 0x1D != 0;
          v23 = FormHeapAlloc((0x20 * v177) | -v22);
          v24 = v23;
          v237 = 1;
          if ( v23 )
          {
            v25 = 4 * v177 - 1;
            for ( k = (_WORD *)v23; v25 >= 0; --v25 )
            {
              sub_72EFA0(k);
              k += 4;
            }
            goto LABEL_30;
          }
        }
        v24 = 0;
LABEL_30:
        *(_DWORD *)(LODWORD(v196) + 0x44) = v24;
        v31 = v163 + 1 < SLODWORD(v201);
        v237 = 0xFFFFFFFF;
        ++v163;
      }
      while ( v31 );
    }
    v128 = 0;
    if ( v177 > 0 )
    {
      *(double *)v214 = v229[1];
      v32 = v215;
      v193 = v229[0];
      v33 = v202 + 8;
      v34 = (float *)(v152 + 8);
      v191 = v229[2];
      v35 = 1.0;
      v183 = v212 - v215;
      do
      {
        v36 = Vector3_InitValue_;
        v37 = *(&Vector3_InitValue_ + 1);
        v190 = dword_B3F9B0;
        v188 = v36;
        v226[0] = *(_DWORD *)(v183 + v32);
        v189 = v37;
        v226[1] = *(_DWORD *)(v183 + v32 + 4);
        v226[2] = *(_DWORD *)(v183 + v32 + 8);
        v38 = *(float *)v32;
        v39 = *(float *)(v32 + 4);
        v224 = *(float *)(v32 + 8);
        v40 = (float *)(v216 + v128 * v217);
        v222 = v38;
        v223 = v39;
        v164 = *v40;
        v178 = v35 - v164;
        v34[0xFFFFFFFE] = v164;
        v165 = v40[1];
        v179 = v178 - v165;
        v34[0xFFFFFFFF] = v165;
        v166 = v40[2];
        v180 = v179 - v166;
        *v34 = v166;
        v34[1] = v180;
        Dstb = v34[0xFFFFFFFF] + v34[0xFFFFFFFE] + *v34;
        Dstc = v35 - Dstb;
        v34[1] = Dstc;
        if ( Dstc < dbl_A68618 )
          v34[1] = 0.0;
        v41 = *((_DWORD *)&Vector3_InitValue_ + 1);
        v42 = dword_B3F9B0;
        *(float *)v225 = Vector3_InitValue_;
        v225[1] = v41;
        *(float *)&v225[2] = v42;
        HIDWORD(v125) = &v230[9];
        LODWORD(v125) = v230;
        sub_710580(v125, 1, (int)v226, (int)v225);
        HIDWORD(v124) = &Vector3_InitValue_;
        LODWORD(v124) = v233;
        sub_710580(v124, 1, (int)v225, (int)&v188);
        v43 = v211;
        v44 = dbl_A2FAA0;
        *(float *)(v33 - 8) = v188 / v211[0x13] + v44;
        *(float *)(v33 - 4) = v44 + v189 / v43[0x13];
        Dstd = v223 * *(double *)v214 + v222 * v193 + v224 * v191;
        v45 = Dstd;
        if ( Dstd < 0.0 )
          v45 = 0.0;
        v46 = 0xA;
        v47 = 1.0 - v45;
        v35 = 1.0;
        v196 = v47;
        v167 = 1.0;
        while ( 1 )
        {
          v48 = v196;
          if ( (v46 & 1) != 0 )
            v167 = v167 * v48;
          v46 >>= 1;
          if ( !v46 )
            break;
          v196 = v48 * v48;
        }
        v200 = v167;
        v34 += 4;
        v32 += 0xC;
        v33 += 0xC;
        v31 = v128 + 1 < v177;
        Dste = fabs(v190);
        ++v128;
        *(float *)(v33 - 0xC) = (1.0 - Dste * dbl_A4C2D0) * v167;
      }
      while ( v31 );
    }
    v49 = 0;
    v181 = 0;
    v168 = 0;
    if ( v140 > 0 )
    {
      v50 = (char *)v197 + 0x14;
      v184 = v140;
      while ( 1 )
      {
        v51 = *(_WORD **)v50;
        v129 = *((_WORD *)v50 + 5);
        v141 = *((_WORD *)v50 + 7) != 0;
        v214[0] = *(void **)v50;
        v170 = 0;
        LODWORD(v193) = 0;
        if ( v129 )
          break;
LABEL_78:
        v49 += *((unsigned __int16 *)v50 + 4);
        v50 += 0x2C;
        v73 = v184-- == 1;
        v168 = v49;
        if ( v73 )
          goto LABEL_79;
      }
      v52 = v51;
      Dst = (char *)v51;
      v53 = v51 + 2;
      v196 = 0.0;
      v200 = *(float *)&v53;
      while ( 1 )
      {
        if ( v141 )
        {
          v54 = v49 + *v52;
          v55 = v49 + v52[1];
          v56 = v52[2];
        }
        else
        {
          v57 = v53[0xFFFFFFFE];
          v58 = v53[0xFFFFFFFF];
          v56 = *v53;
          v54 = v49 + v57;
          v55 = v49 + v58;
        }
        v59 = v49 + v56;
        if ( v54 == v55 || v54 == v59 || v55 == v59 )
        {
          if ( v141 )
            v170 = !v170;
          goto LABEL_77;
        }
        if ( sub_56CB70(SLODWORD(v193), v49, v141, (int)v214[0], v202, 0) )
        {
          v60 = v152;
          v213 = 0;
          LODWORD(v191) = v52;
          do
          {
            if ( v141 )
              v61 = *(_WORD *)LODWORD(v191);
            else
              v61 = *((_WORD *)v214[0] + v213 + LODWORD(v196));
            v62 = (unsigned __int16)(v168 + v61);
            v63 = 4 * v62;
            if ( *(_DWORD *)(v204 + 4 * v62) == 0xFFFFFFFF )
            {
              *(_DWORD *)(v204 + 4 * v62) = LOWORD(v14);
              v64 = (unsigned __int16)v181++;
              *((_WORD *)Src + v64) = LOWORD(v14);
              v65 = 0.0 == *(float *)(v60 + 0x10 * v62);
              v66 = *(void **)(v219 + v62 * v220);
              v197 = v66;
              if ( !v65 )
              {
                v67 = v195 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * HIBYTE(v197));
                *(_WORD *)(*(_DWORD *)(v67 + 0x44) + 8 * *(unsigned __int16 *)(v67 + 0x48)) = LOWORD(v14);
                v60 = v152;
                *(float *)(*(_DWORD *)(v67 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v67 + 0x48))++ + 4) = *(float *)(v152 + 4 * v63);
                v14 = v198;
              }
              if ( 0.0 != *(float *)(v60 + 4 * v63 + 4) )
              {
                v68 = v195 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * BYTE2(v197));
                *(_WORD *)(*(_DWORD *)(v68 + 0x44) + 8 * *(unsigned __int16 *)(v68 + 0x48)) = LOWORD(v14);
                *(float *)(*(_DWORD *)(v68 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v68 + 0x48))++ + 4) = *(float *)(v152 + 4 * v63 + 4);
                v14 = v198;
                v60 = v152;
              }
              if ( 0.0 != *(float *)(v60 + 4 * v63 + 8) )
              {
                v69 = v195 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * BYTE1(v66));
                *(_WORD *)(*(_DWORD *)(v69 + 0x44) + 8 * *(unsigned __int16 *)(v69 + 0x48)) = LOWORD(v14);
                v60 = v152;
                *(float *)(*(_DWORD *)(v69 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v69 + 0x48))++ + 4) = *(float *)(v152 + 4 * v63 + 8);
                v14 = v198;
              }
              if ( 0.0 != *(float *)(v60 + 4 * v63 + 0xC) )
              {
                v70 = v195 + 0x4C * *(unsigned __int16 *)(*((_DWORD *)v50 + 0xFFFFFFFC) + 2 * (unsigned __int8)v66);
                *(_WORD *)(*(_DWORD *)(v70 + 0x44) + 8 * *(unsigned __int16 *)(v70 + 0x48)) = LOWORD(v14);
                *(float *)(*(_DWORD *)(v70 + 0x44) + 8 * (unsigned __int16)(*(_WORD *)(v70 + 0x48))++ + 4) = *(float *)(v60 + 4 * v63 + 0xC);
              }
              v71 = Src;
              ++LODWORD(v14);
              v198 = v14;
            }
            else
            {
              v71 = Src;
              *((_WORD *)Src + (unsigned __int16)v181++) = *(_WORD *)(v204 + 4 * v62);
            }
            LODWORD(v191) += 2;
            ++v213;
          }
          while ( v213 < 3 );
          if ( !v141 )
            goto LABEL_77;
          if ( v170 )
          {
            v72 = v71[(unsigned __int16)v181 - 3];
            v71[(unsigned __int16)v181 - 3] = v71[(unsigned __int16)v181 - 1];
            v71[(unsigned __int16)v181 - 1] = v72;
          }
        }
        if ( v141 )
          v170 = !v170;
LABEL_77:
        LODWORD(v196) += 3;
        v49 = v168;
        v53 = (__int16 *)(LODWORD(v200) + 6);
        v52 = Dst + 2;
        v31 = ++LODWORD(v193) < (int)v129;
        LODWORD(v200) += 6;
        Dst += 2;
        if ( !v31 )
          goto LABEL_78;
      }
    }
LABEL_79:
    FormHeapFree(v152);
    if ( LOWORD(v14) )
    {
      LODWORD(v126) = 2 * (unsigned __int16)v181;
      v214[0] = (void *)FormHeapAlloc((unsigned __int64)(unsigned __int16)v181 >> 0x1F != 0 ? 0xFFFFFFFF : v126);
      memcpy(v214[0], Src, v126);
      v74 = FormHeapAlloc((0xC * (unsigned __int64)LOWORD(v14)) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * LOWORD(v14));
      v185 = v74;
      v75 = FormHeapAlloc((0xC * (unsigned __int64)LOWORD(v14)) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * LOWORD(v14));
      v76 = dbl_A68610;
      v77 = 0;
      v169 = v75;
      if ( v177 >= 4 )
      {
        v78 = (_DWORD *)(v204 + 8);
        v79 = 2;
        v80 = (_DWORD *)(v202 + 0x18);
        do
        {
          if ( v78[0xFFFFFFFE] != 0xFFFFFFFF )
          {
            v81 = v208 + v77 * v209;
            LODWORD(v191) = *(_DWORD *)v81;
            v82 = *(_DWORD *)(v81 + 4);
            v192 = *(float *)(v81 + 8);
            v83 = v205 + v77 * v206;
            HIDWORD(v191) = v82;
            LODWORD(v193) = *(_DWORD *)v83;
            v14 = *(float *)(v83 + 4);
            v84 = *(float *)(v83 + 8);
            *((float *)&v193 + 1) = v14;
            v194 = v84;
            v142 = *(float *)&v193 * v76;
            v85 = (float *)(v74 + 0xC * v78[0xFFFFFFFE]);
            v130 = v14 * v76;
            v153 = v194 * v76;
            v143 = v142 + *(float *)&v191;
            v131 = *((float *)&v191 + 1) + v130;
            v154 = v192 + v153;
            v188 = v143;
            *v85 = v143;
            v189 = v131;
            v85[1] = v131;
            v190 = v154;
            v85[2] = v154;
            v86 = (_DWORD *)(v169 + 0xC * v78[0xFFFFFFFE]);
            *v86 = v80[0xFFFFFFFA];
            v86[1] = v80[0xFFFFFFFB];
            v86[2] = v80[0xFFFFFFFC];
            LOWORD(v14) = LOWORD(v198);
          }
          if ( v78[0xFFFFFFFF] != 0xFFFFFFFF )
          {
            v87 = (float *)(v208 + (v79 - 1) * v209);
            *(float *)&v191 = *v87;
            v88 = *((_DWORD *)v87 + 1);
            v89 = v87[2];
            HIDWORD(v191) = v88;
            v192 = v89;
            v90 = v205 + (v79 - 1) * v206;
            LODWORD(v193) = *(_DWORD *)v90;
            v14 = *(float *)(v90 + 4);
            v91 = *(float *)(v90 + 8);
            *((float *)&v193 + 1) = v14;
            v144 = *(float *)&v193 * v76;
            v194 = v91;
            v92 = (float *)(v74 + 0xC * v78[0xFFFFFFFF]);
            v132 = v14 * v76;
            v155 = v194 * v76;
            v145 = v144 + *(float *)&v191;
            v133 = *((float *)&v191 + 1) + v132;
            v156 = v192 + v155;
            v188 = v145;
            *v92 = v145;
            v189 = v133;
            v92[1] = v133;
            v190 = v156;
            v92[2] = v156;
            v93 = (_DWORD *)(v169 + 0xC * v78[0xFFFFFFFF]);
            *v93 = v80[0xFFFFFFFD];
            v93[1] = v80[0xFFFFFFFE];
            v93[2] = v80[0xFFFFFFFF];
            LOWORD(v14) = LOWORD(v198);
          }
          if ( *v78 != 0xFFFFFFFF )
          {
            v94 = v208 + v209 * v79;
            LODWORD(v191) = *(_DWORD *)v94;
            v95 = *(_DWORD *)(v94 + 4);
            v192 = *(float *)(v94 + 8);
            v96 = v205 + v206 * v79;
            HIDWORD(v191) = v95;
            LODWORD(v193) = *(_DWORD *)v96;
            v14 = *(float *)(v96 + 4);
            v97 = *(float *)(v96 + 8);
            *((float *)&v193 + 1) = v14;
            v194 = v97;
            v146 = *(float *)&v193 * v76;
            v98 = (float *)(v74 + 0xC * *v78);
            v134 = v14 * v76;
            v157 = v194 * v76;
            v147 = v146 + *(float *)&v191;
            v135 = *((float *)&v191 + 1) + v134;
            v158 = v192 + v157;
            v188 = v147;
            *v98 = v147;
            v189 = v135;
            v98[1] = v135;
            v190 = v158;
            v98[2] = v158;
            v99 = (_DWORD *)(v169 + 0xC * *v78);
            *v99 = *v80;
            v99[1] = v80[1];
            v99[2] = v80[2];
            LOWORD(v14) = LOWORD(v198);
          }
          if ( v78[1] != 0xFFFFFFFF )
          {
            v100 = v208 + (v79 + 1) * v209;
            LODWORD(v191) = *(_DWORD *)v100;
            v101 = *(_DWORD *)(v100 + 4);
            v192 = *(float *)(v100 + 8);
            v102 = v205 + (v79 + 1) * v206;
            HIDWORD(v191) = v101;
            LODWORD(v193) = *(_DWORD *)v102;
            v14 = *(float *)(v102 + 4);
            v103 = *(float *)(v102 + 8);
            *((float *)&v193 + 1) = v14;
            v194 = v103;
            v148 = *(float *)&v193 * v76;
            v74 = v185;
            v104 = (float *)(v185 + 0xC * v78[1]);
            v136 = v14 * v76;
            v159 = v194 * v76;
            v149 = v148 + *(float *)&v191;
            v137 = *((float *)&v191 + 1) + v136;
            v160 = v192 + v159;
            v188 = v149;
            *v104 = v149;
            v189 = v137;
            v104[1] = v137;
            v190 = v160;
            v104[2] = v160;
            v105 = (_DWORD *)(v169 + 0xC * v78[1]);
            *v105 = v80[3];
            v105[1] = v80[4];
            v105[2] = v80[5];
            LOWORD(v14) = LOWORD(v198);
          }
          v77 += 4;
          v80 += 0xC;
          v78 += 4;
          v79 += 4;
        }
        while ( v77 < v177 - 3 );
      }
      if ( v77 < v177 )
      {
        v106 = (_DWORD *)(v202 + 0xC * v77);
        do
        {
          v107 = *(_DWORD *)(v204 + 4 * v77);
          if ( v107 != 0xFFFFFFFF )
          {
            v108 = v208 + v77 * v209;
            LODWORD(v191) = *(_DWORD *)v108;
            v109 = *(_DWORD *)(v108 + 4);
            v192 = *(float *)(v108 + 8);
            v110 = v205 + v77 * v206;
            HIDWORD(v191) = v109;
            LODWORD(v193) = *(_DWORD *)v110;
            v111 = *(float *)(v110 + 4);
            v112 = *(float *)(v110 + 8);
            *((float *)&v193 + 1) = v111;
            v194 = v112;
            v113 = (float *)(v74 + 0xC * v107);
            v150 = *(float *)&v193 * v76;
            v138 = v111 * v76;
            v161 = v194 * v76;
            v151 = v150 + *(float *)&v191;
            v139 = *((float *)&v191 + 1) + v138;
            v162 = v192 + v161;
            v188 = v151;
            *v113 = v151;
            v189 = v139;
            v113[1] = v139;
            v190 = v162;
            v113[2] = v162;
            v114 = (_DWORD *)(v169 + 0xC * *(_DWORD *)(v204 + 4 * v77));
            *v114 = *v106;
            v114[1] = v106[1];
            v114[2] = v106[2];
          }
          ++v77;
          v106 += 3;
        }
        while ( v77 < v177 );
      }
      if ( SLODWORD(v201) > 0 )
      {
        v115 = v195 + 0x44;
        v200 = v201;
        do
        {
          v116 = *(unsigned __int16 *)(v115 + 4);
          v197 = *(void **)v115;
          v186 = v116;
          v117 = FormHeapAlloc((unsigned __int64)v116 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v116);
          Dsta = (void *)v117;
          v237 = 3;
          if ( v117 )
          {
            v118 = (_WORD *)v117;
            for ( m = v186 - 1; m >= 0; --m )
            {
              sub_72EFA0(v118);
              v118 += 4;
            }
            v119 = Dsta;
          }
          else
          {
            v119 = 0;
          }
          v120 = v197;
          *(_DWORD *)v115 = v119;
          LODWORD(v127) = 8 * *(unsigned __int16 *)(v115 + 4);
          v237 = 0xFFFFFFFF;
          memcpy(v119, v120, v127);
          FormHeapFree((unsigned int)v120);
          v115 += 0x4C;
          --LODWORD(v200);
        }
        while ( v200 != 0.0 );
      }
      v121 = v211;
      sub_56CFF0((int *)v211, *((_DWORD *)v211 + 0xB), SLOWORD(v14), v181, v74, v169, (int)v214[0], v195);
    }
    else
    {
      v122 = v201;
      if ( SLODWORD(v201) > 0 )
      {
        v123 = (unsigned int *)(v195 + 0x44);
        do
        {
          FormHeapFree(*v123);
          *v123 = 0;
          v123 += 0x13;
          --LODWORD(v122);
        }
        while ( v122 != 0.0 );
      }
      FormHeapFree(v195);
      v121 = v211;
    }
    FormHeapFree(v212);
    FormHeapFree(v215);
    FormHeapFree((unsigned int)Src);
    FormHeapFree(v204);
    FormHeapFree(v202);
    if ( v199 )
      sub_728B20(*(_DWORD *)(*((_DWORD *)v121 + 0xB) + 0xB4));
  }
}
