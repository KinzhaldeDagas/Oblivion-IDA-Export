char __cdecl sub_95A380(float *a1, float *a2, int a3, int a4)
{
  float *v4; // eax
  float *v5; // eax
  int v6; // ecx
  unsigned __int16 v7; // ax
  float *v8; // ebx
  int v9; // esi
  float v10; // ebp
  int v11; // ecx
  int v12; // edi
  unsigned __int16 v13; // ax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // bx
  int v18; // edi
  float *v19; // eax
  int v20; // ebp
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  char v25; // dl
  float *v26; // eax
  float *v27; // esi
  NiTransform *v28; // eax
  double v29; // st7
  double v30; // st7
  __int16 v31; // dx
  double v32; // st7
  __int16 v33; // dx
  float *v34; // eax
  float *v35; // ecx
  float v36; // edx
  float v37; // ecx
  double v38; // st7
  float v39; // ecx
  float v40; // edx
  float v41; // eax
  double v42; // st7
  float v43; // eax
  int v44; // eax
  float v45; // edx
  float v46; // ecx
  float v47; // edx
  float v48; // ecx
  float v49; // edx
  double v50; // st7
  float *v51; // eax
  float v52; // edx
  float *v53; // eax
  float *v54; // ecx
  float v55; // edx
  float v56; // eax
  float v57; // eax
  float v58; // ecx
  int v59; // eax
  float *v60; // eax
  float *v61; // eax
  float v62; // ecx
  float v63; // edx
  float v64; // eax
  NiTransform *v65; // eax
  float y; // edx
  float z; // eax
  float *v68; // eax
  float *v69; // eax
  float v70; // eax
  float v71; // ecx
  float v72; // edx
  float *v73; // eax
  float *v74; // ebx
  float *v75; // eax
  float *v76; // eax
  float v77; // edx
  float v78; // eax
  float v79; // ecx
  float *v80; // [esp+Ch] [ebp-2F4h]
  float *v81; // [esp+Ch] [ebp-2F4h]
  float *v82; // [esp+14h] [ebp-2ECh]
  float *v83; // [esp+14h] [ebp-2ECh]
  char v84; // [esp+2Ah] [ebp-2D6h]
  char v85; // [esp+2Bh] [ebp-2D5h]
  unsigned __int16 v86; // [esp+2Ch] [ebp-2D4h]
  float v87; // [esp+2Ch] [ebp-2D4h]
  float v88; // [esp+30h] [ebp-2D0h]
  unsigned __int16 v89; // [esp+30h] [ebp-2D0h]
  int v90; // [esp+30h] [ebp-2D0h]
  float *v91; // [esp+34h] [ebp-2CCh] BYREF
  float v92; // [esp+38h] [ebp-2C8h] BYREF
  float v93; // [esp+3Ch] [ebp-2C4h] BYREF
  float v94; // [esp+40h] [ebp-2C0h]
  float v95; // [esp+44h] [ebp-2BCh]
  float *v96; // [esp+48h] [ebp-2B8h]
  NiPoint3 v97; // [esp+4Ch] [ebp-2B4h] BYREF
  int v98; // [esp+58h] [ebp-2A8h]
  float v99; // [esp+5Ch] [ebp-2A4h]
  float v100; // [esp+60h] [ebp-2A0h]
  float v101; // [esp+64h] [ebp-29Ch]
  float v102; // [esp+68h] [ebp-298h]
  float v103; // [esp+6Ch] [ebp-294h]
  float v104; // [esp+70h] [ebp-290h]
  float v105; // [esp+74h] [ebp-28Ch]
  float v106; // [esp+78h] [ebp-288h]
  float v107; // [esp+7Ch] [ebp-284h]
  float v108; // [esp+80h] [ebp-280h]
  float v109; // [esp+84h] [ebp-27Ch]
  float v110; // [esp+88h] [ebp-278h]
  float v111; // [esp+8Ch] [ebp-274h]
  float v112; // [esp+90h] [ebp-270h]
  float v113; // [esp+94h] [ebp-26Ch]
  float v114; // [esp+98h] [ebp-268h]
  float v115; // [esp+9Ch] [ebp-264h]
  float v116; // [esp+A0h] [ebp-260h]
  float v117; // [esp+A4h] [ebp-25Ch]
  float v118; // [esp+A8h] [ebp-258h]
  float v119; // [esp+ACh] [ebp-254h] BYREF
  float v120; // [esp+B0h] [ebp-250h]
  float v121; // [esp+B4h] [ebp-24Ch]
  float v122; // [esp+B8h] [ebp-248h] BYREF
  float v123; // [esp+BCh] [ebp-244h]
  float v124; // [esp+C0h] [ebp-240h]
  float v125; // [esp+C4h] [ebp-23Ch] BYREF
  float v126; // [esp+C8h] [ebp-238h]
  float v127; // [esp+CCh] [ebp-234h]
  int v128; // [esp+D0h] [ebp-230h] BYREF
  int v129; // [esp+D4h] [ebp-22Ch]
  char v130; // [esp+D8h] [ebp-228h]
  NiPoint3 v131; // [esp+DCh] [ebp-224h] BYREF
  _DWORD v132[2]; // [esp+E8h] [ebp-218h] BYREF
  char v133; // [esp+F0h] [ebp-210h]
  float v134; // [esp+F4h] [ebp-20Ch] BYREF
  float v135; // [esp+F8h] [ebp-208h]
  float v136; // [esp+FCh] [ebp-204h]
  int v137; // [esp+100h] [ebp-200h] BYREF
  int v138; // [esp+104h] [ebp-1FCh]
  char v139; // [esp+108h] [ebp-1F8h]
  int v140; // [esp+10Ch] [ebp-1F4h] BYREF
  int v141; // [esp+110h] [ebp-1F0h]
  char v142; // [esp+114h] [ebp-1ECh]
  float v143; // [esp+118h] [ebp-1E8h]
  float v144; // [esp+11Ch] [ebp-1E4h]
  float v145; // [esp+120h] [ebp-1E0h]
  float v146; // [esp+124h] [ebp-1DCh]
  float v147; // [esp+128h] [ebp-1D8h]
  float v148; // [esp+12Ch] [ebp-1D4h]
  float v149; // [esp+130h] [ebp-1D0h]
  float v150; // [esp+134h] [ebp-1CCh]
  float v151; // [esp+138h] [ebp-1C8h]
  int v152; // [esp+13Ch] [ebp-1C4h]
  NiPoint3 v153; // [esp+140h] [ebp-1C0h]
  float v154; // [esp+14Ch] [ebp-1B4h]
  float v155; // [esp+150h] [ebp-1B0h]
  float v156; // [esp+154h] [ebp-1ACh]
  float v157; // [esp+158h] [ebp-1A8h]
  float v158; // [esp+15Ch] [ebp-1A4h]
  float v159; // [esp+160h] [ebp-1A0h]
  float v160; // [esp+164h] [ebp-19Ch]
  float v161; // [esp+168h] [ebp-198h]
  float v162; // [esp+16Ch] [ebp-194h]
  float v163; // [esp+170h] [ebp-190h]
  float v164; // [esp+174h] [ebp-18Ch]
  float v165; // [esp+178h] [ebp-188h]
  float v166; // [esp+17Ch] [ebp-184h]
  float v167; // [esp+180h] [ebp-180h]
  float v168; // [esp+184h] [ebp-17Ch]
  float v169; // [esp+188h] [ebp-178h]
  float v170; // [esp+18Ch] [ebp-174h]
  float v171; // [esp+190h] [ebp-170h]
  float v172; // [esp+194h] [ebp-16Ch]
  float v173; // [esp+198h] [ebp-168h]
  float v174; // [esp+19Ch] [ebp-164h]
  float v175; // [esp+1A0h] [ebp-160h] BYREF
  int v176; // [esp+1A4h] [ebp-15Ch]
  float v177; // [esp+1A8h] [ebp-158h]
  float v178; // [esp+1ACh] [ebp-154h]
  float v179; // [esp+1B0h] [ebp-150h]
  float v180; // [esp+1B4h] [ebp-14Ch]
  float v181; // [esp+1B8h] [ebp-148h]
  float v182; // [esp+1BCh] [ebp-144h]
  float v183; // [esp+1C0h] [ebp-140h]
  float v184; // [esp+1C4h] [ebp-13Ch]
  float v185; // [esp+1C8h] [ebp-138h]
  float v186; // [esp+1CCh] [ebp-134h]
  int v187[4]; // [esp+1D0h] [ebp-130h] BYREF
  int v188[4]; // [esp+1E0h] [ebp-120h] BYREF
  int v189[4]; // [esp+1F0h] [ebp-110h] BYREF
  float v190[3]; // [esp+200h] [ebp-100h] BYREF
  float v191[3]; // [esp+20Ch] [ebp-F4h] BYREF
  float v192[3]; // [esp+218h] [ebp-E8h] BYREF
  float v193[4]; // [esp+224h] [ebp-DCh] BYREF
  float v194[4]; // [esp+234h] [ebp-CCh] BYREF
  int v195[3]; // [esp+244h] [ebp-BCh] BYREF
  NiTransform v196; // [esp+250h] [ebp-B0h] BYREF
  int v197[4]; // [esp+290h] [ebp-70h] BYREF
  int v198[4]; // [esp+2A0h] [ebp-60h] BYREF
  int v199[4]; // [esp+2B0h] [ebp-50h] BYREF
  int v200[4]; // [esp+2C0h] [ebp-40h] BYREF
  float v201[4]; // [esp+2D0h] [ebp-30h] BYREF
  float v202[4]; // [esp+2E0h] [ebp-20h] BYREF
  int v203[4]; // [esp+2F0h] [ebp-10h] BYREF

  v192[0] = *a1 - *(float *)(a4 + 0x88);
  v192[1] = a1[1] - *(float *)(a4 + 0x8C);
  v192[2] = a1[2] - *(float *)(a4 + 0x90);
  v88 = 1.0 / *(float *)(a4 + 0x94);
  v4 = sub_710250(&v134, v192, (float *)(a4 + 0x64));
  v95 = v4[1] * v88;
  v94 = v4[2] * v88;
  v191[0] = v88 * *v4;
  v191[1] = v95;
  v191[2] = v94;
  v5 = sub_710250(&v134, a2, (float *)(a4 + 0x64));
  v6 = *(_DWORD *)(a4 + 0xB4);
  v85 = 0;
  v95 = v5[1] * v88;
  v94 = v5[2] * v88;
  v190[0] = v88 * *v5;
  v190[1] = v95;
  v190[2] = v94;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x5C))(v6);
  v8 = *(float **)(a4 + 0xB4);
  v9 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v10 = v8[7];
  LODWORD(v95) = v7;
  v84 = 0;
  v96 = v8;
  v94 = v10;
  if ( v10 == 0.0 )
  {
    v11 = *((_DWORD *)v8 + 0xD);
    if ( v11 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0x4C))(v11) )
      {
        v84 = sub_728AB0((int)v8, 1);
        sub_728B60((int)v8, (int)&v128);
      }
      v9 = v129;
    }
  }
  v12 = *((_DWORD *)v8 + 0x13);
  v13 = 0;
  v176 = v12;
  v98 = 0;
  if ( !LOWORD(v95) )
  {
LABEL_7:
    if ( v84 )
      sub_728B20((int)v8);
    return v85;
  }
  while ( 1 )
  {
    if ( (v13 & 1) != 0 )
    {
      v15 = *(_WORD *)(v12 + 2 * v13 + 2);
      v16 = *(_WORD *)(v12 + 2 * v13);
    }
    else
    {
      v15 = *(_WORD *)(v12 + 2 * v13);
      v16 = *(_WORD *)(v12 + 2 * v13 + 2);
    }
    v86 = v15;
    v89 = v16;
    v17 = *(_WORD *)(v12 + 2 * v13 + 4);
    v91 = (float *)v17;
    if ( v15 != v16 && v16 != v17 )
      break;
LABEL_55:
    if ( (unsigned __int16)++v98 >= LOWORD(v95) )
    {
      v8 = v96;
      goto LABEL_7;
    }
    v13 = v98;
  }
  v18 = v15;
  if ( v10 == 0.0 )
  {
    v19 = (float *)(v128 + v15 * v9);
    v20 = v16;
    v125 = *v19;
    v126 = v19[1];
    v127 = v19[2];
    v21 = (float *)(v128 + v16 * v9);
    v119 = *v21;
    v120 = v21[1];
    v121 = v21[2];
    v22 = (float *)(v128 + v9 * v17);
  }
  else
  {
    v23 = (float *)(LODWORD(v10) + 0xC * v15);
    v125 = *v23;
    v126 = v23[1];
    v20 = v16;
    v127 = v23[2];
    v24 = (float *)(LODWORD(v94) + 0xC * v16);
    v119 = *v24;
    v120 = v24[1];
    v121 = v24[2];
    v22 = (float *)(LODWORD(v94) + 0xC * v17);
  }
  v122 = *v22;
  v123 = v22[1];
  v25 = *(_BYTE *)(a3 + 0x10);
  v124 = v22[2];
  LOBYTE(v152) = v25;
  if ( !sub_96E5E0(v191, v190, &v125, &v119, &v122, v25, &v131, &v175, &v93, &v92) )
  {
LABEL_54:
    v9 = v129;
    v10 = v94;
    v12 = v176;
    goto LABEL_55;
  }
  v85 = 1;
  v26 = (float *)FormHeapAlloc(0x44u);
  if ( v26 )
    v27 = sub_95A2D0(v26, a4);
  else
    v27 = 0;
  if ( *(_DWORD *)(a3 + 0xC) == 1 )
  {
    v28 = sub_7101F0((NiTransform *)(a4 + 0x64), &v196, &v131);
    v186 = *(float *)(a4 + 0x94);
    v143 = v186 * v28->rot.data[0][0];
    v144 = v28->rot.data[0][1] * v186;
    v145 = v186 * v28->rot.data[0][2];
    v154 = v143 + *(float *)(a4 + 0x88);
    v29 = *(float *)(a4 + 0x8C);
    v131.x = v154;
    v155 = v29 + v144;
    v30 = *(float *)(a4 + 0x90);
    v131.y = v155;
    v156 = v30 + v145;
    v131.z = v156;
  }
  v27[2] = v131.x;
  v31 = v98;
  v27[3] = v131.y;
  v27[4] = v131.z;
  v32 = v175;
  *((_WORD *)v27 + 0xC) = v31;
  v33 = (__int16)v91;
  v27[5] = v32;
  *((_WORD *)v27 + 0xD) = v86;
  *((_WORD *)v27 + 0xE) = v89;
  *((_WORD *)v27 + 0xF) = v33;
  v87 = 1.0 - (v93 + v92);
  if ( !*(_BYTE *)(a3 + 0x2C) )
  {
    v27[8] = flt_B3FC80;
    v43 = flt_B3FC84;
    goto LABEL_32;
  }
  v140 = 0;
  v141 = 0;
  v142 = 0;
  sub_728E70((int)v96, 0, (int)&v140);
  if ( v140 )
  {
    v91 = (float *)(v140 + v20 * v141);
    v34 = (float *)(v140 + v18 * v141);
    v35 = (float *)(v140 + v17 * v141);
    v36 = *v35;
    v37 = v35[1];
    v103 = v36;
    v104 = v37;
    v38 = v36;
    v39 = v91[1];
    v111 = *v91;
    v40 = *v34;
    v41 = v34[1];
    v103 = v38 * v92;
    v104 = v92 * v104;
    v111 = v111 * v93;
    v112 = v93 * v39;
    v101 = v40 * v87;
    v102 = v87 * v41;
    v107 = v101 + v111;
    v108 = v102 + v112;
    v115 = v107 + v103;
    v42 = v108;
    v27[8] = v115;
    v116 = v42 + v104;
    v43 = v116;
LABEL_32:
    v27[9] = v43;
    goto LABEL_33;
  }
  v44 = *(_DWORD *)(*(_DWORD *)(a4 + 0xB4) + 0x28);
  if ( v44 )
  {
    v45 = *(float *)(v44 + 8 * v17 + 4);
    v105 = *(float *)(v44 + 8 * v17);
    v46 = *(float *)(v44 + 8 * v20);
    v106 = v45;
    v47 = *(float *)(v44 + 8 * v20 + 4);
    v109 = v46;
    v48 = *(float *)(v44 + 8 * v18);
    v105 = v105 * v92;
    v110 = v47;
    v49 = *(float *)(v44 + 8 * v18 + 4);
    v106 = v92 * v106;
    v109 = v109 * v93;
    v110 = v93 * v110;
    v99 = v48 * v87;
    v100 = v87 * v49;
    v113 = v99 + v109;
    v114 = v100 + v110;
    v117 = v113 + v105;
    v50 = v114;
    v27[8] = v117;
    v118 = v50 + v106;
    v27[9] = v118;
  }
  else
  {
    v27[8] = flt_B3FC80;
    v27[9] = flt_B3FC84;
  }
