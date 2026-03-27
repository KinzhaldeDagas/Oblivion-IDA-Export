int __usercall sub_4AA1F0@<eax>(
        int a1@<ebx>,
        float a2@<ebp>,
        float a3@<edi>,
        float a4@<esi>,
        void *a5,
        int a6,
        signed int *a7,
        int *a8)
{
  signed int *v8; // esi
  signed int v9; // ebx
  int *v10; // edi
  int v11; // ebp
  double v12; // st5
  double v13; // st6
  TESObjectREFR *v14; // eax
  int result; // eax
  signed int v16; // ebx
  int *v17; // eax
  int *v18; // esi
  const char *v19; // eax
  int v20; // ebx
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  int v25; // ebx
  char v26; // al
  double v27; // st7
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // al
  char v34; // al
  char v35; // al
  int v36; // ebp
  char v37; // al
  const char *v38; // ecx
  int *v39; // edx
  char v40; // al
  int v41; // ebp
  char v42; // al
  const char *v43; // ecx
  int *v44; // edx
  char v45; // al
  float v46; // ebp
  char v47; // al
  const char *v48; // ecx
  int *v49; // edx
  char v50; // al
  float v51; // ebp
  char v52; // al
  const char *v53; // ecx
  int *v54; // edx
  char v55; // al
  float v56; // ebp
  char v57; // al
  const char *v58; // ecx
  int *v59; // edx
  char v60; // al
  int v61; // ebx
  int v62; // ebp
  float v63; // [esp+20h] [ebp-170h]
  float v64; // [esp+20h] [ebp-170h]
  float v65; // [esp+20h] [ebp-170h]
  float v66; // [esp+20h] [ebp-170h]
  float v67; // [esp+20h] [ebp-170h]
  float v68; // [esp+20h] [ebp-170h]
  float v69; // [esp+20h] [ebp-170h]
  float v70; // [esp+20h] [ebp-170h]
  float v71; // [esp+20h] [ebp-170h]
  float v72; // [esp+20h] [ebp-170h]
  float v73; // [esp+20h] [ebp-170h]
  float v74; // [esp+20h] [ebp-170h]
  float v75; // [esp+20h] [ebp-170h]
  float v76; // [esp+20h] [ebp-170h]
  float v77; // [esp+20h] [ebp-170h]
  float v78; // [esp+20h] [ebp-170h]
  float v79; // [esp+20h] [ebp-170h]
  float v80; // [esp+20h] [ebp-170h]
  float v81; // [esp+20h] [ebp-170h]
  float v82; // [esp+20h] [ebp-170h]
  float v83; // [esp+20h] [ebp-170h]
  float v84; // [esp+20h] [ebp-170h]
  float v85; // [esp+24h] [ebp-16Ch]
  float v86; // [esp+24h] [ebp-16Ch]
  float v87; // [esp+24h] [ebp-16Ch]
  float v88; // [esp+24h] [ebp-16Ch]
  float v89; // [esp+24h] [ebp-16Ch]
  float v90; // [esp+24h] [ebp-16Ch]
  float v91; // [esp+24h] [ebp-16Ch]
  float v92; // [esp+24h] [ebp-16Ch]
  float v93; // [esp+24h] [ebp-16Ch]
  float v94; // [esp+24h] [ebp-16Ch]
  float v95; // [esp+24h] [ebp-16Ch]
  float v96; // [esp+24h] [ebp-16Ch]
  float v97; // [esp+24h] [ebp-16Ch]
  float v98; // [esp+24h] [ebp-16Ch]
  float v99; // [esp+24h] [ebp-16Ch]
  float v100; // [esp+24h] [ebp-16Ch]
  float v101; // [esp+24h] [ebp-16Ch]
  float v102; // [esp+24h] [ebp-16Ch]
  float v103; // [esp+24h] [ebp-16Ch]
  float v104; // [esp+24h] [ebp-16Ch]
  float v105; // [esp+24h] [ebp-16Ch]
  float v106; // [esp+24h] [ebp-16Ch]
  int v107; // [esp+28h] [ebp-168h]
  int v108; // [esp+28h] [ebp-168h]
  float v109; // [esp+28h] [ebp-168h]
  float v110; // [esp+28h] [ebp-168h]
  float v111; // [esp+28h] [ebp-168h]
  float v112; // [esp+28h] [ebp-168h]
  float v113; // [esp+28h] [ebp-168h]
  float v114; // [esp+28h] [ebp-168h]
  float v115; // [esp+28h] [ebp-168h]
  float v116; // [esp+28h] [ebp-168h]
  float v117; // [esp+28h] [ebp-168h]
  float v118; // [esp+28h] [ebp-168h]
  float v119; // [esp+28h] [ebp-168h]
  float v120; // [esp+28h] [ebp-168h]
  float v121; // [esp+28h] [ebp-168h]
  float v122; // [esp+28h] [ebp-168h]
  float v123; // [esp+28h] [ebp-168h]
  float v124; // [esp+28h] [ebp-168h]
  float v125; // [esp+28h] [ebp-168h]
  float v126; // [esp+28h] [ebp-168h]
  float v127; // [esp+28h] [ebp-168h]
  float v128; // [esp+28h] [ebp-168h]
  float v129; // [esp+28h] [ebp-168h]
  float v130; // [esp+28h] [ebp-168h]
  float v131; // [esp+28h] [ebp-168h]
  float v132; // [esp+28h] [ebp-168h]
  float v134; // [esp+2Ch] [ebp-164h]
  float v135; // [esp+2Ch] [ebp-164h]
  float v136; // [esp+2Ch] [ebp-164h]
  float v137; // [esp+2Ch] [ebp-164h]
  float v138; // [esp+2Ch] [ebp-164h]
  float v140; // [esp+30h] [ebp-160h]
  float v141; // [esp+30h] [ebp-160h]
  float v142; // [esp+30h] [ebp-160h]
  float v143; // [esp+30h] [ebp-160h]
  float v144; // [esp+30h] [ebp-160h]
  float v146; // [esp+34h] [ebp-15Ch]
  float v147; // [esp+34h] [ebp-15Ch]
  float v148; // [esp+34h] [ebp-15Ch]
  float v149; // [esp+34h] [ebp-15Ch]
  float v150; // [esp+34h] [ebp-15Ch]
  float v151; // [esp+34h] [ebp-15Ch]
  float v152; // [esp+34h] [ebp-15Ch]
  float v153; // [esp+34h] [ebp-15Ch]
  float v154; // [esp+34h] [ebp-15Ch]
  float v155; // [esp+34h] [ebp-15Ch]
  float v156; // [esp+34h] [ebp-15Ch]
  float v157; // [esp+34h] [ebp-15Ch]
  float v158; // [esp+34h] [ebp-15Ch]
  float v159; // [esp+34h] [ebp-15Ch]
  float v160; // [esp+34h] [ebp-15Ch]
  float v161; // [esp+34h] [ebp-15Ch]
  float v162; // [esp+34h] [ebp-15Ch]
  float v163; // [esp+34h] [ebp-15Ch]
  float v164; // [esp+34h] [ebp-15Ch]
  float v165; // [esp+34h] [ebp-15Ch]
  float v166; // [esp+34h] [ebp-15Ch]
  float v168; // [esp+38h] [ebp-158h]
  float v169; // [esp+38h] [ebp-158h]
  float v170; // [esp+38h] [ebp-158h]
  float v171; // [esp+38h] [ebp-158h]
  float v172; // [esp+38h] [ebp-158h]
  float v173; // [esp+38h] [ebp-158h]
  float v174; // [esp+38h] [ebp-158h]
  float v175; // [esp+38h] [ebp-158h]
  float v176; // [esp+38h] [ebp-158h]
  float v177; // [esp+38h] [ebp-158h]
  float v178; // [esp+38h] [ebp-158h]
  float v179; // [esp+38h] [ebp-158h]
  float v180; // [esp+38h] [ebp-158h]
  float v181; // [esp+38h] [ebp-158h]
  float v182; // [esp+38h] [ebp-158h]
  float v183; // [esp+38h] [ebp-158h]
  float v184; // [esp+38h] [ebp-158h]
  float v185; // [esp+38h] [ebp-158h]
  float v186; // [esp+38h] [ebp-158h]
  float v187; // [esp+38h] [ebp-158h]
  float v188; // [esp+3Ch] [ebp-154h]
  float v189; // [esp+3Ch] [ebp-154h]
  float v190; // [esp+3Ch] [ebp-154h]
  int v191; // [esp+3Ch] [ebp-154h]
  int v192; // [esp+3Ch] [ebp-154h]
  int v193; // [esp+3Ch] [ebp-154h]
  int v194; // [esp+3Ch] [ebp-154h]
  int v195; // [esp+3Ch] [ebp-154h]
  float v196; // [esp+3Ch] [ebp-154h]
  float v197; // [esp+3Ch] [ebp-154h]
  int v198; // [esp+3Ch] [ebp-154h]
  int v199; // [esp+3Ch] [ebp-154h]
  int v200; // [esp+3Ch] [ebp-154h]
  float v201; // [esp+3Ch] [ebp-154h]
  float v202; // [esp+3Ch] [ebp-154h]
  float v203; // [esp+3Ch] [ebp-154h]
  float v204; // [esp+3Ch] [ebp-154h]
  float v205; // [esp+3Ch] [ebp-154h]
  float v206; // [esp+3Ch] [ebp-154h]
  float v207; // [esp+3Ch] [ebp-154h]
  float v208; // [esp+3Ch] [ebp-154h]
  float v209; // [esp+3Ch] [ebp-154h]
  float v210; // [esp+3Ch] [ebp-154h]
  float v211; // [esp+3Ch] [ebp-154h]
  float v212; // [esp+3Ch] [ebp-154h]
  float v213; // [esp+3Ch] [ebp-154h]
  float v214; // [esp+3Ch] [ebp-154h]
  float v215; // [esp+3Ch] [ebp-154h]
  int v216; // [esp+3Ch] [ebp-154h]
  int v217; // [esp+3Ch] [ebp-154h]
  int v218; // [esp+3Ch] [ebp-154h]
  int v219; // [esp+3Ch] [ebp-154h]
  int v220; // [esp+3Ch] [ebp-154h]
  int v221; // [esp+3Ch] [ebp-154h]
  int v222; // [esp+40h] [ebp-150h]
  int v223; // [esp+40h] [ebp-150h]
  float v224; // [esp+40h] [ebp-150h]
  int v225; // [esp+40h] [ebp-150h]
  int v226; // [esp+40h] [ebp-150h]
  int v227; // [esp+40h] [ebp-150h]
  int v228; // [esp+40h] [ebp-150h]
  float v229; // [esp+44h] [ebp-14Ch]
  int v230; // [esp+44h] [ebp-14Ch]
  float v231; // [esp+44h] [ebp-14Ch]
  float v232; // [esp+48h] [ebp-148h]
  int v233; // [esp+48h] [ebp-148h]
  float v234; // [esp+48h] [ebp-148h]
  int v235; // [esp+4Ch] [ebp-144h]
  float v236; // [esp+4Ch] [ebp-144h]
  int v237; // [esp+50h] [ebp-140h]
  int v238; // [esp+50h] [ebp-140h]
  int v239; // [esp+50h] [ebp-140h]
  int v240; // [esp+50h] [ebp-140h]
  int v241; // [esp+50h] [ebp-140h]
  int v242; // [esp+50h] [ebp-140h]
  int v243; // [esp+50h] [ebp-140h]
  int v244; // [esp+50h] [ebp-140h]
  int v245; // [esp+50h] [ebp-140h]
  int v246; // [esp+50h] [ebp-140h]
  int v247; // [esp+50h] [ebp-140h]
  int v248; // [esp+50h] [ebp-140h]
  int v249; // [esp+50h] [ebp-140h]
  float v250; // [esp+50h] [ebp-140h]
  float v251; // [esp+54h] [ebp-13Ch]
  int v252; // [esp+54h] [ebp-13Ch]
  int v253; // [esp+54h] [ebp-13Ch]
  float v254; // [esp+54h] [ebp-13Ch]
  TESObjectREFR *v255; // [esp+58h] [ebp-138h]
  float v256; // [esp+58h] [ebp-138h]
  int v257; // [esp+5Ch] [ebp-134h] BYREF
  int v258; // [esp+60h] [ebp-130h] BYREF
  int v259; // [esp+64h] [ebp-12Ch] BYREF
  int v260; // [esp+68h] [ebp-128h] BYREF
  char v261[4]; // [esp+6Ch] [ebp-124h] BYREF
  int v262; // [esp+70h] [ebp-120h] BYREF
  char v263[28]; // [esp+74h] [ebp-11Ch] BYREF
  char v264[20]; // [esp+90h] [ebp-100h] BYREF
  char v265[32]; // [esp+A4h] [ebp-ECh] BYREF
  int v266; // [esp+C4h] [ebp-CCh] BYREF
  int v267; // [esp+C8h] [ebp-C8h] BYREF
  int v268; // [esp+CCh] [ebp-C4h] BYREF
  int v269; // [esp+D0h] [ebp-C0h] BYREF
  int v270; // [esp+D4h] [ebp-BCh] BYREF
  int v271; // [esp+D8h] [ebp-B8h] BYREF
  char v272[176]; // [esp+DCh] [ebp-B4h] BYREF

  v232 = (float)iDebugTextLeftRightOffset;
  v8 = a7;
  v9 = *a7;
  v229 = (float)(0x500 - iDebugTextLeftRightOffset);
  v10 = a8;
  v11 = *a8;
  v12 = v232;
  v13 = (v229 - v232) * dbl_A2FAA0;
  v222 = *a7;
  v188 = *(float *)a8;
  v251 = v232 + v13;
  *(float *)&v14 = COERCE_FLOAT(
                     OblivionDynamicCast(
                       a5,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0));
  v255 = v14;
  if ( *(float *)&v14 == 0.0 )
  {
    v63 = (float)v222;
    result = InterfaceMgr_DebugTextLine(
               v11,
               v12,
               v13,
               v232,
               (int)"COMBAT STYLE: Current ref is not an actor.",
               v232,
               v63,
               1,
               0xFFFFFFFF);
    v16 = a6 + v9;
  }
  else if ( Actor_IsPlayer(v14) )
  {
    v64 = (float)v222;
    result = InterfaceMgr_DebugTextLine(
               v11,
               v12,
               v13,
               v232,
               (int)"COMBAT STYLE: Current ref is the Player.",
               v232,
               v64,
               1,
               0xFFFFFFFF);
    v16 = a6 + v9;
  }
  else
  {
    v17 = sub_5E0F50(v255);
    v18 = v17;
    if ( v17 == &dword_B35788 )
      v19 = " (default)";
    else
      v19 = (const char *)(*(int (__thiscall **)(int *))(*v17 + 0xD4))(v17);
    _sprintf((char *)&v266, "COMBAT STYLE: %s", v19);
    v65 = (float)v222;
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, (int)&v266, v232, v65, 1, 0xFFFFFFFF);
    v20 = a6 + v9;
    v66 = (float)v20;
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, (int)"MELEE DECISION", v232, v66, 1, 0xFFFFFFFF);
    v107 = (*(char (__thiscall **)(int *))(dword_B35788 + 0xDC))(&dword_B35788);
    v21 = (*(int (__thiscall **)(int *))(*v18 + 0xDC))(v18);
    sub_4A9930(v18, (char *)&v257, v21, v107);
    _sprintf((char *)&v266, "Block %%Chance: %s", (const char *)&v257);
    v67 = (float)(a6 + v20);
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, (int)&v266, v232, v67, 1, 0xFFFFFFFF);
    v223 = a6 + a6 + v20;
    v108 = (*(char (__thiscall **)(int *))(dword_B35788 + 0x10C))(&dword_B35788);
    v22 = (*(int (__thiscall **)(int *))(*v18 + 0x10C))(v18);
    sub_4A9930(v18, (char *)&v257, v22, v108);
    _sprintf((char *)&v266, "Attack %%Chance: %s", (const char *)&v257);
    v68 = (float)v223;
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, (int)&v266, v232, v68, 1, 0xFFFFFFFF);
    LODWORD(v224) = a6 + v223;
    v109 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x110))(&dword_B35788);
    v110 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x110))(v18, LODWORD(v109));
    sub_4A98D0(v18, (char *)&v258, v110, a3);
    _sprintf((char *)&v267, "Recoil/Stagger Bonus to Attack: %s", (const char *)&v258);
    v85 = (float)SLODWORD(v229);
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&a7, (int)&v267, *(float *)&a7, v85, 1, 0xFFFFFFFF);
    v230 = a6 + LODWORD(v224);
    v134 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x114))(&dword_B35788);
    v135 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x114))(v18, LODWORD(v134));
    sub_4A98D0(v18, (char *)&v259, v135, a4);
    _sprintf((char *)&v268, "Unconscious Bonus to Attack: %s", (const char *)&v259);
    v111 = (float)SLODWORD(v232);
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&a8, (int)&v268, *(float *)&a8, v111, 1, 0xFFFFFFFF);
    v233 = a6 + a6 + LODWORD(v224);
    v140 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x118))(&dword_B35788);
    v141 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x118))(v18, LODWORD(v140));
    sub_4A98D0(v18, (char *)&v260, v141, a2);
    _sprintf((char *)&v269, "Hand-to-Hand Bonus to Attack: %s", (const char *)&v260);
    v136 = (float)(int)a7;
    InterfaceMgr_DebugTextLine(v11, v12, v13, v251, (int)&v269, v251, v136, 1, 0xFFFFFFFF);
    v137 = (float)(a6 + v233);
    InterfaceMgr_DebugTextLine(v11, v12, v13, v251, (int)"POWER ATTACKS", v251, v137, 1, 0xFFFFFFFF);
    v235 = a6 + a6 + v233;
    v23 = (*(int (__thiscall **)(int *))(dword_B35788 + 0x11C))(&dword_B35788);
    v24 = (*(int (__thiscall **)(int *, _DWORD))(*v18 + 0x11C))(v18, v23);
    sub_4A9930(v18, v261, v24, a1);
    _sprintf((char *)&v270, "Power Attack %%Chance: %s", v261);
    v142 = (float)(int)a8;
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v255, (int)&v270, *(float *)&v255, v142, 1, 0xFFFFFFFF);
    v168 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x120))(&dword_B35788);
    v169 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x120))(v18, LODWORD(v168));
    sub_4A98D0(v18, (char *)&v262, v169, v188);
    _sprintf((char *)&v271, "Recoil/Stagger Bonus to Power Attack: %s", (const char *)&v262);
    v146 = (float)SLODWORD(v251);
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (int)&v271, *(float *)&v257, v146, 1, 0xFFFFFFFF);
    v252 = a6 + a6 + v235;
    v189 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x124))(&dword_B35788);
    v190 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x124))(v18, LODWORD(v189));
    sub_4A98D0(v18, v263, v190, v224);
    _sprintf(v272, "Unconscious Bonus to Power Attack: %s", v263);
    v170 = (float)(int)v255;
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v258, (int)v272, *(float *)&v258, v170, 1, 0xFFFFFFFF);
    v25 = a6 + v252;
    LODWORD(v256) = a6 + v252;
    v26 = (*(int (__thiscall **)(int *))(*v18 + 0x16C))(v18);
    v147 = (float)v252;
    v27 = *(float *)&v257;
    if ( v26 )
    {
      InterfaceMgr_DebugTextLine(
        v11,
        v12,
        v13,
        v27,
        (int)"Choose Power Attacks using %%Chance.",
        *(float *)&v257,
        v147,
        1,
        0xFFFFFFFF);
      v191 = (*(char (__thiscall **)(int *))(dword_B35788 + 0x128))(&dword_B35788);
      v28 = (*(int (__thiscall **)(int *))(*v18 + 0x128))(v18);
      sub_4A9930(v18, (char *)&v262, v28, v191);
      _sprintf((char *)&v271, "Normal: %s", (const char *)&v262);
      v148 = (float)(a6 + v25);
      InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (int)&v271, *(float *)&v257, v148, 1, 0xFFFFFFFF);
      v253 = a6 + a6 + v25;
      v192 = (*(char (__thiscall **)(int *))(dword_B35788 + 0x12C))(&dword_B35788);
      v29 = (*(int (__thiscall **)(int *))(*v18 + 0x12C))(v18);
      sub_4A9930(v18, (char *)&v262, v29, v192);
      v193 = (*(char (__thiscall **)(int *))(dword_B35788 + 0x130))(&dword_B35788);
      v30 = (*(int (__thiscall **)(int *))(*v18 + 0x130))(v18);
      sub_4A9930(v18, v265, v30, v193);
      _sprintf((char *)&v271, "Forward: %s Back: %s", (const char *)&v262, v265);
      v149 = (float)v253;
      InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (int)&v271, *(float *)&v257, v149, 1, 0xFFFFFFFF);
      v25 = a6 + v253;
      v194 = (*(char (__thiscall **)(int *))(dword_B35788 + 0x134))(&dword_B35788);
      v31 = (*(int (__thiscall **)(int *))(*v18 + 0x134))(v18);
      sub_4A9930(v18, (char *)&v262, v31, v194);
      v195 = (*(char (__thiscall **)(int *))(dword_B35788 + 0x138))(&dword_B35788);
      v32 = (*(int (__thiscall **)(int *))(*v18 + 0x138))(v18);
      sub_4A9930(v18, v265, v32, v195);
      _sprintf((char *)&v271, "Left: %s Right: %s", (const char *)&v262, v265);
      v150 = (float)(a6 + v253);
      InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (int)&v271, *(float *)&v257, v150, 1, 0xFFFFFFFF);
    }
    else
    {
      InterfaceMgr_DebugTextLine(
        v11,
        v12,
        v13,
        v27,
        (int)"Choose Power Attacks using Movement.",
        *(float *)&v257,
        v147,
        1,
        0xFFFFFFFF);
    }
    LODWORD(v254) = a6 + v25;
    v196 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x13C))(&dword_B35788);
    v171 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x13C))(v18);
    sub_4A98D0(v18, (char *)&v262, v171, v196);
    v197 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x140))(&dword_B35788);
    v172 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x140))(v18);
    sub_4A98D0(v18, v265, v172, v197);
    _sprintf((char *)&v271, "Hold Timer Min: %s Max: %s", (const char *)&v262, v265);
    v151 = (float)(a6 + v25);
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (int)&v271, *(float *)&v257, v151, 1, 0xFFFFFFFF);
    v152 = (float)(a6 + v235);
    v16 = a6 + a6 + v25;
    InterfaceMgr_DebugTextLine(v11, v12, v13, v256, (int)"MANEUVER DECISION", v256, v152, 3, 0xFFFFFFFF);
    v198 = (*(char (__thiscall **)(int *))(dword_B35788 + 0xDC))(&dword_B35788);
    v33 = (*(int (__thiscall **)(int *))(*v18 + 0xDC))(v18);
    sub_4A9930(v18, (char *)&v262, v33, v198);
    _sprintf((char *)&v271, "Dodge %%Chance: %s", (const char *)&v262);
    v153 = (float)(a6 + v11);
    InterfaceMgr_DebugTextLine(a6 + v11, v12, v13, v256, (int)&v271, v256, v153, 3, 0xFFFFFFFF);
    v237 = a6 + a6 + v11;
    v199 = (*(char (__thiscall **)(int *))(dword_B35788 + 0xE4))(&dword_B35788);
    v34 = (*(int (__thiscall **)(int *))(*v18 + 0xE4))(v18);
    sub_4A9930(v18, (char *)&v262, v34, v199);
    _sprintf((char *)&v271, "Dodge Left/Right %%Chance: %s", (const char *)&v262);
    v154 = (float)v237;
    InterfaceMgr_DebugTextLine(v237, v12, v13, v256, (int)&v271, v256, v154, 3, 0xFFFFFFFF);
    v238 = a6 + v237;
    v200 = (*(char (__thiscall **)(int *))(dword_B35788 + 0xE0))(&dword_B35788);
    v35 = (*(int (__thiscall **)(int *))(*v18 + 0xE0))(v18);
    sub_4A9930(v18, (char *)&v262, v35, v200);
    _sprintf((char *)&v271, "Acrobatic Dodge %%Chance: %s", (const char *)&v262);
    v155 = (float)v238;
    InterfaceMgr_DebugTextLine(v238, v12, v13, v256, (int)&v271, v256, v155, 3, 0xFFFFFFFF);
    v239 = a6 + v238;
    v201 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x100))(&dword_B35788);
    v173 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x100))(v18);
    sub_4A98D0(v18, (char *)&v262, v173, v201);
    v202 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x104))(&dword_B35788);
    v174 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x104))(v18);
    sub_4A98D0(v18, v265, v174, v202);
    _sprintf((char *)&v271, "Idle Timer Min: %s Max: %s", (const char *)&v262, v265);
    v156 = (float)v239;
    InterfaceMgr_DebugTextLine(v239, v12, v13, v256, (int)&v271, v256, v156, 3, 0xFFFFFFFF);
    v240 = a6 + v239;
    v203 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0xE8))(&dword_B35788);
    v175 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xE8))(v18);
    sub_4A98D0(v18, (char *)&v262, v175, v203);
    v204 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0xEC))(&dword_B35788);
    v176 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xEC))(v18);
    sub_4A98D0(v18, v265, v176, v204);
    _sprintf((char *)&v271, "Dodge L/R Timer Min: %s Max: %s", (const char *)&v262, v265);
    v157 = (float)v240;
    InterfaceMgr_DebugTextLine(v240, v12, v13, v256, (int)&v271, v256, v157, 3, 0xFFFFFFFF);
    v241 = a6 + v240;
    v205 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0xF0))(&dword_B35788);
    v177 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xF0))(v18);
    sub_4A98D0(v18, (char *)&v262, v177, v205);
    v206 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0xF4))(&dword_B35788);
    v178 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xF4))(v18);
    sub_4A98D0(v18, v265, v178, v206);
    _sprintf((char *)&v271, "Dodge Forward Timer Min: %s Max: %s", (const char *)&v262, v265);
    v158 = (float)v241;
    InterfaceMgr_DebugTextLine(v241, v12, v13, v256, (int)&v271, v256, v158, 3, 0xFFFFFFFF);
    v242 = a6 + v241;
    v207 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0xF8))(&dword_B35788);
    v179 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xF8))(v18);
    sub_4A98D0(v18, (char *)&v262, v179, v207);
    v208 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0xFC))(&dword_B35788);
    v180 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xFC))(v18);
    sub_4A98D0(v18, v265, v180, v208);
    _sprintf((char *)&v271, "Dodge Back Timer Min: %s Max: %s", (const char *)&v262, v265);
    v159 = (float)v242;
    InterfaceMgr_DebugTextLine(v242, v12, v13, v256, (int)&v271, v256, v159, 3, 0xFFFFFFFF);
    v243 = a6 + v242;
    v209 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x144))(&dword_B35788);
    v181 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x144))(v18);
    sub_4A98D0(v18, (char *)&v262, v181, v209);
    _sprintf((char *)&v271, "Optimal Range Mult: %s", (const char *)&v262);
    v160 = (float)v243;
    InterfaceMgr_DebugTextLine(v243, v12, v13, v256, (int)&v271, v256, v160, 3, 0xFFFFFFFF);
    v244 = a6 + v243;
    v210 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x148))(&dword_B35788);
    v182 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x148))(v18);
    sub_4A98D0(v18, (char *)&v262, v182, v210);
    _sprintf((char *)&v271, "Maximum Range Mult: %s", (const char *)&v262);
    v161 = (float)v244;
    InterfaceMgr_DebugTextLine(v244, v12, v13, v256, (int)&v271, v256, v161, 3, 0xFFFFFFFF);
    v245 = a6 + v244;
    v211 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x14C))(&dword_B35788);
    v183 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x14C))(v18);
    sub_4A98D0(v18, (char *)&v262, v183, v211);
    _sprintf((char *)&v271, "Switch to Melee Distance: %s", (const char *)&v262);
    v162 = (float)v245;
    InterfaceMgr_DebugTextLine(v245, v12, v13, v256, (int)&v271, v256, v162, 3, 0xFFFFFFFF);
    v246 = a6 + v245;
    v212 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x150))(&dword_B35788);
    v184 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x150))(v18);
    sub_4A98D0(v18, (char *)&v262, v184, v212);
    _sprintf((char *)&v271, "Switch to Ranged Distance: %s", (const char *)&v262);
    v163 = (float)v246;
    InterfaceMgr_DebugTextLine(v246, v12, v13, v256, (int)&v271, v256, v163, 3, 0xFFFFFFFF);
    v247 = a6 + v246;
    v213 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x154))(&dword_B35788);
    v185 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x154))(v18);
    sub_4A98D0(v18, (char *)&v262, v185, v213);
    _sprintf((char *)&v271, "Buff Standoff Distance: %s", (const char *)&v262);
    v164 = (float)v247;
    InterfaceMgr_DebugTextLine(v247, v12, v13, v256, (int)&v271, v256, v164, 3, 0xFFFFFFFF);
    v248 = a6 + v247;
    v214 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x158))(&dword_B35788);
    v186 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x158))(v18);
    sub_4A98D0(v18, (char *)&v262, v186, v214);
    _sprintf((char *)&v271, "Ranged Standoff Distance: %s", (const char *)&v262);
    v165 = (float)v248;
    InterfaceMgr_DebugTextLine(v248, v12, v13, v256, (int)&v271, v256, v165, 3, 0xFFFFFFFF);
    v249 = a6 + v248;
    v215 = ((double (__thiscall *)(int *))*(_DWORD *)(dword_B35788 + 0x15C))(&dword_B35788);
    v187 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x15C))(v18);
    sub_4A98D0(v18, (char *)&v262, v187, v215);
    _sprintf((char *)&v271, "GroupStandoff Distance: %s", (const char *)&v262);
    v166 = (float)v249;
    InterfaceMgr_DebugTextLine(v249, v12, v13, v256, (int)&v271, v256, v166, 3, 0xFFFFFFFF);
    v36 = a6 + v249;
    LODWORD(v250) = a6 + v249;
    v37 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 0x40);
    v38 = "Prefers Ranged Attacks";
    if ( !v37 )
      v38 = "No Ranged Preference";
    v39 = &v270;
    do
    {
      v40 = *v38;
      *(_BYTE *)v39 = *v38++;
      v39 = (int *)((char *)v39 + 1);
    }
    while ( v40 );
    v143 = (float)v235;
    InterfaceMgr_DebugTextLine(v36, v12, v13, v254, (int)&v270, v254, v143, 3, 0xFFFFFFFF);
    v41 = a6 + v36;
    v42 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 8);
    v43 = "Yield Enabled";
    if ( !v42 )
      v43 = "Yield Disabled";
    v44 = &v270;
    do
    {
      v45 = *v43;
      *(_BYTE *)v44 = *v43++;
      v44 = (int *)((char *)v44 + 1);
    }
    while ( v45 );
    v144 = (float)v41;
    InterfaceMgr_DebugTextLine(v41, v12, v13, v254, (int)&v270, v254, v144, 3, 0xFFFFFFFF);
    LODWORD(v46) = a6 + v41;
    v236 = v46;
    v47 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 0x20);
    v48 = "Flee Disabled";
    if ( !v47 )
      v48 = "Flee Enabled";
    v49 = &v269;
    do
    {
      v50 = *v48;
      *(_BYTE *)v49 = *v48++;
      v49 = (int *)((char *)v49 + 1);
    }
    while ( v50 );
    v138 = (float)v233;
    InterfaceMgr_DebugTextLine(SLOBYTE(v46), v12, v13, v250, (int)&v269, v250, v138, 3, 0xFFFFFFFF);
    LODWORD(v51) = a6 + LODWORD(v46);
    v234 = v51;
    v52 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 0x10);
    v53 = "Rejects Yields";
    if ( !v52 )
      v53 = "Accepts Yields";
    v54 = &v268;
    do
    {
      v55 = *v53;
      *(_BYTE *)v54 = *v53++;
      v54 = (int *)((char *)v54 + 1);
    }
    while ( v55 );
    v112 = (float)v230;
    InterfaceMgr_DebugTextLine(SLOBYTE(v51), v12, v13, v236, (int)&v268, v236, v112, 3, 0xFFFFFFFF);
    LODWORD(v56) = a6 + LODWORD(v51);
    v231 = v56;
    v57 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 4);
    v58 = "Ignores allies in range of area effects";
    if ( !v57 )
      v58 = "Won't cast area effects if allies are in range";
    v59 = &v267;
    do
    {
      v60 = *v58;
      *(_BYTE *)v59 = *v58++;
      v59 = (int *)((char *)v59 + 1);
    }
    while ( v60 );
    v86 = (float)2;
    InterfaceMgr_DebugTextLine(SLOBYTE(v56), v12, v13, v234, (int)&v267, v234, v86, 3, 0xFFFFFFFF);
    v11 = a6 + LODWORD(v56);
    result = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 1);
    if ( (_BYTE)result )
    {
      v61 = a6 + v16;
      v69 = (float)v61;
      InterfaceMgr_DebugTextLine(v11, v12, v13, v254, (int)"ADVANCED SETTINGS", v254, v69, 2, 0xFFFFFFFF);
      v216 = a6 + v61;
      v113 = sub_4A9F70(&dword_B35788);
      v87 = sub_4A9F70(v18);
      sub_4A98D0(v18, (char *)&v257, v87, v113);
      v114 = sub_4A9F30(&dword_B35788);
      v88 = sub_4A9F30(v18);
      sub_4A98D0(v18, v264, v88, v114);
      _sprintf((char *)&v266, "Block Skill Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v70 = (float)(a6 + v61);
      InterfaceMgr_DebugTextLine(v11, v12, v13, v234, (int)&v266, v234, v70, 1, 0xFFFFFFFF);
      v62 = a6 + a6 + v61;
      v115 = sub_4AA070(&dword_B35788);
      v89 = sub_4AA070(v18);
      sub_4A98D0(v18, (char *)&v257, v89, v115);
      v116 = sub_4AA030(&dword_B35788);
      v90 = sub_4AA030(v18);
      sub_4A98D0(v18, v264, v90, v116);
      _sprintf((char *)&v266, "Attack Skill Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v71 = (float)v62;
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (int)&v266, v234, v71, 1, 0xFFFFFFFF);
      v117 = sub_4AA170(&dword_B35788);
      v91 = sub_4AA170(v18);
      sub_4A98D0(v18, (char *)&v257, v91, v117);
      v118 = sub_4AA1B0(&dword_B35788);
      v92 = sub_4AA1B0(v18);
      sub_4A98D0(v18, v264, v92, v118);
      _sprintf((char *)&v266, "Power Att. Fatigue Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v72 = (float)(a6 + v62);
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (int)&v266, v234, v72, 1, 0xFFFFFFFF);
      v225 = a6 + a6 + v62;
      v119 = sub_4AA0B0(&dword_B35788);
      v93 = sub_4AA0B0(v18);
      sub_4A98D0(v18, (char *)&v257, v93, v119);
      _sprintf((char *)&v266, "Attack While Under Attack Mult: %s", (const char *)&v257);
      v73 = (float)v225;
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (int)&v266, v234, v73, 1, 0xFFFFFFFF);
      v226 = a6 + v225;
      v120 = sub_4AA130(&dword_B35788);
      v94 = sub_4AA130(v18);
      sub_4A98D0(v18, (char *)&v257, v94, v120);
      _sprintf((char *)&v266, "Attack Not Under Attack Mult: %s", (const char *)&v257);
      v74 = (float)v226;
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (int)&v266, v234, v74, 1, 0xFFFFFFFF);
      v227 = a6 + v226;
      v121 = sub_4A9FB0(&dword_B35788);
      v95 = sub_4A9FB0(v18);
      sub_4A98D0(v18, (char *)&v257, v95, v121);
      _sprintf((char *)&v266, "Block While Under Attack Mult: %s", (const char *)&v257);
      v75 = (float)v227;
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (int)&v266, v234, v75, 1, 0xFFFFFFFF);
      v228 = a6 + v227;
      v122 = sub_4A9FF0(&dword_B35788);
      v96 = sub_4A9FF0(v18);
      sub_4A98D0(v18, (char *)&v257, v96, v122);
      _sprintf((char *)&v266, "Block Not Under Attack Mult: %s", (const char *)&v257);
      v76 = (float)v228;
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (int)&v266, v234, v76, 1, 0xFFFFFFFF);
      v16 = a6 + v228;
      v123 = sub_4A9CF0(&dword_B35788);
      v97 = sub_4A9CF0(v18);
      sub_4A98D0(v18, (char *)&v257, v97, v123);
      v124 = sub_4A9CB0(&dword_B35788);
      v98 = sub_4A9CB0(v18);
      sub_4A98D0(v18, v264, v98, v124);
      _sprintf((char *)&v266, "Dodge Fatigue Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v77 = (float)v216;
      InterfaceMgr_DebugTextLine(v62, v12, v13, v231, (int)&v266, v231, v77, 3, 0xFFFFFFFF);
      v125 = sub_4A9D30(&dword_B35788);
      v99 = sub_4A9D30(v18);
      sub_4A98D0(v18, (char *)&v257, v99, v125);
      v126 = sub_4A9D70(&dword_B35788);
      v100 = sub_4A9D70(v18);
      sub_4A98D0(v18, v264, v100, v126);
      _sprintf((char *)&v266, "Encumbered Speed Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v78 = (float)v62;
      InterfaceMgr_DebugTextLine(v62, v12, v13, v231, (int)&v266, v231, v78, 3, 0xFFFFFFFF);
      v127 = sub_4A9DB0(&dword_B35788);
      v101 = sub_4A9DB0(v18);
      sub_4A98D0(v18, (char *)&v257, v101, v127);
      _sprintf((char *)&v266, "Dodge While Under Attack Mult: %s", (const char *)&v257);
      v79 = (float)(a6 + v62);
      InterfaceMgr_DebugTextLine(a6 + v62, v12, v13, v231, (int)&v266, v231, v79, 3, 0xFFFFFFFF);
      v217 = a6 + a6 + v62;
      v128 = sub_4A9DF0(&dword_B35788);
      v102 = sub_4A9DF0(v18);
      sub_4A98D0(v18, (char *)&v257, v102, v128);
      _sprintf((char *)&v266, "Dodge Not Under Attack Mult: %s", (const char *)&v257);
      v80 = (float)v217;
      InterfaceMgr_DebugTextLine(v217, v12, v13, v231, (int)&v266, v231, v80, 3, 0xFFFFFFFF);
      v218 = a6 + v217;
      v129 = sub_4A9E30(&dword_B35788);
      v103 = sub_4A9E30(v18);
      sub_4A98D0(v18, (char *)&v257, v103, v129);
      _sprintf((char *)&v266, "Dodge Back While Under Attack Mult: %s", (const char *)&v257);
      v81 = (float)v218;
      InterfaceMgr_DebugTextLine(v218, v12, v13, v231, (int)&v266, v231, v81, 3, 0xFFFFFFFF);
      v219 = a6 + v218;
      v130 = sub_4A9E70(&dword_B35788);
      v104 = sub_4A9E70(v18);
      sub_4A98D0(v18, (char *)&v257, v104, v130);
      _sprintf((char *)&v266, "Dodge Back Not Under Attack Mult: %s", (const char *)&v257);
      v82 = (float)v219;
      InterfaceMgr_DebugTextLine(v219, v12, v13, v231, (int)&v266, v231, v82, 3, 0xFFFFFFFF);
      v220 = a6 + v219;
      v131 = sub_4A9EB0(&dword_B35788);
      v105 = sub_4A9EB0(v18);
      sub_4A98D0(v18, (char *)&v257, v105, v131);
      _sprintf((char *)&v266, "Dodge Forward While Attacking Mult: %s", (const char *)&v257);
      v83 = (float)v220;
      InterfaceMgr_DebugTextLine(v220, v12, v13, v231, (int)&v266, v231, v83, 3, 0xFFFFFFFF);
      v221 = a6 + v220;
      v132 = sub_4A9EF0(&dword_B35788);
      v106 = sub_4A9EF0(v18);
      sub_4A98D0(v18, (char *)&v257, v106, v132);
      _sprintf((char *)&v266, "Dodge Forward Not Attacking Mult: %s", (const char *)&v257);
      v84 = (float)v221;
      result = InterfaceMgr_DebugTextLine(v221, v12, v13, v231, (int)&v266, v231, v84, 3, 0xFFFFFFFF);
      v11 = a6 + v221;
    }
    v8 = (signed int *)LODWORD(v236);
    v10 = (int *)LODWORD(v250);
  }
  *v8 = v16;
  if ( v16 <= v11 )
    *v10 = v11;
  else
    *v10 = v16;
  return result;
}
