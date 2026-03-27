int __thiscall sub_79C540(char **this, int a2)
{
  int result; // eax
  double v3; // st7
  double v4; // st7
  bool v5; // zf
  double v6; // st7
  int v7; // eax
  bool v8; // cf
  int v9; // eax
  const void *v10; // esi
  unsigned int v11; // esi
  double v12; // st7
  unsigned int v13; // esi
  int v14; // eax
  float *v15; // eax
  float *v16; // edi
  float *v17; // eax
  float v18; // edx
  float v19; // eax
  int v20; // ecx
  float *v21; // eax
  float *v22; // eax
  float *v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // edi
  float *v26; // eax
  double v27; // st7
  double v28; // st7
  int v29; // eax
  int v30; // eax
  int v31; // edi
  double v32; // st7
  int v33; // eax
  float *v34; // eax
  double v35; // st7
  double v36; // st7
  int v37; // eax
  int v38; // eax
  double v39; // st7
  int v40; // eax
  unsigned int v41; // edi
  double v42; // st7
  float *v43; // eax
  double v44; // st7
  int v45; // eax
  int v46; // eax
  double v47; // st7
  int v48; // eax
  double v49; // st7
  int v50; // eax
  double v51; // st7
  unsigned int v52; // ecx
  float *v53; // eax
  double v54; // st6
  double v55; // st6
  int v56; // eax
  int v57; // eax
  double v58; // st6
  int v59; // eax
  double v60; // st6
  int v61; // eax
  double v62; // st7
  int v63; // eax
  double v64; // st7
  double v65; // st7
  int v66; // eax
  double v67; // st7
  int v68; // eax
  double v69; // st7
  double v70; // st7
  float v71; // edx
  char *v72; // ecx
  char *v73; // ecx
  double v74; // st6
  double v75; // st7
  double v76; // st5
  int v77; // eax
  int v78; // eax
  char **v79; // ecx
  float v80; // eax
  char *v81; // ecx
  double v82; // st6
  double v83; // st7
  double v84; // st5
  int v85; // eax
  int v86; // eax
  unsigned int v87; // eax
  char **v88; // esi
  int v89; // edi
  float *v90; // eax
  float *v91; // ecx
  float *v92; // ecx
  float *v93; // eax
  int v94; // eax
  char *v95; // edi
  int v96; // edi
  double v97; // st7
  unsigned int v98; // eax
  unsigned int v99; // ecx
  char **v100; // ecx
  double v101; // st7
  float v102; // eax
  double v103; // st7
  char **v104; // ecx
  char **v105; // eax
  float v106; // [esp+4h] [ebp-1A8h]
  float v107; // [esp+1Ch] [ebp-190h]
  float v108; // [esp+1Ch] [ebp-190h]
  float *v109; // [esp+1Ch] [ebp-190h]
  float v110; // [esp+1Ch] [ebp-190h]
  float *v111; // [esp+1Ch] [ebp-190h]
  float v112; // [esp+1Ch] [ebp-190h]
  float v113; // [esp+1Ch] [ebp-190h]
  float v114; // [esp+1Ch] [ebp-190h]
  float v115; // [esp+1Ch] [ebp-190h]
  float v116; // [esp+1Ch] [ebp-190h]
  float v117; // [esp+1Ch] [ebp-190h]
  float v118; // [esp+1Ch] [ebp-190h]
  float v119; // [esp+1Ch] [ebp-190h]
  float v120; // [esp+1Ch] [ebp-190h]
  float v121; // [esp+1Ch] [ebp-190h]
  float v122; // [esp+1Ch] [ebp-190h]
  float v123; // [esp+1Ch] [ebp-190h]
  float v124; // [esp+1Ch] [ebp-190h]
  float v125; // [esp+1Ch] [ebp-190h]
  float v126; // [esp+1Ch] [ebp-190h]
  float v127; // [esp+1Ch] [ebp-190h]
  float v128; // [esp+1Ch] [ebp-190h]
  float v129; // [esp+1Ch] [ebp-190h]
  float v130; // [esp+1Ch] [ebp-190h]
  float v131; // [esp+1Ch] [ebp-190h]
  float v132; // [esp+1Ch] [ebp-190h]
  float v133; // [esp+1Ch] [ebp-190h]
  float v134; // [esp+1Ch] [ebp-190h]
  float v135; // [esp+1Ch] [ebp-190h]
  unsigned int v136; // [esp+1Ch] [ebp-190h]
  unsigned int v137; // [esp+1Ch] [ebp-190h]
  float v138; // [esp+20h] [ebp-18Ch]
  float v139; // [esp+20h] [ebp-18Ch]
  float v140; // [esp+20h] [ebp-18Ch]
  float v141; // [esp+20h] [ebp-18Ch]
  float v142; // [esp+20h] [ebp-18Ch]
  float v143; // [esp+20h] [ebp-18Ch]
  float v144; // [esp+20h] [ebp-18Ch]
  float v145; // [esp+20h] [ebp-18Ch]
  float v146; // [esp+20h] [ebp-18Ch]
  float v147; // [esp+20h] [ebp-18Ch]
  float v148; // [esp+20h] [ebp-18Ch]
  float v149; // [esp+20h] [ebp-18Ch]
  float v150; // [esp+20h] [ebp-18Ch]
  float v151; // [esp+20h] [ebp-18Ch]
  float v152; // [esp+20h] [ebp-18Ch]
  float v153; // [esp+20h] [ebp-18Ch]
  float v154; // [esp+20h] [ebp-18Ch]
  float v155; // [esp+20h] [ebp-18Ch]
  float v156; // [esp+20h] [ebp-18Ch]
  float v157; // [esp+20h] [ebp-18Ch]
  float v158; // [esp+20h] [ebp-18Ch]
  float v159; // [esp+20h] [ebp-18Ch]
  int v160; // [esp+20h] [ebp-18Ch]
  float v161; // [esp+20h] [ebp-18Ch]
  int v162; // [esp+20h] [ebp-18Ch]
  float *v163; // [esp+20h] [ebp-18Ch]
  float v164; // [esp+20h] [ebp-18Ch]
  float *v165; // [esp+20h] [ebp-18Ch]
  float v166; // [esp+20h] [ebp-18Ch]
  unsigned int v167; // [esp+20h] [ebp-18Ch]
  float v168; // [esp+24h] [ebp-188h]
  float v169; // [esp+24h] [ebp-188h]
  float v170; // [esp+24h] [ebp-188h]
  float v171; // [esp+24h] [ebp-188h]
  float v172; // [esp+24h] [ebp-188h]
  float v173; // [esp+24h] [ebp-188h]
  float v174; // [esp+24h] [ebp-188h]
  float v175; // [esp+24h] [ebp-188h]
  float v176; // [esp+24h] [ebp-188h]
  float v177; // [esp+24h] [ebp-188h]
  float v178; // [esp+24h] [ebp-188h]
  float v179; // [esp+24h] [ebp-188h]
  float v180; // [esp+24h] [ebp-188h]
  float v181; // [esp+24h] [ebp-188h]
  int v182; // [esp+24h] [ebp-188h]
  float v183; // [esp+24h] [ebp-188h]
  int v184; // [esp+24h] [ebp-188h]
  float v185; // [esp+24h] [ebp-188h]
  float v186; // [esp+24h] [ebp-188h]
  float v187; // [esp+24h] [ebp-188h]
  float v188; // [esp+24h] [ebp-188h]
  int v189; // [esp+24h] [ebp-188h]
  float v190; // [esp+24h] [ebp-188h]
  float v191; // [esp+24h] [ebp-188h]
  float v192; // [esp+24h] [ebp-188h]
  float v193; // [esp+24h] [ebp-188h]
  int v194; // [esp+28h] [ebp-184h] BYREF
  char **v195; // [esp+2Ch] [ebp-180h]
  void *Src; // [esp+30h] [ebp-17Ch]
  unsigned int v197; // [esp+34h] [ebp-178h]
  float v198; // [esp+38h] [ebp-174h] BYREF
  float v199; // [esp+3Ch] [ebp-170h]
  float v200; // [esp+40h] [ebp-16Ch]
  int v201; // [esp+44h] [ebp-168h] BYREF
  float v202; // [esp+48h] [ebp-164h] BYREF
  float v203; // [esp+4Ch] [ebp-160h]
  float v204; // [esp+50h] [ebp-15Ch]
  float v205; // [esp+54h] [ebp-158h] BYREF
  float v206; // [esp+58h] [ebp-154h]
  int v207; // [esp+5Ch] [ebp-150h]
  unsigned int v208; // [esp+60h] [ebp-14Ch] BYREF
  unsigned int v209; // [esp+64h] [ebp-148h]
  int v210; // [esp+68h] [ebp-144h]
  int v211; // [esp+6Ch] [ebp-140h]
  int v212; // [esp+70h] [ebp-13Ch] BYREF
  unsigned int v213; // [esp+74h] [ebp-138h]
  float *v214; // [esp+78h] [ebp-134h]
  int v215; // [esp+7Ch] [ebp-130h]
  float v216; // [esp+80h] [ebp-12Ch] BYREF
  float v217; // [esp+84h] [ebp-128h]
  float v218; // [esp+88h] [ebp-124h]
  float v219; // [esp+8Ch] [ebp-120h] BYREF
  float v220; // [esp+90h] [ebp-11Ch]
  float v221; // [esp+94h] [ebp-118h]
  int v222; // [esp+98h] [ebp-114h]
  float v223; // [esp+9Ch] [ebp-110h]
  float v224; // [esp+A0h] [ebp-10Ch]
  int v225; // [esp+A4h] [ebp-108h] BYREF
  float v226; // [esp+A8h] [ebp-104h]
  void *v227; // [esp+ACh] [ebp-100h]
  int v228; // [esp+B0h] [ebp-FCh]
  double v229; // [esp+B4h] [ebp-F8h]
  int v230; // [esp+C0h] [ebp-ECh]
  int v231[2]; // [esp+C4h] [ebp-E8h] BYREF
  float v232; // [esp+CCh] [ebp-E0h] BYREF
  float v233; // [esp+D0h] [ebp-DCh]
  float v234; // [esp+D4h] [ebp-D8h]
  float v235; // [esp+D8h] [ebp-D4h]
  float v236; // [esp+DCh] [ebp-D0h]
  float v237; // [esp+E0h] [ebp-CCh]
  int v238; // [esp+E4h] [ebp-C8h]
  float v239; // [esp+E8h] [ebp-C4h]
  float v240; // [esp+ECh] [ebp-C0h]
  float v241; // [esp+F0h] [ebp-BCh]
  float v242; // [esp+F4h] [ebp-B8h]
  float v243; // [esp+F8h] [ebp-B4h]
  int v244; // [esp+FCh] [ebp-B0h]
  float v245; // [esp+100h] [ebp-ACh]
  float v246; // [esp+104h] [ebp-A8h]
  float v247; // [esp+108h] [ebp-A4h]
  float v248; // [esp+10Ch] [ebp-A0h]
  float v249; // [esp+110h] [ebp-9Ch]
  float v250; // [esp+114h] [ebp-98h]
  float v251; // [esp+118h] [ebp-94h]
  float v252; // [esp+11Ch] [ebp-90h]
  float v253; // [esp+120h] [ebp-8Ch]
  float v254; // [esp+124h] [ebp-88h]
  float v255; // [esp+128h] [ebp-84h]
  float v256; // [esp+12Ch] [ebp-80h]
  int v257; // [esp+130h] [ebp-7Ch]
  float v258; // [esp+134h] [ebp-78h]
  float v259; // [esp+138h] [ebp-74h]
  int v260; // [esp+13Ch] [ebp-70h]
  float v261; // [esp+140h] [ebp-6Ch]
  float v262; // [esp+144h] [ebp-68h]
  float v263; // [esp+148h] [ebp-64h]
  float v264; // [esp+14Ch] [ebp-60h]
  float v265; // [esp+150h] [ebp-5Ch]
  float v266; // [esp+154h] [ebp-58h]
  int v267[2]; // [esp+158h] [ebp-54h] BYREF
  int v268[2]; // [esp+160h] [ebp-4Ch] BYREF
  float v269[9]; // [esp+168h] [ebp-44h] BYREF
  int v270; // [esp+18Ch] [ebp-20h] BYREF
  int v271; // [esp+194h] [ebp-18h] BYREF
  unsigned int v272; // [esp+1A8h] [ebp-4h]

  v195 = this;
  result = (int)*this;
  if ( *this )
  {
    if ( *(this + 1) )
    {
      v3 = (double)(int)*(this + 0xB);
      if ( (int)*(this + 0xB) < 0 )
        v3 = v3 + flt_A2FC78;
      v4 = dbl_A3F418 / v3;
      result = *(unsigned __int16 *)(result + 0x22);
      *(_DWORD *)(a2 + 0x28) = result;
      *(_DWORD *)(a2 + 0x2C) = 2;
      v5 = *(this + 0xB) == 0;
      v222 = 0;
      v248 = v4;
      if ( !v5 )
      {
        while ( 1 )
        {
          v230 = *((unsigned __int16 *)*v195 + 0x11);
          v209 = 0;
          v210 = 0;
          v211 = 0;
          v204 = 0.0;
          v272 = 0;
          v203 = 0.0;
          *(float *)&v197 = 0.0;
          v202 = 0.0;
          if ( sub_799EE0((_DWORD *)a2) )
          {
            v6 = (double)v222;
            if ( v222 < 0 )
              v6 = v6 + flt_A2FC78;
            v229 = v6 * v248;
            do
            {
              v7 = sub_799EE0((_DWORD *)a2);
              v8 = v197 < v7 - 1;
              v9 = *(_DWORD *)(a2 + 4);
              if ( v8 )
              {
                if ( !v9 || v197 >= (*(_DWORD *)(a2 + 8) - v9) / 0x38 )
                  _invalid_parameter_noinfo();
                v10 = (const void *)(*(_DWORD *)(a2 + 4) + 0x38 * v197 + 0xC);
              }
              else
              {
                v11 = v197 - 1;
                if ( !v9 || v11 >= (*(_DWORD *)(a2 + 8) - v9) / 0x38 )
                  _invalid_parameter_noinfo();
                v10 = (const void *)(*(_DWORD *)(a2 + 4) + 0x38 * v11 + 0xC);
              }
              v12 = *(float *)(a2 + 0x1C) + v229;
              qmemcpy(v269, v10, sizeof(v269));
              v107 = v12;
              sub_793A00(v269, v107);
              v108 = v269[0] * 0.0 + v269[3] + v269[6] * 0.0;
              v138 = v269[1] * 0.0 + v269[4] + v269[7] * 0.0;
              *(float *)&v194 = 0.0 * v269[8] + v269[2] * 0.0 + v269[5];
              v205 = v108;
              v206 = v138;
              v207 = v194;
              sub_791630(&v208, (int *)&v205);
              v13 = v197;
              v200 = 0.0;
              v14 = *(_DWORD *)(a2 + 4);
              v199 = 0.0;
              v198 = 0.0;
              if ( *(float *)&v197 == 0.0 )
              {
                if ( !v14 || !((*(_DWORD *)(a2 + 8) - v14) / 0x38) )
                  _invalid_parameter_noinfo();
                v15 = *(float **)(a2 + 4);
                v109 = v15;
                if ( !v15 || (unsigned int)((*(_DWORD *)(a2 + 8) - (int)v15) / 0x38) <= 1 )
                  _invalid_parameter_noinfo();
                v16 = *(float **)(a2 + 4);
                v17 = v109;
                v110 = v16[0xE] - *v109;
                v139 = v16[0xF] - v17[1];
                *(float *)&v194 = v16[0x10] - v17[2];
                v242 = v110;
                v18 = v110;
                v243 = v139;
                v19 = v139;
                v244 = v194;
                v20 = v194;
              }
              else
              {
                if ( !v14 || !((*(_DWORD *)(a2 + 8) - v14) / 0x38) )
                  _invalid_parameter_noinfo();
                v21 = *(float **)(a2 + 4);
                v111 = v21;
                if ( !v21 || v13 >= (*(_DWORD *)(a2 + 8) - (int)v21) / 0x38 )
                  _invalid_parameter_noinfo();
                v16 = *(float **)(a2 + 4);
                v22 = &v16[0xE * v13];
                v23 = v111;
                v112 = *v22 - *v111;
                v140 = v22[1] - v23[1];
                *(float *)&v194 = v22[2] - v23[2];
                v255 = v112;
                v18 = v112;
                v256 = v140;
                v19 = v140;
                v257 = v194;
                v20 = v194;
              }
              v113 = v18 * v18 + v19 * v19 + *(float *)&v20 * *(float *)&v20;
              v114 = sqrt(v113);
              v115 = 1.0 / v114;
              v198 = v115 * v18;
              v199 = v115 * v19;
              v200 = v115 * *(float *)&v20;
              v221 = 0.0;
              v220 = 0.0;
              v219 = 0.0;
              v218 = 0.0;
              v217 = 0.0;
              v216 = 0.0;
              if ( v13 == sub_799EE0((_DWORD *)a2) - 1 && sub_799EE0((_DWORD *)a2) )
              {
                v24 = v209;
                v25 = v13 - 1;
                if ( !v209 || v25 >= (int)(v210 - v209) / 0xC )
                {
                  _invalid_parameter_noinfo();
                  v24 = v209;
                }
                v26 = (float *)(v24 + 0xC * v25);
                v27 = *(float *)(a2 + 0x14);
                v116 = *v26 * v27;
                v141 = v26[1] * v27;
                v28 = v27 * v26[2];
                v29 = *(_DWORD *)(a2 + 4);
                *(float *)&v194 = v28;
                if ( !v29 || v13 >= (*(_DWORD *)(a2 + 8) - v29) / 0x38 )
                {
                  _invalid_parameter_noinfo();
                  v24 = v209;
                }
                v30 = *(_DWORD *)(a2 + 4);
                v31 = 0x38 * v13;
                v32 = v116 + *(float *)(v30 + 0x38 * v13);
                v33 = 0x38 * v13 + v30;
                v117 = v32;
                v142 = *(float *)(v33 + 4) + v141;
                *(float *)&v194 = *(float *)(v33 + 8) + *(float *)&v194;
                v236 = v117;
                v219 = v117;
                v237 = v142;
                v220 = v142;
                v238 = v194;
                v221 = *(float *)&v194;
                if ( !v24 || v13 - 1 >= (int)(v210 - v24) / 0xC )
                {
                  _invalid_parameter_noinfo();
                  v24 = v209;
                }
                v34 = (float *)(v24 + 0xC * (v13 - 1));
                v35 = *(float *)(a2 + 0x14);
                v118 = *v34 * v35;
                v143 = v34[1] * v35;
                v36 = v35 * v34[2];
                v37 = *(_DWORD *)(a2 + 4);
                *(float *)&v194 = v36;
                if ( !v37 || v13 >= (*(_DWORD *)(a2 + 8) - v37) / 0x38 )
                  _invalid_parameter_noinfo();
                v38 = *(_DWORD *)(a2 + 4);
                v39 = *(float *)(v38 + 0x38 * v13);
                v40 = v31 + v38;
                v119 = v39 - v118;
                v144 = *(float *)(v40 + 4) - v143;
                *(float *)&v194 = *(float *)(v40 + 8) - *(float *)&v194;
                v258 = v119;
                v216 = v119;
                v259 = v144;
                v217 = v144;
                v260 = v194;
                v218 = *(float *)&v194;
              }
              else if ( *(float *)&v13 == 0.0 || v13 >= sub_799EE0((_DWORD *)a2) - 1 )
              {
                v62 = *(float *)(a2 + 0x14);
                v176 = v62 * v205;
                v130 = v62 * v206;
                v155 = v62 * *(float *)&v207;
                if ( !v16 || v13 >= (*(_DWORD *)(a2 + 8) - (int)v16) / 0x38 )
                  _invalid_parameter_noinfo();
                v63 = *(_DWORD *)(a2 + 4);
                v31 = 0x38 * v13;
                v177 = v176 + *(float *)(0x38 * v13 + v63);
                v131 = *(float *)(0x38 * v13 + v63 + 4) + v130;
                v156 = *(float *)(0x38 * v13 + v63 + 8) + v155;
                v261 = v177;
                v219 = v177;
                v262 = v131;
                v220 = v131;
                v263 = v156;
                v64 = *(float *)(a2 + 0x14);
                v221 = v156;
                v178 = v64;
                v65 = v178;
                v179 = v178 * v205;
                v132 = v65 * v206;
                v157 = v65 * *(float *)&v207;
                if ( !v63 || v13 >= (*(_DWORD *)(a2 + 8) - v63) / 0x38 )
                  _invalid_parameter_noinfo();
                v66 = *(_DWORD *)(a2 + 4);
                v67 = *(float *)(v66 + 0x38 * v13);
                v68 = v31 + v66;
                v180 = v67 - v179;
                v133 = *(float *)(v68 + 4) - v132;
                v158 = *(float *)(v68 + 8) - v157;
                v239 = v180;
                v216 = v180;
                v240 = v133;
                v217 = v133;
                v241 = v158;
                v218 = v158;
              }
              else
              {
                v41 = v13 - 1;
                if ( !v209 || v41 >= (int)(v210 - v209) / 0xC )
                  _invalid_parameter_noinfo();
                v42 = *(float *)(a2 + 0x14);
                v43 = (float *)(v209 + 0xC * v41);
                v120 = v42 * *v43;
                v145 = v43[1] * v42;
                v44 = v42 * v43[2];
                v45 = *(_DWORD *)(a2 + 4);
                *(float *)&v194 = v44;
                if ( !v45 || v13 >= (*(_DWORD *)(a2 + 8) - v45) / 0x38 )
                  _invalid_parameter_noinfo();
                v46 = *(_DWORD *)(a2 + 4);
                v31 = 0x38 * v13;
                *(float *)&v201 = v120 + *(float *)(0x38 * v13 + v46);
                *(float *)&v197 = *(float *)(0x38 * v13 + v46 + 4) + v145;
                v168 = *(float *)(0x38 * v13 + v46 + 8) + *(float *)&v194;
                v47 = *(float *)(a2 + 0x14);
                v121 = v47 * v205;
                v146 = v47 * v206;
                *(float *)&v194 = v47 * *(float *)&v207;
                if ( !v46 || v13 >= (*(_DWORD *)(a2 + 8) - v46) / 0x38 )
                  _invalid_parameter_noinfo();
                v48 = *(_DWORD *)(a2 + 4);
                v49 = *(float *)(v48 + 0x38 * v13);
                v50 = v31 + v48;
                v122 = v49 + v121;
                v147 = *(float *)(v50 + 4) + v146;
                *(float *)&v194 = *(float *)(v50 + 8) + *(float *)&v194;
                v123 = v122 + *(float *)&v201;
                v148 = v147 + *(float *)&v197;
                v169 = *(float *)&v194 + v168;
                v51 = dbl_A2FAA0;
                v124 = v123 * v51;
                v149 = v148 * v51;
                v170 = v169 * v51;
                v252 = v124;
                v219 = v124;
                v253 = v149;
                v220 = v149;
                v254 = v170;
                v221 = v170;
                v52 = v209;
                if ( !v209 || v13 - 1 >= (int)(v210 - v209) / 0xC )
                {
                  _invalid_parameter_noinfo();
                  v51 = dbl_A2FAA0;
                  v52 = v209;
                }
                v53 = (float *)(v52 + 0xC * (v13 - 1));
                v54 = *(float *)(a2 + 0x14);
                v171 = *v53 * v54;
                v125 = v53[1] * v54;
                v55 = v54 * v53[2];
                v56 = *(_DWORD *)(a2 + 4);
                if ( !v56 || v13 >= (*(_DWORD *)(a2 + 8) - v56) / 0x38 )
                {
                  _invalid_parameter_noinfo();
                  v51 = dbl_A2FAA0;
                }
                v57 = *(_DWORD *)(a2 + 4);
                *(float *)&v194 = *(float *)(v31 + v57) - v171;
                *(float *)&v201 = *(float *)(v31 + v57 + 4) - v125;
                v150 = v55;
                *(float *)&v197 = *(float *)(v31 + v57 + 8) - v150;
                v58 = *(float *)(a2 + 0x14);
                v172 = v58 * v205;
                v126 = v58 * v206;
                v151 = v58 * *(float *)&v207;
                if ( !v57 || v13 >= (*(_DWORD *)(a2 + 8) - v57) / 0x38 )
                {
                  _invalid_parameter_noinfo();
                  v51 = dbl_A2FAA0;
                }
                v59 = *(_DWORD *)(a2 + 4);
                v60 = *(float *)(v59 + 0x38 * v13);
                v61 = v31 + v59;
                v173 = v60 - v172;
                v127 = *(float *)(v61 + 4) - v126;
                v152 = *(float *)(v61 + 8) - v151;
                v174 = v173 + *(float *)&v194;
                v128 = v127 + *(float *)&v201;
                v153 = v152 + *(float *)&v197;
                v175 = v174 * v51;
                v129 = v128 * v51;
                v154 = v51 * v153;
                v264 = v175;
                v216 = v175;
                v265 = v129;
                v217 = v129;
                v266 = v154;
                v218 = v154;
              }
              Src = (void *)v13;
              v69 = (double)(int)v13;
              if ( (int)v13 < 0 )
                v69 = v69 + flt_A2FC78;
              v181 = v69;
              *(float *)&Src = COERCE_FLOAT(sub_799EE0((_DWORD *)a2));
              v70 = (double)(int)Src;
              if ( (int)Src < 0 )
                v70 = v70 + flt_A2FC78;
              *(float *)&v182 = v181 / (v70 - dbl_A2F928);
              sub_796260(*v195, (int *)&v219);
              LOWORD(v71) = *(unsigned __int8 *)(a2 + 0x18);
              *(float *)v231 = 1.0;
              v72 = *v195;
              v231[1] = v182;
              sub_796320((char **)v72, (float *)v231, v71);
              v235 = 1.0;
              v73 = *v195;
              v234 = 1.0;
              v233 = 1.0;
              v232 = 1.0;
              sub_796230((unsigned int *)v73, &v232);
              sub_7962F0(*v195, (int *)&v198);
              sub_796590(*v195, (int *)&v205);
              v159 = v200 * v206 - v199 * *(float *)&v207;
              v183 = *(float *)&v207 * v198 - v200 * v205;
              v134 = v205 * v199 - v198 * v206;
              v245 = v159;
              v202 = v159;
              v246 = v183;
              v203 = v183;
              v247 = v134;
              v204 = v134;
              v74 = v183 * v183;
              v75 = v159 * v159;
              v76 = v134 * v134;
              *(float *)&v184 = v75 + v74 + v76;
              if ( COERCE_FLOAT((v184 >> 1) + 0x1FC00000) >= dbl_A2FC80 )
              {
                v185 = v76 + v74 + v75;
                v186 = sqrt(v185);
                v187 = 1.0 / v186;
                v202 = v187 * v159;
                v203 = v203 * v187;
                v204 = v187 * v204;
              }
              else
              {
                v202 = v198;
                v203 = v199;
                v204 = v200;
              }
              sub_7965E0(*v195, (int *)&v202);
              if ( (*v195)[8] )
              {
                v77 = *(_DWORD *)(a2 + 4);
                if ( !v77 || v13 >= (*(_DWORD *)(a2 + 8) - v77) / 0x38 )
                  _invalid_parameter_noinfo();
                v78 = *(_DWORD *)(a2 + 4);
                v160 = v78;
                if ( !v78 || v13 >= (*(_DWORD *)(a2 + 8) - v78) / 0x38 )
                  _invalid_parameter_noinfo();
                sub_796540(
                  (unsigned int *)*v195,
                  COERCE_INT(*(float *)(v31 + *(_DWORD *)(a2 + 4) + 0x30)),
                  *(_BYTE *)(v31 + v160 + 0x34));
              }
              v79 = v195;
              ++*((_WORD *)*v195 + 0x11);
              HIWORD(v80) = (unsigned int)sub_796260(*v79, (int *)&v216) >> 0x10;
              LOWORD(v80) = *(unsigned __int8 *)(a2 + 0x18);
              *(float *)v231 = 0.0;
              sub_796320((char **)*v195, (float *)v231, v80);
              v235 = 1.0;
              v81 = *v195;
              v234 = 1.0;
              v233 = 1.0;
              v232 = 1.0;
              sub_796230((unsigned int *)v81, &v232);
              sub_7962F0(*v195, (int *)&v198);
              sub_796590(*v195, (int *)&v205);
              v161 = v200 * v206 - v199 * *(float *)&v207;
              v188 = *(float *)&v207 * v198 - v200 * v205;
              v135 = v205 * v199 - v198 * v206;
              v249 = v161;
              v202 = v161;
              v250 = v188;
              v203 = v188;
              v251 = v135;
              v204 = v135;
              v82 = v188 * v188;
              v83 = v161 * v161;
              v84 = v135 * v135;
              *(float *)&v189 = v83 + v82 + v84;
              if ( COERCE_FLOAT((v189 >> 1) + 0x1FC00000) >= dbl_A2FC80 )
              {
                v190 = v84 + v82 + v83;
                v191 = sqrt(v190);
                v192 = 1.0 / v191;
                v202 = v192 * v161;
                v203 = v203 * v192;
                v204 = v192 * v204;
              }
              else
              {
                v202 = v198;
                v203 = v199;
                v204 = v200;
              }
              sub_7965E0(*v195, (int *)&v202);
              if ( (*v195)[8] )
              {
                v85 = *(_DWORD *)(a2 + 4);
                if ( !v85 || v13 >= (*(_DWORD *)(a2 + 8) - v85) / 0x38 )
                  _invalid_parameter_noinfo();
                v86 = *(_DWORD *)(a2 + 4);
                v162 = v86;
                if ( !v86 || v13 >= (*(_DWORD *)(a2 + 8) - v86) / 0x38 )
                  _invalid_parameter_noinfo();
                sub_796540(
                  (unsigned int *)*v195,
                  COERCE_INT(*(float *)(v31 + *(_DWORD *)(a2 + 4) + 0x30)),
                  *(_BYTE *)(v31 + v162 + 0x34));
              }
              ++*((_WORD *)*v195 + 0x11);
              v197 = v13 + 1;
            }
            while ( v13 + 1 < sub_799EE0((_DWORD *)a2) );
          }
          *(float *)&v201 = 0.0;
          v213 = 0;
          *(float *)&v194 = 0.0;
          *(float *)&v214 = 0.0;
          v215 = 0;
          v226 = 0.0;
          v227 = 0;
          v228 = 0;
          LOBYTE(v272) = 2;
          v87 = sub_799EE0((_DWORD *)a2) - 1;
          *(float *)&v197 = 0.0;
          v88 = v195;
          v136 = v87;
          if ( v87 )
            break;
LABEL_120:
          *((_WORD *)*v88 + 0x11) = v230 + 2;
          if ( v87 > 1 )
          {
            v96 = 0;
            v167 = 0;
            v197 = 2;
            v137 = v87 - 1;
            do
            {
              v97 = *(float *)sub_794760(*v88, v197 + *(_DWORD *)(a2 + 0x28));
              v98 = v213;
              *(float *)v267 = v97;
              if ( !v213 || (v99 = (int)((int)v214 - v213) >> 2, v167 >= v99) )
              {
                _invalid_parameter_noinfo();
                v98 = v213;
              }
              LOWORD(v99) = *(unsigned __int8 *)(a2 + 0x18);
              v106 = *(float *)&v99;
              v100 = (char **)*v88;
              *(float *)&v267[1] = *(float *)(v96 + v98) / *(float *)&v201 * dbl_A3F460;
              sub_796320(v100, (float *)v267, v106);
              ++*((_WORD *)*v88 + 0x11);
              v101 = *(float *)sub_794760(*v88, *(_DWORD *)(a2 + 0x28) + v197 + 1);
              v102 = v226;
              *(float *)v268 = v101;
              if ( v226 == 0.0 || v167 >= ((int)v227 - LODWORD(v226)) >> 2 )
              {
                _invalid_parameter_noinfo();
                v102 = v226;
              }
              v103 = *(float *)(v96 + LODWORD(v102));
              LOWORD(v102) = *(unsigned __int8 *)(a2 + 0x18);
              v104 = (char **)*v88;
              *(float *)&v268[1] = v103 / *(float *)&v194 * dbl_A3F460;
              sub_796320(v104, (float *)v268, v102);
              v105 = (char **)*v88;
              v197 += 2;
              ++*((_WORD *)v105 + 0x11);
              ++v167;
              v96 += 4;
              --v137;
            }
            while ( v137 );
          }
          ++*((_WORD *)*v88 + 0x11);
          ++*((_WORD *)*v88 + 0x11);
          if ( v226 != 0.0 )
            FormHeapFree(LODWORD(v226));
          v226 = 0.0;
          v227 = 0;
          v228 = 0;
          if ( v213 )
            FormHeapFree(v213);
          v213 = 0;
          *(float *)&v214 = 0.0;
          v215 = 0;
          v272 = 0xFFFFFFFF;
          if ( v209 )
            FormHeapFree(v209);
          result = v222 + 1;
          v8 = v222 + 1 < (unsigned int)v88[0xB];
          v209 = 0;
          v210 = 0;
          v211 = 0;
          ++v222;
          if ( !v8 )
            return result;
        }
        while ( 1 )
        {
          v89 = 2 * v197;
          v163 = (float *)sub_794730(*v88, 2 * v197 + *(_DWORD *)(a2 + 0x28));
          v90 = (float *)sub_794730(*v88, *(_DWORD *)(a2 + 0x28) + v89 + 2);
          v91 = v163;
          v164 = *v163;
          v223 = v91[1];
          Src = *((void **)v91 + 2);
          v193 = *v90;
          v224 = v90[1];
          *(float *)&v229 = v90[2];
          *(float *)&Src = (v193 - v164) * (v193 - v164)
                         + (v224 - v223) * (v224 - v223)
                         + (*(float *)&v229 - *(float *)&Src) * (*(float *)&v229 - *(float *)&Src);
          Src = (void *)(((int)Src >> 1) + 0x1FC00000);
          v92 = v214;
          *(float *)&v201 = *(float *)&Src + *(float *)&v201;
          if ( !v213 )
            goto LABEL_109;
          if ( (int)((int)v214 - v213) >> 2 >= (unsigned int)((int)(v215 - v213) >> 2) )
          {
            v92 = v214;
LABEL_109:
            Src = v92;
            if ( v213 > (unsigned int)v92 )
              _invalid_parameter_noinfo();
            sub_7996F0((unsigned int *)&v212, (unsigned int **)&v270, (unsigned int *)&v212, (char *)Src, &v201);
            goto LABEL_112;
          }
          v93 = v214;
          *v214 = *(float *)&v201;
          v214 = v93 + 1;
LABEL_112:
          v165 = (float *)sub_794730(*v88, *(_DWORD *)(a2 + 0x28) + v89 + 1);
          v94 = sub_794730(*v88, *(_DWORD *)(a2 + 0x28) + v89 + 3);
          *(float *)&v229 = *v165;
          v95 = (char *)v227;
          v224 = v165[1];
          v166 = v165[2];
          Src = *(void **)v94;
          v223 = *(float *)(v94 + 4);
          *(float *)&Src = (*(float *)&Src - *(float *)&v229) * (*(float *)&Src - *(float *)&v229)
                         + (v223 - v224) * (v223 - v224)
                         + (*(float *)(v94 + 8) - v166) * (*(float *)(v94 + 8) - v166);
          Src = (void *)(((int)Src >> 1) + 0x1FC00000);
          *(float *)&v194 = *(float *)&Src + *(float *)&v194;
          if ( v226 == 0.0 || ((int)v227 - LODWORD(v226)) >> 2 >= (unsigned int)((v228 - LODWORD(v226)) >> 2) )
          {
            if ( LODWORD(v226) > (unsigned int)v227 )
              _invalid_parameter_noinfo();
            sub_7996F0((unsigned int *)&v225, (unsigned int **)&v271, (unsigned int *)&v225, v95, &v194);
          }
          else
          {
            *(float *)v227 = *(float *)&v194;
            v227 = v95 + 4;
          }
          if ( ++v197 >= v136 )
          {
            v87 = v136;
            goto LABEL_120;
          }
        }
      }
    }
  }
  return result;
}
