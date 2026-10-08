// TES4 authoritative: builds/updates controller collision shapes and derived geometry fields from construction info; not a per-frame climb API.
void __fastcall bhkCharacterController_BuildCharacterShapesFromCinfo(int a1, int a2, int a3)
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
  int *v19; // eax
  int v20; // ecx
  float v21; // edx
  int x_low; // ebx
  float z; // eax
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
  float y; // [esp+2Ch] [ebp-F0h]
  float v131; // [esp+30h] [ebp-ECh]
  float v132; // [esp+34h] [ebp-E8h]
  float v133; // [esp+38h] [ebp-E4h]
  int v134; // [esp+3Ch] [ebp-E0h] BYREF
  float v135; // [esp+40h] [ebp-DCh]
  float v136; // [esp+44h] [ebp-D8h]
  float v137; // [esp+48h] [ebp-D4h]
  int v138; // [esp+4Ch] [ebp-D0h] BYREF
  _DWORD *v139; // [esp+50h] [ebp-CCh] BYREF
  int v140; // [esp+54h] [ebp-C8h]
  unsigned int v141; // [esp+58h] [ebp-C4h]
  _DWORD *v142; // [esp+5Ch] [ebp-C0h] BYREF
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
  int v153; // [esp+88h] [ebp-94h]
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

  v133 = *(float *)&a1; /*0x8951d7*/
  *(_DWORD *)(a1 + 0x370) = 2; /*0x8951db*/
  if ( a3 ) /*0x8951e5*/
  {
    v4 = 0.0; /*0x8951eb*/
    v5 = *(Ni2DBuffer **)(a3 + 0x8C);           // cinfo+0x8C optional prebuilt shape/wrapper; when present it is installed directly at proxy+0x374 and radius is read from it. /*0x8951ed*/
    v137 = 0.0; /*0x8951f5*/
    *(float *)&v150 = 0.0; /*0x8951f9*/
    v148 = 0.0; /*0x8951fd*/
    *(float *)&v149 = 0.0; /*0x895201*/
    v6 = hkFactor; /*0x895205*/
    if ( v5 ) /*0x89520b*/
    {
      NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x374), v5); /*0x89521b*/
      v7 = sub_890BA0((int *)a1); /*0x895222*/
      if ( v7 && (v8 = *(_DWORD *)(v7 + 8)) != 0 ) /*0x895230*/
        v9 = *(float *)(v8 + 0xC); /*0x895232*/
      else
        v9 = flt_B2EFC4; /*0x895237*/
      v132 = v9; /*0x89523d*/
      v10 = a1; /*0x895241*/
      v123 = v132 * dbl_A372E0; /*0x89524d*/
      v132 = 0.0; /*0x895253*/
      v11 = v147; /*0x895257*/
      v12 = v123; /*0x89525b*/
      v13 = hkFactor; /*0x89525f*/
      goto LABEL_96; /*0x895265*/
    }
    if ( *(_DWORD *)(a3 + 0x70) )               // cinfo+0x70 source object/root used to derive controller shape bounds when no prebuilt shape is supplied. /*0x89526a*/
    {
      if ( !*(_BYTE *)(a3 + 0x85) ) /*0x895275*/
      {
        v14 = sub_6FBA90(*(NiObjectNET **)(a3 + 0x70)); /*0x89528c*/
        if ( v14 ) /*0x895293*/
        {
          v15 = sub_4707B0((float *)&v14[3], (float *)&v159.super.m_uiRefCount, *(float *)(a3 + 0x98));// cinfo+0x98 scale feeds source-object bounds extraction for controller shape construction. /*0x8952b6*/
          v16 = *v15; /*0x8952c1*/
          v105 = *(float *)(a3 + 0x98); /*0x8952c3*/
          v17 = v15[1]; /*0x8952c7*/
          v18 = v15[2]; /*0x8952ce*/
          v145 = v16; /*0x8952d2*/
          v146 = v17; /*0x8952e4*/
          v147 = v18; /*0x8952e8*/
          v19 = (int *)sub_4707B0((float *)&v14[1].members.m_uiRefCount, (float *)&v159.super.m_uiRefCount, v105); /*0x8952ec*/
          v20 = *v19; /*0x8952f1*/
          v21 = *((float *)v19 + 1); /*0x8952f3*/
          x_low = SLODWORD(g_zeroNiPoint3.x); /*0x8952fe*/
          y = g_zeroNiPoint3.y; /*0x895304*/
          z = g_zeroNiPoint3.z; /*0x895308*/
          v153 = v20; /*0x89530d*/
          v154 = v21; /*0x895314*/
          v129 = x_low; /*0x89531b*/
          v131 = z; /*0x89531f*/
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 0x1F4) & 1) != 0 ) /*0x89536f*/
          {
            v146 = *(float *)(*(_DWORD *)(a3 + 0x70) + 0x2C); /*0x895371*/
            v132 = *(float *)(a3 + 0x98) * dbl_A492B0; /*0x895381*/
            v28 = v132; /*0x895385*/
            v147 = v132; /*0x895389*/
          }
          else
          {
            v147 = *(float *)(*(_DWORD *)(a3 + 0x70) + 0x2C); /*0x89538f*/
            v132 = *(float *)(a3 + 0x98) * dbl_A492B0; /*0x89539f*/
            v28 = v132; /*0x8953a3*/
            v146 = v132; /*0x8953a7*/
          }
          v20 = SLODWORD(g_zeroNiPoint3.x); /*0x8953ab*/
          v145 = v28; /*0x8953b1*/
          v21 = g_zeroNiPoint3.y; /*0x8953b5*/
          v29 = g_zeroNiPoint3.z; /*0x8953bb*/
          x_low = v20; /*0x8953c1*/
          v129 = v20; /*0x8953c3*/
          y = v21; /*0x8953c7*/
          v131 = v29; /*0x8953cb*/
          v153 = v20; /*0x8953cf*/
          v154 = v21; /*0x8953d6*/
        }
        v6 = hkFactor; /*0x89532b*/
        v4 = 0.0; /*0x89532b*/
