NiObjectNET *__cdecl sub_6FC010(float a1, unsigned int a2, int a3, _DWORD *a4)
{
  NiNode *v4; // eax
  _DWORD *v5; // edi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // esi
  float *v10; // ebx
  _DWORD *v11; // eax
  int v12; // eax
  float *v13; // ecx
  int v14; // ebp
  double v15; // st7
  int v16; // esi
  double v17; // st5
  double v18; // st6
  int v19; // edi
  float *v20; // ebx
  double v21; // st7
  int v22; // ecx
  int v23; // esi
  float v24; // edx
  int v25; // esi
  double v26; // st7
  int v27; // eax
  double v28; // st6
  float v29; // edx
  int v30; // esi
  _DWORD *v31; // eax
  int v32; // edi
  float *v33; // ebx
  double v34; // st7
  double v35; // st7
  double v36; // st7
  int v37; // esi
  int v38; // esi
  int v39; // esi
  NiAVObject *v40; // ecx
  NiAVObject *v41; // esi
  NiObjectNET *v42; // ebx
  __int16 v43; // bp
  unsigned int v44; // edi
  int v45; // esi
  int v46; // eax
  int v47; // edx
  int v48; // ecx
  int v49; // eax
  int v50; // esi
  double v51; // st6
  float *v52; // ebp
  float *v53; // ebx
  float *v54; // edi
  double v55; // st7
  double v56; // st7
  double v57; // st6
  float *v58; // edi
  float *v59; // ebx
  int v60; // esi
  float *v61; // ebp
  NiAVObject *v62; // eax
  NiAVObject *v63; // esi
  float v65; // [esp+14h] [ebp-DCh]
  float v66; // [esp+14h] [ebp-DCh]
  float v67; // [esp+14h] [ebp-DCh]
  float v68; // [esp+14h] [ebp-DCh]
  float v69; // [esp+14h] [ebp-DCh]
  float v70; // [esp+14h] [ebp-DCh]
  float v71; // [esp+14h] [ebp-DCh]
  float v72; // [esp+14h] [ebp-DCh]
  float v73; // [esp+14h] [ebp-DCh]
  float v74; // [esp+14h] [ebp-DCh]
  int v75; // [esp+14h] [ebp-DCh]
  int v76; // [esp+18h] [ebp-D8h]
  float v77; // [esp+18h] [ebp-D8h]
  _DWORD *v78; // [esp+18h] [ebp-D8h]
  float v79; // [esp+18h] [ebp-D8h]
  _DWORD *v80; // [esp+18h] [ebp-D8h]
  char *v81; // [esp+1Ch] [ebp-D4h]
  float v82; // [esp+1Ch] [ebp-D4h]
  char *v83; // [esp+1Ch] [ebp-D4h]
  float v84; // [esp+1Ch] [ebp-D4h]
  float v85; // [esp+1Ch] [ebp-D4h]
  float v86; // [esp+1Ch] [ebp-D4h]
  _DWORD *v87; // [esp+20h] [ebp-D0h]
  int v88; // [esp+20h] [ebp-D0h]
  int v89; // [esp+24h] [ebp-CCh]
  int v90; // [esp+24h] [ebp-CCh]
  float v91; // [esp+28h] [ebp-C8h]
  float v92; // [esp+28h] [ebp-C8h]
  float v93; // [esp+28h] [ebp-C8h]
  double v94; // [esp+28h] [ebp-C8h]
  float v95; // [esp+2Ch] [ebp-C4h]
  float v96; // [esp+2Ch] [ebp-C4h]
  float v97; // [esp+30h] [ebp-C0h]
  float v98; // [esp+30h] [ebp-C0h]
  float v99; // [esp+30h] [ebp-C0h]
  float v100; // [esp+34h] [ebp-BCh]
  float *v101; // [esp+34h] [ebp-BCh]
  int v102; // [esp+34h] [ebp-BCh]
  float *v103; // [esp+38h] [ebp-B8h]
  int v104; // [esp+38h] [ebp-B8h]
  float *v105; // [esp+3Ch] [ebp-B4h]
  int v106; // [esp+3Ch] [ebp-B4h]
  __int16 v107; // [esp+40h] [ebp-B0h]
  float v108; // [esp+40h] [ebp-B0h]
  float v109; // [esp+40h] [ebp-B0h]
  float *v110; // [esp+48h] [ebp-A8h]
  float v111; // [esp+48h] [ebp-A8h]
  float v112; // [esp+48h] [ebp-A8h]
  float v113; // [esp+4Ch] [ebp-A4h]
  float v114; // [esp+4Ch] [ebp-A4h]
  float v115; // [esp+4Ch] [ebp-A4h]
  float v116; // [esp+50h] [ebp-A0h]
  float v117; // [esp+50h] [ebp-A0h]
  float v118; // [esp+50h] [ebp-A0h]
  float v119; // [esp+50h] [ebp-A0h]
  float *v120; // [esp+54h] [ebp-9Ch]
  float v121; // [esp+54h] [ebp-9Ch]
  float v122; // [esp+54h] [ebp-9Ch]
  float v123; // [esp+58h] [ebp-98h]
  float v124; // [esp+5Ch] [ebp-94h]
  float v125; // [esp+60h] [ebp-90h]
  float v126; // [esp+60h] [ebp-90h]
  float v127; // [esp+60h] [ebp-90h]
  unsigned int v128; // [esp+64h] [ebp-8Ch]
  float v129; // [esp+68h] [ebp-88h]
  float v130; // [esp+6Ch] [ebp-84h]
  float v131; // [esp+6Ch] [ebp-84h]
  int v132; // [esp+6Ch] [ebp-84h]
  float v133; // [esp+70h] [ebp-80h]
  float v134; // [esp+74h] [ebp-7Ch]
  float v135; // [esp+78h] [ebp-78h]
  float v136; // [esp+78h] [ebp-78h]
  NiObjectNET *v137; // [esp+7Ch] [ebp-74h]
  float v138; // [esp+80h] [ebp-70h]
  float v139; // [esp+84h] [ebp-6Ch]
  float v140; // [esp+88h] [ebp-68h]
  float v141; // [esp+8Ch] [ebp-64h]
  float v142; // [esp+94h] [ebp-5Ch]
  float v143; // [esp+98h] [ebp-58h]
  double v144; // [esp+9Ch] [ebp-54h]
  float v145; // [esp+9Ch] [ebp-54h]
  int v146; // [esp+A8h] [ebp-48h]
  int v147; // [esp+ACh] [ebp-44h]
  float v148; // [esp+B0h] [ebp-40h]
  float v149; // [esp+B4h] [ebp-3Ch]
  float v150; // [esp+B8h] [ebp-38h]
  float v151; // [esp+C8h] [ebp-28h]
  float v152; // [esp+CCh] [ebp-24h]
  float v153; // [esp+D0h] [ebp-20h]
  float v154; // [esp+D4h] [ebp-1Ch]

  v4 = (NiNode *)FormHeapAlloc(0xDCu);
  v5 = 0;
  if ( v4 )
    v137 = (NiObjectNET *)NiNode::NiNode(v4, 0);
  else
    v137 = 0;
  NiObjectNET_SetName(v137, "BSTestObjects Sphere");
  v6 = (double)a3;
  if ( a3 < 0 )
    v6 = v6 + flt_A2FC78;
  v65 = v6;
  v7 = v65;
  v141 = flt_B3F9A4 / v65;
  v8 = (double)(int)a2;
  if ( (int)a2 < 0 )
    v8 = v8 + flt_A2FC78;
  v66 = v8;
  v9 = 2 * a2 + 2;
  v140 = (flt_B3F9A4 + flt_B3F9A4) / v66;
  v138 = 1.0 / v66;
  v139 = 1.0 / v7;
  v103 = (float *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v9) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v9);
  v10 = (float *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v9) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v9);
  v110 = v10;
  if ( a4 )
  {
    v11 = (_DWORD *)FormHeapAlloc((unsigned __int64)(unsigned int)v9 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v9);
    v5 = v11;
    if ( v11 )
      sub_401080(v11, 0x10, v9, (void *(__thiscall *)(void *))sub_47EA50);
    else
      v5 = 0;
  }
  v89 = (int)v5;
  v105 = (float *)FormHeapAlloc((unsigned __int64)(unsigned int)v9 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v9);
  v12 = FormHeapAlloc((unsigned __int64)(6 * a2) >> 0x1F != 0 ? 0xFFFFFFFF : 0xC * a2);
  v13 = v103;
  v14 = v12;
  *v103 = 0.0;
  v144 = a1;
  v103[1] = 0.0;
  v15 = a1;
  v103[2] = a1;
  *v10 = 0.0;
  v10[1] = 0.0;
  v16 = 0;
  v10[2] = 1.0;
  if ( a4 )
  {
    *v5 = *a4;
    v5[1] = a4[1];
    v5[2] = a4[2];
    v5[3] = a4[3];
  }
  v17 = 0.0;
  v18 = 1.0;
  *v105 = flt_A3D65C;
  v113 = 0.0;
  v105[1] = 0.0;
  v19 = 1;
  v76 = 0;
  if ( a2 )
  {
    v125 = sin(v141);
    v67 = cos(v141);
    v120 = v105 + 2;
    v20 = v10 + 3;
    v97 = v144 * v67;
    v87 = (_DWORD *)(v89 + 0x10);
    v135 = v67;
    v81 = (char *)((char *)v103 - (char *)v110);
    do
    {
      v21 = (double)v76;
      if ( v76 < 0 )
        v21 = v21 + flt_A2FC78;
      v100 = v21 * v140;
      v68 = sin(v100);
      v130 = -v68 * v125;
      v69 = cos(v100);
      v70 = v69 * v125;
      v91 = v130 * a1;
      *(float *)((char *)v20 + (_DWORD)v81) = v91;
      v144 = a1;
      v95 = a1 * v70;
      *(float *)((char *)v20 + (_DWORD)v81 + 4) = v95;
      *(float *)((char *)v20 + (_DWORD)v81 + 8) = v97;
      v15 = a1;
      *v20 = v130;
      v20[1] = v70;
      v20[2] = v135;
      if ( a4 )
      {
        *v87 = *a4;
        v87[1] = a4[1];
        v87[2] = a4[2];
        v87[3] = a4[3];
      }
      *v120 = v113;
      v87 += 4;
      v113 = v113 + v138;
      v22 = v76;
      v120[1] = v139;
      ++v19;
      v20 += 3;
      v120 += 2;
      if ( v76 )
      {
        *(_WORD *)(v12 + 2 * v16) = 0;
        v23 = v16 + 1;
        *(_WORD *)(v12 + 2 * v23++) = v19 - 2;
        *(_WORD *)(v12 + 2 * v23) = v19 - 1;
        v16 = v23 + 1;
      }
      ++v76;
    }
    while ( v22 + 1 < a2 );
    v10 = v110;
    v13 = v103;
    v17 = 0.0;
    v18 = 1.0;
  }
  *(_WORD *)(v12 + 2 * v16) = 0;
  v92 = v17;
  v24 = v92;
  v96 = v17;
  v25 = v16 + 1;
  *(_WORD *)(v12 + 2 * v25) = v19 - 1;
  v98 = -v15;
  *(_WORD *)(v12 + 2 * v25 + 2) = 1;
  v26 = v18;
  v93 = v17;
  v27 = 3 * v19;
  v13[v27] = v24;
  v28 = flt_A30634;
  v13[v27 + 1] = v96;
  v29 = v98;
  v99 = v28;
  v13[v27 + 2] = v29;
  v10[v27] = v93;
  v10[v27 + 1] = v93;
  v10[v27 + 2] = v99;
  v30 = v25 + 2;
  v107 = v19;
  if ( a4 )
  {
    v31 = (_DWORD *)(v89 + 0x10 * v19);
    *v31 = *a4;
    v31[1] = a4[1];
    v31[2] = a4[2];
    v31[3] = a4[3];
  }
  v105[2 * v19] = flt_A3D65C;
  v129 = v26;
  v105[2 * v19 + 1] = v129;
  v32 = v19 + 1;
  v82 = flt_B3F9A4 - v141;
  v88 = a2;
  v114 = v26;
  v94 = v139;
  if ( a2 )
  {
    v126 = sin(v82);
    v71 = cos(v82);
    v101 = &v105[2 * v32];
    v136 = v144 * v71;
    v33 = &v10[3 * v32];
    v143 = v71;
    v77 = 1.0 - v139;
    v34 = v77;
    v78 = (_DWORD *)(v89 + 0x10 * v32);
    v124 = v34;
    v83 = (char *)((char *)v103 - (char *)v110);
    do
    {
      if ( v88 == a2 )
      {
        v35 = 0.0;
      }
      else
      {
        v36 = (double)v88;
        if ( v88 < 0 )
          v36 = v36 + flt_A2FC78;
        v35 = v36 * v140;
      }
      v121 = v35;
      v72 = sin(v121);
      v131 = -v72 * v126;
      v73 = cos(v121);
      v74 = v126 * v73;
      v133 = v131 * a1;
      *(float *)&v83[(_DWORD)v33] = v133;
      v134 = a1 * v74;
      *(float *)&v83[(_DWORD)v33 + 4] = v134;
      *(float *)&v83[(_DWORD)v33 + 8] = v136;
      *v33 = v131;
      v33[1] = v74;
      v33[2] = v143;
      if ( a4 )
      {
        *v78 = *a4;
        v78[1] = a4[1];
        v78[2] = a4[2];
        v78[3] = a4[3];
      }
      *v101 = v114;
      v101[1] = v124;
      v114 = v114 - v138;
      v101 += 2;
      LOWORD(v32) = v32 + 1;
      v33 += 3;
      v78 += 4;
      if ( v88 != a2 )
      {
        *(_WORD *)(v14 + 2 * v30) = v107;
        v37 = v30 + 1;
        *(_WORD *)(v14 + 2 * v37++) = v32 - 2;
        *(_WORD *)(v14 + 2 * v37) = v32 - 1;
        v30 = v37 + 1;
      }
      --v88;
    }
    while ( v88 );
    v10 = v110;
  }
  *(_WORD *)(v14 + 2 * v30) = v107;
  v38 = v30 + 1;
  *(_WORD *)(v14 + 2 * v38++) = v32 - 1;
  *(_WORD *)(v14 + 2 * v38) = v107 + 1;
  v39 = v38 + 1;
  v40 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v40 )
    v41 = sub_7174B0(v40, v32, (int)v103, (int)v10, v89, (int)v105, 1, 0, v39 / 3, v14);
  else
    v41 = 0;
  v41->vtbl[1].super.Unk_03((NiObject *)v41);
  v42 = v137;
  (*((void (__thiscall **)(NiObjectNET *, NiAVObject *, _DWORD))v137->vtbl + 0x21))(v137, v41, 0);
  v79 = 0.0;
  v43 = a2;
  v44 = a3 - 2;
  v45 = (a3 - 2) * (2 * a2 + 2);
  v75 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v45) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v45);
  v132 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v45) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v45);
  if ( !a4 )
  {
    v90 = 0;
    goto LABEL_51;
  }
  v46 = FormHeapAlloc((unsigned __int64)(unsigned int)v45 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v45);
  if ( !v46 )
  {
    v46 = 0;
    goto LABEL_49;
  }
  v47 = v45 - 1;
  if ( v45 - 1 < 0 )
  {
LABEL_49:
    v90 = v46;
    goto LABEL_51;
  }
  v48 = v46 + 8;
  do
  {
    *(float *)(v48 - 8) = 0.0;
    v48 += 0x10;
    --v47;
    *(float *)(v48 - 0x14) = 0.0;
    *(float *)(v48 - 0x10) = 0.0;
    *(float *)(v48 - 0xC) = 0.0;
  }
  while ( v47 >= 0 );
  v90 = v46;