LABEL_33:
  if ( *(_BYTE *)(a3 + 0x2D) )
  {
    v137 = 0;
    v138 = 0;
    v139 = 0;
    sub_728D00((int)v96, (int)&v137);
    if ( v137 )
    {
      v51 = (float *)(v137 + v18 * v138);
      v177 = *v51;
      v52 = v51[1];
      v179 = v51[2];
      v53 = (float *)(v137 + v20 * v138);
      v54 = (float *)(v137 + v17 * v138);
      v178 = v52;
      v160 = *v53;
      v55 = v53[1];
      v56 = v53[2];
      v161 = v55;
      v183 = *v54;
      v162 = v56;
      v57 = v54[1];
      v58 = v54[2];
      v184 = v57;
      v185 = v58;
      v149 = v183 * v92;
      v150 = v57 * v92;
      v151 = v92 * v58;
      v172 = v160 * v93;
      v173 = v55 * v93;
      v174 = v93 * v162;
      v166 = v177 * v87;
      v167 = v178 * v87;
      v168 = v87 * v179;
      v146 = v166 + v172;
      v147 = v167 + v173;
      v148 = v168 + v174;
      v153.x = v146 + v149;
      v153.y = v147 + v150;
      v153.z = v148 + v151;
      v97 = v153;
    }
    else
    {
      if ( *(_BYTE *)(a3 + 0x2E) && (v59 = *(_DWORD *)(*(_DWORD *)(a4 + 0xB4) + 0x20), (v90 = v59) != 0) )
      {
        v91 = sub_47DA10(&v196.pos.x, v93, (float *)(v59 + 0xC * v20));
        v60 = sub_47DA10(v196.rot.data[1], v87, (float *)(v90 + 0xC * v18));
        v157 = *v60 + *v91;
        v158 = v91[1] + v60[1];
        v159 = v91[2] + v60[2];
        v61 = sub_47DA10((float *)v195, v92, (float *)(v90 + 0xC * v17));
        v163 = v157 + *v61;
        v62 = v163;
        v164 = v61[1] + v158;
        v63 = v164;
        v165 = v61[2] + v159;
        v64 = v165;
      }
      else
      {
        v180 = v119 - v125;
        v181 = v120 - v126;
        v182 = v121 - v127;
        v169 = v122 - v125;
        v170 = v123 - v126;
        v171 = v124 - v127;
        v134 = v171 * v181 - v170 * v182;
        v62 = v134;
        v135 = v182 * v169 - v171 * v180;
        v63 = v135;
        v136 = v180 * v170 - v169 * v181;
        v64 = v136;
      }
      v97.z = v64;
      v97.y = v63;
      v97.x = v62;
    }
    sub_43F350(&v97.x);
    if ( *(_DWORD *)(a3 + 0xC) == 1 )
    {
      v65 = sub_7101F0((NiTransform *)(a4 + 0x64), (NiTransform *)v196.rot.data[2], &v97);
      v97.x = v65->rot.data[0][0];
      v97.y = v65->rot.data[0][1];
      v97.z = v65->rot.data[0][2];
    }
    y = v97.y;
    z = v97.z;
    v27[0xA] = v97.x;
    v27[0xB] = y;
  }
  else
  {
    v27[0xA] = Vector3_InitValue_;
    v27[0xB] = *(&Vector3_InitValue_ + 1);
    z = dword_B3F9B0;
  }
  v27[0xC] = z;
  if ( *(_BYTE *)(a3 + 0x2F) )
  {
    v132[0] = 0;
    v132[1] = 0;
    v133 = 0;
    sub_728DB0((int)v96, (int)v132);
    if ( v132[0] )
    {
      *(float *)v187 = 0.0;
      *(float *)&v187[1] = 0.0;
      *(float *)&v187[2] = 0.0;
      *(float *)&v187[3] = 0.0;
      *(float *)v189 = 0.0;
      *(float *)&v189[1] = 0.0;
      *(float *)&v189[2] = 0.0;
      *(float *)&v189[3] = 0.0;
      *(float *)v188 = 0.0;
      *(float *)&v188[1] = 0.0;
      *(float *)&v188[2] = 0.0;
      *(float *)&v188[3] = 0.0;
      sub_4C1440(v132, v18, (float *)v187);
      sub_4C1440(v132, v20, (float *)v189);
      sub_4C1440(v132, v17, (float *)v188);
      v82 = sub_4BFBD0(&v196.scale, v92, (float *)v188);
      v80 = sub_4BFBD0((float *)v198, v93, (float *)v189);
      v68 = sub_4BFBD0((float *)v200, v87, (float *)v187);
      v69 = sub_4BFB30(v68, v202, v80);
      sub_4BFB30(v69, v194, v82);
      v70 = v194[1];
      v71 = v194[2];
      v27[0xD] = v194[0];
      v72 = v194[3];
      v27[0xE] = v70;
      v27[0xF] = v71;
      v27[0x10] = v72;
    }
    else
    {
      v91 = *(float **)(*(_DWORD *)(a4 + 0xB4) + 0x24);
      if ( v91 )
      {
        v73 = sub_4BFBD0((float *)v197, v92, &v91[4 * v17]);
        v74 = v91;
        v83 = v73;
        v81 = sub_4BFBD0((float *)v199, v93, &v91[4 * v20]);
        v75 = sub_4BFBD0((float *)v203, v87, &v74[4 * v18]);
        v76 = sub_4BFB30(v75, v201, v81);
        sub_4BFB30(v76, v193, v83);
        v77 = v193[1];
        v78 = v193[2];
        v27[0xD] = v193[0];
        v79 = v193[3];
        v27[0xE] = v77;
        v27[0xF] = v78;
        v27[0x10] = v79;
      }
      else
      {
        *((_DWORD *)v27 + 0xD) = dword_B25AE0;
        *((_DWORD *)v27 + 0xE) = dword_B25AE4;
        *((_DWORD *)v27 + 0xF) = dword_B25AE8;
        *((_DWORD *)v27 + 0x10) = dword_B25AEC;
      }
    }
  }
  else
  {
    *((_DWORD *)v27 + 0xD) = dword_B25AE0;
    *((_DWORD *)v27 + 0xE) = dword_B25AE4;
    *((_DWORD *)v27 + 0xF) = dword_B25AE8;
    *((_DWORD *)v27 + 0x10) = dword_B25AEC;
  }
  v91 = v27;
  *(_DWORD *)(a3 + 0x28) = v27;
  sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a3 + 0x18), &v91);
  if ( *(_DWORD *)a3 != 1 || *(_DWORD *)(a3 + 4) != 1 )
    goto LABEL_54;
  if ( v84 )
    sub_728B20((int)v96);
  return 1;
}