LABEL_13:
        v24 = v145; /*0x89532d*/
        v25 = v147; /*0x895331*/
        v26 = v146; /*0x895339*/
        if ( v147 >= (double)v145 && v26 <= v25 ) /*0x895349*/
        {
          v27 = v133; /*0x895454*/
        }
        else
        {
          v27 = v133; /*0x89534f*/
          *(_DWORD *)(LODWORD(v133) + 0x1F4) |= 1u; /*0x895353*/
        }
        if ( (*(_BYTE *)(LODWORD(v27) + 0x1F4) & 1) != 0 ) /*0x89545f*/
        {
          v34 = v26; /*0x895465*/
          v35 = v4; /*0x895465*/
          v36 = v34; /*0x895465*/
          v131 = v35; /*0x89546b*/
          v129 = v20; /*0x89546f*/
          v37 = v35; /*0x895473*/
          v38 = v24; /*0x895473*/
          v39 = v37; /*0x895473*/
          y = v21; /*0x895475*/
          if ( v38 <= v34 ) /*0x895480*/
          {
            v49 = dbl_A3D0C0; /*0x8954f9*/
            v132 = v36 * v49; /*0x8954fb*/
            v50 = v38; /*0x8954ff*/
            v51 = v49; /*0x8954ff*/
            if ( v50 >= v25 ) /*0x895508*/
            {
              v124 = v25; /*0x895518*/
              v125 = v50; /*0x89551e*/
              v54 = v51; /*0x895522*/
              v44 = v25; /*0x895522*/
              v53 = v54; /*0x895522*/
            }
            else
            {
              v124 = v50; /*0x89550a*/
              v52 = v51; /*0x89550e*/
              v44 = v25; /*0x89550e*/
              v53 = v52; /*0x89550e*/
              v125 = v44; /*0x895510*/
            }
            v134 = v20; /*0x895528*/
            v136 = v131; /*0x895534*/
            y = v36 - v124 + y; /*0x895540*/
            v135 = y; /*0x89554c*/
            v135 = y * dbl_A3D360; /*0x895556*/
            v42 = v53; /*0x89555c*/
            v48 = v124; /*0x89555e*/
          }
          else
          {
            v40 = dbl_A3D0C0; /*0x89548c*/
            v132 = v38 * v40; /*0x89548e*/
            v41 = v36; /*0x895492*/
            v42 = v40; /*0x895492*/
            if ( v41 >= v25 ) /*0x89549b*/
            {
              v124 = v25; /*0x8954ab*/
              v125 = v41; /*0x8954b1*/
              v46 = v38; /*0x8954b5*/
              v44 = v25; /*0x8954b5*/
              v45 = v46; /*0x8954b5*/
            }
            else
            {
              v124 = v41; /*0x89549d*/
              v43 = v38; /*0x8954a1*/
              v44 = v25; /*0x8954a1*/
              v45 = v43; /*0x8954a1*/
              v125 = v44; /*0x8954a3*/
            }
            v135 = v21; /*0x8954bb*/
            v136 = v131; /*0x8954c7*/
            v47 = v45 - v124 + *(float *)&v129; /*0x8954d1*/
            v48 = v124; /*0x8954d1*/
            *(float *)&v129 = v47; /*0x8954d3*/
            v134 = v129; /*0x8954df*/
            *(float *)&v134 = *(float *)&v129 * dbl_A3D360; /*0x8954e9*/
          }
          v10 = LODWORD(v133); /*0x895564*/
          if ( dbl_A31C70 * v125 <= v48 ) /*0x895577*/
          {
            v11 = v44; /*0x895bcc*/
            v71 = v131; /*0x895bce*/
          }
          else
          {
            v126 = v125 - v48; /*0x895581*/
            v131 = v126 * v42 + v48 + dbl_A2FC68; /*0x895593*/
            v136 = v131; /*0x89559b*/
            v55 = v48;                          // cinfo+0x4C contributes to persistent active shape vertical offset proxy+0x314 in this build branch. /*0x8955a4*/
            v56 = v42 * *(float *)(a3 + 0x4C); /*0x8955a4*/
            v57 = v55; /*0x8955a4*/
            v106 = v56; /*0x8955a6*/
            *(float *)(LODWORD(v133) + 0x314) = v106;// Stores persistent active shape vertical offset at proxy+0x314 during controller shape build. /*0x8955ae*/
            *(float *)(v10 + 0x348) = v106 + *(float *)(v10 + 0x348);// Build-time writes same vertical offset into proxy+0x348; runtime update refreshes +0x348 from +0x314 before state dispatch. /*0x8955ba*/
            if ( v39 == *(float *)(a3 + 0x50) ) // cinfo+0x50 is a mutable construction field tested before being replaced by a Havok-scaled branch value; high-level name unresolved. /*0x8955c8*/
              *(float *)(a3 + 0x50) = v57 * v6; /*0x8955cc*/
            v138 = 0; /*0x8955dc*/
            v139 = 0; /*0x8955e0*/
            v140 = 0; /*0x8955e4*/
            v141 = 0x80000000; /*0x8955e8*/
            v142 = 0; /*0x8955ec*/
            v143 = 0; /*0x8955f0*/
            v144 = 0x80000000; /*0x8955f4*/
            v165 = 0; /*0x8955fa*/
            v58 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x895601*/
            LOBYTE(v165) = 1; /*0x89560f*/
            if ( v58 ) /*0x895617*/
              v152 = sub_8B6A40(v58, (float *)&v129, (float *)&v134, v124); /*0x895632*/
            else
              v152 = 0; /*0x895638*/
            LOBYTE(v165) = 0; /*0x895649*/
            v59 = hkFactor; /*0x895659*/
            v137 = v131 * v59; /*0x89565b*/
            *(float *)&v150 = 0.0; /*0x895661*/
            v148 = v59 * v124; /*0x895669*/
            *(float *)&v107 = *(float *)&v129 - *(float *)&v134; /*0x895675*/
            *(float *)&v149 = y - v135; /*0x895681*/
            v133 = v131 - v136; /*0x895689*/
            v159.super.m_uiRefCount = v107; /*0x895691*/
            v159.width = v149; /*0x89569c*/
            *(float *)&v159.height = v133; /*0x8956a7*/
            v60 = NiPoint3_Length((float *)&v159.super.m_uiRefCount) * dbl_A2FAA0; /*0x8956b3*/
            v157[0] = v129; /*0x8956bf*/
            v108 = v60; /*0x8956c6*/
            v109 = v108 * hkFactor; /*0x8956d4*/
            *(float *)&v149 = v109 + v148 + v148; /*0x8956e4*/
            v131 = v126; /*0x8956ec*/
            v158 = v126; /*0x8956f8*/
            y = y - dbl_A49310; /*0x895705*/
            *(float *)&v157[1] = y; /*0x89570f*/
            v133 = v126 + 1.0; /*0x89571a*/
            v131 = v133; /*0x895722*/
            v158 = v126 - 1.0; /*0x89572d*/
            v61 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x895734*/
            v151 = v61; /*0x89573c*/
            LOBYTE(v165) = 2; /*0x895742*/
            if ( v61 ) /*0x89574a*/
            {
              v110 = v126 - dbl_A2F928; /*0x895762*/
              v111 = sub_8B6A40(v61, (float *)&v129, (float *)v157, v110); /*0x895776*/
            }
            else
            {
              v111 = 0; /*0x89577c*/
            }
            v136 = v126; /*0x895788*/
            v156 = v126; /*0x895794*/
            v62 = v135 + dbl_A49310; /*0x89579b*/
            LOBYTE(v165) = 0; /*0x8957a3*/
            v155[0] = v134; /*0x8957ab*/
            v135 = v62; /*0x8957b2*/
            *(float *)&v155[1] = v135; /*0x8957be*/
            v136 = v133; /*0x8957c5*/
            v156 = v126 - dbl_A2F928; /*0x8957d6*/
            v63 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8957dd*/
            v151 = v63; /*0x8957e5*/
            LOBYTE(v165) = 3; /*0x8957eb*/
            if ( v63 ) /*0x8957f3*/
            {
              v127 = v126 - dbl_A2F928; /*0x89580b*/
              v128 = sub_8B6A40(v63, (float *)&v134, (float *)v155, v127); /*0x89581f*/
            }
            else
            {
              v128 = 0; /*0x895825*/
            }
            LOBYTE(v165) = 0; /*0x89582f*/
            if ( v152 ) /*0x895837*/
              hkObject = v152->hkObject; /*0x895839*/
            else
              hkObject = 0; /*0x89583e*/
            if ( v140 == (v141 & 0x3FFFFFFF) ) /*0x89584e*/
              sub_8A6EE0((const void **)&v139, 4); /*0x895857*/
            v139[v140++] = hkObject; /*0x89586b*/
            if ( v111 ) /*0x895875*/
              v65 = v111->hkObject; /*0x895877*/
            else
              v65 = 0; /*0x89587c*/
            if ( v140 == (v141 & 0x3FFFFFFF) ) /*0x89588b*/
              sub_8A6EE0((const void **)&v139, 4); /*0x895894*/
            v139[v140++] = v65; /*0x8958a4*/
            if ( v128 ) /*0x8958b2*/
              v66 = v128->hkObject; /*0x8958b4*/
            else
              v66 = 0; /*0x8958b9*/
            if ( v140 == (v141 & 0x3FFFFFFF) ) /*0x8958c9*/
              sub_8A6EE0((const void **)&v139, 4); /*0x8958d2*/
            v139[v140++] = v66; /*0x8958e2*/
            if ( v143 == (v144 & 0x3FFFFFFF) ) /*0x8958f8*/
              sub_8A6EE0((const void **)&v142, 4); /*0x895901*/
            v142[v143++] = 0; /*0x895911*/
            if ( v143 == (v144 & 0x3FFFFFFF) ) /*0x89592f*/
              sub_8A6EE0((const void **)&v142, 4); /*0x895938*/
            v142[v143++] = 0; /*0x895948*/
            if ( v143 == (v144 & 0x3FFFFFFF) ) /*0x895966*/
              sub_8A6EE0((const void **)&v142, 4); /*0x89596f*/
            v142[v143++] = 0; /*0x89597f*/
            *(_DWORD *)(a3 + 0x9C) = 0; /*0x89598d*/
            v67 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x895997*/
            v151 = v67; /*0x89599f*/
            LOBYTE(v165) = 4; /*0x8959a5*/
            if ( v67 ) /*0x8959ad*/
              v68 = OB_bhkListShape_CtorFromCinfo_010201A0(v67, &v138); /*0x8959b6*/
            else
              v68 = 0; /*0x8959bd*/
            v69 = *(_DWORD *)(a3 + 0x8C) == 0; /*0x8959bf*/
            LOBYTE(v165) = 0; /*0x8959c6*/
            if ( v69 ) /*0x8959ce*/
              v70 = *(_DWORD *)(a3 + 0x9C); /*0x8959d4*/
            else
              v70 = 0; /*0x8959d0*/
            NiSmartPointer_Set__((Ni2DBuffer **)(v10 + 4 * v70 + 0x374), (Ni2DBuffer *)v68); /*0x8959e2*/
            v165 = 0xFFFFFFFF; /*0x8959eb*/
            sub_893510(&v138); /*0x8959f6*/
            v6 = hkFactor; /*0x8959ff*/
            v39 = 0.0; /*0x895a05*/
            v48 = v124; /*0x895a07*/
            v71 = v131; /*0x895a0f*/
            v11 = v147; /*0x895a0f*/
          }
        }
        else
        {
          v134 = x_low; /*0x895b37*/
          v135 = y; /*0x895b3b*/
          v132 = v25 + v25; /*0x895b3f*/
          v10 = LODWORD(v133); /*0x895b43*/
          v79 = v25; /*0x895b47*/
          v80 = v24 + v26; /*0x895b47*/
          v81 = v79; /*0x895b47*/
          v124 = v80 * dbl_A2FAA0; /*0x895b4f*/
          v48 = v124; /*0x895b63*/
          v131 = v79 - v124 + v131; /*0x895b65*/
          v82 = v131; /*0x895b6d*/
          v136 = v131; /*0x895b71*/
          v136 = dbl_A3D360 * v131; /*0x895b7d*/
          v117 = v124 * dbl_A31C70; /*0x895b89*/
          v118 = v117 * v6; /*0x895b93*/
          if ( v118 <= (double)*(float *)(LODWORD(v133) + 0x248) ) /*0x895baa*/
          {
            v86 = v4; /*0x895bc1*/
            v11 = v81; /*0x895bc1*/
            v87 = v86; /*0x895bc3*/
            v71 = v131; /*0x895bc3*/
            v39 = v87; /*0x895bc3*/
          }
          else
          {
            *(float *)(LODWORD(v133) + 0x248) = v118; /*0x895bac*/
            v83 = v82; /*0x895bb2*/
            v84 = v4; /*0x895bb4*/
            v11 = v81; /*0x895bb4*/
            v85 = v84; /*0x895bb6*/
            v71 = v83; /*0x895bb6*/
            v39 = v85; /*0x895bb6*/
          }
        }
        *(float *)(v10 + 0x340) = *(float *)&v153 * v6;// Stores shape-local horizontal offset X at proxy+0x340 in Havok units. /*0x895a20*/
        *(float *)(v10 + 0x344) = v154 * v6;    // Stores shape-local horizontal offset Y at proxy+0x344 in Havok units. /*0x895a2f*/
        if ( *(_DWORD *)(v10 + 0x374) ) /*0x895a35*/
        {
          v92 = v48; /*0x895d21*/
          goto LABEL_97; /*0x895d23*/
        }
        v72 = v71; /*0x895a3e*/
        v112 = v71 + v48; /*0x895a44*/
        v113 = v112 * v6; /*0x895a4e*/
        v73 = dbl_A3D0C0; /*0x895a5d*/
        v114 = *(float *)(a3 + 0x4C) * v73 + v113;// cinfo+0x4C contributes to persistent active shape vertical offset proxy+0x314 in the alternate build branch. /*0x895a63*/
        *(float *)(v10 + 0x314) = v114;         // Stores persistent active shape vertical offset at proxy+0x314 for the alternate shape-build branch. /*0x895a6b*/
        *(float *)(v10 + 0x348) = v114 + *(float *)(v10 + 0x348);// Build-time writes alternate vertical offset into proxy+0x348; runtime update refreshes +0x348 from +0x314 before state dispatch. /*0x895a77*/
        v74 = v39; /*0x895a7d*/
        v75 = v73; /*0x895a7d*/
        if ( v74 == *(float *)(a3 + 0x50) )     // cinfo+0x50 is a mutable construction field tested before being replaced by a Havok-scaled branch value; high-level name unresolved. /*0x895a87*/
          *(float *)(a3 + 0x50) = v48 * v6; /*0x895a8d*/
        v69 = (*(_BYTE *)(v10 + 0x1F4) & 1) == 0; /*0x895a90*/
        v148 = *(float *)(a3 + 0x50); /*0x895a9a*/
        *(float *)&v149 = v75 * v148 + dbl_A2FAA0 * v148; /*0x895ab2*/
        v115 = v136 * v6; /*0x895abc*/
        *(float *)&v150 = v115 - v148; /*0x895ac6*/
        if ( v69 ) /*0x895aca*/
        {
          v137 = v6 * v72; /*0x895c1c*/
          v103 = v48; /*0x895c20*/
          v89 = sub_8905E0((int)&v129, (int)&v134, v103); /*0x895c25*/
          NiSmartPointer_Set__((Ni2DBuffer **)(v10 + 0x374), (Ni2DBuffer *)v89); /*0x895c30*/
          if ( *(_BYTE *)(a3 + 0x85) )          // cinfo+0x85 selects the shared/alternate secondary shape path; exact high-level flag name unresolved. /*0x895c35*/
          {
            if ( !unk_BA7A64 ) /*0x895c3e*/
            {
              v90 = sub_893230((float *)&v129, (float *)&v134, v124, *(float *)(v10 + 0x248)); /*0x895c6d*/
              NiSmartPointer_Set__((Ni2DBuffer **)&unk_BA7A64, (Ni2DBuffer *)v90); /*0x895c7b*/
            }
            OB_NiSmartPointer_Assign_010201A0((int *)(v10 + 0x378), (int *)&unk_BA7A64); /*0x895c8b*/
            goto LABEL_95; /*0x895c90*/
          }
          v78 = sub_893230((float *)&v129, (float *)&v134, v124, *(float *)(v10 + 0x248)); /*0x895cb8*/
          v88 = (Ni2DBuffer **)(v10 + 0x378); /*0x895cc0*/
        }
        else
        {
          v76 = v148; /*0x895ad4*/
          *(_DWORD *)(a3 + 0x9C) = 0; /*0x895ad6*/
          v116 = v6 * v72; /*0x895ae2*/
          v137 = v76 + v116; /*0x895aea*/
          v77 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x895aee*/
          v151 = v77; /*0x895af6*/
          v165 = 5; /*0x895afc*/
          if ( v77 ) /*0x895b07*/
            v78 = sub_8B6A40(v77, (float *)&v129, (float *)&v134, v124); /*0x895b21*/
          else
            v78 = 0; /*0x895bd7*/
          v69 = *(_DWORD *)(a3 + 0x8C) == 0; /*0x895bd9*/
          v165 = 0xFFFFFFFF; /*0x895be0*/
          if ( v69 ) /*0x895beb*/
            v88 = (Ni2DBuffer **)(v10 + 4 * *(_DWORD *)(a3 + 0x9C) + 0x374); /*0x895c01*/
          else
            v88 = (Ni2DBuffer **)(v10 + 0x374); /*0x895bef*/
        }
        NiSmartPointer_Set__(v88, (Ni2DBuffer *)v78); /*0x895cc7*/
