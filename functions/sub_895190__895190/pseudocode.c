void __fastcall sub_895190(int a1, int a2, int a3)
{
  double v4; // st7
  Ni2DBuffer *v5; // eax
  double v6; // st6
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // esi
  double v11; // st7
  double v12; // st6
  double v13; // st5
  NiObject *v14; // esi
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  int v22; // ebx
  float v23; // eax
  double v24; // st5
  double v25; // st4
  double v26; // st3
  float v27; // eax
  double v28; // st7
  float v29; // esi
  double v30; // st5
  double v31; // st4
  float v32; // eax
  double v33; // st4
  double v34; // rt1
  double v35; // st3
  double v36; // st7
  double v37; // rt2
  double v38; // st3
  double v39; // st5
  double v40; // rtt
  double v41; // st2
  double v42; // st7
  double v43; // rt1
  double v44; // st3
  double v45; // st4
  double v46; // rt0
  double v47; // st2
  double v48; // st4
  double v49; // rt2
  double v50; // st2
  double v51; // st3
  double v52; // rt0
  double v53; // st4
  double v54; // rtt
  double v55; // rt0
  double v56; // st4
  double v57; // st7
  bhkRefObject *v58; // eax
  double v59; // rt1
  double v60; // st7
  bhkRefObject *v61; // eax
  double v62; // st7
  bhkRefObject *v63; // eax
  hkRefObject *hkObject; // ebx
  hkRefObject *v65; // ebx
  hkRefObject *v66; // ebx
  bhkRefObject *v67; // eax
  bhkRefObject *v68; // eax
  bool v69; // zf
  int v70; // ecx
  double v71; // st3
  double v72; // st7
  double v73; // rt0
  double v74; // st3
  double v75; // st5
  double v76; // rtt
  bhkRefObject *v77; // eax
  bhkRefObject *v78; // eax
  double v79; // rt0
  double v80; // st4
  double v81; // st5
  double v82; // st3
  double v83; // rt2
  double v84; // st3
  double v85; // rt0
  double v86; // st3
  double v87; // rtt
  Ni2DBuffer **v88; // ecx
  bhkRefObject *v89; // eax
  bhkRefObject *v90; // eax
  double v91; // rt2
  double v92; // st5
  signed int v93; // eax
  float v94; // eax
  double v95; // st5
  double v96; // rt0
  FreeEntry *v97; // eax
  unsigned __int8 v98; // cl
  bhkRefObject *v99; // eax
  bhkRefObject *v100; // eax
  Ni2DBuffer **v101; // esi
  Ni2DBuffer *v102; // esi
  float v103; // [esp+4h] [ebp-118h]
  int v104; // [esp+8h] [ebp-114h]
  float v105; // [esp+1Ch] [ebp-100h]
  float v106; // [esp+1Ch] [ebp-100h]
  UInt32 v107; // [esp+1Ch] [ebp-100h]
  float v108; // [esp+1Ch] [ebp-100h]
  float v109; // [esp+1Ch] [ebp-100h]
  float v110; // [esp+1Ch] [ebp-100h]
  bhkRefObject *v111; // [esp+1Ch] [ebp-100h]
  float v112; // [esp+1Ch] [ebp-100h]
  float v113; // [esp+1Ch] [ebp-100h]
  float v114; // [esp+1Ch] [ebp-100h]
  float v115; // [esp+1Ch] [ebp-100h]
  float v116; // [esp+1Ch] [ebp-100h]
  float v117; // [esp+1Ch] [ebp-100h]
  float v118; // [esp+1Ch] [ebp-100h]
  float v119; // [esp+1Ch] [ebp-100h]
  float v120; // [esp+1Ch] [ebp-100h]
  UInt32 v121; // [esp+1Ch] [ebp-100h]
  UInt32 v122; // [esp+1Ch] [ebp-100h]
  float v123; // [esp+20h] [ebp-FCh]
  float v124; // [esp+20h] [ebp-FCh]
  float v125; // [esp+24h] [ebp-F8h]
  float v126; // [esp+24h] [ebp-F8h]
  float v127; // [esp+24h] [ebp-F8h]
  bhkRefObject *v128; // [esp+24h] [ebp-F8h]
  int v129; // [esp+28h] [ebp-F4h] BYREF
  int v130; // [esp+2Ch] [ebp-F0h]
  float v131; // [esp+30h] [ebp-ECh]
  float v132; // [esp+34h] [ebp-E8h]
  float v133; // [esp+38h] [ebp-E4h]
  int v134; // [esp+3Ch] [ebp-E0h] BYREF
  int v135; // [esp+40h] [ebp-DCh]
  float v136; // [esp+44h] [ebp-D8h]
  float v137; // [esp+48h] [ebp-D4h]
  int v138; // [esp+4Ch] [ebp-D0h] BYREF
  int v139; // [esp+50h] [ebp-CCh] BYREF
  int v140; // [esp+54h] [ebp-C8h]
  unsigned int v141; // [esp+58h] [ebp-C4h]
  int v142; // [esp+5Ch] [ebp-C0h] BYREF
  int v143; // [esp+60h] [ebp-BCh]
  unsigned int v144; // [esp+64h] [ebp-B8h]
  float v145; // [esp+68h] [ebp-B4h]
  float v146; // [esp+6Ch] [ebp-B0h]
  float v147; // [esp+70h] [ebp-ACh]
  float v148; // [esp+74h] [ebp-A8h]
  UInt32 v149; // [esp+78h] [ebp-A4h]
  UInt32 v150; // [esp+7Ch] [ebp-A0h]
  bhkRefObject *v151; // [esp+80h] [ebp-9Ch]
  bhkRefObject *v152; // [esp+84h] [ebp-98h]
  float v153; // [esp+88h] [ebp-94h]
  float v154; // [esp+8Ch] [ebp-90h]
  int v155[2]; // [esp+94h] [ebp-88h] BYREF
  float v156; // [esp+9Ch] [ebp-80h]
  int v157[2]; // [esp+A0h] [ebp-7Ch] BYREF
  float v158; // [esp+A8h] [ebp-74h]
  Ni2DBufferMembr v159; // [esp+ACh] [ebp-70h] BYREF
  hkVector4 v160; // [esp+BCh] [ebp-60h] BYREF
  int v161; // [esp+CCh] [ebp-50h]
  unsigned int v162; // [esp+D0h] [ebp-4Ch]
  Ni2DBufferMembr v163; // [esp+DCh] [ebp-40h]
  Ni2DBufferMembr v164; // [esp+ECh] [ebp-30h]
  int v165; // [esp+118h] [ebp-4h]
  int savedregs; // [esp+11Ch] [ebp+0h] BYREF

  v133 = *(float *)&a1;
  *(_DWORD *)(a1 + 0x370) = 2;
  if ( a3 )
  {
    v4 = 0.0;
    v5 = *(Ni2DBuffer **)(a3 + 0x8C);
    v137 = 0.0;
    *(float *)&v150 = 0.0;
    v148 = 0.0;
    *(float *)&v149 = 0.0;
    v6 = hkFactor;
    if ( v5 )
    {
      NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x374), v5);
      v7 = sub_890BA0((int *)a1);
      if ( v7 && (v8 = *(_DWORD *)(v7 + 8)) != 0 )
        v9 = *(float *)(v8 + 0xC);
      else
        v9 = flt_B2EFC4;
      v132 = v9;
      v10 = a1;
      v123 = v132 * dbl_A372E0;
      v132 = 0.0;
      v11 = v147;
      v12 = v123;
      v13 = hkFactor;
      goto LABEL_96;
    }
    if ( *(_DWORD *)(a3 + 0x70) )
    {
      if ( !*(_BYTE *)(a3 + 0x85) )
      {
        v14 = sub_6FBA90(*(NiObjectNET **)(a3 + 0x70));
        if ( v14 )
        {
          v15 = sub_4707B0((float *)&v14[3], (float *)&v159.super.m_uiRefCount, *(float *)(a3 + 0x98));
          v16 = *v15;
          v105 = *(float *)(a3 + 0x98);
          v17 = v15[1];
          v18 = v15[2];
          v145 = v16;
          v146 = v17;
          v147 = v18;
          v19 = sub_4707B0((float *)&v14[1].members.m_uiRefCount, (float *)&v159.super.m_uiRefCount, v105);
          v20 = *v19;
          v21 = v19[1];
          *(float *)&v22 = Vector3_InitValue_;
          v130 = *((int *)&Vector3_InitValue_ + 1);
          v23 = dword_B3F9B0;
          v153 = v20;
          v154 = v21;
          v129 = v22;
          v131 = v23;
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 0x1F4) & 1) != 0 )
          {
            v146 = *(float *)(*(_DWORD *)(a3 + 0x70) + 0x2C);
            v132 = *(float *)(a3 + 0x98) * dbl_A492B0;
            v28 = v132;
            v147 = v132;
          }
          else
          {
            v147 = *(float *)(*(_DWORD *)(a3 + 0x70) + 0x2C);
            v132 = *(float *)(a3 + 0x98) * dbl_A492B0;
            v28 = v132;
            v146 = v132;
          }
          v20 = Vector3_InitValue_;
          v145 = v28;
          v21 = *(&Vector3_InitValue_ + 1);
          v29 = dword_B3F9B0;
          *(float *)&v22 = v20;
          *(float *)&v129 = v20;
          *(float *)&v130 = v21;
          v131 = v29;
          v153 = v20;
          v154 = v21;
        }
        v6 = hkFactor;
        v4 = 0.0;
