char __stdcall sub_7D34C0(NiCamera *a1, NiCamera *a2)
{
  NiFrustumPlanes *v2; // edi
  NiFrustumPlanes *v3; // edi
  float x; // eax
  float y; // ecx
  float z; // edx
  double v7; // st7
  double Far; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // st7
  float v13; // eax
  double v14; // st7
  float v15; // ecx
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // rt0
  NiFrustumPlanes *v23; // esi
  int k; // edi
  double v25; // st7
  int v26; // ebx
  NiFrustumPlanes *v27; // esi
  int v28; // edi
  float *v29; // esi
  int v30; // ecx
  float *p_z; // edx
  int v33; // eax
  NiFrustumPlanes *v34; // esi
  int n; // ebx
  float *v36; // eax
  float *v37; // eax
  int v38; // esi
  float *v39; // edi
  double v40; // st6
  double v41; // st5
  double v42; // st4
  double v43; // st3
  double v44; // st2
  int v45; // ecx
  int v46; // eax
  double v47; // st3
  double v48; // st4
  double v49; // st4
  double v50; // st3
  double v51; // st4
  int v52; // ecx
  double v53; // st3
  float *v54; // edx
  double v55; // rt0
  double v56; // st3
  double v57; // st7
  double v58; // rt1
  float v59; // [esp+10h] [ebp-304h]
  float v60; // [esp+10h] [ebp-304h]
  float v61; // [esp+10h] [ebp-304h]
  float v62; // [esp+10h] [ebp-304h]
  float v63; // [esp+10h] [ebp-304h]
  float v64; // [esp+10h] [ebp-304h]
  float v65; // [esp+10h] [ebp-304h]
  float v66; // [esp+10h] [ebp-304h]
  float v67; // [esp+10h] [ebp-304h]
  float v68; // [esp+10h] [ebp-304h]
  float v69; // [esp+10h] [ebp-304h]
  float v70; // [esp+10h] [ebp-304h]
  float v71; // [esp+10h] [ebp-304h]
  float v72; // [esp+10h] [ebp-304h]
  float v73; // [esp+10h] [ebp-304h]
  float v74; // [esp+10h] [ebp-304h]
  float v75; // [esp+10h] [ebp-304h]
  float v76; // [esp+10h] [ebp-304h]
  float v77; // [esp+10h] [ebp-304h]
  float v78; // [esp+10h] [ebp-304h]
  float v79; // [esp+10h] [ebp-304h]
  float v80; // [esp+10h] [ebp-304h]
  float v81; // [esp+10h] [ebp-304h]
  float v82; // [esp+10h] [ebp-304h]
  float v83; // [esp+10h] [ebp-304h]
  float v84; // [esp+10h] [ebp-304h]
  float v85; // [esp+14h] [ebp-300h]
  float v86; // [esp+14h] [ebp-300h]
  float v87; // [esp+14h] [ebp-300h]
  float v88; // [esp+14h] [ebp-300h]
  float v89; // [esp+14h] [ebp-300h]
  float v90; // [esp+14h] [ebp-300h]
  float v91; // [esp+14h] [ebp-300h]
  float v92; // [esp+14h] [ebp-300h]
  float v93; // [esp+14h] [ebp-300h]
  float v94; // [esp+14h] [ebp-300h]
  float v95; // [esp+14h] [ebp-300h]
  float v96; // [esp+14h] [ebp-300h]
  float v97; // [esp+14h] [ebp-300h]
  float v98; // [esp+14h] [ebp-300h]
  float v99; // [esp+14h] [ebp-300h]
  float v100; // [esp+14h] [ebp-300h]
  float v101; // [esp+14h] [ebp-300h]
  float v102; // [esp+14h] [ebp-300h]
  float v103; // [esp+14h] [ebp-300h]
  float v104; // [esp+14h] [ebp-300h]
  float v105; // [esp+14h] [ebp-300h]
  float v106; // [esp+14h] [ebp-300h]
  float v107; // [esp+14h] [ebp-300h]
  float v108; // [esp+14h] [ebp-300h]
  float v109; // [esp+14h] [ebp-300h]
  float v110; // [esp+14h] [ebp-300h]
  float v111; // [esp+14h] [ebp-300h]
  float v112; // [esp+14h] [ebp-300h]
  float v113; // [esp+14h] [ebp-300h]
  float v114; // [esp+14h] [ebp-300h]
  float v115; // [esp+14h] [ebp-300h]
  float v116; // [esp+14h] [ebp-300h]
  float v117; // [esp+14h] [ebp-300h]
  float v118; // [esp+14h] [ebp-300h]
  float v119; // [esp+14h] [ebp-300h]
  float v120; // [esp+14h] [ebp-300h]
  float v121; // [esp+14h] [ebp-300h]
  float v122; // [esp+14h] [ebp-300h]
  float v123; // [esp+14h] [ebp-300h]
  float v124; // [esp+14h] [ebp-300h]
  float v125; // [esp+18h] [ebp-2FCh]
  int i; // [esp+28h] [ebp-2ECh]
  int j; // [esp+28h] [ebp-2ECh]
  float Top; // [esp+28h] [ebp-2ECh]
  float Right; // [esp+28h] [ebp-2ECh]
  float v130; // [esp+28h] [ebp-2ECh]
  float v131; // [esp+28h] [ebp-2ECh]
  float v132; // [esp+28h] [ebp-2ECh]
  float v133; // [esp+28h] [ebp-2ECh]
  float v134; // [esp+28h] [ebp-2ECh]
  float v135; // [esp+28h] [ebp-2ECh]
  float v136; // [esp+2Ch] [ebp-2E8h]
  float v137; // [esp+2Ch] [ebp-2E8h]
  float v138; // [esp+2Ch] [ebp-2E8h]
  float v139; // [esp+2Ch] [ebp-2E8h]
  float v140; // [esp+2Ch] [ebp-2E8h]
  float v141; // [esp+2Ch] [ebp-2E8h]
  float v142; // [esp+2Ch] [ebp-2E8h]
  float v143; // [esp+2Ch] [ebp-2E8h]
  float v144; // [esp+2Ch] [ebp-2E8h]
  float v145; // [esp+2Ch] [ebp-2E8h]
  float v146; // [esp+2Ch] [ebp-2E8h]
  float v147; // [esp+2Ch] [ebp-2E8h]
  float v148; // [esp+2Ch] [ebp-2E8h]
  float v149; // [esp+2Ch] [ebp-2E8h]
  float v150; // [esp+2Ch] [ebp-2E8h]
  float v151; // [esp+2Ch] [ebp-2E8h]
  float v152; // [esp+2Ch] [ebp-2E8h]
  float v153; // [esp+2Ch] [ebp-2E8h]
  float v154; // [esp+2Ch] [ebp-2E8h]
  float v155; // [esp+2Ch] [ebp-2E8h]
  float v156; // [esp+2Ch] [ebp-2E8h]
  float v157; // [esp+2Ch] [ebp-2E8h]
  float v158; // [esp+2Ch] [ebp-2E8h]
  float v159; // [esp+2Ch] [ebp-2E8h]
  float v160; // [esp+2Ch] [ebp-2E8h]
  double v161; // [esp+2Ch] [ebp-2E8h]
  float v162; // [esp+2Ch] [ebp-2E8h]
  float v163; // [esp+2Ch] [ebp-2E8h]
  float v164; // [esp+2Ch] [ebp-2E8h]
  float v165; // [esp+2Ch] [ebp-2E8h]
  float v166; // [esp+40h] [ebp-2D4h]
  float v167; // [esp+40h] [ebp-2D4h]
  float v168; // [esp+40h] [ebp-2D4h]
  float v169; // [esp+40h] [ebp-2D4h]
  float v170; // [esp+44h] [ebp-2D0h]
  float v171; // [esp+44h] [ebp-2D0h]
  float v172; // [esp+48h] [ebp-2CCh]
  float v173; // [esp+48h] [ebp-2CCh]
  float v174; // [esp+4Ch] [ebp-2C8h]
  float v175; // [esp+4Ch] [ebp-2C8h]
  _DWORD *v176; // [esp+4Ch] [ebp-2C8h]
  float v177; // [esp+50h] [ebp-2C4h]
  float v178; // [esp+50h] [ebp-2C4h]
  float v179; // [esp+50h] [ebp-2C4h]
  float v180; // [esp+50h] [ebp-2C4h]
  float v181; // [esp+54h] [ebp-2C0h]
  float v182; // [esp+54h] [ebp-2C0h]
  float v183; // [esp+54h] [ebp-2C0h]
  float v184; // [esp+54h] [ebp-2C0h]
  float v185; // [esp+58h] [ebp-2BCh]
  float v186; // [esp+58h] [ebp-2BCh]
  float v187; // [esp+58h] [ebp-2BCh]
  int m; // [esp+58h] [ebp-2BCh]
  float v189; // [esp+5Ch] [ebp-2B8h]
  float v190; // [esp+5Ch] [ebp-2B8h]
  float v191; // [esp+5Ch] [ebp-2B8h]
  float v192; // [esp+5Ch] [ebp-2B8h]
  float v193; // [esp+5Ch] [ebp-2B8h]
  float v194; // [esp+5Ch] [ebp-2B8h]
  float v195; // [esp+5Ch] [ebp-2B8h]
  float v196; // [esp+5Ch] [ebp-2B8h]
  double v197; // [esp+5Ch] [ebp-2B8h]
  float v198; // [esp+60h] [ebp-2B4h]
  float v199; // [esp+64h] [ebp-2B0h]
  float v200; // [esp+70h] [ebp-2A4h]
  float v201; // [esp+74h] [ebp-2A0h]
  float v202; // [esp+78h] [ebp-29Ch]
  float v203; // [esp+7Ch] [ebp-298h]
  float v204; // [esp+7Ch] [ebp-298h]
  float v205; // [esp+7Ch] [ebp-298h]
  float v206; // [esp+7Ch] [ebp-298h]
  float v207; // [esp+7Ch] [ebp-298h]
  float v208; // [esp+7Ch] [ebp-298h]
  float v209; // [esp+7Ch] [ebp-298h]
  float v210; // [esp+7Ch] [ebp-298h]
  double v211; // [esp+7Ch] [ebp-298h]
  float v212; // [esp+84h] [ebp-290h]
  float v213; // [esp+84h] [ebp-290h]
  float v214; // [esp+84h] [ebp-290h]
  float v215; // [esp+84h] [ebp-290h]
  float v216; // [esp+84h] [ebp-290h]
  float v217; // [esp+84h] [ebp-290h]
  float v218; // [esp+84h] [ebp-290h]
  float v219; // [esp+84h] [ebp-290h]
  double v220; // [esp+84h] [ebp-290h]
  float v221; // [esp+8Ch] [ebp-288h]
  float v222; // [esp+8Ch] [ebp-288h]
  float v223; // [esp+8Ch] [ebp-288h]
  double v224; // [esp+8Ch] [ebp-288h]
  float v225; // [esp+94h] [ebp-280h]
  float v226; // [esp+98h] [ebp-27Ch]
  float v227; // [esp+9Ch] [ebp-278h]
  float v228; // [esp+9Ch] [ebp-278h]
  float v229; // [esp+A0h] [ebp-274h]
  float v230; // [esp+A4h] [ebp-270h]
  _DWORD v231[15]; // [esp+ACh] [ebp-268h] BYREF
  _DWORD v232[15]; // [esp+E8h] [ebp-22Ch] BYREF
  NiFrustumPlanes v233; // [esp+124h] [ebp-1F0h] BYREF
  NiCullingProcess v234; // [esp+18Ch] [ebp-188h] BYREF
  NiFrustumPlanes v235; // [esp+21Ch] [ebp-F8h] BYREF
  NiFrustumPlanes v236; // [esp+284h] [ebp-90h] BYREF
  char v237; // [esp+2F0h] [ebp-24h]
  _BYTE v238[15]; // [esp+2F1h] [ebp-23h]
  unsigned int v239; // [esp+310h] [ebp-4h]

  v237 = 0;
  v238[0] = 1;
  v238[1] = 0;
  v238[2] = 2;
  v238[3] = 0;
  v238[4] = 3;
  v238[5] = 0;
  v238[6] = 4;
  v238[7] = 1;
  v238[8] = 2;
  v238[9] = 1;
  v238[0xA] = 3;
  v238[0xB] = 2;
  v238[0xC] = 4;
  v238[0xD] = 3;
  v238[0xE] = 4;
  v2 = &v235;
  for ( i = 5; i >= 0; --i )
  {
    sub_716DB0(v2);
    v2 = (NiFrustumPlanes *)((char *)v2 + 0x10);
  }
  v235.ActivePlanes = 0x3F;
  v3 = &v236;
  for ( j = 5; j >= 0; --j )
  {
    sub_716DB0(v3);
    v3 = (NiFrustumPlanes *)((char *)v3 + 0x10);
  }
  x = a1->members.super.m_worldTransform.pos.x;
  v189 = a1->members.super.m_worldTransform.rot.data[0][0];
  y = a1->members.super.m_worldTransform.pos.y;
  z = a1->members.super.m_worldTransform.pos.z;
  v198 = a1->members.super.m_worldTransform.rot.data[1][0];
  v236.ActivePlanes = 0x3F;
  v199 = a1->members.super.m_worldTransform.rot.data[2][0];
  v85 = a1->members.super.m_worldTransform.rot.data[0][1];
  *(float *)v232 = x;
  v7 = a1->members.super.m_worldTransform.rot.data[1][1];
  *(float *)&v232[1] = y;
  v125 = v7;
  *(float *)&v232[2] = z;
  Top = a1->members.Frustum.Top;
  v221 = v85 * Top;
  v203 = v125 * Top;
  v212 = Top * a1->members.super.m_worldTransform.rot.data[2][1];
  Right = a1->members.Frustum.Right;
  v181 = a1->members.super.m_worldTransform.rot.data[0][2] * Right;
  v177 = a1->members.super.m_worldTransform.rot.data[1][2] * Right;
  v185 = Right * a1->members.super.m_worldTransform.rot.data[2][2];
  Far = a1->members.Frustum.Far;
  v130 = v181 * Far;
  v9 = v130;
  v59 = v130;
  v131 = v177 * Far;
  v10 = v131;
  v136 = v131;
  v132 = v185 * Far;
  v86 = v132;
  v174 = v221 * Far;
  v222 = v203 * Far;
  v186 = v212 * Far;
  v178 = v189 * Far;
  v182 = v198 * Far;
  v11 = Far * v199;
  v12 = v132;
  v133 = v11;
  v213 = v178 + x;
  v204 = v182 + y;
  v190 = v133 + z;
  v170 = v213 + v174;
  v172 = v204 + v222;
  v166 = v190 + v186;
  v60 = v170 + v59;
  v137 = v172 + v136;
  v87 = v166 + v86;
  *(float *)&v232[3] = v60;
  *(float *)&v232[4] = v137;
  *(float *)&v232[5] = v87;
  v191 = v9;
  v214 = v10;
  v205 = v12;
  v88 = v178 + x;
  v138 = v182 + y;
  v61 = v133 + z;
  v89 = v88 + v174;
  v139 = v138 + v222;
  v62 = v61 + v186;
  v90 = v89 - v191;
  v140 = v139 - v214;
  v63 = v62 - v205;
  *(float *)&v232[6] = v90;
  *(float *)&v232[7] = v140;
  *(float *)&v232[8] = v63;
  v192 = v9;
  v215 = v10;
  v91 = v178 + x;
  v141 = v182 + y;
  v64 = v133 + z;
  v92 = v91 - v174;
  v142 = v141 - v222;
  v65 = v64 - v186;
  v93 = v92 + v192;
  v143 = v142 + v215;
  v66 = v65 + v205;
  *(float *)&v232[9] = v93;
  *(float *)&v232[0xA] = v143;
  *(float *)&v232[0xB] = v66;
  v216 = v10;
  v206 = v12;
  v94 = x + v178;
  v144 = y + v182;
  v67 = z + v133;
  v95 = v94 - v174;
  v145 = v144 - v222;
  v68 = v67 - v186;
  v96 = v95 - v192;
  v146 = v145 - v216;
  v69 = v68 - v206;
  *(float *)&v232[0xC] = v96;
  v13 = a2->members.super.m_worldTransform.pos.x;
  v14 = a2->members.super.m_worldTransform.rot.data[0][0];
  *(float *)&v232[0xD] = v146;
  v15 = a2->members.super.m_worldTransform.pos.y;
  v200 = v14;
  v16 = a2->members.super.m_worldTransform.rot.data[1][0];
  *(float *)&v232[0xE] = v69;
  v201 = v16;
  v227 = a2->members.super.m_worldTransform.pos.z;
  v202 = a2->members.super.m_worldTransform.rot.data[2][0];
  *(float *)v231 = v13;
  v17 = a2->members.super.m_worldTransform.rot.data[0][1];
  *(float *)&v231[1] = v15;
  v147 = v17;
  *(float *)&v231[2] = v227;
  v97 = a2->members.Frustum.Top;
  v167 = v147 * v97;
  v173 = a2->members.super.m_worldTransform.rot.data[1][1] * v97;
  v171 = v97 * a2->members.super.m_worldTransform.rot.data[2][1];
  v18 = a2->members.Frustum.Right;
  v98 = a2->members.super.m_worldTransform.rot.data[0][2] * v18;
  v148 = a2->members.super.m_worldTransform.rot.data[1][2] * v18;
  v70 = v18 * a2->members.super.m_worldTransform.rot.data[2][2];
  v19 = a2->members.Frustum.Far;
  v99 = v98 * v19;
  v20 = v99;
  v193 = v99;
  v100 = v148 * v19;
  v21 = v100;
  v217 = v100;
  v101 = v70 * v19;
  v207 = v101;
  v134 = v167 * v19;
  v183 = v173 * v19;
  v179 = v171 * v19;
  v187 = v200 * v19;
  v223 = v201 * v19;
  v22 = v101;
  v175 = v19 * v202;
  v102 = v187 + v13;
  v149 = v223 + v15;
  v71 = v175 + v227;
  v103 = v102 + v134;
  v150 = v149 + v183;
  v72 = v71 + v179;
  v104 = v103 + v193;
  v151 = v150 + v217;
  v73 = v72 + v207;
  *(float *)&v231[3] = v104;
  *(float *)&v231[4] = v151;
  *(float *)&v231[5] = v73;
  v194 = v20;
  v218 = v21;
  v208 = v22;
  v105 = v187 + v13;
  v152 = v223 + v15;
  v74 = v175 + v227;
  v106 = v105 + v134;
  v153 = v152 + v183;
  v75 = v74 + v179;
  v107 = v106 - v194;
  v154 = v153 - v218;
  v76 = v75 - v208;
  *(float *)&v231[6] = v107;
  *(float *)&v231[7] = v154;
  *(float *)&v231[8] = v76;
  v195 = v20;
  v209 = v22;
  v108 = v187 + v13;
  v155 = v223 + v15;
  v77 = v175 + v227;
  v109 = v108 - v134;
  v156 = v155 - v183;
  v78 = v77 - v179;
  v110 = v109 + v195;
  v157 = v156 + v218;
  v79 = v78 + v209;
  *(float *)&v231[9] = v110;
  *(float *)&v231[0xA] = v157;
  *(float *)&v231[0xB] = v79;
  v196 = v20;
  v219 = v21;
  v210 = v22;
  v111 = v13 + v187;
  v158 = v15 + v223;
  v80 = v227 + v175;
  v112 = v111 - v134;
  v159 = v158 - v183;
  v81 = v80 - v179;
  v113 = v112 - v196;
  v160 = v159 - v219;
  v82 = v81 - v210;
  *(float *)&v231[0xC] = v113;
  *(float *)&v231[0xD] = v160;
  *(float *)&v231[0xE] = v82;
  NiCullingProcess_NiCullingProcess(&v234, 0);
  v234.Camera = a1;
  v239 = 0;
  NiCullingProcess::SetFrustum(&v234, &a1->members.Frustum);
  qmemcpy(&v235, &v234.Planes, sizeof(v235));
  v234.Camera = a2;
  NiCullingProcess::SetFrustum(&v234, &a2->members.Frustum);
  qmemcpy(&v236, &v234.Planes, sizeof(v236));
  v23 = &v233;
  for ( k = 5; k >= 0; --k )
  {
    sub_716DB0(v23);
    v23 = (NiFrustumPlanes *)((char *)v23 + 0x10);
  }
  v25 = 0.0;
  v26 = 0;
  v233.ActivePlanes = 0x3F;
  v176 = 0;
  do
  {
    if ( !v26 )
    {
      v176 = v232;
      v27 = &v236;
      goto LABEL_12;
    }
    if ( v26 == 1 )
    {
      v176 = v231;
      v27 = &v235;
LABEL_12:
      qmemcpy(&v233, v27, sizeof(v233));
    }
    v28 = 0;
    v29 = (float *)(v176 + 2);
    do
    {
      v30 = 0;
      p_z = &v233.CullingPlanes[0].Normal.z;
      while ( 1 )
      {
        v114 = p_z[0xFFFFFFFE] * v29[0xFFFFFFFE] + p_z[0xFFFFFFFF] * v29[0xFFFFFFFF] + *p_z * *v29 - p_z[1];
        if ( v114 <= 0.0 )
          break;
        ++v30;
        p_z += 4;
        if ( v30 >= 6 )
        {
LABEL_17:
          v239 = 0xFFFFFFFF;
          BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&v234);
          return 1;
        }
      }
      ++v28;
      v29 += 3;
    }
    while ( v28 < 5 );
    ++v26;
  }
  while ( v26 < 2 );
  v33 = 0;
  for ( m = 0; m < 2; ++m )
  {
    if ( !v33 )
    {
      v176 = v232;
      v34 = &v236;
      goto LABEL_25;
    }
    if ( v33 == 1 )
    {
      v176 = v231;
      v34 = &v235;
LABEL_25:
      qmemcpy(&v233, v34, sizeof(v233));
    }
    for ( n = 0; n < 8; ++n )
    {
      v36 = (float *)&v176[3 * (unsigned __int8)v238[2 * n - 1]];
      v225 = *v36;
      v228 = v36[2];
      v226 = v36[1];
      v37 = (float *)&v176[3 * (unsigned __int8)v238[2 * n]];
      v220 = *v37;
      v38 = 0;
      v39 = &v233.CullingPlanes[0].Normal.z;
      v211 = v37[1];
      v224 = v37[2];
      v40 = v225;
      v41 = v226;
      v197 = v228;
      do
      {
        v42 = v39[0xFFFFFFFF];
        v43 = v39[0xFFFFFFFE];
        v161 = *v39;
        v44 = v39[1];
        v115 = v43 * v40 + v42 * v41 + v161 * v197 - v44;
        if ( v115 >= v25 )
          v45 = v115 > v25;
        else
          v45 = 2;
        v116 = v43 * v220 + v42 * v211 + v161 * v224 - v44;
        if ( v116 >= v25 )
          v46 = v116 > v25;
        else
          v46 = 2;
        if ( v45 == v46 )
        {
          if ( !v45 && !v46 )
            goto LABEL_17;
        }
        else
        {
          v229 = v39[0xFFFFFFFE];
          v47 = v39[1];
          v230 = v39[0xFFFFFFFF];
          v117 = v47 * v229;
          v162 = v230 * v47;
          v83 = v47 * *v39;
          v168 = v117 - v40;
          v118 = v162 - v41;
          v163 = v83 - v197;
          v135 = v220 - v40;
          v184 = v211 - v41;
          v180 = v224 - v197;
          v119 = v118 * v230 + v168 * v229 + v163 * *v39;
          v48 = v119;
          v120 = *v39 * v180 + v229 * v135 + v230 * v184;
          v121 = v48 / v120;
          v49 = v121;
          v50 = v121;
          v122 = v135 * v121;
          v164 = v184 * v50;
          v169 = v122 + v40;
          v165 = v164 + v41;
          if ( v49 >= v25 && v49 <= 1.0 )
          {
            v84 = v50 * v180;
            v123 = v84 + v197;
            v51 = v123;
            v52 = 0;
            v53 = v165;
            v54 = &v233.CullingPlanes[0].Normal.z;
            while ( 1 )
            {
              if ( v52 != v38 )
              {
                v124 = v54[0xFFFFFFFE] * v169 + v54[0xFFFFFFFF] * v53 + v51 * *v54 - v54[1];
                v55 = v53;
                v56 = v25;
                v57 = v55;
                if ( v56 > v124 )
                {
                  v25 = v56;
                  break;
                }
                v58 = v56;
                v53 = v57;
                v25 = v58;
              }
              ++v52;
              v54 += 4;
              if ( v52 >= 6 )
                goto LABEL_17;
            }
          }
        }
        ++v38;
        v39 += 4;
      }
      while ( v38 < 6 );
    }
    v33 = m + 1;
  }
  v239 = 0xFFFFFFFF;
  BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&v234);
  return 0;
}