LABEL_95:
        v12 = v124; /*0x895ccc*/
        v13 = hkFactor; /*0x895cda*/
        v11 = v147; /*0x895cda*/
LABEL_96:
        v91 = v13; /*0x895cdc*/
        v92 = v12; /*0x895cdc*/
        v6 = v91; /*0x895cdc*/
LABEL_97:
        v119 = v92 * v6; /*0x895cde*/
        *(float *)(v10 + 0x3A0) = v119;         // Stores controller capsule radius at proxy+0x3A0 in Havok units. /*0x895ce8*/
        *(float *)(v10 + 0x3A8) = v119;         // Stores duplicate/secondary controller capsule radius at proxy+0x3A8 in Havok units. /*0x895cee*/
        *(float *)(v10 + 0x3A4) = v132 * v6;    // Stores controller capsule height at proxy+0x3A4 in Havok units. /*0x895cfa*/
        v120 = v11 + v11; /*0x895d04*/
        *(float *)(v10 + 0x33C) = v6 * v120;    // Stores derived shape span/diameter-like scalar at proxy+0x33C in Havok units; exact high-level cinfo meaning still unresolved. /*0x895d0c*/
        if ( *(_DWORD *)(a3 + 0x8C) ) /*0x895d12*/
          v93 = 0; /*0x895d1b*/
        else
          v93 = *(_DWORD *)(a3 + 0x9C); /*0x895d25*/
        bhkCharacterController_SetShapeType((int *)v10, v93); /*0x895d2e*/
        if ( *(_BYTE *)(a3 + 0x84) )            // cinfo+0x84 enables optional secondary shape construction using proxy+0x248 as vertical/base offset. /*0x895d33*/
        {
          v160.w = 0.0; /*0x895d42*/
          v161 = 0; /*0x895d49*/
          v162 = 0x80000000; /*0x895d50*/
          v160.y = 0.0; /*0x895d5b*/
          LOBYTE(v160.z) = 2; /*0x895d62*/
          LODWORD(v94) = *(_DWORD *)(a3 + 0x74) & 0xFFFFFFC0 | 0x15; /*0x895d7a*/
          *(float *)&v150 = *(float *)(v10 + 0x248) + *(float *)&v150; /*0x895d7d*/
          v160.x = v94; /*0x895d81*/
          v165 = 6; /*0x895d93*/
          v137 = v148 + v137; /*0x895d9e*/
          v95 = v137; /*0x895da6*/
          if ( v137 <= (double)*(float *)&v150 ) /*0x895db1*/
          {
            v137 = v95 + *(float *)(v10 + 0x248); /*0x895db9*/
            v95 = v137; /*0x895dbd*/
          }
          v96 = dbl_A3D0C0; /*0x895dd9*/
          *(float *)&v121 = -v148 * v96; /*0x895ddb*/
          v159.super.m_uiRefCount = v121; /*0x895de3*/
          v159.width = v121; /*0x895dea*/
          v159.height = v150; /*0x895df3*/
          *(float *)&v159.data = 0.0; /*0x895dfc*/
          v163 = v159; /*0x895e0f*/
          *(float *)&v122 = v96 * v148; /*0x895e19*/
          v159.super.m_uiRefCount = v122; /*0x895e21*/
          v159.width = v122; /*0x895e28*/
          *(float *)&v159.height = v95; /*0x895e2f*/
          *(float *)&v159.data = 0.0; /*0x895e36*/
          v164 = v159; /*0x895e45*/
          v97 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000080uLL, v104); /*0x895e4d*/
          v98 = 0x10 - ((unsigned __int8)v97 & 0xF); /*0x895e59*/
          v99 = (bhkRefObject *)((char *)v97 + v98); /*0x895e5e*/
          HIBYTE(v99[0xFFFFFFFF].hkObject) = v98; /*0x895e60*/
          v151 = v99; /*0x895e63*/
          LOBYTE(v165) = 7; /*0x895e71*/
          v100 = sub_890A70(v99, &v160); /*0x895e79*/
          v101 = (Ni2DBuffer **)(v10 + 0x368); /*0x895e7e*/
          LOBYTE(v165) = 6; /*0x895e87*/
          NiSmartPointer_Set__(v101, (Ni2DBuffer *)v100); /*0x895e8e*/
          v102 = *v101; /*0x895e95*/
          *(float *)&v159.super.m_uiRefCount = 0.0; /*0x895e97*/
          v159.width = v149; /*0x895ea9*/
          v165 = 0xFFFFFFFF; /*0x895eb0*/
          *(float *)&v159.height = 0.0; /*0x895ebb*/
          *(float *)&v159.data = 0.0; /*0x895ec2*/
          v102[3].members = v159; /*0x895ed1*/
          sub_8A5090(&v160); /*0x895ed5*/
        }
        return; /*0x895ed5*/
      }
    }
    else if ( !*(_BYTE *)(a3 + 0x85) ) /*0x8953e9*/
    {
      v30 = *(float *)(a3 + 0x98); /*0x8953ef*/
      goto LABEL_23; /*0x8953ef*/
    }
    v30 = 1.0; /*0x8953eb*/
LABEL_23:
    v20 = SLODWORD(g_zeroNiPoint3.x); /*0x8953f5*/
    v132 = v30; /*0x8953fb*/
    v21 = g_zeroNiPoint3.y; /*0x89540f*/
    v31 = dbl_A492B8 * v132; /*0x895415*/
    x_low = v20; /*0x895417*/
    v32 = g_zeroNiPoint3.z; /*0x895419*/
    v153 = v20; /*0x89541b*/
    v145 = v31; /*0x895422*/
    v154 = v21; /*0x895426*/
    v33 = dbl_A968E8; /*0x89542d*/
    v129 = v20; /*0x895433*/
    y = v21; /*0x895439*/
    v131 = v32; /*0x89543d*/
    v146 = v33 * v132; /*0x895441*/
    v147 = v132 * dbl_A4D910; /*0x89544b*/
    goto LABEL_13; /*0x89544f*/
  }
}
