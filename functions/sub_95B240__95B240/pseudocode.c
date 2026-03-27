char __cdecl sub_95B240(float *a1, float *a2, int a3, NiGeometryData *a4)
{
  float *v4; // eax
  float *v5; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx
  double v7; // st7
  unsigned __int16 v8; // ax
  NiAdditionalGeometryData *v9; // edi
  int v10; // ecx
  int v11; // edx
  unsigned __int16 v12; // bp
  float v13; // ebx
  int v14; // eax
  int v15; // esi
  int v17; // edi
  int v18; // ebp
  float *v19; // esi
  float *v20; // eax
  float *v21; // eax
  int v22; // ebx
  float *v23; // edx
  float *v24; // eax
  float *v25; // eax
  float v26; // edx
  float *v27; // eax
  float *v28; // eax
  float *v29; // esi
  NiTransform *v30; // eax
  double x; // st7
  double y; // st7
  __int16 v33; // ax
  __int16 v34; // cx
  double v35; // st7
  __int16 v36; // dx
  float *v37; // eax
  float *v38; // ecx
  float v39; // edx
  float v40; // ecx
  double v41; // st7
  float v42; // ecx
  float v43; // edx
  float v44; // eax
  double v45; // st7
  float v46; // eax
  int v47; // eax
  float v48; // edx
  float v49; // ecx
  float v50; // edx
  float v51; // ecx
  float v52; // edx
  double v53; // st7
  float *v54; // eax
  float v55; // edx
  float *v56; // eax
  float *v57; // ecx
  float v58; // edx
  float v59; // eax
  float v60; // eax
  float v61; // ecx
  int v62; // ecx
  float *v63; // eax
  double v64; // st7
  float *v65; // eax
  double v66; // st7
  float *v67; // eax
  float v68; // eax
  float v69; // ecx
  float v70; // edx
  NiTransform *v71; // eax
  float v72; // edx
  float v73; // eax
  double v74; // st7
  double v75; // st7
  double v76; // st7
  int v77; // eax
  int v78; // ebx
  float v79; // edx
  float v80; // ecx
  int v81; // ebx
  double v82; // st7
  float v83; // edx
  float v84; // ecx
  int v85; // ebp
  float v86; // edx
  float v87; // ecx
  int v88; // ebp
  float v89; // edx
  float v90; // ecx
  int v91; // edi
  float v92; // edx
  float v93; // ecx
  int v94; // edi
  float v95; // eax
  float v96; // edx
  double v97; // st7
  double v98; // st7
  double v99; // st7
  char v100; // [esp+12h] [ebp-2D6h]
  char v101; // [esp+13h] [ebp-2D5h]
  float v102; // [esp+14h] [ebp-2D4h]
  float v103; // [esp+14h] [ebp-2D4h]
  unsigned __int16 v104; // [esp+14h] [ebp-2D4h]
  float z; // [esp+18h] [ebp-2D0h]
  float v106; // [esp+18h] [ebp-2D0h]
  float v107; // [esp+1Ch] [ebp-2CCh]
  int v108; // [esp+1Ch] [ebp-2CCh]
  float v109; // [esp+20h] [ebp-2C8h] BYREF
  float v110; // [esp+24h] [ebp-2C4h] BYREF
  float v111; // [esp+28h] [ebp-2C0h]
  float *v112; // [esp+2Ch] [ebp-2BCh] BYREF
  NiPoint3 v113; // [esp+30h] [ebp-2B8h] BYREF
  float v114; // [esp+3Ch] [ebp-2ACh]
  float v115; // [esp+40h] [ebp-2A8h]
  float v116; // [esp+44h] [ebp-2A4h]
  float v117; // [esp+48h] [ebp-2A0h]
  float v118; // [esp+4Ch] [ebp-29Ch]
  float v119; // [esp+50h] [ebp-298h]
  float v120; // [esp+54h] [ebp-294h]
  float v121; // [esp+58h] [ebp-290h]
  float v122; // [esp+5Ch] [ebp-28Ch]
  float v123; // [esp+60h] [ebp-288h]
  float v124; // [esp+64h] [ebp-284h]
  float v125; // [esp+68h] [ebp-280h]
  float v126; // [esp+6Ch] [ebp-27Ch]
  float v127; // [esp+70h] [ebp-278h]
  float v128; // [esp+74h] [ebp-274h]
  float v129; // [esp+78h] [ebp-270h]
  float v130; // [esp+7Ch] [ebp-26Ch]
  float v131; // [esp+80h] [ebp-268h]
  float v132; // [esp+84h] [ebp-264h]
  float v133; // [esp+88h] [ebp-260h]
  float v134; // [esp+8Ch] [ebp-25Ch]
  float v135; // [esp+90h] [ebp-258h]
  float v136; // [esp+94h] [ebp-254h]
  float v137; // [esp+98h] [ebp-250h]
  float v138; // [esp+9Ch] [ebp-24Ch]
  float v139; // [esp+A0h] [ebp-248h]
  float v140; // [esp+A4h] [ebp-244h]
  float v141; // [esp+A8h] [ebp-240h]
  float v142; // [esp+ACh] [ebp-23Ch]
  float v143; // [esp+B0h] [ebp-238h]
  float v144; // [esp+B4h] [ebp-234h]
  float v145; // [esp+B8h] [ebp-230h]
  float v146; // [esp+BCh] [ebp-22Ch]
  float v147; // [esp+C0h] [ebp-228h]
  float v148; // [esp+C4h] [ebp-224h]
  float v149; // [esp+C8h] [ebp-220h]
  float v150; // [esp+CCh] [ebp-21Ch]
  float v151; // [esp+D0h] [ebp-218h]
  float v152; // [esp+D4h] [ebp-214h]
  float v153; // [esp+D8h] [ebp-210h]
  float v154; // [esp+DCh] [ebp-20Ch]
  float v155; // [esp+E0h] [ebp-208h]
  float v156; // [esp+E4h] [ebp-204h]
  float v157; // [esp+E8h] [ebp-200h]
  float v158; // [esp+ECh] [ebp-1FCh]
  float v159; // [esp+F0h] [ebp-1F8h]
  float v160; // [esp+F4h] [ebp-1F4h]
  float v161; // [esp+F8h] [ebp-1F0h]
  float v162; // [esp+FCh] [ebp-1ECh]
  float v163; // [esp+100h] [ebp-1E8h]
  float v164; // [esp+104h] [ebp-1E4h]
  float v165; // [esp+108h] [ebp-1E0h]
  float v166; // [esp+10Ch] [ebp-1DCh]
  float v167; // [esp+110h] [ebp-1D8h]
  float v168; // [esp+114h] [ebp-1D4h]
  float v169; // [esp+118h] [ebp-1D0h]
  float v170; // [esp+11Ch] [ebp-1CCh]
  float v171; // [esp+120h] [ebp-1C8h]
  float v172; // [esp+124h] [ebp-1C4h]
  float v173; // [esp+128h] [ebp-1C0h]
  int v174; // [esp+12Ch] [ebp-1BCh] BYREF
  int v175; // [esp+130h] [ebp-1B8h]
  char v176; // [esp+134h] [ebp-1B4h]
  float v177; // [esp+138h] [ebp-1B0h] BYREF
  float v178; // [esp+13Ch] [ebp-1ACh]
  float v179; // [esp+140h] [ebp-1A8h]
  float v180; // [esp+144h] [ebp-1A4h] BYREF
  float v181; // [esp+148h] [ebp-1A0h]
  float v182; // [esp+14Ch] [ebp-19Ch]
  float v183; // [esp+150h] [ebp-198h] BYREF
  float v184; // [esp+154h] [ebp-194h]
  float v185; // [esp+158h] [ebp-190h]
  _DWORD v186[2]; // [esp+15Ch] [ebp-18Ch] BYREF
  char v187; // [esp+164h] [ebp-184h]
  NiPoint3 v188; // [esp+168h] [ebp-180h] BYREF
  int v189; // [esp+174h] [ebp-174h] BYREF
  int v190; // [esp+178h] [ebp-170h]
  char v191; // [esp+17Ch] [ebp-16Ch]
  float v192; // [esp+180h] [ebp-168h] BYREF
  float v193; // [esp+184h] [ebp-164h]
  float v194; // [esp+188h] [ebp-160h]
  float v195; // [esp+18Ch] [ebp-15Ch] BYREF
  float v196; // [esp+190h] [ebp-158h]
  float v197; // [esp+194h] [ebp-154h]
  float v198; // [esp+198h] [ebp-150h]
  float v199; // [esp+19Ch] [ebp-14Ch] BYREF
  float v200; // [esp+1A0h] [ebp-148h]
  float v201; // [esp+1A4h] [ebp-144h]
  float v202; // [esp+1A8h] [ebp-140h]
  float v203; // [esp+1ACh] [ebp-13Ch] BYREF
  float v204; // [esp+1B0h] [ebp-138h]
  float v205; // [esp+1B4h] [ebp-134h]
  float v206; // [esp+1B8h] [ebp-130h]
  int v207; // [esp+1BCh] [ebp-12Ch] BYREF
  int v208; // [esp+1C0h] [ebp-128h]
  char v209; // [esp+1C4h] [ebp-124h]
  float v210; // [esp+1C8h] [ebp-120h]
  float v211; // [esp+1CCh] [ebp-11Ch]
  float v212; // [esp+1D0h] [ebp-118h]
  NiPoint3 v213; // [esp+1D4h] [ebp-114h]
  float v214; // [esp+1E0h] [ebp-108h]
  float v215; // [esp+1E4h] [ebp-104h]
  float v216; // [esp+1E8h] [ebp-100h]
  int v217; // [esp+1ECh] [ebp-FCh]
  float v218; // [esp+1F0h] [ebp-F8h]
  float v219; // [esp+1F4h] [ebp-F4h]
  float v220; // [esp+1F8h] [ebp-F0h]
  int v221; // [esp+1FCh] [ebp-ECh]
  float v222; // [esp+200h] [ebp-E8h]
  float v223; // [esp+204h] [ebp-E4h]
  float v224; // [esp+208h] [ebp-E0h]
  int v225; // [esp+20Ch] [ebp-DCh]
  float v226; // [esp+210h] [ebp-D8h]
  float v227; // [esp+214h] [ebp-D4h]
  float v228; // [esp+218h] [ebp-D0h]
  int v229; // [esp+21Ch] [ebp-CCh]
  int v230; // [esp+220h] [ebp-C8h]
  float v231; // [esp+224h] [ebp-C4h] BYREF
  float v232; // [esp+228h] [ebp-C0h]
  float v233; // [esp+22Ch] [ebp-BCh]
  float v234; // [esp+230h] [ebp-B8h]
  float v235; // [esp+234h] [ebp-B4h]
  float v236; // [esp+238h] [ebp-B0h]
  float v237; // [esp+23Ch] [ebp-ACh]
  float v238; // [esp+240h] [ebp-A8h]
  float v239; // [esp+244h] [ebp-A4h]
  float v240; // [esp+248h] [ebp-A0h]
  float v241; // [esp+24Ch] [ebp-9Ch]
  float v242; // [esp+250h] [ebp-98h]
  float v243; // [esp+254h] [ebp-94h]
  float v244; // [esp+258h] [ebp-90h]
  float v245; // [esp+25Ch] [ebp-8Ch]
  float v246; // [esp+260h] [ebp-88h]
  float v247; // [esp+264h] [ebp-84h]
  float v248; // [esp+268h] [ebp-80h]
  float v249; // [esp+26Ch] [ebp-7Ch]
  float v250; // [esp+270h] [ebp-78h]
  float v251; // [esp+274h] [ebp-74h]
  float v252; // [esp+278h] [ebp-70h]
  float v253; // [esp+27Ch] [ebp-6Ch]
  float v254; // [esp+280h] [ebp-68h]
  float v255; // [esp+284h] [ebp-64h]
  float v256; // [esp+288h] [ebp-60h]
  float v257; // [esp+28Ch] [ebp-5Ch]
  float v258; // [esp+290h] [ebp-58h]
  float v259; // [esp+294h] [ebp-54h]
  float v260; // [esp+298h] [ebp-50h]
  float v261; // [esp+29Ch] [ebp-4Ch]
  float v262; // [esp+2A0h] [ebp-48h]
  float v263; // [esp+2A4h] [ebp-44h]
  float v264; // [esp+2A8h] [ebp-40h]
  float v265[3]; // [esp+2ACh] [ebp-3Ch] BYREF
  float v266[3]; // [esp+2B8h] [ebp-30h] BYREF
  float v267[3]; // [esp+2C4h] [ebp-24h] BYREF
  char v268; // [esp+2D0h] [ebp-18h] BYREF
  char v269; // [esp+2DCh] [ebp-Ch] BYREF

  v267[0] = *a1 - *(float *)&a4[2].member.m_usVertices;
  v267[1] = a1[1] - a4[2].member.m_kBound.Center.x;
  v267[2] = a1[2] - a4[2].member.m_kBound.Center.y;
  v102 = 1.0 / a4[2].member.m_kBound.Center.z;
  v4 = sub_710250(&v192, v267, (float *)&a4[1].member.m_pkColor);
  v111 = v4[1] * v102;
  v107 = v4[2] * v102;
  v266[0] = v102 * *v4;
  v266[1] = v111;
  v266[2] = v107;
  v5 = sub_710250(&v192, a2, (float *)&a4[1].member.m_pkColor);
  m_spAdditionalGeomData = a4[2].member.m_spAdditionalGeomData;
  v101 = 0;
  v7 = v102;
  v111 = v5[1] * v102;
  v103 = v5[2] * v102;
  v265[0] = v7 * *v5;
  v265[1] = v111;
  v265[2] = v103;
  v8 = (*(int (__thiscall **)(NiAdditionalGeometryData *))(*(_DWORD *)m_spAdditionalGeomData + 0x5C))(m_spAdditionalGeomData);
  v9 = a4[2].member.m_spAdditionalGeomData;
  v10 = 0;
  v11 = 0;
  v12 = v8;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v13 = *((float *)v9 + 7);
  v225 = v8;
  v100 = 0;
  v108 = (int)v9;
  v111 = v13;
  if ( v13 == 0.0 )
  {
    v14 = *((_DWORD *)v9 + 0xD);
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v14 + 0x4C))(*((_DWORD *)v9 + 0xD)) )
      {
        v100 = sub_728AB0((int)v9, 1);
        sub_728B60((int)v9, (int)&v174);
      }
      v10 = v174;
      v11 = v175;
    }
  }
  v15 = *((_DWORD *)v9 + 0x12);
  v221 = v15;
  v104 = 0;
  if ( !v12 )
  {
LABEL_7:
    if ( v100 )
      sub_728B20((int)v9);
    return v101;
  }
  while ( 1 )
  {
    v17 = *(unsigned __int16 *)(v15 + 6 * v104);
    v18 = *(unsigned __int16 *)(v15 + 6 * v104 + 2);
    v19 = (float *)*(unsigned __int16 *)(v15 + 6 * v104 + 4);
    v230 = v17;
    v217 = v18;
    v112 = v19;
    if ( v100 )
    {
      v20 = (float *)(v10 + (unsigned __int16)v17 * v11);
      v183 = *v20;
      v184 = v20[1];
      v185 = v20[2];
      v21 = (float *)(v10 + (unsigned __int16)v18 * v11);
      v180 = *v21;
      v181 = v21[1];
      v22 = (unsigned __int16)v19;
      v23 = (float *)(v10 + (unsigned __int16)v19 * v11);
      v182 = v21[2];
      v177 = *v23;
      v178 = v23[1];
      v179 = v23[2];
    }
    else
    {
      v24 = (float *)(LODWORD(v13) + 0xC * (unsigned __int16)v17);
      v183 = *v24;
      v184 = v24[1];
      v185 = v24[2];
      v25 = (float *)(LODWORD(v13) + 0xC * (unsigned __int16)v18);
      v180 = *v25;
      v181 = v25[1];
      v26 = v25[2];
      v22 = (unsigned __int16)v19;
      v27 = (float *)(LODWORD(v111) + 0xC * (unsigned __int16)v19);
      v182 = v26;
      v177 = *v27;
      v178 = v27[1];
      v179 = v27[2];
    }
    LOBYTE(v229) = *(_BYTE *)(a3 + 0x10);
    if ( sub_96E5E0(v266, v265, &v183, &v180, &v177, v229, &v188, &v231, &v110, &v109) )
      break;
LABEL_49:
    if ( ++v104 >= (unsigned __int16)v225 )
    {
      v9 = (NiAdditionalGeometryData *)v108;
      goto LABEL_7;
    }
    v11 = v175;
    v10 = v174;
    v15 = v221;
    v13 = v111;
  }
  v101 = 1;
  v28 = (float *)FormHeapAlloc(0x44u);
  if ( v28 )
    v29 = sub_95A2D0(v28, (int)a4);
  else
    v29 = 0;
  if ( *(_DWORD *)(a3 + 0xC) == 1 )
  {
    v30 = sub_7101F0((NiTransform *)&a4[1].member.m_pkColor, (NiTransform *)&v269, &v188);
    z = a4[2].member.m_kBound.Center.z;
    v210 = z * v30->rot.data[0][0];
    v211 = v30->rot.data[0][1] * z;
    v212 = z * v30->rot.data[0][2];
    v232 = *(float *)&a4[2].member.m_usVertices + v210;
    x = a4[2].member.m_kBound.Center.x;
    v188.x = v232;
    v233 = x + v211;
    y = a4[2].member.m_kBound.Center.y;
    v188.y = v233;
    v234 = y + v212;
    v188.z = v234;
  }
  v29[2] = v188.x;
  v29[3] = v188.y;
  v33 = v230;
  v29[4] = v188.z;
  v34 = v217;
  v35 = v231;
  *((_WORD *)v29 + 0xC) = v104;
  v36 = (__int16)v112;
  v29[5] = v35;
  *((_WORD *)v29 + 0xD) = v33;
  *((_WORD *)v29 + 0xE) = v34;
  *((_WORD *)v29 + 0xF) = v36;
  v106 = 1.0 - (v110 + v109);
  if ( !*(_BYTE *)(a3 + 0x2C) )
  {
    v29[8] = flt_B3FC80;
    v46 = flt_B3FC84;
    goto LABEL_27;
  }
  v207 = 0;
  v208 = 0;
  v209 = 0;
  sub_728E70(v108, 0, (int)&v207);
  if ( v207 )
  {
    v112 = (float *)(v207 + (unsigned __int16)v18 * v208);
    v37 = (float *)(v207 + (unsigned __int16)v17 * v208);
    v38 = (float *)(v207 + v22 * v208);
    v39 = *v38;
    v40 = v38[1];
    v124 = v39;
    v125 = v40;
    v41 = v39;
    v42 = v112[1];
    v142 = *v112;
    v43 = *v37;
    v44 = v37[1];
    v124 = v41 * v109;
    v125 = v109 * v125;
    v142 = v142 * v110;
    v143 = v110 * v42;
    v116 = v43 * v106;
    v117 = v106 * v44;
    v152 = v116 + v142;
    v153 = v117 + v143;
    v170 = v152 + v124;
    v45 = v153;
    v29[8] = v170;
    v171 = v45 + v125;
    v46 = v171;
LABEL_27:
    v29[9] = v46;
    goto LABEL_28;
  }
  v47 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 0xA);
  if ( v47 )
  {
    v48 = *(float *)(v47 + 8 * v22 + 4);
    v136 = *(float *)(v47 + 8 * v22);
    v49 = *(float *)(v47 + 8 * (unsigned __int16)v18);
    v137 = v48;
    v50 = *(float *)(v47 + 8 * (unsigned __int16)v18 + 4);
    v122 = v49;
    v51 = *(float *)(v47 + 8 * (unsigned __int16)v17);
    v136 = v136 * v109;
    v123 = v50;
    v52 = *(float *)(v47 + 8 * (unsigned __int16)v17 + 4);
    v137 = v109 * v137;
    v122 = v122 * v110;
    v123 = v110 * v123;
    v114 = v51 * v106;
    v115 = v106 * v52;
    v130 = v114 + v122;
    v131 = v115 + v123;
    v172 = v130 + v136;
    v53 = v131;
    v29[8] = v172;
    v173 = v53 + v137;
    v29[9] = v173;
  }
  else
  {
    v29[8] = flt_B3FC80;
    v29[9] = flt_B3FC84;
  }
