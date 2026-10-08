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
  int *EffectiveCombatStyle; // eax
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

  v232 = (float)iDebugTextLeftRightOffset; /*0x4aa21c*/
  v8 = a7; /*0x4aa22b*/
  v9 = *a7; /*0x4aa232*/
  v229 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x4aa234*/
  v10 = a8; /*0x4aa241*/
  v11 = *a8; /*0x4aa248*/
  v12 = v232; /*0x4aa24a*/
  v13 = (v229 - v232) * dbl_A2FAA0; /*0x4aa25c*/
  v222 = *a7; /*0x4aa26f*/
  v188 = *(float *)a8; /*0x4aa273*/
  v251 = v232 + v13; /*0x4aa277*/
  *(float *)&v14 = COERCE_FLOAT( /*0x4aa27b*/
                     OblivionDynamicCast(
                       a5,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0));
  v255 = v14; /*0x4aa285*/
  if ( *(float *)&v14 == 0.0 )
  {
    v63 = (float)v222; /*0x4aa296*/
    result = InterfaceMgr_DebugTextLine(
               v11,
               v12,
               v13,
               v232,
               "COMBAT STYLE: Current ref is not an actor.",
               v232,
               v63,
               1,
               0xFFFFFFFF);
    v16 = a6 + v9; /*0x4aa2ae*/
  }
  else if ( Actor_IsPlayer(v14) )
  {
    v64 = (float)v222; /*0x4aa2d0*/
    result = InterfaceMgr_DebugTextLine(
               v11,
               v12,
               v13,
               v232,
               "COMBAT STYLE: Current ref is the Player.",
               v232,
               v64,
               1,
               0xFFFFFFFF);
    v16 = a6 + v9; /*0x4aa2e8*/
  }
  else
  {
    EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(v255); /*0x4aa2f8*/
    v18 = EffectiveCombatStyle; /*0x4aa2fd*/
    if ( EffectiveCombatStyle == &unk_B35788 ) /*0x4aa305*/
      v19 = " (default)"; /*0x4aa307*/
    else
      v19 = (const char *)(*(int (__thiscall **)(int *))(*EffectiveCombatStyle + 0xD4))(EffectiveCombatStyle); /*0x4aa318*/
    _sprintf((char *)&v266, "COMBAT STYLE: %s", v19);
    v65 = (float)v222; /*0x4aa33b*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, (char *)&v266, v232, v65, 1, 0xFFFFFFFF); /*0x4aa34e*/
    v20 = a6 + v9; /*0x4aa35d*/
    v66 = (float)v20; /*0x4aa36e*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, "MELEE DECISION", v232, v66, 1, 0xFFFFFFFF); /*0x4aa37e*/
    v107 = (*(char (__thiscall **)(int *))(unk_B35788 + 0xDC))(&unk_B35788); /*0x4aa3a3*/
    v21 = (*(int (__thiscall **)(int *))(*v18 + 0xDC))(v18); /*0x4aa3ac*/
    sub_4A9930(v18, (char *)&v257, v21, v107); /*0x4aa3b9*/
    _sprintf((char *)&v266, "Block %%Chance: %s", (const char *)&v257);
    v67 = (float)(a6 + v20); /*0x4aa3e3*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, (char *)&v266, v232, v67, 1, 0xFFFFFFFF); /*0x4aa3f6*/
    v223 = a6 + a6 + v20; /*0x4aa410*/
    v108 = (*(char (__thiscall **)(int *))(unk_B35788 + 0x10C))(&unk_B35788); /*0x4aa41b*/
    v22 = (*(int (__thiscall **)(int *))(*v18 + 0x10C))(v18); /*0x4aa424*/
    sub_4A9930(v18, (char *)&v257, v22, v108); /*0x4aa431*/
    _sprintf((char *)&v266, "Attack %%Chance: %s", (const char *)&v257);
    v68 = (float)v223; /*0x4aa45b*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, v232, (char *)&v266, v232, v68, 1, 0xFFFFFFFF); /*0x4aa46e*/
    LODWORD(v224) = a6 + v223; /*0x4aa488*/
    v109 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x110))(&unk_B35788); /*0x4aa499*/
    v110 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x110))(v18, LODWORD(v109)); /*0x4aa4a3*/
    sub_4A98D0(v18, (char *)&v258, v110, a3); /*0x4aa4a9*/
    _sprintf((char *)&v267, "Recoil/Stagger Bonus to Attack: %s", (const char *)&v258);
    v85 = (float)SLODWORD(v229); /*0x4aa4d3*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&a7, (char *)&v267, *(float *)&a7, v85, 1, 0xFFFFFFFF); /*0x4aa4e6*/
    v230 = a6 + LODWORD(v224); /*0x4aa501*/
    v134 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x114))(&unk_B35788); /*0x4aa512*/
    v135 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x114))(v18, LODWORD(v134)); /*0x4aa51c*/
    sub_4A98D0(v18, (char *)&v259, v135, a4); /*0x4aa522*/
    _sprintf((char *)&v268, "Unconscious Bonus to Attack: %s", (const char *)&v259);
    v111 = (float)SLODWORD(v232); /*0x4aa54c*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&a8, (char *)&v268, *(float *)&a8, v111, 1, 0xFFFFFFFF); /*0x4aa55f*/
    v233 = a6 + a6 + LODWORD(v224); /*0x4aa57a*/
    v140 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x118))(&unk_B35788); /*0x4aa58b*/
    v141 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x118))(v18, LODWORD(v140)); /*0x4aa595*/
    sub_4A98D0(v18, (char *)&v260, v141, a2); /*0x4aa59b*/
    _sprintf((char *)&v269, "Hand-to-Hand Bonus to Attack: %s", (const char *)&v260);
    v136 = (float)(int)a7; /*0x4aa5c5*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, v251, (char *)&v269, v251, v136, 1, 0xFFFFFFFF); /*0x4aa5d8*/
    v137 = (float)(a6 + v233); /*0x4aa5f1*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, v251, "POWER ATTACKS", v251, v137, 1, 0xFFFFFFFF); /*0x4aa601*/
    v235 = a6 + a6 + v233; /*0x4aa61c*/
    v23 = (*(int (__thiscall **)(int *))(unk_B35788 + 0x11C))(&unk_B35788); /*0x4aa620*/
    v24 = (*(int (__thiscall **)(int *, _DWORD))(*v18 + 0x11C))(v18, v23); /*0x4aa630*/
    sub_4A9930(v18, v261, v24, a1); /*0x4aa63d*/
    _sprintf((char *)&v270, "Power Attack %%Chance: %s", v261);
    v142 = (float)(int)a8; /*0x4aa667*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v255, (char *)&v270, *(float *)&v255, v142, 1, 0xFFFFFFFF); /*0x4aa67a*/
    v168 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x120))(&unk_B35788); /*0x4aa6a5*/
    v169 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x120))(v18, LODWORD(v168)); /*0x4aa6af*/
    sub_4A98D0(v18, (char *)&v262, v169, v188); /*0x4aa6b5*/
    _sprintf((char *)&v271, "Recoil/Stagger Bonus to Power Attack: %s", (const char *)&v262);
    v146 = (float)SLODWORD(v251); /*0x4aa6df*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (char *)&v271, *(float *)&v257, v146, 1, 0xFFFFFFFF); /*0x4aa6f2*/
    v252 = a6 + a6 + v235; /*0x4aa70d*/
    v189 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x124))(&unk_B35788); /*0x4aa71e*/
    v190 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*v18 + 0x124))(v18, LODWORD(v189)); /*0x4aa728*/
    sub_4A98D0(v18, v263, v190, v224); /*0x4aa72e*/
    _sprintf(v272, "Unconscious Bonus to Power Attack: %s", v263);
    v170 = (float)(int)v255; /*0x4aa758*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v258, v272, *(float *)&v258, v170, 1, 0xFFFFFFFF); /*0x4aa76b*/
    v25 = a6 + v252; /*0x4aa77b*/
    LODWORD(v256) = a6 + v252; /*0x4aa781*/
    v26 = (*(int (__thiscall **)(int *))(*v18 + 0x16C))(v18); /*0x4aa785*/
    v147 = (float)v252; /*0x4aa794*/
    v27 = *(float *)&v257; /*0x4aa798*/
    if ( v26 )
    {
      InterfaceMgr_DebugTextLine( /*0x4aa7aa*/
        v11,
        v12,
        v13,
        v27,
        "Choose Power Attacks using %%Chance.",
        *(float *)&v257,
        v147,
        1,
        0xFFFFFFFF);
      v191 = (*(char (__thiscall **)(int *))(unk_B35788 + 0x128))(&unk_B35788); /*0x4aa7d6*/
      v28 = (*(int (__thiscall **)(int *))(*v18 + 0x128))(v18); /*0x4aa7d9*/
      sub_4A9930(v18, (char *)&v262, v28, v191); /*0x4aa7e6*/
      _sprintf((char *)&v271, "Normal: %s", (const char *)&v262);
      v148 = (float)(a6 + v25); /*0x4aa810*/
      InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (char *)&v271, *(float *)&v257, v148, 1, 0xFFFFFFFF); /*0x4aa823*/
      v253 = a6 + a6 + v25; /*0x4aa83d*/
      v192 = (*(char (__thiscall **)(int *))(unk_B35788 + 0x12C))(&unk_B35788); /*0x4aa848*/
      v29 = (*(int (__thiscall **)(int *))(*v18 + 0x12C))(v18); /*0x4aa851*/
      sub_4A9930(v18, (char *)&v262, v29, v192); /*0x4aa85e*/
      v193 = (*(char (__thiscall **)(int *))(unk_B35788 + 0x130))(&unk_B35788); /*0x4aa87a*/
      v30 = (*(int (__thiscall **)(int *))(*v18 + 0x130))(v18); /*0x4aa883*/
      sub_4A9930(v18, v265, v30, v193); /*0x4aa890*/
      _sprintf((char *)&v271, "Forward: %s Back: %s", (const char *)&v262, v265);
      v149 = (float)v253; /*0x4aa8bf*/
      InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (char *)&v271, *(float *)&v257, v149, 1, 0xFFFFFFFF); /*0x4aa8d2*/
      v25 = a6 + v253; /*0x4aa8e3*/
      v194 = (*(char (__thiscall **)(int *))(unk_B35788 + 0x134))(&unk_B35788); /*0x4aa8fe*/
      v31 = (*(int (__thiscall **)(int *))(*v18 + 0x134))(v18); /*0x4aa901*/
      sub_4A9930(v18, (char *)&v262, v31, v194); /*0x4aa90e*/
      v195 = (*(char (__thiscall **)(int *))(unk_B35788 + 0x138))(&unk_B35788); /*0x4aa92a*/
      v32 = (*(int (__thiscall **)(int *))(*v18 + 0x138))(v18); /*0x4aa933*/
      sub_4A9930(v18, v265, v32, v195); /*0x4aa940*/
      _sprintf((char *)&v271, "Left: %s Right: %s", (const char *)&v262, v265);
      v150 = (float)(a6 + v253); /*0x4aa96f*/
      InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (char *)&v271, *(float *)&v257, v150, 1, 0xFFFFFFFF); /*0x4aa982*/
    }
    else
    {
      InterfaceMgr_DebugTextLine( /*0x4aa989*/
        v11,
        v12,
        v13,
        v27,
        "Choose Power Attacks using Movement.",
        *(float *)&v257,
        v147,
        1,
        0xFFFFFFFF);
    }
    LODWORD(v254) = a6 + v25; /*0x4aa9a4*/
    v196 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x13C))(&unk_B35788); /*0x4aa9b5*/
    v171 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x13C))(v18); /*0x4aa9bf*/
    sub_4A98D0(v18, (char *)&v262, v171, v196); /*0x4aa9c5*/
    v197 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x140))(&unk_B35788); /*0x4aa9e8*/
    v172 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x140))(v18); /*0x4aa9f2*/
    sub_4A98D0(v18, v265, v172, v197); /*0x4aa9f8*/
    _sprintf((char *)&v271, "Hold Timer Min: %s Max: %s", (const char *)&v262, v265);
    v151 = (float)(a6 + v25); /*0x4aaa27*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, *(float *)&v257, (char *)&v271, *(float *)&v257, v151, 1, 0xFFFFFFFF); /*0x4aaa3a*/
    v152 = (float)(a6 + v235); /*0x4aaa4d*/
    v16 = a6 + a6 + v25; /*0x4aaa51*/
    InterfaceMgr_DebugTextLine(v11, v12, v13, v256, "MANEUVER DECISION", v256, v152, 3, 0xFFFFFFFF); /*0x4aaa5f*/
    v198 = (*(char (__thiscall **)(int *))(unk_B35788 + 0xDC))(&unk_B35788); /*0x4aaa84*/
    v33 = (*(int (__thiscall **)(int *))(*v18 + 0xDC))(v18); /*0x4aaa8d*/
    sub_4A9930(v18, (char *)&v262, v33, v198); /*0x4aaa9a*/
    _sprintf((char *)&v271, "Dodge %%Chance: %s", (const char *)&v262);
    v153 = (float)(a6 + v11); /*0x4aaac4*/
    InterfaceMgr_DebugTextLine(a6 + v11, v12, v13, v256, (char *)&v271, v256, v153, 3, 0xFFFFFFFF); /*0x4aaad7*/
    v237 = a6 + a6 + v11; /*0x4aaaf1*/
    v199 = (*(char (__thiscall **)(int *))(unk_B35788 + 0xE4))(&unk_B35788); /*0x4aaafc*/
    v34 = (*(int (__thiscall **)(int *))(*v18 + 0xE4))(v18); /*0x4aab05*/
    sub_4A9930(v18, (char *)&v262, v34, v199); /*0x4aab12*/
    _sprintf((char *)&v271, "Dodge Left/Right %%Chance: %s", (const char *)&v262);
    v154 = (float)v237; /*0x4aab3c*/
    InterfaceMgr_DebugTextLine(v237, v12, v13, v256, (char *)&v271, v256, v154, 3, 0xFFFFFFFF); /*0x4aab4f*/
    v238 = a6 + v237; /*0x4aab69*/
    v200 = (*(char (__thiscall **)(int *))(unk_B35788 + 0xE0))(&unk_B35788); /*0x4aab74*/
    v35 = (*(int (__thiscall **)(int *))(*v18 + 0xE0))(v18); /*0x4aab7d*/
    sub_4A9930(v18, (char *)&v262, v35, v200); /*0x4aab8a*/
    _sprintf((char *)&v271, "Acrobatic Dodge %%Chance: %s", (const char *)&v262);
    v155 = (float)v238; /*0x4aabb4*/
    InterfaceMgr_DebugTextLine(v238, v12, v13, v256, (char *)&v271, v256, v155, 3, 0xFFFFFFFF); /*0x4aabc7*/
    v239 = a6 + v238; /*0x4aabe1*/
    v201 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x100))(&unk_B35788); /*0x4aabf2*/
    v173 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x100))(v18); /*0x4aabfc*/
    sub_4A98D0(v18, (char *)&v262, v173, v201); /*0x4aac02*/
    v202 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x104))(&unk_B35788); /*0x4aac25*/
    v174 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x104))(v18); /*0x4aac2f*/
    sub_4A98D0(v18, v265, v174, v202); /*0x4aac35*/
    _sprintf((char *)&v271, "Idle Timer Min: %s Max: %s", (const char *)&v262, v265);
    v156 = (float)v239; /*0x4aac64*/
    InterfaceMgr_DebugTextLine(v239, v12, v13, v256, (char *)&v271, v256, v156, 3, 0xFFFFFFFF); /*0x4aac77*/
    v240 = a6 + v239; /*0x4aac91*/
    v203 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0xE8))(&unk_B35788); /*0x4aaca2*/
    v175 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xE8))(v18); /*0x4aaca8*/
    sub_4A98D0(v18, (char *)&v262, v175, v203); /*0x4aacb2*/
    v204 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0xEC))(&unk_B35788); /*0x4aacd5*/
    v176 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xEC))(v18); /*0x4aacdf*/
    sub_4A98D0(v18, v265, v176, v204); /*0x4aace5*/
    _sprintf((char *)&v271, "Dodge L/R Timer Min: %s Max: %s", (const char *)&v262, v265);
    v157 = (float)v240; /*0x4aad14*/
    InterfaceMgr_DebugTextLine(v240, v12, v13, v256, (char *)&v271, v256, v157, 3, 0xFFFFFFFF); /*0x4aad27*/
    v241 = a6 + v240; /*0x4aad41*/
    v205 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0xF0))(&unk_B35788); /*0x4aad52*/
    v177 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xF0))(v18); /*0x4aad5c*/
    sub_4A98D0(v18, (char *)&v262, v177, v205); /*0x4aad62*/
    v206 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0xF4))(&unk_B35788); /*0x4aad85*/
    v178 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xF4))(v18); /*0x4aad8f*/
    sub_4A98D0(v18, v265, v178, v206); /*0x4aad95*/
    _sprintf((char *)&v271, "Dodge Forward Timer Min: %s Max: %s", (const char *)&v262, v265);
    v158 = (float)v241; /*0x4aadc4*/
    InterfaceMgr_DebugTextLine(v241, v12, v13, v256, (char *)&v271, v256, v158, 3, 0xFFFFFFFF); /*0x4aadd7*/
    v242 = a6 + v241; /*0x4aadf1*/
    v207 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0xF8))(&unk_B35788); /*0x4aae02*/
    v179 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xF8))(v18); /*0x4aae0c*/
    sub_4A98D0(v18, (char *)&v262, v179, v207); /*0x4aae12*/
    v208 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0xFC))(&unk_B35788); /*0x4aae35*/
    v180 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0xFC))(v18); /*0x4aae3f*/
    sub_4A98D0(v18, v265, v180, v208); /*0x4aae45*/
    _sprintf((char *)&v271, "Dodge Back Timer Min: %s Max: %s", (const char *)&v262, v265);
    v159 = (float)v242; /*0x4aae74*/
    InterfaceMgr_DebugTextLine(v242, v12, v13, v256, (char *)&v271, v256, v159, 3, 0xFFFFFFFF); /*0x4aae87*/
    v243 = a6 + v242; /*0x4aaea1*/
    v209 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x144))(&unk_B35788); /*0x4aaeb2*/
    v181 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x144))(v18); /*0x4aaeb8*/
    sub_4A98D0(v18, (char *)&v262, v181, v209); /*0x4aaec2*/
    _sprintf((char *)&v271, "Optimal Range Mult: %s", (const char *)&v262);
    v160 = (float)v243; /*0x4aaeec*/
    InterfaceMgr_DebugTextLine(v243, v12, v13, v256, (char *)&v271, v256, v160, 3, 0xFFFFFFFF); /*0x4aaeff*/
    v244 = a6 + v243; /*0x4aaf1a*/
    v210 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x148))(&unk_B35788); /*0x4aaf2b*/
    v182 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x148))(v18); /*0x4aaf35*/
    sub_4A98D0(v18, (char *)&v262, v182, v210); /*0x4aaf3b*/
    _sprintf((char *)&v271, "Maximum Range Mult: %s", (const char *)&v262);
    v161 = (float)v244; /*0x4aaf65*/
    InterfaceMgr_DebugTextLine(v244, v12, v13, v256, (char *)&v271, v256, v161, 3, 0xFFFFFFFF); /*0x4aaf78*/
    v245 = a6 + v244; /*0x4aaf93*/
    v211 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x14C))(&unk_B35788); /*0x4aafa4*/
    v183 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x14C))(v18); /*0x4aafae*/
    sub_4A98D0(v18, (char *)&v262, v183, v211); /*0x4aafb4*/
    _sprintf((char *)&v271, "Switch to Melee Distance: %s", (const char *)&v262);
    v162 = (float)v245; /*0x4aafde*/
    InterfaceMgr_DebugTextLine(v245, v12, v13, v256, (char *)&v271, v256, v162, 3, 0xFFFFFFFF); /*0x4aaff1*/
    v246 = a6 + v245; /*0x4ab00c*/
    v212 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x150))(&unk_B35788); /*0x4ab01d*/
    v184 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x150))(v18); /*0x4ab027*/
    sub_4A98D0(v18, (char *)&v262, v184, v212); /*0x4ab02d*/
    _sprintf((char *)&v271, "Switch to Ranged Distance: %s", (const char *)&v262);
    v163 = (float)v246; /*0x4ab057*/
    InterfaceMgr_DebugTextLine(v246, v12, v13, v256, (char *)&v271, v256, v163, 3, 0xFFFFFFFF); /*0x4ab06a*/
    v247 = a6 + v246; /*0x4ab085*/
    v213 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x154))(&unk_B35788); /*0x4ab096*/
    v185 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x154))(v18); /*0x4ab0a0*/
    sub_4A98D0(v18, (char *)&v262, v185, v213); /*0x4ab0a6*/
    _sprintf((char *)&v271, "Buff Standoff Distance: %s", (const char *)&v262);
    v164 = (float)v247; /*0x4ab0d0*/
    InterfaceMgr_DebugTextLine(v247, v12, v13, v256, (char *)&v271, v256, v164, 3, 0xFFFFFFFF); /*0x4ab0e3*/
    v248 = a6 + v247; /*0x4ab0fe*/
    v214 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x158))(&unk_B35788); /*0x4ab10f*/
    v186 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x158))(v18); /*0x4ab119*/
    sub_4A98D0(v18, (char *)&v262, v186, v214); /*0x4ab11f*/
    _sprintf((char *)&v271, "Ranged Standoff Distance: %s", (const char *)&v262);
    v165 = (float)v248; /*0x4ab149*/
    InterfaceMgr_DebugTextLine(v248, v12, v13, v256, (char *)&v271, v256, v165, 3, 0xFFFFFFFF); /*0x4ab15c*/
    v249 = a6 + v248; /*0x4ab177*/
    v215 = ((double (__thiscall *)(int *))*(_DWORD *)(unk_B35788 + 0x15C))(&unk_B35788); /*0x4ab188*/
    v187 = ((double (__thiscall *)(int *))*(_DWORD *)(*v18 + 0x15C))(v18); /*0x4ab192*/
    sub_4A98D0(v18, (char *)&v262, v187, v215); /*0x4ab198*/
    _sprintf((char *)&v271, "GroupStandoff Distance: %s", (const char *)&v262);
    v166 = (float)v249; /*0x4ab1c2*/
    InterfaceMgr_DebugTextLine(v249, v12, v13, v256, (char *)&v271, v256, v166, 3, 0xFFFFFFFF); /*0x4ab1d5*/
    v36 = a6 + v249; /*0x4ab1df*/
    LODWORD(v250) = a6 + v249; /*0x4ab1e1*/
    v37 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 0x40); /*0x4ab1ef*/
    v38 = "Prefers Ranged Attacks"; /*0x4ab1f3*/
    if ( !v37 ) /*0x4ab1f8*/
      v38 = "No Ranged Preference"; /*0x4ab1fa*/
    v39 = &v270; /*0x4ab1ff*/
    do /*0x4ab212*/
    {
      v40 = *v38; /*0x4ab206*/
      *(_BYTE *)v39 = *v38++; /*0x4ab208*/
      v39 = (int *)((char *)v39 + 1); /*0x4ab20d*/
    }
    while ( v40 ); /*0x4ab212*/
    v143 = (float)v235; /*0x4ab21f*/
    InterfaceMgr_DebugTextLine(v36, v12, v13, v254, (char *)&v270, v254, v143, 3, 0xFFFFFFFF); /*0x4ab232*/
    v41 = a6 + v36; /*0x4ab242*/
    v42 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 8); /*0x4ab24c*/
    v43 = "Yield Enabled"; /*0x4ab250*/
    if ( !v42 ) /*0x4ab255*/
      v43 = "Yield Disabled"; /*0x4ab257*/
    v44 = &v270; /*0x4ab25c*/
    do /*0x4ab26f*/
    {
      v45 = *v43; /*0x4ab263*/
      *(_BYTE *)v44 = *v43++; /*0x4ab265*/
      v44 = (int *)((char *)v44 + 1); /*0x4ab26a*/
    }
    while ( v45 ); /*0x4ab26f*/
    v144 = (float)v41; /*0x4ab27c*/
    InterfaceMgr_DebugTextLine(v41, v12, v13, v254, (char *)&v270, v254, v144, 3, 0xFFFFFFFF); /*0x4ab28f*/
    LODWORD(v46) = a6 + v41; /*0x4ab29f*/
    v236 = v46; /*0x4ab2a5*/
    v47 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 0x20); /*0x4ab2a9*/
    v48 = "Flee Disabled"; /*0x4ab2ad*/
    if ( !v47 ) /*0x4ab2b2*/
      v48 = "Flee Enabled"; /*0x4ab2b4*/
    v49 = &v269; /*0x4ab2b9*/
    do /*0x4ab2cc*/
    {
      v50 = *v48; /*0x4ab2c0*/
      *(_BYTE *)v49 = *v48++; /*0x4ab2c2*/
      v49 = (int *)((char *)v49 + 1); /*0x4ab2c7*/
    }
    while ( v50 ); /*0x4ab2cc*/
    v138 = (float)v233; /*0x4ab2d9*/
    InterfaceMgr_DebugTextLine(SLOBYTE(v46), v12, v13, v250, (char *)&v269, v250, v138, 3, 0xFFFFFFFF); /*0x4ab2ec*/
    LODWORD(v51) = a6 + LODWORD(v46); /*0x4ab2fc*/
    v234 = v51; /*0x4ab302*/
    v52 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 0x10); /*0x4ab306*/
    v53 = "Rejects Yields"; /*0x4ab30a*/
    if ( !v52 ) /*0x4ab30f*/
      v53 = "Accepts Yields"; /*0x4ab311*/
    v54 = &v268; /*0x4ab316*/
    do /*0x4ab32c*/
    {
      v55 = *v53; /*0x4ab320*/
      *(_BYTE *)v54 = *v53++; /*0x4ab322*/
      v54 = (int *)((char *)v54 + 1); /*0x4ab327*/
    }
    while ( v55 ); /*0x4ab32c*/
    v112 = (float)v230; /*0x4ab339*/
    InterfaceMgr_DebugTextLine(SLOBYTE(v51), v12, v13, v236, (char *)&v268, v236, v112, 3, 0xFFFFFFFF); /*0x4ab34c*/
    LODWORD(v56) = a6 + LODWORD(v51); /*0x4ab35c*/
    v231 = v56; /*0x4ab362*/
    v57 = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 4); /*0x4ab366*/
    v58 = "Ignores allies in range of area effects"; /*0x4ab36a*/
    if ( !v57 ) /*0x4ab36f*/
      v58 = "Won't cast area effects if allies are in range"; /*0x4ab371*/
    v59 = &v267; /*0x4ab376*/
    do /*0x4ab38c*/
    {
      v60 = *v58; /*0x4ab380*/
      *(_BYTE *)v59 = *v58++; /*0x4ab382*/
      v59 = (int *)((char *)v59 + 1); /*0x4ab387*/
    }
    while ( v60 ); /*0x4ab38c*/
    v86 = (float)2; /*0x4ab399*/
    InterfaceMgr_DebugTextLine(SLOBYTE(v56), v12, v13, v234, (char *)&v267, v234, v86, 3, 0xFFFFFFFF); /*0x4ab3ac*/
    v11 = a6 + LODWORD(v56); /*0x4ab3c0*/
    result = (*(int (__thiscall **)(int *, int))(*v18 + 0x16C))(v18, 1); /*0x4ab3c2*/
    if ( (_BYTE)result )
    {
      v61 = a6 + v16; /*0x4ab3cc*/
      v69 = (float)v61; /*0x4ab3dd*/
      InterfaceMgr_DebugTextLine(v11, v12, v13, v254, "ADVANCED SETTINGS", v254, v69, 2, 0xFFFFFFFF); /*0x4ab3ed*/
      v216 = a6 + v61; /*0x4ab400*/
      v113 = sub_4A9F70(&unk_B35788); /*0x4ab40c*/
      v87 = sub_4A9F70(v18); /*0x4ab419*/
      sub_4A98D0(v18, (char *)&v257, v87, v113); /*0x4ab41f*/
      v114 = sub_4A9F30(&unk_B35788); /*0x4ab431*/
      v88 = sub_4A9F30(v18); /*0x4ab43e*/
      sub_4A98D0(v18, v264, v88, v114); /*0x4ab444*/
      _sprintf((char *)&v266, "Block Skill Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v70 = (float)(a6 + v61); /*0x4ab473*/
      InterfaceMgr_DebugTextLine(v11, v12, v13, v234, (char *)&v266, v234, v70, 1, 0xFFFFFFFF); /*0x4ab486*/
      v62 = a6 + a6 + v61; /*0x4ab499*/
      v115 = sub_4AA070(&unk_B35788); /*0x4ab4a3*/
      v89 = sub_4AA070(v18); /*0x4ab4b0*/
      sub_4A98D0(v18, (char *)&v257, v89, v115); /*0x4ab4b6*/
      v116 = sub_4AA030(&unk_B35788); /*0x4ab4c8*/
      v90 = sub_4AA030(v18); /*0x4ab4d5*/
      sub_4A98D0(v18, v264, v90, v116); /*0x4ab4db*/
      _sprintf((char *)&v266, "Attack Skill Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v71 = (float)v62; /*0x4ab50a*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (char *)&v266, v234, v71, 1, 0xFFFFFFFF); /*0x4ab51d*/
      v117 = sub_4AA170(&unk_B35788); /*0x4ab538*/
      v91 = sub_4AA170(v18); /*0x4ab545*/
      sub_4A98D0(v18, (char *)&v257, v91, v117); /*0x4ab54b*/
      v118 = sub_4AA1B0(&unk_B35788); /*0x4ab55d*/
      v92 = sub_4AA1B0(v18); /*0x4ab56a*/
      sub_4A98D0(v18, v264, v92, v118); /*0x4ab570*/
      _sprintf((char *)&v266, "Power Att. Fatigue Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v72 = (float)(a6 + v62); /*0x4ab59f*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (char *)&v266, v234, v72, 1, 0xFFFFFFFF); /*0x4ab5b2*/
      v225 = a6 + a6 + v62; /*0x4ab5c1*/
      v119 = sub_4AA0B0(&unk_B35788); /*0x4ab5cd*/
      v93 = sub_4AA0B0(v18); /*0x4ab5d6*/
      sub_4A98D0(v18, (char *)&v257, v93, v119); /*0x4ab5e0*/
      _sprintf((char *)&v266, "Attack While Under Attack Mult: %s", (const char *)&v257);
      v73 = (float)v225; /*0x4ab60a*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (char *)&v266, v234, v73, 1, 0xFFFFFFFF); /*0x4ab61d*/
      v226 = a6 + v225; /*0x4ab62c*/
      v120 = sub_4AA130(&unk_B35788); /*0x4ab638*/
      v94 = sub_4AA130(v18); /*0x4ab645*/
      sub_4A98D0(v18, (char *)&v257, v94, v120); /*0x4ab64b*/
      _sprintf((char *)&v266, "Attack Not Under Attack Mult: %s", (const char *)&v257);
      v74 = (float)v226; /*0x4ab675*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (char *)&v266, v234, v74, 1, 0xFFFFFFFF); /*0x4ab688*/
      v227 = a6 + v226; /*0x4ab697*/
      v121 = sub_4A9FB0(&unk_B35788); /*0x4ab6a3*/
      v95 = sub_4A9FB0(v18); /*0x4ab6b0*/
      sub_4A98D0(v18, (char *)&v257, v95, v121); /*0x4ab6b6*/
      _sprintf((char *)&v266, "Block While Under Attack Mult: %s", (const char *)&v257);
      v75 = (float)v227; /*0x4ab6e0*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (char *)&v266, v234, v75, 1, 0xFFFFFFFF); /*0x4ab6f3*/
      v228 = a6 + v227; /*0x4ab702*/
      v122 = sub_4A9FF0(&unk_B35788); /*0x4ab70e*/
      v96 = sub_4A9FF0(v18); /*0x4ab71b*/
      sub_4A98D0(v18, (char *)&v257, v96, v122); /*0x4ab721*/
      _sprintf((char *)&v266, "Block Not Under Attack Mult: %s", (const char *)&v257);
      v76 = (float)v228; /*0x4ab74b*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v234, (char *)&v266, v234, v76, 1, 0xFFFFFFFF); /*0x4ab75e*/
      v16 = a6 + v228; /*0x4ab76b*/
      v123 = sub_4A9CF0(&unk_B35788); /*0x4ab775*/
      v97 = sub_4A9CF0(v18); /*0x4ab782*/
      sub_4A98D0(v18, (char *)&v257, v97, v123); /*0x4ab788*/
      v124 = sub_4A9CB0(&unk_B35788); /*0x4ab79a*/
      v98 = sub_4A9CB0(v18); /*0x4ab7a7*/
      sub_4A98D0(v18, v264, v98, v124); /*0x4ab7ad*/
      _sprintf((char *)&v266, "Dodge Fatigue Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v77 = (float)v216; /*0x4ab7dc*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v231, (char *)&v266, v231, v77, 3, 0xFFFFFFFF); /*0x4ab7ef*/
      v125 = sub_4A9D30(&unk_B35788); /*0x4ab808*/
      v99 = sub_4A9D30(v18); /*0x4ab815*/
      sub_4A98D0(v18, (char *)&v257, v99, v125); /*0x4ab81b*/
      v126 = sub_4A9D70(&unk_B35788); /*0x4ab82d*/
      v100 = sub_4A9D70(v18); /*0x4ab83a*/
      sub_4A98D0(v18, v264, v100, v126); /*0x4ab840*/
      _sprintf((char *)&v266, "Encumbered Speed Modifier Base: %s Mult: %s", (const char *)&v257, v264);
      v78 = (float)v62; /*0x4ab86f*/
      InterfaceMgr_DebugTextLine(v62, v12, v13, v231, (char *)&v266, v231, v78, 3, 0xFFFFFFFF); /*0x4ab882*/
      v127 = sub_4A9DB0(&unk_B35788); /*0x4ab89d*/
      v101 = sub_4A9DB0(v18); /*0x4ab8aa*/
      sub_4A98D0(v18, (char *)&v257, v101, v127); /*0x4ab8b0*/
      _sprintf((char *)&v266, "Dodge While Under Attack Mult: %s", (const char *)&v257);
      v79 = (float)(a6 + v62); /*0x4ab8da*/
      InterfaceMgr_DebugTextLine(a6 + v62, v12, v13, v231, (char *)&v266, v231, v79, 3, 0xFFFFFFFF); /*0x4ab8ed*/
      v217 = a6 + a6 + v62; /*0x4ab8f7*/
      v128 = sub_4A9DF0(&unk_B35788); /*0x4ab908*/
      v102 = sub_4A9DF0(v18); /*0x4ab915*/
      sub_4A98D0(v18, (char *)&v257, v102, v128); /*0x4ab91b*/
      _sprintf((char *)&v266, "Dodge Not Under Attack Mult: %s", (const char *)&v257);
      v80 = (float)v217; /*0x4ab945*/
      InterfaceMgr_DebugTextLine(v217, v12, v13, v231, (char *)&v266, v231, v80, 3, 0xFFFFFFFF); /*0x4ab958*/
      v218 = a6 + v217; /*0x4ab967*/
      v129 = sub_4A9E30(&unk_B35788); /*0x4ab973*/
      v103 = sub_4A9E30(v18); /*0x4ab980*/
      sub_4A98D0(v18, (char *)&v257, v103, v129); /*0x4ab986*/
      _sprintf((char *)&v266, "Dodge Back While Under Attack Mult: %s", (const char *)&v257);
      v81 = (float)v218; /*0x4ab9b0*/
      InterfaceMgr_DebugTextLine(v218, v12, v13, v231, (char *)&v266, v231, v81, 3, 0xFFFFFFFF); /*0x4ab9c3*/
      v219 = a6 + v218; /*0x4ab9d2*/
      v130 = sub_4A9E70(&unk_B35788); /*0x4ab9de*/
      v104 = sub_4A9E70(v18); /*0x4ab9eb*/
      sub_4A98D0(v18, (char *)&v257, v104, v130); /*0x4ab9f1*/
      _sprintf((char *)&v266, "Dodge Back Not Under Attack Mult: %s", (const char *)&v257);
      v82 = (float)v219; /*0x4aba1b*/
      InterfaceMgr_DebugTextLine(v219, v12, v13, v231, (char *)&v266, v231, v82, 3, 0xFFFFFFFF); /*0x4aba2e*/
      v220 = a6 + v219; /*0x4aba3d*/
      v131 = sub_4A9EB0(&unk_B35788); /*0x4aba49*/
      v105 = sub_4A9EB0(v18); /*0x4aba56*/
      sub_4A98D0(v18, (char *)&v257, v105, v131); /*0x4aba5c*/
      _sprintf((char *)&v266, "Dodge Forward While Attacking Mult: %s", (const char *)&v257);
      v83 = (float)v220; /*0x4aba86*/
      InterfaceMgr_DebugTextLine(v220, v12, v13, v231, (char *)&v266, v231, v83, 3, 0xFFFFFFFF); /*0x4aba99*/
      v221 = a6 + v220; /*0x4abaa8*/
      v132 = sub_4A9EF0(&unk_B35788); /*0x4abab4*/
      v106 = sub_4A9EF0(v18); /*0x4abac1*/
      sub_4A98D0(v18, (char *)&v257, v106, v132); /*0x4abac7*/
      _sprintf((char *)&v266, "Dodge Forward Not Attacking Mult: %s", (const char *)&v257);
      v84 = (float)v221; /*0x4abaf1*/
      result = InterfaceMgr_DebugTextLine(v221, v12, v13, v231, (char *)&v266, v231, v84, 3, 0xFFFFFFFF); /*0x4abb04*/
      v11 = a6 + v221; /*0x4abb0c*/
    }
    v8 = (signed int *)LODWORD(v236); /*0x4abb0e*/
    v10 = (int *)LODWORD(v250); /*0x4abb12*/
  }
  *v8 = v16; /*0x4abb18*/
  if ( v16 <= v11 ) /*0x4abb1a*/
    *v10 = v11; /*0x4abb20*/
  else
    *v10 = v16; /*0x4abb1c*/
  return result; /*0x4abb2d*/
}