LABEL_13:
        v24 = v145;
        v25 = v147;
        v26 = v146;
        if ( v147 >= (double)v145 && v26 <= v25 )
        {
          v27 = v133;
        }
        else
        {
          v27 = v133;
          *(_DWORD *)(LODWORD(v133) + 0x1F4) |= 1u;
        }
        if ( (*(_BYTE *)(LODWORD(v27) + 0x1F4) & 1) != 0 )
        {
          v34 = v26;
          v35 = v4;
          v36 = v34;
          v131 = v35;
          *(float *)&v129 = v20;
          v37 = v35;
          v38 = v24;
          v39 = v37;
          *(float *)&v130 = v21;
          if ( v38 <= v34 )
          {
            v49 = dbl_A3D0C0;
            v132 = v36 * v49;
            v50 = v38;
            v51 = v49;
            if ( v50 >= v25 )
            {
              v124 = v25;
              v125 = v50;
              v54 = v51;
              v44 = v25;
              v53 = v54;
            }
            else
            {
              v124 = v50;
              v52 = v51;
              v44 = v25;
              v53 = v52;
              v125 = v44;
            }
            *(float *)&v134 = v20;
            v136 = v131;
            *(float *)&v130 = v36 - v124 + *(float *)&v130;
            v135 = v130;
            *(float *)&v135 = *(float *)&v130 * dbl_A3D360;
            v42 = v53;
            v48 = v124;
          }
          else
          {
            v40 = dbl_A3D0C0;
            v132 = v38 * v40;
            v41 = v36;
            v42 = v40;
            if ( v41 >= v25 )
            {
              v124 = v25;
              v125 = v41;
              v46 = v38;
              v44 = v25;
              v45 = v46;
            }
            else
            {
              v124 = v41;
              v43 = v38;
              v44 = v25;
              v45 = v43;
              v125 = v44;
            }
            *(float *)&v135 = v21;
            v136 = v131;
            v47 = v45 - v124 + *(float *)&v129;
            v48 = v124;
            *(float *)&v129 = v47;
            v134 = v129;
            *(float *)&v134 = *(float *)&v129 * dbl_A3D360;
          }
          v10 = LODWORD(v133);
          if ( dbl_A31C70 * v125 <= v48 )
          {
            v11 = v44;
            v71 = v131;
          }
          else
          {
            v126 = v125 - v48;
            v131 = v126 * v42 + v48 + dbl_A2FC68;
            v136 = v131;
            v55 = v48;
            v56 = v42 * *(float *)(a3 + 0x4C);
            v57 = v55;
            v106 = v56;
            *(float *)(LODWORD(v133) + 0x314) = v106;
            *(float *)(v10 + 0x348) = v106 + *(float *)(v10 + 0x348);
            if ( v39 == *(float *)(a3 + 0x50) )
              *(float *)(a3 + 0x50) = v57 * v6;
            v138 = 0;
            v139 = 0;
            v140 = 0;
            v141 = 0x80000000;
            v142 = 0;
            v143 = 0;
            v144 = 0x80000000;
            v165 = 0;
            v58 = (bhkRefObject *)FormHeapAlloc(0x14u);
            LOBYTE(v165) = 1;
            if ( v58 )
              v152 = sub_8B6A40(v58, (int)&v129, (int)&v134, v124);
            else
              v152 = 0;
            LOBYTE(v165) = 0;
            v59 = hkFactor;
            v137 = v131 * v59;
            *(float *)&v150 = 0.0;
            v148 = v59 * v124;
            *(float *)&v107 = *(float *)&v129 - *(float *)&v134;
            *(float *)&v149 = *(float *)&v130 - *(float *)&v135;
            v133 = v131 - v136;
            v159.super.m_uiRefCount = v107;
            v159.width = v149;
            *(float *)&v159.height = v133;
            v60 = sub_404C90((float *)&v159.super.m_uiRefCount) * dbl_A2FAA0;
            v157[0] = v129;
            v108 = v60;
            v109 = v108 * hkFactor;
            *(float *)&v149 = v109 + v148 + v148;
            v131 = v126;
            v158 = v126;
            *(float *)&v130 = *(float *)&v130 - dbl_A49310;
            v157[1] = v130;
            v133 = v126 + 1.0;
            v131 = v133;
            v158 = v126 - 1.0;
            v61 = (bhkRefObject *)FormHeapAlloc(0x14u);
            v151 = v61;
            LOBYTE(v165) = 2;
            if ( v61 )
            {
              v110 = v126 - dbl_A2F928;
              v111 = sub_8B6A40(v61, (int)&v129, (int)v157, v110);
            }
            else
            {
              v111 = 0;
            }
            v136 = v126;
            v156 = v126;
            v62 = *(float *)&v135 + dbl_A49310;
            LOBYTE(v165) = 0;
            v155[0] = v134;
            *(float *)&v135 = v62;
            v155[1] = v135;
            v136 = v133;
            v156 = v126 - dbl_A2F928;
            v63 = (bhkRefObject *)FormHeapAlloc(0x14u);
            v151 = v63;
            LOBYTE(v165) = 3;
            if ( v63 )
            {
              v127 = v126 - dbl_A2F928;
              v128 = sub_8B6A40(v63, (int)&v134, (int)v155, v127);
            }
            else
            {
              v128 = 0;
            }
            LOBYTE(v165) = 0;
            if ( v152 )
              hkObject = v152->hkObject;
            else
              hkObject = 0;
            if ( v140 == (v141 & 0x3FFFFFFF) )
              sub_8A6EE0((int)&v139, 4);
            *(_DWORD *)(v139 + 4 * v140++) = hkObject;
            if ( v111 )
              v65 = v111->hkObject;
            else
              v65 = 0;
            if ( v140 == (v141 & 0x3FFFFFFF) )
              sub_8A6EE0((int)&v139, 4);
            *(_DWORD *)(v139 + 4 * v140++) = v65;
            if ( v128 )
              v66 = v128->hkObject;
            else
              v66 = 0;
            if ( v140 == (v141 & 0x3FFFFFFF) )
              sub_8A6EE0((int)&v139, 4);
            *(_DWORD *)(v139 + 4 * v140++) = v66;
            if ( v143 == (v144 & 0x3FFFFFFF) )
              sub_8A6EE0((int)&v142, 4);
            *(_DWORD *)(v142 + 4 * v143++) = 0;
            if ( v143 == (v144 & 0x3FFFFFFF) )
              sub_8A6EE0((int)&v142, 4);
            *(_DWORD *)(v142 + 4 * v143++) = 0;
            if ( v143 == (v144 & 0x3FFFFFFF) )
              sub_8A6EE0((int)&v142, 4);
            *(_DWORD *)(v142 + 4 * v143++) = 0;
            *(_DWORD *)(a3 + 0x9C) = 0;
            v67 = (bhkRefObject *)FormHeapAlloc(0x14u);
            v151 = v67;
            LOBYTE(v165) = 4;
            if ( v67 )
              v68 = sub_890410(v67, &v138);
            else
              v68 = 0;
            v69 = *(_DWORD *)(a3 + 0x8C) == 0;
            LOBYTE(v165) = 0;
            if ( v69 )
              v70 = *(_DWORD *)(a3 + 0x9C);
            else
              v70 = 0;
            NiSmartPointer_Set__((Ni2DBuffer **)(v10 + 4 * v70 + 0x374), (Ni2DBuffer *)v68);
            v165 = 0xFFFFFFFF;
            sub_893510(&v138);
            v6 = hkFactor;
            v39 = 0.0;
            v48 = v124;
            v71 = v131;
            v11 = v147;
          }
        }
        else
        {
          v134 = v22;
          v135 = v130;
          v132 = v25 + v25;
          v10 = LODWORD(v133);
          v79 = v25;
          v80 = v24 + v26;
          v81 = v79;
          v124 = v80 * dbl_A2FAA0;
          v48 = v124;
          v131 = v79 - v124 + v131;
          v82 = v131;
          v136 = v131;
          v136 = dbl_A3D360 * v131;
          v117 = v124 * dbl_A31C70;
          v118 = v117 * v6;
          if ( v118 <= (double)*(float *)(LODWORD(v133) + 0x248) )
          {
            v86 = v4;
            v11 = v81;
            v87 = v86;
            v71 = v131;
            v39 = v87;
          }
          else
          {
            *(float *)(LODWORD(v133) + 0x248) = v118;
            v83 = v82;
            v84 = v4;
            v11 = v81;
            v85 = v84;
            v71 = v83;
            v39 = v85;
          }
        }
        *(float *)(v10 + 0x340) = v153 * v6;
        *(float *)(v10 + 0x344) = v154 * v6;
        if ( *(_DWORD *)(v10 + 0x374) )
        {
          v92 = v48;
          goto LABEL_97;
        }
        v72 = v71;
        v112 = v71 + v48;
        v113 = v112 * v6;
        v73 = dbl_A3D0C0;
        v114 = *(float *)(a3 + 0x4C) * v73 + v113;
        *(float *)(v10 + 0x314) = v114;
        *(float *)(v10 + 0x348) = v114 + *(float *)(v10 + 0x348);
        v74 = v39;
        v75 = v73;
        if ( v74 == *(float *)(a3 + 0x50) )
          *(float *)(a3 + 0x50) = v48 * v6;
        v69 = (*(_BYTE *)(v10 + 0x1F4) & 1) == 0;
        v148 = *(float *)(a3 + 0x50);
        *(float *)&v149 = v75 * v148 + dbl_A2FAA0 * v148;
        v115 = v136 * v6;
        *(float *)&v150 = v115 - v148;
        if ( v69 )
        {
          v137 = v6 * v72;
          v103 = v48;
          v89 = sub_8905E0((int)&v129, (int)&v134, v103);
          NiSmartPointer_Set__((Ni2DBuffer **)(v10 + 0x374), (Ni2DBuffer *)v89);
          if ( *(_BYTE *)(a3 + 0x85) )
          {
            if ( !dword_BA7A64 )
            {
              v90 = sub_893230((float *)&v129, (float *)&v134, v124, *(float *)(v10 + 0x248));
              NiSmartPointer_Set__((Ni2DBuffer **)&dword_BA7A64, (Ni2DBuffer *)v90);
            }
            sub_55E2A0((int *)(v10 + 0x378), (int *)&dword_BA7A64);
            goto LABEL_95;
          }
          v78 = sub_893230((float *)&v129, (float *)&v134, v124, *(float *)(v10 + 0x248));
          v88 = (Ni2DBuffer **)(v10 + 0x378);
        }
        else
        {
          v76 = v148;
          *(_DWORD *)(a3 + 0x9C) = 0;
          v116 = v6 * v72;
          v137 = v76 + v116;
          v77 = (bhkRefObject *)FormHeapAlloc(0x14u);
          v151 = v77;
          v165 = 5;
          if ( v77 )
            v78 = sub_8B6A40(v77, (int)&v129, (int)&v134, v124);
          else
            v78 = 0;
          v69 = *(_DWORD *)(a3 + 0x8C) == 0;
          v165 = 0xFFFFFFFF;
          if ( v69 )
            v88 = (Ni2DBuffer **)(v10 + 4 * *(_DWORD *)(a3 + 0x9C) + 0x374);
          else
            v88 = (Ni2DBuffer **)(v10 + 0x374);
        }
        NiSmartPointer_Set__(v88, (Ni2DBuffer *)v78);
