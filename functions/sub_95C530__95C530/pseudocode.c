char __cdecl sub_95C530(float *a1, float *a2, int a3, NiGeometryData *a4)
{
  NiGeometryData *v4; // esi
  NiRTTI *v5; // eax
  NiTransform *p_m_pkColor; // ebx
  float *v8; // eax
  float *v9; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  double v11; // st7
  unsigned __int16 v12; // ax
  NiAdditionalGeometryData *v13; // ebp
  float v14; // edi
  int v15; // ecx
  int v16; // eax
  float v17; // ebp
  int v18; // eax
  int v19; // eax
  float v20; // ebp
  int v21; // eax
  int v22; // eax
  float v23; // ecx
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  int v27; // ebp
  float *v28; // eax
  float *v29; // esi
  NiTransform *v30; // eax
  double x; // st7
  double y; // st7
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  bool v36; // zf
  float *v37; // eax
  int v38; // ecx
  int v39; // edx
  float v40; // edi
  float v41; // edx
  float v42; // edx
  float v43; // ecx
  float v44; // edx
  float v45; // eax
  double v46; // st7
  int v47; // edi
  float *v48; // ebp
  float *v49; // eax
  float v50; // ecx
  double v51; // st7
  float *v52; // eax
  double v53; // st7
  int v54; // eax
  float v55; // edi
  int v56; // eax
  float v57; // edi
  float *v58; // eax
  float v59; // edi
  int v60; // eax
  float v61; // edx
  float *v62; // eax
  float v63; // ecx
  float v64; // eax
  int v65; // edi
  float *v66; // eax
  float *v67; // eax
  NiPoint3 *v68; // eax
  NiTransform *v69; // eax
  float v70; // ecx
  float v71; // edx
  float *v72; // eax
  float *v73; // eax
  float v74; // ecx
  float v75; // edx
  float v76; // eax
  int v77; // edi
  float *v78; // eax
  float *v79; // eax
  float v80; // eax
  float v81; // ecx
  float v82; // edx
  NiColorAlpha *m_pkColor; // ecx
  void *m_pkTexture; // edx
  double v85; // st7
  float v86; // eax
  float *v87; // eax
  float *v88; // esi
  double v89; // st7
  float v90; // eax
  double v91; // st7
  float *v92; // [esp+1Ch] [ebp-30Ch]
  float *v93; // [esp+1Ch] [ebp-30Ch]
  float *v94; // [esp+1Ch] [ebp-30Ch]
  float *v95; // [esp+24h] [ebp-304h]
  float *v96; // [esp+24h] [ebp-304h]
  float *v97; // [esp+24h] [ebp-304h]
  int v98; // [esp+38h] [ebp-2F0h] BYREF
  float v99; // [esp+3Ch] [ebp-2ECh] BYREF
  int v100; // [esp+40h] [ebp-2E8h] BYREF
  int v101; // [esp+44h] [ebp-2E4h]
  float v102; // [esp+48h] [ebp-2E0h] BYREF
  float z; // [esp+4Ch] [ebp-2DCh] BYREF
  float v104; // [esp+50h] [ebp-2D8h]
  NiPoint3 v105; // [esp+54h] [ebp-2D4h] BYREF
  float v106; // [esp+60h] [ebp-2C8h] BYREF
  float v107; // [esp+64h] [ebp-2C4h]
  float v108; // [esp+68h] [ebp-2C0h] BYREF
  float v109; // [esp+6Ch] [ebp-2BCh]
  float v110; // [esp+70h] [ebp-2B8h]
  float v111; // [esp+74h] [ebp-2B4h]
  float v112; // [esp+78h] [ebp-2B0h]
  float v113; // [esp+7Ch] [ebp-2ACh]
  float v114; // [esp+80h] [ebp-2A8h]
  float v115; // [esp+84h] [ebp-2A4h]
  float v116; // [esp+88h] [ebp-2A0h]
  float v117; // [esp+8Ch] [ebp-29Ch]
  float v118; // [esp+90h] [ebp-298h]
  float v119; // [esp+94h] [ebp-294h]
  float v120; // [esp+98h] [ebp-290h]
  float v121; // [esp+9Ch] [ebp-28Ch]
  float v122; // [esp+A0h] [ebp-288h]
  float v123; // [esp+A4h] [ebp-284h]
  float v124; // [esp+A8h] [ebp-280h]
  float v125; // [esp+ACh] [ebp-27Ch]
  float v126; // [esp+B0h] [ebp-278h]
  float v127; // [esp+B4h] [ebp-274h]
  float v128; // [esp+B8h] [ebp-270h]
  float v129; // [esp+BCh] [ebp-26Ch]
  float v130; // [esp+C0h] [ebp-268h] BYREF
  float v131; // [esp+C4h] [ebp-264h]
  float v132; // [esp+C8h] [ebp-260h]
  float v133; // [esp+CCh] [ebp-25Ch] BYREF
  float v134; // [esp+D0h] [ebp-258h]
  float v135; // [esp+D4h] [ebp-254h]
  float v136; // [esp+D8h] [ebp-250h] BYREF
  float v137; // [esp+DCh] [ebp-24Ch]
  float v138; // [esp+E0h] [ebp-248h]
  _DWORD v139[2]; // [esp+E4h] [ebp-244h] BYREF
  int v140; // [esp+ECh] [ebp-23Ch]
  NiPoint3 v141; // [esp+F0h] [ebp-238h] BYREF
  float v142; // [esp+FCh] [ebp-22Ch]
  float v143; // [esp+100h] [ebp-228h]
  float v144; // [esp+104h] [ebp-224h]
  float v145[3]; // [esp+108h] [ebp-220h] BYREF
  float v146; // [esp+114h] [ebp-214h]
  float v147; // [esp+118h] [ebp-210h]
  float v148; // [esp+11Ch] [ebp-20Ch]
  float v149; // [esp+120h] [ebp-208h]
  float v150; // [esp+124h] [ebp-204h]
  float v151; // [esp+128h] [ebp-200h]
  int v152; // [esp+12Ch] [ebp-1FCh] BYREF
  int v153; // [esp+130h] [ebp-1F8h]
  float v154; // [esp+134h] [ebp-1F4h]
  NiPoint3 v155; // [esp+138h] [ebp-1F0h]
  float v156; // [esp+144h] [ebp-1E4h]
  float v157; // [esp+148h] [ebp-1E0h]
  float v158; // [esp+14Ch] [ebp-1DCh]
  float v159; // [esp+150h] [ebp-1D8h]
  float v160; // [esp+154h] [ebp-1D4h]
  float v161; // [esp+158h] [ebp-1D0h]
  float v162; // [esp+15Ch] [ebp-1CCh]
  float v163; // [esp+160h] [ebp-1C8h]
  float v164; // [esp+164h] [ebp-1C4h]
  NiTransform v165; // [esp+168h] [ebp-1C0h] BYREF
  float v166; // [esp+19Ch] [ebp-18Ch]
  float v167; // [esp+1A0h] [ebp-188h] BYREF
  float v168; // [esp+1A4h] [ebp-184h]
  int v169; // [esp+1A8h] [ebp-180h]
  float v170; // [esp+1ACh] [ebp-17Ch]
  float v171; // [esp+1B0h] [ebp-178h]
  float v172; // [esp+1B4h] [ebp-174h]
  float v173; // [esp+1B8h] [ebp-170h]
  int v174[4]; // [esp+1BCh] [ebp-16Ch] BYREF
  int v175[4]; // [esp+1CCh] [ebp-15Ch] BYREF
  int v176[4]; // [esp+1DCh] [ebp-14Ch] BYREF
  float v177[3]; // [esp+1ECh] [ebp-13Ch] BYREF
  float v178[3]; // [esp+1F8h] [ebp-130h] BYREF
  float v179[3]; // [esp+204h] [ebp-124h] BYREF
  float v180[3]; // [esp+210h] [ebp-118h] BYREF
  float v181[4]; // [esp+21Ch] [ebp-10Ch] BYREF
  float v182[4]; // [esp+22Ch] [ebp-FCh] BYREF
  float v183[2]; // [esp+23Ch] [ebp-ECh] BYREF
  float v184[2]; // [esp+244h] [ebp-E4h] BYREF
  float v185[2]; // [esp+24Ch] [ebp-DCh] BYREF
  int v186[3]; // [esp+254h] [ebp-D4h] BYREF
  NiTransform v187; // [esp+260h] [ebp-C8h] BYREF
  float v188[3]; // [esp+29Ch] [ebp-8Ch] BYREF
  int v189[4]; // [esp+2A8h] [ebp-80h] BYREF
  int v190[4]; // [esp+2B8h] [ebp-70h] BYREF
  int v191[4]; // [esp+2C8h] [ebp-60h] BYREF
  int v192[4]; // [esp+2D8h] [ebp-50h] BYREF
  int v193[4]; // [esp+2E8h] [ebp-40h] BYREF
  float v194[4]; // [esp+2F8h] [ebp-30h] BYREF
  float v195[4]; // [esp+308h] [ebp-20h] BYREF
  int v196[4]; // [esp+318h] [ebp-10h] BYREF

  v4 = a4;
  if ( *(_DWORD *)(a3 + 8) && !a4[2].member.BuffData )
  {
    v5 = a4->__vftable->super.GetType(a4);
    if ( v5 )
    {
      while ( v5 != (NiRTTI *)dword_B3FD04 )
      {
        v5 = v5->parent;
        if ( !v5 )
          goto LABEL_6;
      }
      if ( *((_WORD *)a4[2].member.m_spAdditionalGeomData + 0x22) == 1 )
        return sub_95A380(a1, a2, a3, (int)a4);
    }
    else
    {
LABEL_6:
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FCD4, (NiObject *)a4) )
        return sub_95B240(a1, a2, a3, a4);
    }
    p_m_pkColor = (NiTransform *)&a4[1].member.m_pkColor;
    v177[0] = *a1 - *(float *)&a4[2].member.m_usVertices;
    v177[1] = a1[1] - a4[2].member.m_kBound.Center.x;
    v177[2] = a1[2] - a4[2].member.m_kBound.Center.y;
    v104 = 1.0 / a4[2].member.m_kBound.Center.z;
    v8 = sub_710250(v145, v177, (float *)&a4[1].member.m_pkColor);
    v109 = v8[1] * v104;
    v107 = v8[2] * v104;
    v180[0] = v104 * *v8;
    v180[1] = v109;
    v180[2] = v107;
    v9 = sub_710250(v145, a2, (float *)&a4[1].member.m_pkColor);
    m_spAdditionalGeomData = a4[2].member.m_spAdditionalGeomData;
    v11 = v104;
    v109 = v9[1] * v104;
    v104 = v9[2] * v104;
    v179[0] = v11 * *v9;
    v179[1] = v109;
    v179[2] = v104;
    v12 = (*(int (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x5C))(m_spAdditionalGeomData);
    v13 = a4[2].member.m_spAdditionalGeomData;
    LODWORD(v109) = v12;
    v152 = 0;
    v153 = 0;
    LOBYTE(v154) = 0;
    v14 = *((float *)v13 + 7);
    HIWORD(v101) = 0;
    v107 = *(float *)&v13;
    v102 = v14;
    if ( v14 == 0.0 )
    {
      v15 = *((_DWORD *)v13 + 0xD);
      if ( v15 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 0x4C))(v15) )
        {
          BYTE2(v101) = sub_728AB0((int)v13, 1);
          sub_728B60((int)v13, (int)&v152);
        }
      }
    }
    v104 = 0.0;
    if ( !LOWORD(v109) )
    {
LABEL_55:
      if ( BYTE2(v101) )
        sub_728B20((int)v13);
      return HIBYTE(v101);
    }
    while ( 1 )
    {
      (*(void (__thiscall **)(NiAdditionalGeometryData *, float, int *, int *, float *))(*(_DWORD *)v4[2].member.m_spAdditionalGeomData
                                                                                       + 0x60))(
        v4[2].member.m_spAdditionalGeomData,
        COERCE_FLOAT(LODWORD(v104)),
        &v98,
        &v100,
        &v99);
      if ( v14 == 0.0 )
      {
        v16 = v153 * (unsigned __int16)v98;
        v17 = *(float *)(v16 + v152);
        v18 = v152 + v16;
        v136 = v17;
        v137 = *(float *)(v18 + 4);
        v138 = *(float *)(v18 + 8);
        v19 = v153 * (unsigned __int16)v100;
        v20 = *(float *)(v19 + v152);
        v21 = v152 + v19;
        v130 = v20;
        v131 = *(float *)(v21 + 4);
        v132 = *(float *)(v21 + 8);
        v22 = v153 * LOWORD(v99);
        v23 = *(float *)(v22 + v152);
        v24 = (float *)(v152 + v22);
        v133 = v23;
      }
      else
      {
        v25 = (float *)(LODWORD(v14) + 0xC * (unsigned __int16)v98);
        v136 = *v25;
        v137 = v25[1];
        v138 = v25[2];
        v26 = (float *)(LODWORD(v14) + 0xC * (unsigned __int16)v100);
        v130 = *v26;
        v131 = v26[1];
        v132 = v26[2];
        v24 = (float *)(LODWORD(v14) + 0xC * LOWORD(v99));
        v133 = *v24;
      }
      v134 = v24[1];
      v135 = v24[2];
      v27 = a3;
      LOBYTE(v173) = *(_BYTE *)(a3 + 0x10);
      if ( sub_96E5E0(v180, v179, &v136, &v130, &v133, SLOBYTE(v173), &v141, &v165.rot.data[1][1], &v106, &v108) )
      {
        HIBYTE(v101) = 1;
        v28 = (float *)FormHeapAlloc(0x44u);
        if ( v28 )
          *(float *)&v29 = COERCE_FLOAT(sub_95A2D0(v28, (int)v4));
        else
          *(float *)&v29 = 0.0;
        if ( *(_DWORD *)(a3 + 0xC) == 1 )
        {
          v30 = sub_7101F0(p_m_pkColor, &v187, &v141);
          z = a4[2].member.m_kBound.Center.z;
          v159 = z * v30->rot.data[0][0];
          v160 = v30->rot.data[0][1] * z;
          v161 = z * v30->rot.data[0][2];
          v156 = v159 + *(float *)&a4[2].member.m_usVertices;
          x = a4[2].member.m_kBound.Center.x;
          v141.x = v156;
          v157 = x + v160;
          y = a4[2].member.m_kBound.Center.y;
          v141.y = v157;
          v158 = y + v161;
          v141.z = v158;
        }
        v29[2] = v141.x;
        v33 = LOWORD(v104);
        v29[3] = v141.y;
        v29[4] = v141.z;
        v29[5] = v165.rot.data[1][1];
        *((_WORD *)v29 + 0xC) = v33;
        v34 = LOWORD(v99);
        v35 = v100;
        *((_WORD *)v29 + 0xD) = v98;
        *((_WORD *)v29 + 0xE) = v35;
        *((_WORD *)v29 + 0xF) = v34;
        v36 = *(_BYTE *)(a3 + 0x2C) == 0;
        z = 1.0 - (v106 + v108);
        if ( v36 )
        {
          v29[8] = flt_B3FC80;
          v29[9] = flt_B3FC84;
        }
        else
        {
          memset(&v165.rot.data[2][2], 0, 9);
          sub_728E70(SLODWORD(v107), 0, (int)&v165.rot.data[2][2]);
          if ( LODWORD(v165.rot.data[2][2]) )
          {
            v37 = (float *)(LODWORD(v165.rot.data[2][2]) + LODWORD(v165.pos.x) * (unsigned __int16)v98);
            v38 = LODWORD(v165.rot.data[2][2]) + LODWORD(v165.pos.x) * (unsigned __int16)v100;
            v39 = LODWORD(v165.rot.data[2][2]) + LODWORD(v165.pos.x) * LOWORD(v99);
            v40 = *(float *)v39;
            v41 = *(float *)(v39 + 4);
            v114 = v40;
            v115 = v41;
            v42 = *(float *)v38;
            v43 = *(float *)(v38 + 4);
            v124 = v42;
            v44 = *v37;
            v45 = v37[1];
            v114 = v40 * v108;
            v27 = a3;
            v115 = v108 * v115;
            v124 = v124 * v106;
            v125 = v106 * v43;
            v112 = v44 * z;
            v113 = z * v45;
            v119 = v112 + v124;
            v120 = v113 + v125;
            v126 = v119 + v114;
            v46 = v120;
            v29[8] = v126;
            v127 = v46 + v115;
            v29[9] = v127;
          }
          else
          {
            v47 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 0xA);
            if ( v47 )
            {
              v48 = sub_95A280(v184, v106, (float *)(v47 + 8 * (unsigned __int16)v100));
              v49 = sub_95A280(v185, z, (float *)(v47 + 8 * (unsigned __int16)v98));
              v50 = *v49;
              v51 = *v48;
              v111 = v49[1];
              v110 = v51 + v50;
              v111 = v48[1] + v111;
              v52 = sub_95A280(v183, v108, (float *)(v47 + 8 * LOWORD(v99)));
              v27 = a3;
              v128 = v110 + *v52;
              v53 = v52[1] + v111;
              v29[8] = v128;
              v129 = v53;
              v29[9] = v129;
            }
            else
            {
              v29[8] = flt_B3FC80;
              v29[9] = flt_B3FC84;
            }
          }
        }
        if ( *(_BYTE *)(v27 + 0x2D) )
        {
          v167 = 0.0;
          v168 = 0.0;
          LOBYTE(v169) = 0;
          sub_728D00(SLODWORD(v107), (int)&v167);
          if ( LODWORD(v167) )
          {
            v54 = LODWORD(v168) * (unsigned __int16)v98;
            v55 = *(float *)(v54 + LODWORD(v167));
            v56 = LODWORD(v167) + v54;
            v165.rot.data[1][2] = v55;
            v57 = *(float *)(v56 + 4);
            v165.rot.data[2][1] = *(float *)(v56 + 8);
            v58 = (float *)(LODWORD(v167) + LODWORD(v168) * (unsigned __int16)v100);
            v165.rot.data[2][0] = v57;
            v165.pos.z = *v58;
            v59 = v58[1];
            v166 = v58[2];
            v60 = LODWORD(v168) * LOWORD(v99);
            v61 = *(float *)(v60 + LODWORD(v167) + 4);
            v62 = (float *)(LODWORD(v167) + v60);
            v63 = *v62;
            v64 = v62[2];
            v142 = v63;
            v143 = v61;
            v144 = v64;
            v165.scale = v59;
            v149 = v63 * v108;
            v150 = v61 * v108;
            v151 = v108 * v64;
            v162 = v165.pos.z * v106;
            v163 = v59 * v106;
            v164 = v106 * v166;
            v170 = v165.rot.data[1][2] * z;
            v171 = v165.rot.data[2][0] * z;
            v172 = z * v165.rot.data[2][1];
            v146 = v170 + v162;
            v147 = v171 + v163;
            v148 = v172 + v164;
            v155.x = v146 + v149;
            v155.y = v147 + v150;
            v155.z = v148 + v151;
            v105 = v155;
          }
          else
          {
            if ( *(_BYTE *)(v27 + 0x2E) && (v65 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 8)) != 0 )
            {
              v95 = sub_47DA10(v187.rot.data[1], v108, (float *)(v65 + 0xC * LOWORD(v99)));
              v92 = sub_47DA10((float *)v186, v106, (float *)(v65 + 0xC * (unsigned __int16)v100));
              v66 = sub_47DA10(&v187.scale, z, (float *)(v65 + 0xC * (unsigned __int16)v98));
              v67 = sub_47D9B0(v66, v188, v92);
              v68 = (NiPoint3 *)sub_47D9B0(v67, &v187.pos.x, v95);
            }
            else
            {
              v116 = v130 - v136;
              v145[0] = v116;
              v117 = v131 - v137;
              v145[1] = v117;
              v118 = v132 - v138;
              v145[2] = v118;
              v121 = v133 - v136;
              v178[0] = v121;
              v122 = v134 - v137;
              v178[1] = v122;
              v123 = v135 - v138;
              v178[2] = v123;
              v68 = (NiPoint3 *)sub_498FE0(v145, v187.rot.data[2], v178);
            }
            v105 = *v68;
          }
          sub_43F350(&v105.x);
          if ( *(_DWORD *)(v27 + 0xC) == 1 )
          {
            v69 = sub_7101F0(p_m_pkColor, &v165, &v105);
            v105.x = v69->rot.data[0][0];
            v105.y = v69->rot.data[0][1];
            v105.z = v69->rot.data[0][2];
          }
          v70 = v105.y;
          v71 = v105.z;
          v29[0xA] = v105.x;
          v29[0xB] = v70;
        }
        else
        {
          v29[0xA] = Vector3_InitValue_;
          v29[0xB] = *(&Vector3_InitValue_ + 1);
          v71 = dword_B3F9B0;
        }
        v29[0xC] = v71;
        if ( *(_BYTE *)(v27 + 0x2F) )
        {
          v139[0] = 0;
          v139[1] = 0;
          LOBYTE(v140) = 0;
          sub_728DB0(SLODWORD(v107), (int)v139);
          if ( v139[0] )
          {
            *(float *)v174 = 0.0;
            *(float *)&v174[1] = 0.0;
            *(float *)&v174[2] = 0.0;
            *(float *)&v174[3] = 0.0;
            *(float *)v176 = 0.0;
            *(float *)&v176[1] = 0.0;
            *(float *)&v176[2] = 0.0;
            *(float *)&v176[3] = 0.0;
            *(float *)v175 = 0.0;
            *(float *)&v175[1] = 0.0;
            *(float *)&v175[2] = 0.0;
            *(float *)&v175[3] = 0.0;
            sub_4C1440(v139, (unsigned __int16)v98, (float *)v174);
            sub_4C1440(v139, (unsigned __int16)v100, (float *)v176);
            sub_4C1440(v139, LOWORD(v99), (float *)v175);
            v96 = sub_4BFBD0((float *)v189, v108, (float *)v175);
            v93 = sub_4BFBD0((float *)v191, v106, (float *)v176);
            v72 = sub_4BFBD0((float *)v193, z, (float *)v174);
            v73 = sub_4BFB30(v72, v195, v93);
            sub_4BFB30(v73, v182, v96);
            v74 = v182[1];
            v75 = v182[2];
            v29[0xD] = v182[0];
            v76 = v182[3];
            v29[0xE] = v74;
            v29[0xF] = v75;
            v29[0x10] = v76;
          }
          else
          {
            v77 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 9);
            if ( v77 )
            {
              v97 = sub_4BFBD0((float *)v190, v108, (float *)(v77 + 0x10 * LOWORD(v99)));
              v94 = sub_4BFBD0((float *)v192, v106, (float *)(v77 + 0x10 * (unsigned __int16)v100));
              v78 = sub_4BFBD0((float *)v196, z, (float *)(v77 + 0x10 * (unsigned __int16)v98));
              v79 = sub_4BFB30(v78, v194, v94);
              sub_4BFB30(v79, v181, v97);
              v80 = v181[1];
              v81 = v181[2];
              v29[0xD] = v181[0];
              v82 = v181[3];
              v29[0xE] = v80;
              v29[0xF] = v81;
              v29[0x10] = v82;
            }
            else
            {
              *((_DWORD *)v29 + 0xD) = dword_B25AE0;
              *((_DWORD *)v29 + 0xE) = dword_B25AE4;
              *((_DWORD *)v29 + 0xF) = dword_B25AE8;
              *((_DWORD *)v29 + 0x10) = dword_B25AEC;
            }
          }
        }
        else
        {
          *((_DWORD *)v29 + 0xD) = dword_B25AE0;
          *((_DWORD *)v29 + 0xE) = dword_B25AE4;
          *((_DWORD *)v29 + 0xF) = dword_B25AE8;
          *((_DWORD *)v29 + 0x10) = dword_B25AEC;
        }
        z = *(float *)&v29;
        *(float *)(v27 + 0x28) = *(float *)&v29;
        sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(v27 + 0x18), &z);
        if ( *(_DWORD *)v27 == 1 && *(_DWORD *)(v27 + 4) == 1 )
        {
          if ( BYTE2(v101) )
          {
            sub_728B20(SLODWORD(v107));
            return 1;
          }
          return 1;
        }
        v4 = a4;
        v14 = v102;
      }
      ++LODWORD(v104);
      if ( LOWORD(v104) >= LOWORD(v109) )
      {
        *(float *)&v13 = v107;
        goto LABEL_55;
      }
    }
  }
  m_pkColor = a4->member.m_pkColor;
  m_pkTexture = a4->member.m_pkTexture;
  LODWORD(v165.rot.data[0][0]) = a4->member.m_pkNormal;
  v85 = v165.rot.data[0][0] - *a1;
  *(_QWORD *)&v165.rot.data[0][1] = __PAIR64__((unsigned int)m_pkTexture, (unsigned int)m_pkColor);
  v86 = *(float *)&a4->member.format;
  v105.x = v85;
  v165.rot.data[1][0] = v86;
  v105.y = *(float *)&m_pkColor - a1[1];
  v105.z = *(float *)&m_pkTexture - a1[2];
  v102 = v105.y * a2[1] + *a2 * v105.x + v105.z * a2[2];
  if ( v102 < (double)*(float *)&SrcStr )
    return 0;
  v87 = (float *)FormHeapAlloc(0x44u);
  if ( v87 )
    *(float *)&v88 = COERCE_FLOAT(sub_95A2D0(v87, (int)a4));
  else
    *(float *)&v88 = 0.0;
  v102 = *(float *)&v88;
  *(float *)(a3 + 0x28) = *(float *)&v88;
  sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a3 + 0x18), &v102);
  v102 = v105.y * v105.y + v105.x * v105.x + v105.z * v105.z;
  v102 = sqrt(v102);
  v89 = v102;
  v88[5] = v102;
  if ( *(_DWORD *)(a3 + 8) != 1 )
    return 1;
  v102 = v89;
  v121 = *a2 * v102;
  v122 = v102 * a2[1];
  v123 = v102 * a2[2];
  v116 = *a1 + v121;
  v117 = a1[1] + v122;
  v90 = v117;
  v91 = v123 + a1[2];
  v88[2] = v116;
  v88[3] = v90;
  v118 = v91;
  v88[4] = v118;
  return 1;
}
