// Test overlap between two camera/frustum volumes using corners, planes, and edge intersections.
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

  v237 = 0; /*0x7d350a*/
  v238[0] = 1; /*0x7d3512*/
  v238[1] = 0; /*0x7d351a*/
  v238[2] = 2; /*0x7d3522*/
  v238[3] = 0; /*0x7d352a*/
  v238[4] = 3; /*0x7d3532*/
  v238[5] = 0; /*0x7d3539*/
  v238[6] = 4; /*0x7d3541*/
  v238[7] = 1; /*0x7d3548*/
  v238[8] = 2; /*0x7d3550*/
  v238[9] = 1; /*0x7d3558*/
  v238[0xA] = 3; /*0x7d3560*/
  v238[0xB] = 2; /*0x7d3567*/
  v238[0xC] = 4; /*0x7d356f*/
  v238[0xD] = 3; /*0x7d3576*/
  v238[0xE] = 4; /*0x7d357d*/
  v2 = &v235; /*0x7d3584*/
  for ( i = 5; i >= 0; --i ) /*0x7d358b*/
  {
    sub_716DB0(v2); /*0x7d3595*/
    v2 = (NiFrustumPlanes *)((char *)v2 + 0x10); /*0x7d359a*/
  }
  v235.ActivePlanes = 0x3F; /*0x7d35a4*/
  v3 = &v236; /*0x7d35af*/
  for ( j = 5; j >= 0; --j ) /*0x7d35b6*/
  {
    sub_716DB0(v3); /*0x7d35c2*/
    v3 = (NiFrustumPlanes *)((char *)v3 + 0x10); /*0x7d35c7*/
  }
  x = a1->members.super.m_worldTransform.pos.x; /*0x7d35d4*/
  v189 = a1->members.super.m_worldTransform.rot.data[0][0]; /*0x7d35da*/
  y = a1->members.super.m_worldTransform.pos.y; /*0x7d35de*/
  z = a1->members.super.m_worldTransform.pos.z; /*0x7d35e7*/
  v198 = a1->members.super.m_worldTransform.rot.data[1][0]; /*0x7d35ed*/
  v236.ActivePlanes = 0x3F; /*0x7d35f1*/
  v199 = a1->members.super.m_worldTransform.rot.data[2][0]; /*0x7d3606*/
  v85 = a1->members.super.m_worldTransform.rot.data[0][1]; /*0x7d361b*/
  *(float *)v232 = x; /*0x7d361f*/
  v7 = a1->members.super.m_worldTransform.rot.data[1][1]; /*0x7d3626*/
  *(float *)&v232[1] = y; /*0x7d3629*/
  v125 = v7; /*0x7d3630*/
  *(float *)&v232[2] = z; /*0x7d3634*/
  Top = a1->members.Frustum.Top; /*0x7d364b*/
  v221 = v85 * Top; /*0x7d3659*/
  v203 = v125 * Top; /*0x7d3666*/
  v212 = Top * a1->members.super.m_worldTransform.rot.data[2][1]; /*0x7d366e*/
  Right = a1->members.Frustum.Right; /*0x7d3693*/
  v181 = a1->members.super.m_worldTransform.rot.data[0][2] * Right; /*0x7d36a1*/
  v177 = a1->members.super.m_worldTransform.rot.data[1][2] * Right; /*0x7d36ab*/
  v185 = Right * a1->members.super.m_worldTransform.rot.data[2][2]; /*0x7d36b3*/
  Far = a1->members.Frustum.Far; /*0x7d36c1*/
  v130 = v181 * Far; /*0x7d36cb*/
  v9 = v130; /*0x7d36cf*/
  v59 = v130; /*0x7d36d3*/
  v131 = v177 * Far; /*0x7d36dd*/
  v10 = v131; /*0x7d36e1*/
  v136 = v131; /*0x7d36e5*/
  v132 = v185 * Far; /*0x7d36ef*/
  v86 = v132; /*0x7d36f7*/
  v174 = v221 * Far; /*0x7d3704*/
  v222 = v203 * Far; /*0x7d3716*/
  v186 = v212 * Far; /*0x7d3731*/
  v178 = v189 * Far; /*0x7d3743*/
  v182 = v198 * Far; /*0x7d3758*/
  v11 = Far * v199; /*0x7d376a*/
  v12 = v132; /*0x7d376a*/
  v133 = v11; /*0x7d376c*/
  v213 = v178 + x; /*0x7d3788*/
  v204 = v182 + y; /*0x7d379c*/
  v190 = v133 + z; /*0x7d37ad*/
  v170 = v213 + v174; /*0x7d37bc*/
  v172 = v204 + v222; /*0x7d37c8*/
  v166 = v190 + v186; /*0x7d37d4*/
  v60 = v170 + v59; /*0x7d37e0*/
  v137 = v172 + v136; /*0x7d37ec*/
  v87 = v166 + v86; /*0x7d37f8*/
  *(float *)&v232[3] = v60; /*0x7d380c*/
  *(float *)&v232[4] = v137; /*0x7d381f*/
  *(float *)&v232[5] = v87; /*0x7d3830*/
  v191 = v9; /*0x7d3837*/
  v214 = v10; /*0x7d383d*/
  v205 = v12; /*0x7d3846*/
  v88 = v178 + x; /*0x7d3883*/
  v138 = v182 + y; /*0x7d388d*/
  v61 = v133 + z; /*0x7d3897*/
  v89 = v88 + v174; /*0x7d38a3*/
  v139 = v138 + v222; /*0x7d38af*/
  v62 = v61 + v186; /*0x7d38bb*/
  v90 = v89 - v191; /*0x7d38c7*/
  v140 = v139 - v214; /*0x7d38d6*/
  v63 = v62 - v205; /*0x7d38e2*/
  *(float *)&v232[6] = v90; /*0x7d38f6*/
  *(float *)&v232[7] = v140; /*0x7d3909*/
  *(float *)&v232[8] = v63; /*0x7d391a*/
  v192 = v9; /*0x7d3921*/
  v215 = v10; /*0x7d3927*/
  v91 = v178 + x; /*0x7d396d*/
  v141 = v182 + y; /*0x7d3977*/
  v64 = v133 + z; /*0x7d3981*/
  v92 = v91 - v174; /*0x7d398d*/
  v142 = v141 - v222; /*0x7d3999*/
  v65 = v64 - v186; /*0x7d39a5*/
  v93 = v92 + v192; /*0x7d39b1*/
  v143 = v142 + v215; /*0x7d39c0*/
  v66 = v65 + v205; /*0x7d39cc*/
  *(float *)&v232[9] = v93; /*0x7d39e0*/
  *(float *)&v232[0xA] = v143; /*0x7d39f3*/
  *(float *)&v232[0xB] = v66; /*0x7d3a04*/
  v216 = v10; /*0x7d3a11*/
  v206 = v12; /*0x7d3a1a*/
  v94 = x + v178; /*0x7d3a59*/
  v144 = y + v182; /*0x7d3a65*/
  v67 = z + v133; /*0x7d3a6d*/
  v95 = v94 - v174; /*0x7d3a79*/
  v145 = v144 - v222; /*0x7d3a85*/
  v68 = v67 - v186; /*0x7d3a91*/
  v96 = v95 - v192; /*0x7d3a9d*/
  v146 = v145 - v216; /*0x7d3aac*/
  v69 = v68 - v206; /*0x7d3ab8*/
  *(float *)&v232[0xC] = v96; /*0x7d3acc*/
  v13 = a2->members.super.m_worldTransform.pos.x; /*0x7d3ad3*/
  v14 = a2->members.super.m_worldTransform.rot.data[0][0]; /*0x7d3aed*/
  *(float *)&v232[0xD] = v146; /*0x7d3af0*/
  v15 = a2->members.super.m_worldTransform.pos.y; /*0x7d3af7*/
  v200 = v14; /*0x7d3afd*/
  v16 = a2->members.super.m_worldTransform.rot.data[1][0]; /*0x7d3b01*/
  *(float *)&v232[0xE] = v69; /*0x7d3b04*/
  v201 = v16; /*0x7d3b11*/
  v227 = a2->members.super.m_worldTransform.pos.z; /*0x7d3b26*/
  v202 = a2->members.super.m_worldTransform.rot.data[2][0]; /*0x7d3b2d*/
  *(float *)v231 = v13; /*0x7d3b31*/
  v17 = a2->members.super.m_worldTransform.rot.data[0][1]; /*0x7d3b38*/
  *(float *)&v231[1] = v15; /*0x7d3b3b*/
  v147 = v17; /*0x7d3b42*/
  *(float *)&v231[2] = v227; /*0x7d3b46*/
  v97 = a2->members.Frustum.Top; /*0x7d3b64*/
  v167 = v147 * v97; /*0x7d3b72*/
  v173 = a2->members.super.m_worldTransform.rot.data[1][1] * v97; /*0x7d3b7c*/
  v171 = v97 * a2->members.super.m_worldTransform.rot.data[2][1]; /*0x7d3b84*/
  v18 = a2->members.Frustum.Right; /*0x7d3baa*/
  v98 = a2->members.super.m_worldTransform.rot.data[0][2] * v18; /*0x7d3bb4*/
  v148 = a2->members.super.m_worldTransform.rot.data[1][2] * v18; /*0x7d3bbe*/
  v70 = v18 * a2->members.super.m_worldTransform.rot.data[2][2]; /*0x7d3bc6*/
  v19 = a2->members.Frustum.Far; /*0x7d3bd4*/
  v99 = v98 * v19; /*0x7d3bde*/
  v20 = v99; /*0x7d3be2*/
  v193 = v99; /*0x7d3be6*/
  v100 = v148 * v19; /*0x7d3bf0*/
  v21 = v100; /*0x7d3bf4*/
  v217 = v100; /*0x7d3bf8*/
  v101 = v70 * v19; /*0x7d3c05*/
  v207 = v101; /*0x7d3c0d*/
  v134 = v167 * v19; /*0x7d3c17*/
  v183 = v173 * v19; /*0x7d3c29*/
  v179 = v171 * v19; /*0x7d3c3b*/
  v187 = v200 * v19; /*0x7d3c4d*/
  v223 = v201 * v19; /*0x7d3c5f*/
  v22 = v101; /*0x7d3c77*/
  v175 = v19 * v202; /*0x7d3c79*/
  v102 = v187 + v13; /*0x7d3c92*/
  v149 = v223 + v15; /*0x7d3ca3*/
  v71 = v175 + v227; /*0x7d3cb4*/
  v103 = v102 + v134; /*0x7d3cc0*/
  v150 = v149 + v183; /*0x7d3ccc*/
  v72 = v71 + v179; /*0x7d3cd8*/
  v104 = v103 + v193; /*0x7d3ce4*/
  v151 = v150 + v217; /*0x7d3cf3*/
  v73 = v72 + v207; /*0x7d3cff*/
  *(float *)&v231[3] = v104; /*0x7d3d13*/
  *(float *)&v231[4] = v151; /*0x7d3d26*/
  *(float *)&v231[5] = v73; /*0x7d3d37*/
  v194 = v20; /*0x7d3d3e*/
  v218 = v21; /*0x7d3d44*/
  v208 = v22; /*0x7d3d4d*/
  v105 = v187 + v13; /*0x7d3d8a*/
  v152 = v223 + v15; /*0x7d3d94*/
  v74 = v175 + v227; /*0x7d3d9e*/
  v106 = v105 + v134; /*0x7d3daa*/
  v153 = v152 + v183; /*0x7d3db6*/
  v75 = v74 + v179; /*0x7d3dc2*/
  v107 = v106 - v194; /*0x7d3dce*/
  v154 = v153 - v218; /*0x7d3ddd*/
  v76 = v75 - v208; /*0x7d3de9*/
  *(float *)&v231[6] = v107; /*0x7d3dfd*/
  *(float *)&v231[7] = v154; /*0x7d3e10*/
  *(float *)&v231[8] = v76; /*0x7d3e21*/
  v195 = v20; /*0x7d3e28*/
  v209 = v22; /*0x7d3e37*/
  v108 = v187 + v13; /*0x7d3e74*/
  v155 = v223 + v15; /*0x7d3e7e*/
  v77 = v175 + v227; /*0x7d3e88*/
  v109 = v108 - v134; /*0x7d3e94*/
  v156 = v155 - v183; /*0x7d3ea0*/
  v78 = v77 - v179; /*0x7d3eac*/
  v110 = v109 + v195; /*0x7d3eb8*/
  v157 = v156 + v218; /*0x7d3ec7*/
  v79 = v78 + v209; /*0x7d3ed3*/
  *(float *)&v231[9] = v110; /*0x7d3ee7*/
  *(float *)&v231[0xA] = v157; /*0x7d3efa*/
  *(float *)&v231[0xB] = v79; /*0x7d3f09*/
  v196 = v20; /*0x7d3f14*/
  v219 = v21; /*0x7d3f1a*/
  v210 = v22; /*0x7d3f23*/
  v111 = v13 + v187; /*0x7d3f65*/
  v158 = v15 + v223; /*0x7d3f71*/
  v80 = v227 + v175; /*0x7d3f79*/
  v112 = v111 - v134; /*0x7d3f85*/
  v159 = v158 - v183; /*0x7d3f91*/
  v81 = v80 - v179; /*0x7d3f9d*/
  v113 = v112 - v196; /*0x7d3fa9*/
  v160 = v159 - v219; /*0x7d3fb8*/
  v82 = v81 - v210; /*0x7d3fc7*/
  *(float *)&v231[0xC] = v113; /*0x7d3fdb*/
  *(float *)&v231[0xD] = v160; /*0x7d3fee*/
  *(float *)&v231[0xE] = v82; /*0x7d4004*/
  NiCullingProcess_NiCullingProcess(&v234, 0); /*0x7d400b*/
  v234.Camera = a1; /*0x7d4010*/
  v239 = 0; /*0x7d4025*/
  NiCullingProcess::SetFrustum(&v234, &a1->members.Frustum); /*0x7d4030*/
  qmemcpy(&v235, &v234.Planes, sizeof(v235)); /*0x7d4048*/
  v234.Camera = a2; /*0x7d404a*/
  NiCullingProcess::SetFrustum(&v234, &a2->members.Frustum); /*0x7d405f*/
  qmemcpy(&v236, &v234.Planes, sizeof(v236)); /*0x7d4077*/
  v23 = &v233; /*0x7d4079*/
  for ( k = 5; k >= 0; --k ) /*0x7d4080*/
  {
    sub_716DB0(v23); /*0x7d4087*/
    v23 = (NiFrustumPlanes *)((char *)v23 + 0x10); /*0x7d408c*/
  }
  v25 = 0.0; /*0x7d4094*/
  v26 = 0; /*0x7d4096*/
  v233.ActivePlanes = 0x3F; /*0x7d4098*/
  v176 = 0; /*0x7d40a3*/
  do /*0x7d417e*/
  {
    if ( !v26 ) /*0x7d40ac*/
    {
      v176 = v232; /*0x7d40ce*/
      v27 = &v236; /*0x7d40d2*/
      goto LABEL_12; /*0x7d40d2*/
    }
    if ( v26 == 1 ) /*0x7d40b1*/
    {
      v176 = v231; /*0x7d40ba*/
      v27 = &v235; /*0x7d40be*/
LABEL_12:
      qmemcpy(&v233, v27, sizeof(v233)); /*0x7d40e5*/
    }
    v28 = 0; /*0x7d40e7*/
    v29 = (float *)(v176 + 2); /*0x7d40ed*/
    do /*0x7d4172*/
    {
      v30 = 0; /*0x7d40f3*/
      p_z = &v233.CullingPlanes[0].Normal.z; /*0x7d40f8*/
      while ( 1 ) /*0x7d4116*/
      {
        v114 = p_z[0xFFFFFFFE] * v29[0xFFFFFFFE] + p_z[0xFFFFFFFF] * v29[0xFFFFFFFF] + *p_z * *v29 - p_z[1]; /*0x7d4116*/
        if ( v114 <= 0.0 ) /*0x7d412e*/
          break; /*0x7d412e*/
        ++v30; /*0x7d4130*/
        p_z += 4; /*0x7d4133*/
        if ( v30 >= 6 ) /*0x7d4139*/
        {
LABEL_17:
          v239 = 0xFFFFFFFF; /*0x7d413b*/
          BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&v234); /*0x7d4155*/
          return 1; /*0x7d415c*/
        }
      }
      ++v28; /*0x7d4165*/
      v29 += 3; /*0x7d416a*/
    }
    while ( v28 < 5 ); /*0x7d4172*/
    ++v26; /*0x7d4178*/
  }
  while ( v26 < 2 ); /*0x7d417e*/
  v33 = 0; /*0x7d4184*/
  for ( m = 0; m < 2; ++m ) /*0x7d4186*/
  {
    if ( !v33 ) /*0x7d418d*/
    {
      v176 = v232; /*0x7d41af*/
      v34 = &v236; /*0x7d41b3*/
      goto LABEL_25; /*0x7d41b3*/
    }
    if ( v33 == 1 ) /*0x7d4192*/
    {
      v176 = v231; /*0x7d419b*/
      v34 = &v235; /*0x7d419f*/
LABEL_25:
      qmemcpy(&v233, v34, sizeof(v233)); /*0x7d41c6*/
    }
    for ( n = 0; n < 8; ++n ) /*0x7d41c8*/
    {
      v36 = (float *)&v176[3 * (unsigned __int8)v238[2 * n - 1]]; /*0x7d41d9*/
      v225 = *v36; /*0x7d41de*/
      v228 = v36[2]; /*0x7d41eb*/
      v226 = v36[1]; /*0x7d41fa*/
      v37 = (float *)&v176[3 * (unsigned __int8)v238[2 * n]]; /*0x7d4204*/
      v220 = *v37; /*0x7d421f*/
      v38 = 0; /*0x7d4226*/
      v39 = &v233.CullingPlanes[0].Normal.z; /*0x7d422c*/
      v211 = v37[1]; /*0x7d4233*/
      v224 = v37[2]; /*0x7d423b*/
      v40 = v225; /*0x7d4242*/
      v41 = v226; /*0x7d4249*/
      v197 = v228; /*0x7d4257*/
      do /*0x7d4501*/
      {
        v42 = v39[0xFFFFFFFF]; /*0x7d425b*/
        v43 = v39[0xFFFFFFFE]; /*0x7d425e*/
        v161 = *v39; /*0x7d4263*/
        v44 = v39[1]; /*0x7d4286*/
        v115 = v43 * v40 + v42 * v41 + v161 * v197 - v44; /*0x7d4288*/
        if ( v115 >= v25 ) /*0x7d4297*/
          v45 = v115 > v25; /*0x7d42a9*/
        else
          v45 = 2; /*0x7d429b*/
        v116 = v43 * v220 + v42 * v211 + v161 * v224 - v44; /*0x7d42d4*/
        if ( v116 >= v25 ) /*0x7d42e3*/
          v46 = v116 > v25; /*0x7d42f5*/
        else
          v46 = 2; /*0x7d42e7*/
        if ( v45 == v46 ) /*0x7d4302*/
        {
          if ( !v45 && !v46 ) /*0x7d44ec*/
            goto LABEL_17; /*0x7d44ec*/
        }
        else
        {
          v229 = v39[0xFFFFFFFE]; /*0x7d4317*/
          v47 = v39[1]; /*0x7d4325*/
          v230 = v39[0xFFFFFFFF]; /*0x7d4329*/
          v117 = v47 * v229; /*0x7d433b*/
          v162 = v230 * v47; /*0x7d434a*/
          v83 = v47 * *v39; /*0x7d435b*/
          v168 = v117 - v40; /*0x7d4365*/
          v118 = v162 - v41; /*0x7d436f*/
          v163 = v83 - v197; /*0x7d437f*/
          v135 = v220 - v40; /*0x7d438c*/
          v184 = v211 - v41; /*0x7d439e*/
          v180 = v224 - v197; /*0x7d43b1*/
          v119 = v118 * v230 + v168 * v229 + v163 * *v39; /*0x7d43d3*/
          v48 = v119; /*0x7d43f1*/
          v120 = *v39 * v180 + v229 * v135 + v230 * v184; /*0x7d43f5*/
          v121 = v48 / v120; /*0x7d43fd*/
          v49 = v121; /*0x7d4419*/
          v50 = v121; /*0x7d441d*/
          v122 = v135 * v121; /*0x7d4425*/
          v164 = v184 * v50; /*0x7d442f*/
          v169 = v122 + v40; /*0x7d4441*/
          v165 = v164 + v41; /*0x7d444b*/
          if ( v49 >= v25 && v49 <= 1.0 ) /*0x7d4471*/
          {
            v84 = v50 * v180; /*0x7d4437*/
            v123 = v84 + v197; /*0x7d4457*/
            v51 = v123; /*0x7d4477*/
            v52 = 0; /*0x7d447b*/
            v53 = v165; /*0x7d447d*/
            v54 = &v233.CullingPlanes[0].Normal.z; /*0x7d4481*/
            while ( 1 ) /*0x7d4488*/
            {
              if ( v52 != v38 ) /*0x7d448a*/
              {
                v124 = v54[0xFFFFFFFE] * v169 + v54[0xFFFFFFFF] * v53 + v51 * *v54 - v54[1]; /*0x7d44a3*/
                v55 = v53; /*0x7d44a7*/
                v56 = v25; /*0x7d44a7*/
                v57 = v55; /*0x7d44a7*/
                if ( v56 > v124 ) /*0x7d44b2*/
                {
                  v25 = v56; /*0x7d44f2*/
                  break; /*0x7d44f2*/
                }
                v58 = v56; /*0x7d44b4*/
                v53 = v57; /*0x7d44b4*/
                v25 = v58; /*0x7d44b4*/
              }
              ++v52; /*0x7d44b6*/
              v54 += 4; /*0x7d44b9*/
              if ( v52 >= 6 ) /*0x7d44bf*/
                goto LABEL_17; /*0x7d44bf*/
            }
          }
        }
        ++v38; /*0x7d44f8*/
        v39 += 4; /*0x7d44fb*/
      }
      while ( v38 < 6 ); /*0x7d4501*/
    }
    v33 = m + 1; /*0x7d451b*/
  }
  v239 = 0xFFFFFFFF; /*0x7d4534*/
  BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&v234); /*0x7d453f*/
  return 0; /*0x7d4546*/
}