LABEL_51:
  v147 = FormHeapAlloc((unsigned __int64)(unsigned int)v45 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v45);
  v146 = FormHeapAlloc((unsigned __int64)v44 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v44);
  v49 = FormHeapAlloc((unsigned __int64)(unsigned int)v45 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v45);
  v50 = 0;
  v102 = v49;
  v106 = 0;
  if ( a3 != 2 )
  {
    do
    {
      v51 = (double)(v106 + 1);
      v128 = v106 + 1;
      if ( v106 + 1 < 0 )
        v51 = v51 + flt_A2FC78;
      v104 = 0;
      v84 = v141 * v51;
      v115 = 0.0;
      v127 = sin(v84);
      v116 = cos(v84);
      v154 = v116;
      v142 = v79;
      v117 = v84 + v141;
      v145 = sin(v117);
      v118 = cos(v117);
      v123 = v118;
      v52 = (float *)(v147 + 8 * v50);
      v119 = v79 + v94;
      v53 = (float *)(0xC * v50 + v132);
      v80 = (_DWORD *)(v90 + 0x10 * v50);
      v54 = (float *)(v75 + 0xC * v50);
      do
      {
        if ( v104 == a2 )
        {
          v55 = 0.0;
        }
        else
        {
          v56 = (double)v104;
          if ( v104 < 0 )
            v56 = v56 + flt_A2FC78;
          v55 = v56 * v140;
        }
        v108 = v55;
        v122 = sin(v108);
        v85 = -v122 * v127;
        v109 = cos(v108);
        v111 = v127 * v109;
        v148 = v85 * a1;
        *v54 = v148;
        v149 = v111 * a1;
        v54[1] = v149;
        v150 = v154 * a1;
        v54[2] = v150;
        *v53 = v85;
        v57 = a1;
        v53[1] = v111;
        v53[2] = v154;
        if ( a4 )
        {
          *v80 = *a4;
          v80[1] = a4[1];
          v80[2] = a4[2];
          v80[3] = a4[3];
        }
        v58 = v54 + 3;
        *v52 = v115;
        v52[1] = v142;
        *(_WORD *)(v49 + 2 * v50) = v50;
        v59 = v53 + 3;
        v60 = v50 + 1;
        v61 = v52 + 2;
        v86 = -v122 * v145;
        v112 = v145 * v109;
        v151 = v86 * v57;
        *v58 = v151;
        v152 = v112 * v57;
        v58[1] = v152;
        v153 = v57 * v123;
        v58[2] = v153;
        *v59 = v86;
        v59[1] = v112;
        v59[2] = v123;
        if ( a4 )
        {
          v80[4] = *a4;
          v80[5] = a4[1];
          v80[6] = a4[2];
          v80[7] = a4[3];
        }
        *v61 = v115;
        v115 = v115 + v138;
        v80 += 8;
        v61[1] = v119;
        *(_WORD *)(v49 + 2 * v60) = v60;
        v50 = v60 + 1;
        v54 = v58 + 3;
        v53 = v59 + 3;
        v52 = v61 + 2;
        ++v104;
      }
      while ( v104 <= a2 );
      v94 = v139;
      v79 = v119;
      *(_WORD *)(v146 + 2 * v106++) = 2 * a2 + 2;
    }
    while ( v128 < a3 - 2 );
    LOWORD(v44) = a3 - 2;
    v42 = v137;
    v43 = a2;
  }
  v62 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v62 )
    v63 = sub_719960(v62, v50, v75, v132, v90, v147, 1, 0, 2 * v44 * v43, v44, v146, v102);
  else
    v63 = 0;
  v63->vtbl[1].super.Unk_03((NiObject *)v63);
  (*((void (__thiscall **)(NiObjectNET *, NiAVObject *, _DWORD))v42->vtbl + 0x21))(v42, v63, 0);
  return v42;
}