LABEL_28:
  if ( *(_BYTE *)(a3 + 0x2D) )
  {
    v189 = 0;
    v190 = 0;
    v191 = 0;
    sub_728D00(v108, (int)&v189);
    if ( v189 )
    {
      v54 = (float *)(v189 + (unsigned __int16)v17 * v190);
      v250 = *v54;
      v55 = v54[1];
      v252 = v54[2];
      v56 = (float *)(v189 + (unsigned __int16)v18 * v190);
      v57 = (float *)(v189 + v22 * v190);
      v251 = v55;
      v244 = *v56;
      v58 = v56[1];
      v59 = v56[2];
      v245 = v58;
      v238 = *v57;
      v246 = v59;
      v60 = v57[1];
      v61 = v57[2];
      v239 = v60;
      v240 = v61;
      v214 = v238 * v109;
      v215 = v60 * v109;
      v216 = v109 * v61;
      v262 = v244 * v110;
      v263 = v58 * v110;
      v264 = v110 * v246;
      v256 = v250 * v106;
      v257 = v251 * v106;
      v258 = v106 * v252;
      v235 = v256 + v262;
      v236 = v257 + v263;
      v237 = v258 + v264;
      v213.x = v235 + v214;
      v213.y = v236 + v215;
      v213.z = v237 + v216;
      v113 = v213;
    }
    else
    {
      if ( *(_BYTE *)(a3 + 0x2E) && (v62 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 8)) != 0 )
      {
        v63 = (float *)(v62 + 0xC * v22);
        v222 = *v63 * v109;
        v223 = v63[1] * v109;
        v64 = v109 * v63[2];
        v65 = (float *)(v62 + 0xC * (unsigned __int16)v18);
        v224 = v64;
        v218 = *v65 * v110;
        v219 = v65[1] * v110;
        v66 = v110 * v65[2];
        v67 = (float *)(v62 + 0xC * (unsigned __int16)v17);
        v220 = v66;
        v259 = v106 * *v67;
        v260 = v67[1] * v106;
        v261 = v106 * v67[2];
        v241 = v259 + v218;
        v242 = v260 + v219;
        v243 = v261 + v220;
        v253 = v241 + v222;
        v68 = v253;
        v254 = v242 + v223;
        v69 = v254;
        v255 = v243 + v224;
        v70 = v255;
      }
      else
      {
        v247 = v180 - v183;
        v248 = v181 - v184;
        v249 = v182 - v185;
        v226 = v177 - v183;
        v227 = v178 - v184;
        v228 = v179 - v185;
        v192 = v228 * v248 - v227 * v249;
        v68 = v192;
        v193 = v249 * v226 - v228 * v247;
        v69 = v193;
        v194 = v247 * v227 - v226 * v248;
        v70 = v194;
      }
      v113.z = v70;
      v113.y = v69;
      v113.x = v68;
    }
    sub_43F350(&v113.x);
    if ( *(_DWORD *)(a3 + 0xC) == 1 )
    {
      v71 = sub_7101F0((NiTransform *)&a4[1].member.m_pkColor, (NiTransform *)&v268, &v113);
      v113.x = v71->rot.data[0][0];
      v113.y = v71->rot.data[0][1];
      v113.z = v71->rot.data[0][2];
    }
    v72 = v113.y;
    v73 = v113.z;
    v29[0xA] = v113.x;
    v29[0xB] = v72;
  }
  else
  {
    v29[0xA] = Vector3_InitValue_;
    v29[0xB] = *(&Vector3_InitValue_ + 1);
    v73 = dword_B3F9B0;
  }
  v29[0xC] = v73;
  if ( *(_BYTE *)(a3 + 0x2F) )
  {
    v186[0] = 0;
    v186[1] = 0;
    v187 = 0;
    sub_728DB0(v108, (int)v186);
    if ( v186[0] )
    {
      v195 = 0.0;
      v196 = 0.0;
      v197 = 0.0;
      v198 = 0.0;
      v199 = 0.0;
      v200 = 0.0;
      v201 = 0.0;
      v202 = 0.0;
      v203 = 0.0;
      v204 = 0.0;
      v205 = 0.0;
      v206 = 0.0;
      sub_4C1440(v186, (unsigned __int16)v17, &v195);
      sub_4C1440(v186, (unsigned __int16)v18, &v199);
      sub_4C1440(v186, v22, &v203);
      v166 = v203 * v109;
      v167 = v204 * v109;
      v168 = v205 * v109;
      v169 = v109 * v206;
      v158 = v199 * v110;
      v159 = v200 * v110;
      v160 = v201 * v110;
      v161 = v110 * v202;
      v126 = v195 * v106;
      v127 = v196 * v106;
      v128 = v197 * v106;
      v129 = v106 * v198;
      v132 = v126 + v158;
      v133 = v127 + v159;
      v134 = v128 + v160;
      v164 = v134;
      v135 = v129 + v161;
      v165 = v135;
      v162 = v132 + v166;
      v74 = v133;
      v29[0xD] = v162;
      v163 = v74 + v167;
      v75 = v164;
      v29[0xE] = v163;
      v164 = v75 + v168;
      v76 = v165;
      v29[0xF] = v164;
      v165 = v76 + v169;
      v29[0x10] = v165;
    }
    else
    {
      v77 = *((_DWORD *)a4[2].member.m_spAdditionalGeomData + 9);
      if ( v77 )
      {
        v78 = 0x10 * v22;
        v79 = *(float *)(v78 + v77);
        v80 = *(float *)(v78 + v77 + 4);
        v81 = v77 + v78;
        v148 = v79;
        v82 = v79;
        v83 = *(float *)(v81 + 8);
        v149 = v80;
        v84 = *(float *)(v81 + 0xC);
        v150 = v83;
        v151 = v84;
        v148 = v82 * v109;
        v85 = 0x10 * (unsigned __int16)v18;
        v86 = *(float *)(v85 + v77);
        v87 = *(float *)(v85 + v77 + 4);
        v88 = v77 + v85;
        v138 = v86;
        v149 = v149 * v109;
        v89 = *(float *)(v88 + 8);
        v139 = v87;
        v90 = *(float *)(v88 + 0xC);
        v140 = v89;
        v141 = v90;
        v150 = v150 * v109;
        v91 = 0x10 * (unsigned __int16)v17;
        v92 = *(float *)(v91 + v77);
        v93 = *(float *)(v91 + v77 + 8);
        v94 = v77 + v91;
        v95 = *(float *)(v94 + 4);
        v151 = v109 * v151;
        v118 = v92;
        v96 = *(float *)(v94 + 0xC);
        v138 = v138 * v110;
        v139 = v139 * v110;
        v140 = v140 * v110;
        v141 = v110 * v141;
        v118 = v118 * v106;
        v119 = v95 * v106;
        v120 = v93 * v106;
        v121 = v106 * v96;
        v144 = v118 + v138;
        v145 = v119 + v139;
        v146 = v120 + v140;
        v156 = v146;
        v147 = v121 + v141;
        v157 = v147;
        v154 = v144 + v148;
        v97 = v145;
        v29[0xD] = v154;
        v155 = v97 + v149;
        v98 = v156;
        v29[0xE] = v155;
        v156 = v98 + v150;
        v99 = v157;
        v29[0xF] = v156;
        v157 = v99 + v151;
        v29[0x10] = v157;
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
  v112 = v29;
  *(_DWORD *)(a3 + 0x28) = v29;
  sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a3 + 0x18), &v112);
  if ( *(_DWORD *)a3 != 1 || *(_DWORD *)(a3 + 4) != 1 )
    goto LABEL_49;
  if ( v100 )
    sub_728B20(v108);
  return 1;
}
