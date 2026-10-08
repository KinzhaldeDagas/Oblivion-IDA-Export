int __cdecl sub_977DF0(
        float a1,
        float *a2,
        float a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9,
        float *a10)
{
  double v10; // st7
  double v14; // st5
  double v15; // st4
  double v16; // st3
  double v17; // st4
  int v18; // ebp
  double v19; // st3
  double v20; // st5
  double v21; // st4
  double v22; // st7
  double v23; // st5
  double v24; // st7
  double v26; // st2
  double v27; // st7
  double v28; // st5
  double v29; // st7
  double v30; // st2
  double v31; // st4
  int v32; // eax
  int v33; // esi
  int v34; // edi
  double v35; // st2
  double v36; // st7
  double v37; // st5
  double v38; // st2
  double v39; // st5
  float v40; // eax
  int v41; // eax
  int v42; // esi
  int v43; // edi
  double v44; // st6
  double v45; // st7
  double v46; // st5
  float v47; // [esp+0h] [ebp-40h]
  float v48; // [esp+4h] [ebp-3Ch]
  float v49; // [esp+4h] [ebp-3Ch]
  float v50; // [esp+4h] [ebp-3Ch]
  float v51; // [esp+4h] [ebp-3Ch]
  float v52; // [esp+4h] [ebp-3Ch]
  float v53; // [esp+4h] [ebp-3Ch]
  float v54; // [esp+4h] [ebp-3Ch]
  float v55; // [esp+4h] [ebp-3Ch]
  float v56; // [esp+4h] [ebp-3Ch]
  float v57; // [esp+4h] [ebp-3Ch]
  float v58; // [esp+8h] [ebp-38h]
  float v59; // [esp+8h] [ebp-38h]
  float v60; // [esp+8h] [ebp-38h]
  float v61; // [esp+8h] [ebp-38h]
  float v62; // [esp+8h] [ebp-38h]
  float v63; // [esp+8h] [ebp-38h]
  float v64; // [esp+8h] [ebp-38h]
  float v65; // [esp+8h] [ebp-38h]
  float v66; // [esp+8h] [ebp-38h]
  float v67; // [esp+Ch] [ebp-34h]
  float v68; // [esp+Ch] [ebp-34h]
  float v69; // [esp+Ch] [ebp-34h]
  float v70; // [esp+Ch] [ebp-34h]
  float v71; // [esp+Ch] [ebp-34h]
  float v72; // [esp+Ch] [ebp-34h]
  float v73; // [esp+Ch] [ebp-34h]
  float v74; // [esp+Ch] [ebp-34h]
  float v75; // [esp+10h] [ebp-30h]
  float v76; // [esp+10h] [ebp-30h]
  float v77; // [esp+10h] [ebp-30h]
  float v78; // [esp+10h] [ebp-30h]
  float v79; // [esp+10h] [ebp-30h]
  float v80; // [esp+10h] [ebp-30h]
  float v81; // [esp+10h] [ebp-30h]
  float v82; // [esp+10h] [ebp-30h]
  float v83; // [esp+10h] [ebp-30h]
  float v84; // [esp+14h] [ebp-2Ch]
  float v85; // [esp+14h] [ebp-2Ch]
  float v86; // [esp+14h] [ebp-2Ch]
  float v87; // [esp+14h] [ebp-2Ch]
  float v88; // [esp+14h] [ebp-2Ch]
  float v89; // [esp+14h] [ebp-2Ch]
  float v90; // [esp+14h] [ebp-2Ch]
  float v91; // [esp+14h] [ebp-2Ch]
  float v92; // [esp+14h] [ebp-2Ch]
  float v93; // [esp+18h] [ebp-28h]
  float v94; // [esp+18h] [ebp-28h]
  float v95; // [esp+18h] [ebp-28h]
  float v96; // [esp+18h] [ebp-28h]
  float v97; // [esp+18h] [ebp-28h]
  float v98; // [esp+18h] [ebp-28h]
  float v99; // [esp+18h] [ebp-28h]
  float v100; // [esp+1Ch] [ebp-24h]
  float v101; // [esp+1Ch] [ebp-24h]
  float v102; // [esp+1Ch] [ebp-24h]
  float v103; // [esp+1Ch] [ebp-24h]
  float v104; // [esp+1Ch] [ebp-24h]
  float v105; // [esp+1Ch] [ebp-24h]
  float v106; // [esp+20h] [ebp-20h]
  float v107; // [esp+20h] [ebp-20h]
  float v108; // [esp+20h] [ebp-20h]
  float v109; // [esp+20h] [ebp-20h]
  float v110; // [esp+20h] [ebp-20h]
  float v111; // [esp+20h] [ebp-20h]
  float v112; // [esp+24h] [ebp-1Ch]
  float v113; // [esp+24h] [ebp-1Ch]
  float v114; // [esp+24h] [ebp-1Ch]
  float v115; // [esp+24h] [ebp-1Ch]
  float v116; // [esp+24h] [ebp-1Ch]
  float v117; // [esp+24h] [ebp-1Ch]
  float v118; // [esp+28h] [ebp-18h]
  float v119; // [esp+28h] [ebp-18h]
  float v120; // [esp+28h] [ebp-18h]
  float v121; // [esp+28h] [ebp-18h]
  float v122; // [esp+28h] [ebp-18h]
  float v123; // [esp+28h] [ebp-18h]
  float v124; // [esp+28h] [ebp-18h]
  float v125; // [esp+28h] [ebp-18h]
  float v126; // [esp+28h] [ebp-18h]
  float v127; // [esp+28h] [ebp-18h]
  float v128; // [esp+2Ch] [ebp-14h]
  float v129; // [esp+2Ch] [ebp-14h]
  float v130; // [esp+2Ch] [ebp-14h]
  float v131; // [esp+2Ch] [ebp-14h]
  float v132; // [esp+2Ch] [ebp-14h]
  float v133; // [esp+2Ch] [ebp-14h]
  float v134; // [esp+2Ch] [ebp-14h]
  float v135; // [esp+2Ch] [ebp-14h]
  float v136; // [esp+2Ch] [ebp-14h]
  float v137; // [esp+2Ch] [ebp-14h]
  float v138; // [esp+30h] [ebp-10h]
  float v139; // [esp+30h] [ebp-10h]
  float v140; // [esp+30h] [ebp-10h]
  float v141; // [esp+30h] [ebp-10h]
  float v142; // [esp+30h] [ebp-10h]
  float v143; // [esp+30h] [ebp-10h]
  float v144; // [esp+30h] [ebp-10h]
  float v145; // [esp+30h] [ebp-10h]
  float v146; // [esp+30h] [ebp-10h]
  float v147; // [esp+30h] [ebp-10h]
  float v148; // [esp+34h] [ebp-Ch]
  float v149; // [esp+38h] [ebp-8h]
  float v150; // [esp+3Ch] [ebp-4h]
  float v151; // [esp+44h] [ebp+4h]
  float v152; // [esp+44h] [ebp+4h]
  float v153; // [esp+44h] [ebp+4h]
  float v154; // [esp+44h] [ebp+4h]
  float v155; // [esp+44h] [ebp+4h]
  float v156; // [esp+44h] [ebp+4h]
  float v157; // [esp+44h] [ebp+4h]
  float v158; // [esp+44h] [ebp+4h]
  float v159; // [esp+44h] [ebp+4h]
  float v160; // [esp+44h] [ebp+4h]
  float v161; // [esp+44h] [ebp+4h]
  float v162; // [esp+44h] [ebp+4h]
  float v163; // [esp+44h] [ebp+4h]
  float v164; // [esp+44h] [ebp+4h]
  float v165; // [esp+44h] [ebp+4h]
  float v166; // [esp+44h] [ebp+4h]
  float v167; // [esp+44h] [ebp+4h]
  float v168; // [esp+44h] [ebp+4h]
  float v169; // [esp+44h] [ebp+4h]
  float v170; // [esp+44h] [ebp+4h]
  float v171; // [esp+44h] [ebp+4h]
  float v172; // [esp+48h] [ebp+8h]
  float v173; // [esp+4Ch] [ebp+Ch]
  float v174; // [esp+50h] [ebp+10h]
  int v175; // [esp+50h] [ebp+10h]
  float v176; // [esp+54h] [ebp+14h]

  v10 = a1; /*0x977df3*/
  v47 = a1 - 0.0; /*0x977e0f*/
  v151 = *a4 * 0.0; /*0x977e1b*/
  v14 = v151; /*0x977e1f*/
  v48 = v151; /*0x977e23*/
  v152 = a4[1] * 0.0; /*0x977e2c*/
  v15 = v152; /*0x977e30*/
  v58 = v152; /*0x977e34*/
  v153 = a4[2] * 0.0; /*0x977e3d*/
  v16 = v153; /*0x977e41*/
  v75 = *a5 + v48; /*0x977e4f*/
  v84 = a5[1] + v58; /*0x977e5a*/
  v93 = a5[2] + v153; /*0x977e65*/
  v154 = v84 * a2[1] + v75 * *a2 + v93 * a2[2]; /*0x977e81*/
  v172 = v154 - a3; /*0x977e93*/
  v76 = v14; /*0x977e99*/
  v85 = v15; /*0x977e9f*/
  v94 = v16; /*0x977ea3*/
  v49 = *a6 + v76; /*0x977ead*/
  v59 = a6[1] + v85; /*0x977eb8*/
  v67 = v94 + a6[2]; /*0x977ec3*/
  v155 = v49 * *a2 + v59 * a2[1] + v67 * a2[2]; /*0x977edf*/
  v176 = v155 - a3; /*0x977ee9*/
  v156 = *a4 * v10; /*0x977ef1*/
  v17 = v156; /*0x977ef9*/
  v77 = v156; /*0x977f01*/
  v18 = 0; /*0x977f05*/
  v157 = a4[1] * v10; /*0x977f0c*/
  v19 = v157; /*0x977f10*/
  v86 = v157; /*0x977f14*/
  v158 = a4[2] * v10; /*0x977f1d*/
  v50 = *a5 + v77; /*0x977f2f*/
  v60 = a5[1] + v86; /*0x977f3a*/
  v68 = v158 + a5[2]; /*0x977f45*/
  v174 = v50 * *a2 + v60 * a2[1] + v68 * a2[2]; /*0x977f61*/
  *(float *)&v175 = v174 - a3; /*0x977f6b*/
  v78 = v17; /*0x977f71*/
  v87 = v19; /*0x977f75*/
  v51 = *a6 + v78; /*0x977f87*/
  v61 = a6[1] + v87; /*0x977f92*/
  v69 = v158 + a6[2]; /*0x977f9d*/
  v159 = v51 * *a2 + v61 * a2[1] + v69 * a2[2]; /*0x977fb9*/
  v173 = v159 - a3; /*0x977fc1*/
  v20 = v176; /*0x977fc5*/
  v21 = v172; /*0x977fd3*/
  if ( v176 * v172 <= 0.0 ) /*0x977fde*/
  {
    if ( 0.0 == v21 && 0.0 == v20 ) /*0x977ffc*/
    {
      *a7 = 0.0; /*0x978010*/
      *a9 = 0.0; /*0x978012*/
      v160 = *a7; /*0x97801a*/
      v79 = *a4 * v160; /*0x97802a*/
      v88 = a4[1] * v160; /*0x978033*/
      v95 = v160 * a4[2]; /*0x97803a*/
      v52 = *a5 + v79; /*0x978044*/
      v62 = a5[1] + v88; /*0x97804f*/
      v22 = v95 + a5[2]; /*0x978057*/
      *a8 = v52; /*0x97805e*/
      v70 = v22; /*0x978064*/
      a8[1] = v62; /*0x978068*/
      a8[2] = v70; /*0x97806f*/
      v23 = *a9; /*0x978082*/
      v80 = *a4 * v23; /*0x978088*/
      v89 = a4[1] * v23; /*0x978091*/
      v96 = v23 * a4[2]; /*0x978098*/
      v53 = *a6 + v80; /*0x9780a2*/
      v63 = a6[1] + v89; /*0x9780b1*/
      v24 = v96 + a6[2]; /*0x9780bd*/
      *a10 = v53; /*0x9780c1*/
      v71 = v24; /*0x9780c4*/
      a10[1] = v63; /*0x9780cc*/
      a10[2] = v71; /*0x9780d0*/
      return 1; /*0x9780dc*/
    }
    *a7 = 0.0; /*0x9780dd*/
    v18 = 1; /*0x9780df*/
    v161 = v21 / (v21 - v20); /*0x9780ec*/
    v118 = *a4 * 0.0; /*0x9780f4*/
    v128 = a4[1] * 0.0; /*0x9780fd*/
    v138 = a4[2] * 0.0; /*0x978106*/
    v54 = *a6 * v161; /*0x978116*/
    v64 = a6[1] * v161; /*0x97811f*/
    v72 = a6[2] * v161; /*0x978128*/
    v162 = 1.0 - v161; /*0x978130*/
    v81 = *a5 * v162; /*0x978140*/
    v90 = a5[1] * v162; /*0x978149*/
    v97 = v162 * a5[2]; /*0x978150*/
    v100 = v81 + v54; /*0x97815c*/
    v106 = v90 + v64; /*0x978168*/
    v112 = v97 + v72; /*0x978174*/
    v82 = v100 + v118; /*0x978180*/
    *a8 = v82; /*0x97818c*/
    v91 = v106 + v128; /*0x978192*/
    a8[1] = v91; /*0x97819e*/
    v98 = v112 + v138; /*0x9781a5*/
    a8[2] = v98; /*0x9781ad*/
  }
  v26 = *(float *)&v175; /*0x9781b0*/
  if ( *(float *)&v175 * v21 > 0.0 ) /*0x9781bf*/
  {
    v31 = *(float *)&v175; /*0x97839d*/
  }
  else
  {
    if ( 0.0 == v21 && 0.0 == v26 ) /*0x9781dd*/
    {
      *a7 = 0.0; /*0x9781ef*/
      *a9 = v10; /*0x9781f1*/
      v163 = *a7; /*0x9781f5*/
      v119 = *a4 * v163; /*0x978205*/
      v129 = a4[1] * v163; /*0x97820e*/
      v139 = v163 * a4[2]; /*0x978215*/
      v101 = *a5 + v119; /*0x97821f*/
      v107 = a5[1] + v129; /*0x97822e*/
      v27 = v139 + a5[2]; /*0x978236*/
      *a8 = v101; /*0x978239*/
      a8[1] = v107; /*0x97823f*/
      v113 = v27; /*0x978242*/
      a8[2] = v113; /*0x97824a*/
      v28 = *a9; /*0x978259*/
      v120 = *a4 * v28; /*0x97825f*/
      v130 = v28 * a4[1]; /*0x978268*/
      v140 = v28 * a4[2]; /*0x97826f*/
      v102 = *a5 + v120; /*0x978279*/
      v108 = a5[1] + v130; /*0x978284*/
      v29 = v140 + a5[2]; /*0x97828c*/
LABEL_10:
      v114 = v29; /*0x97828f*/
      *a10 = v102; /*0x97829f*/
      a10[1] = v108; /*0x9782a5*/
      a10[2] = v114; /*0x9782a8*/
      return 1; /*0x9782b7*/
    }
    v30 = v21 * v47 / (v21 - v26); /*0x9782c6*/
    v31 = *(float *)&v175; /*0x9782c6*/
    v164 = v30 + 0.0; /*0x9782ca*/
    v121 = *a4 * v164; /*0x9782da*/
    v131 = a4[1] * v164; /*0x9782e3*/
    v141 = a4[2] * v164; /*0x9782ec*/
    v55 = *a5 + v121; /*0x9782f6*/
    v65 = a5[1] + v131; /*0x978305*/
    v73 = v141 + a5[2]; /*0x978310*/
    if ( v18 ) /*0x978314*/
    {
      *a9 = v164; /*0x978328*/
      *a10 = v55; /*0x97832a*/
      a10[1] = v65; /*0x978330*/
      a10[2] = v73; /*0x978337*/
      if ( *a9 < (double)*a7 ) /*0x978345*/
      {
        v165 = *a7; /*0x978349*/
        *a7 = *a9; /*0x97834f*/
        *a9 = v165; /*0x978355*/
        v32 = *(_DWORD *)a8; /*0x978359*/
        v33 = *((_DWORD *)a8 + 1); /*0x97835b*/
        v34 = *((_DWORD *)a8 + 2); /*0x97835e*/
        *a8 = *a10; /*0x978361*/
        a8[1] = a10[1]; /*0x978366*/
        a8[2] = a10[2]; /*0x97836c*/
        *(_DWORD *)a10 = v32; /*0x97836f*/
        *((_DWORD *)a10 + 1) = v33; /*0x978371*/
        *((_DWORD *)a10 + 2) = v34; /*0x978374*/
      }
      return 1; /*0x978383*/
    }
    *a7 = v164; /*0x978384*/
    *a8 = v55; /*0x978386*/
    a8[1] = v65; /*0x97838c*/
    a8[2] = v73; /*0x978393*/
    v18 = 1; /*0x978396*/
  }
  v35 = v173; /*0x97839f*/
  if ( v173 * v20 > 0.0 ) /*0x9783ae*/
  {
    v39 = v173; /*0x97856c*/
LABEL_28:
    if ( v39 * v31 > 0.0 ) /*0x97857b*/
    {
      if ( !v18 ) /*0x978731*/
        return 0; /*0x97875f*/
    }
    else
    {
      if ( 0.0 == v31 ) /*0x97858a*/
      {
        v44 = v31; /*0x978590*/
        if ( 0.0 == v39 ) /*0x978599*/
        {
          *a7 = v10; /*0x9785a7*/
          *a9 = v10; /*0x9785a9*/
          v169 = *a7; /*0x9785ad*/
          v125 = *a4 * v169; /*0x9785bd*/
          v135 = v169 * a4[1]; /*0x9785c6*/
          v145 = v169 * a4[2]; /*0x9785cd*/
          v104 = *a5 + v125; /*0x9785d7*/
          v110 = a5[1] + v135; /*0x9785e2*/
          v45 = v145 + a5[2]; /*0x9785ea*/
          *a8 = v104; /*0x9785f1*/
          v116 = v45; /*0x9785f7*/
          a8[1] = v110; /*0x9785fb*/
          a8[2] = v116; /*0x978602*/
          v46 = *a9; /*0x978611*/
          v126 = *a4 * v46; /*0x978617*/
          v136 = v46 * a4[1]; /*0x978620*/
          v146 = v46 * a4[2]; /*0x978627*/
          v102 = *a6 + v126; /*0x978631*/
          v108 = a6[1] + v136; /*0x97863c*/
          v29 = v146 + a6[2]; /*0x978644*/
          goto LABEL_10; /*0x978647*/
        }
      }
      else
      {
        v44 = v31; /*0x97864c*/
      }
      v170 = v44 / (v44 - v39); /*0x978654*/
      v148 = *a4 * v10; /*0x97865c*/
      v149 = a4[1] * v10; /*0x978665*/
      v150 = a4[2] * v10; /*0x97866e*/
      v105 = *a6 * v170; /*0x97867e*/
      v111 = a6[1] * v170; /*0x978687*/
      v117 = a6[2] * v170; /*0x978690*/
      v171 = 1.0 - v170; /*0x978698*/
      v127 = *a5 * v171; /*0x9786a8*/
      v137 = a5[1] * v171; /*0x9786b1*/
      v147 = v171 * a5[2]; /*0x9786b8*/
      v83 = v127 + v105; /*0x9786c4*/
      v92 = v137 + v111; /*0x9786d0*/
      v99 = v147 + v117; /*0x9786dc*/
      v66 = v92 + v149; /*0x9786f4*/
      v74 = v99 + v150; /*0x978700*/
      if ( v18 ) /*0x978704*/
      {
        v40 = v83 + v148; /*0x978706*/
        goto LABEL_24; /*0x97870a*/
      }
      *a7 = v10; /*0x978713*/
      v57 = v83 + v148; /*0x9786e8*/
      *a8 = v57; /*0x978719*/
      a8[1] = v66; /*0x97871f*/
      a8[2] = v74; /*0x978722*/
    }
    *a9 = *a7; /*0x978739*/
    *a10 = *a8; /*0x978741*/
    a10[1] = a8[1]; /*0x978747*/
    a10[2] = a8[2]; /*0x97874f*/
    return 1; /*0x97875b*/
  }
  if ( 0.0 == v20 && 0.0 == v35 ) /*0x9783cc*/
  {
    *a7 = 0.0; /*0x9783de*/
    *a9 = v10; /*0x9783e0*/
    v166 = *a7; /*0x9783e4*/
    v122 = *a4 * v166; /*0x9783f4*/
    v132 = v166 * a4[1]; /*0x9783fd*/
    v142 = v166 * a4[2]; /*0x978404*/
    v103 = *a6 + v122; /*0x97840e*/
    v109 = a6[1] + v132; /*0x97841d*/
    v36 = v142 + a6[2]; /*0x978425*/
    *a8 = v103; /*0x978428*/
    a8[1] = v109; /*0x97842e*/
    v115 = v36; /*0x978431*/
    a8[2] = v115; /*0x978439*/
    v37 = *a9; /*0x978448*/
    v123 = *a4 * v37; /*0x97844e*/
    v133 = v37 * a4[1]; /*0x978457*/
    v143 = v37 * a4[2]; /*0x97845e*/
    v102 = *a6 + v123; /*0x978468*/
    v108 = a6[1] + v133; /*0x978473*/
    v29 = v143 + a6[2]; /*0x97847b*/
    goto LABEL_10; /*0x97847e*/
  }
  v38 = v20 * v47 / (v20 - v35); /*0x978491*/
  v39 = v173; /*0x978491*/
  v167 = v38 + 0.0; /*0x978495*/
  v124 = *a4 * v167; /*0x9784a5*/
  v134 = a4[1] * v167; /*0x9784ae*/
  v144 = a4[2] * v167; /*0x9784b7*/
  v56 = *a6 + v124; /*0x9784c1*/
  v40 = v56; /*0x9784c5*/
  v66 = a6[1] + v134; /*0x9784d0*/
  v74 = v144 + a6[2]; /*0x9784db*/
  if ( !v18 ) /*0x9784df*/
  {
    *a7 = v167; /*0x978553*/
    *a8 = v56; /*0x978555*/
    a8[1] = v66; /*0x97855b*/
    a8[2] = v74; /*0x978562*/
    v18 = 1; /*0x978565*/
    goto LABEL_28; /*0x97856a*/
  }
  v10 = v167; /*0x9784e9*/
LABEL_24:
  *a9 = v10; /*0x9784eb*/
  *a10 = v40; /*0x9784f5*/
  a10[1] = v66; /*0x9784fb*/
  a10[2] = v74; /*0x978502*/
  if ( *a9 >= (double)*a7 ) /*0x978510*/
    return 1; /*0x978510*/
  v168 = *a7; /*0x978518*/
  *a7 = *a9; /*0x97851e*/
  *a9 = v168; /*0x978524*/
  v41 = *(_DWORD *)a8; /*0x978528*/
  v42 = *((_DWORD *)a8 + 1); /*0x97852a*/
  v43 = *((_DWORD *)a8 + 2); /*0x97852d*/
  *a8 = *a10; /*0x978530*/
  a8[1] = a10[1]; /*0x978535*/
  a8[2] = a10[2]; /*0x97853b*/
  *(_DWORD *)a10 = v41; /*0x97853e*/
  *((_DWORD *)a10 + 1) = v42; /*0x978540*/
  *((_DWORD *)a10 + 2) = v43; /*0x978543*/
  return 1; /*0x9780d9*/
}