LABEL_95:
        v12 = v124;
        v13 = hkFactor;
        v11 = v147;
LABEL_96:
        v91 = v13;
        v92 = v12;
        v6 = v91;
LABEL_97:
        v119 = v92 * v6;
        *(float *)(v10 + 0x3A0) = v119;
        *(float *)(v10 + 0x3A8) = v119;
        *(float *)(v10 + 0x3A4) = v132 * v6;
        v120 = v11 + v11;
        *(float *)(v10 + 0x33C) = v6 * v120;
        if ( *(_DWORD *)(a3 + 0x8C) )
          v93 = 0;
        else
          v93 = *(_DWORD *)(a3 + 0x9C);
        sub_894940((int *)v10, v93);
        if ( *(_BYTE *)(a3 + 0x84) )
        {
          v160.w = 0.0;
          v161 = 0;
          v162 = 0x80000000;
          v160.y = 0.0;
          LOBYTE(v160.z) = 2;
          LODWORD(v94) = *(_DWORD *)(a3 + 0x74) & 0xFFFFFFC0 | 0x15;
          *(float *)&v150 = *(float *)(v10 + 0x248) + *(float *)&v150;
          v160.x = v94;
          v165 = 6;
          v137 = v148 + v137;
          v95 = v137;
          if ( v137 <= (double)*(float *)&v150 )
          {
            v137 = v95 + *(float *)(v10 + 0x248);
            v95 = v137;
          }
          v96 = dbl_A3D0C0;
          *(float *)&v121 = -v148 * v96;
          v159.super.m_uiRefCount = v121;
          v159.width = v121;
          v159.height = v150;
          *(float *)&v159.data = 0.0;
          v163 = v159;
          *(float *)&v122 = v96 * v148;
          v159.super.m_uiRefCount = v122;
          v159.width = v122;
          *(float *)&v159.height = v95;
          *(float *)&v159.data = 0.0;
          v164 = v159;
          v97 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000080uLL, v104);
          v98 = 0x10 - ((unsigned __int8)v97 & 0xF);
          v99 = (bhkRefObject *)((char *)v97 + v98);
          HIBYTE(v99[0xFFFFFFFF].hkObject) = v98;
          v151 = v99;
          LOBYTE(v165) = 7;
          v100 = sub_890A70(v99, &v160);
          v101 = (Ni2DBuffer **)(v10 + 0x368);
          LOBYTE(v165) = 6;
          NiSmartPointer_Set__(v101, (Ni2DBuffer *)v100);
          v102 = *v101;
          *(float *)&v159.super.m_uiRefCount = 0.0;
          v159.width = v149;
          v165 = 0xFFFFFFFF;
          *(float *)&v159.height = 0.0;
          *(float *)&v159.data = 0.0;
          v102[3].members = v159;
          sub_8A5090(&v160);
        }
        return;
      }
    }
    else if ( !*(_BYTE *)(a3 + 0x85) )
    {
      v30 = *(float *)(a3 + 0x98);
      goto LABEL_23;
    }
    v30 = 1.0;
LABEL_23:
    v20 = Vector3_InitValue_;
    v132 = v30;
    v21 = *(&Vector3_InitValue_ + 1);
    v31 = dbl_A492B8 * v132;
    *(float *)&v22 = v20;
    v32 = dword_B3F9B0;
    v153 = v20;
    v145 = v31;
    v154 = v21;
    v33 = dbl_A968E8;
    *(float *)&v129 = v20;
    *(float *)&v130 = v21;
    v131 = v32;
    v146 = v33 * v132;
    v147 = v132 * dbl_A4D910;
    goto LABEL_13;
  }
}
