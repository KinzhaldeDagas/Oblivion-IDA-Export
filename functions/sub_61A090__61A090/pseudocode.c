int *__usercall sub_61A090@<eax>(double a1@<st1>, double a2@<st0>, int *a3, int a4, char a5, int a6, int *a7, int **a8)
{
  int *v8; // esi
  int v9; // eax
  int v10; // ecx
  double v11; // st5
  int v12; // ebx
  int v13; // edi
  bool v14; // zf
  char v15; // bl
  int v16; // eax
  double v17; // st7
  int v18; // eax
  double v19; // st7
  int v20; // eax
  double v21; // st7
  double v22; // st7
  int BaseCalcAVi; // eax
  int v24; // eax
  int v25; // eax
  double v26; // st7
  signed int v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int *v31; // ebp
  char v32; // al
  int v33; // edi
  int *result; // eax
  double v35; // st7
  int v36; // ebp
  double DesiredCombatDistance; // st7
  int v38; // ebx
  const char *v39; // eax
  int v40; // ebp
  int v41; // ecx
  unsigned __int16 (__thiscall *v42)(int); // eax
  const char *v43; // eax
  Atmosphere *v44; // ecx
  _DWORD *v45; // ebp
  int Radius; // eax
  int *EffectiveCombatStyle; // eax
  double v48; // st7
  const char *v49; // eax
  const char *v50; // eax
  int v51; // eax
  const char *v52; // eax
  char *v53; // edx
  char v54; // cl
  double v55; // st7
  void ***v56; // edx
  int v57; // ebp
  double v58; // st7
  int j; // ebp
  int k; // ebp
  int m; // ebp
  int v62; // ebp
  float *v63; // ebx
  char *v64; // eax
  int v65; // ebp
  int v66; // eax
  int v67; // eax
  int v68; // ebp
  __int16 v69; // cx
  int v70; // eax
  char v71; // al
  const char *v72; // edx
  const char *v73; // ecx
  const char *v74; // eax
  int v75; // eax
  const char *v76; // ecx
  int **v77; // ecx
  int v78; // [esp+14h] [ebp-1A0h]
  double v79; // [esp+18h] [ebp-19Ch]
  double v80; // [esp+1Ch] [ebp-198h]
  int v81; // [esp+20h] [ebp-194h]
  float v82; // [esp+24h] [ebp-190h]
  float v83; // [esp+24h] [ebp-190h]
  float v84; // [esp+24h] [ebp-190h]
  double v85; // [esp+24h] [ebp-190h]
  float v86; // [esp+24h] [ebp-190h]
  float v87; // [esp+24h] [ebp-190h]
  float v88; // [esp+24h] [ebp-190h]
  float v89; // [esp+24h] [ebp-190h]
  float v90; // [esp+24h] [ebp-190h]
  float v91; // [esp+24h] [ebp-190h]
  float v92; // [esp+24h] [ebp-190h]
  float v93; // [esp+24h] [ebp-190h]
  float v94; // [esp+24h] [ebp-190h]
  float v95; // [esp+24h] [ebp-190h]
  float v96; // [esp+24h] [ebp-190h]
  float v97; // [esp+24h] [ebp-190h]
  float v98; // [esp+24h] [ebp-190h]
  float v99; // [esp+24h] [ebp-190h]
  float v100; // [esp+24h] [ebp-190h]
  float v101; // [esp+24h] [ebp-190h]
  float v102; // [esp+24h] [ebp-190h]
  float v103; // [esp+24h] [ebp-190h]
  float v104; // [esp+24h] [ebp-190h]
  float v105; // [esp+24h] [ebp-190h]
  float v106; // [esp+24h] [ebp-190h]
  float v107; // [esp+24h] [ebp-190h]
  float v108; // [esp+24h] [ebp-190h]
  float v109; // [esp+24h] [ebp-190h]
  float v110; // [esp+24h] [ebp-190h]
  float v111; // [esp+24h] [ebp-190h]
  float v112; // [esp+24h] [ebp-190h]
  float v113; // [esp+28h] [ebp-18Ch]
  double v114; // [esp+28h] [ebp-18Ch]
  double v115; // [esp+28h] [ebp-18Ch]
  double v116; // [esp+28h] [ebp-18Ch]
  double v117; // [esp+28h] [ebp-18Ch]
  double v118; // [esp+28h] [ebp-18Ch]
  double v119; // [esp+28h] [ebp-18Ch]
  float v120; // [esp+2Ch] [ebp-188h]
  int v121; // [esp+2Ch] [ebp-188h]
  double v122; // [esp+2Ch] [ebp-188h]
  int v123; // [esp+2Ch] [ebp-188h]
  NiAVObject *v124; // [esp+2Ch] [ebp-188h]
  int v125; // [esp+30h] [ebp-184h]
  int v126; // [esp+34h] [ebp-180h]
  int *i; // [esp+40h] [ebp-174h] BYREF
  int v128; // [esp+44h] [ebp-170h]
  int v129; // [esp+48h] [ebp-16Ch]
  float v130; // [esp+4Ch] [ebp-168h] BYREF
  float v131; // [esp+50h] [ebp-164h] BYREF
  float v132; // [esp+54h] [ebp-160h]
  int v133; // [esp+58h] [ebp-15Ch]
  int *v134; // [esp+5Ch] [ebp-158h]
  int **v135; // [esp+60h] [ebp-154h]
  int *v136; // [esp+64h] [ebp-150h]
  int v137; // [esp+68h] [ebp-14Ch]
  int *v138; // [esp+6Ch] [ebp-148h]
  _DWORD v139[5]; // [esp+70h] [ebp-144h]
  int v140; // [esp+84h] [ebp-130h] BYREF
  int v141; // [esp+88h] [ebp-12Ch] BYREF
  char v142[192]; // [esp+8Ch] [ebp-128h] BYREF
  char v143[100]; // [esp+14Ch] [ebp-68h] BYREF

  v133 = a4; /*0x61a0c4*/
  v8 = *a8; /*0x61a0d0*/
  v134 = a7; /*0x61a0d2*/
  v9 = *a7; /*0x61a0d6*/
  v136 = a3; /*0x61a0d9*/
  v135 = a8; /*0x61a0dd*/
  v137 = v9; /*0x61a0e1*/
  v138 = v8; /*0x61a0e5*/
  if ( a5 ) /*0x61a0e9*/
    v10 = iDebugTextLeftRightOffset; /*0x61a0eb*/
  else
    v10 = 0x500 - iDebugTextLeftRightOffset; /*0x61a0f8*/
  v11 = (double)v10; /*0x61a102*/
  *(float *)&v128 = v11; /*0x61a10f*/
  v12 = v9; /*0x61a113*/
  v13 = 2 * (a5 == 0) + 1; /*0x61a119*/
  v129 = v13; /*0x61a11b*/
  if ( !a5 ) /*0x61a11f*/
    v12 = (int)v8; /*0x61a121*/
  v14 = (a3[2] & 0x800) == 0; /*0x61a129*/
  i = (int *)v12; /*0x61a12c*/
  v139[0] = "NORMAL"; /*0x61a130*/
  v139[1] = "FORWARD"; /*0x61a138*/
  v139[2] = "BACK"; /*0x61a140*/
  v139[3] = "LEFT"; /*0x61a148*/
  v139[4] = "RIGHT"; /*0x61a150*/
  if ( !v14 ) /*0x61a158*/
  {
    v82 = (float)(int)i; /*0x61a164*/
    InterfaceMgr_DebugTextLine((char)a3, *(float *)&v128, a1, a2, "DISABLED", *(float *)&v128, v82, v13, 0xFFFFFFFF); /*0x61a174*/
    i = (int *)(a6 + v12); /*0x61a183*/
    v15 = a5; /*0x61a187*/
    goto LABEL_24; /*0x61a18e*/
  }
  if ( (*(unsigned __int8 (__usercall **)@<al>(int *@<ecx>, double@<st0>, double@<st1>))(*a3 + 0x25C))(a3, a2, a1) ) /*0x61a19e*/
  {
    v83 = (float)(int)i; /*0x61a1b5*/
    InterfaceMgr_DebugTextLine( /*0x61a1c5*/
      (char)a3,
      v11,
      a1,
      *(float *)&v128,
      "OVER-ENCUMBERED",
      *(float *)&v128,
      v83,
      v13,
      0xFFFFFFFF);
    v12 += a6; /*0x61a1cd*/
    i = (int *)v12; /*0x61a1cf*/
  }
  if ( a6 < 0x1E ) /*0x61a1d8*/
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(a3, v12, v13, a6, 9); /*0x61a2e0*/
    v122 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 9, BaseCalcAVi); /*0x61a2f8*/
    v24 = Actor_GetBaseCalcAVi(a3, v12, v13, a6, 0xA); /*0x61a2ff*/
    v80 = ((double (__thiscall *)(int *, int, int, _DWORD, _DWORD))*(_DWORD *)(*a3 + 0x288))( /*0x61a317*/
            a3,
            0xA,
            v24,
            LODWORD(v122),
            HIDWORD(v122));
    v25 = Actor_GetBaseCalcAVi(a3, v12, v13, a6, 8); /*0x61a31e*/
    v26 = ((double (__thiscall *)(int *, int, int, _DWORD, _DWORD))*(_DWORD *)(*a3 + 0x288))( /*0x61a331*/
            a3,
            8,
            v25,
            LODWORD(v80),
            HIDWORD(v80));
    _sprintf((char *)&v140, "H:%.2f/%d F:%.2f/%d M:%.2f/%d", v26, v78, v79, v81, v85, v123); /*0x61a343*/
    v86 = (float)(int)i; /*0x61a355*/
    v22 = *(float *)&v128; /*0x61a35d*/
    InterfaceMgr_DebugTextLine((char)a3, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v86, v13, 0xFFFFFFFF); /*0x61a365*/
  }
  else
  {
    v16 = Actor_GetBaseCalcAVi(a3, v12, v13, a6, 8); /*0x61a1e0*/
    v17 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 8, v16); /*0x61a1f3*/
    _sprintf(v142, "HEALTH:%.2f/%d", v17, v126); /*0x61a205*/
    v120 = (float)v129; /*0x61a217*/
    InterfaceMgr_DebugTextLine((char)a3, v11, a1, v130, v142, v130, v120, v13, 0xFFFFFFFF); /*0x61a227*/
    v129 = a6 + v12; /*0x61a235*/
    v18 = Actor_GetBaseCalcAVi(a3, a6 + v12, v13, a6, 0xA); /*0x61a239*/
    v19 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 0xA, v18); /*0x61a24c*/
    _sprintf((char *)&v141, "FATIGUE:%.2f/%d", v19, v125); /*0x61a25e*/
    v113 = (float)v128; /*0x61a270*/
    InterfaceMgr_DebugTextLine( /*0x61a280*/
      (char)a3,
      v11,
      a1,
      *(float *)&v129,
      (char *)&v141,
      *(float *)&v129,
      v113,
      v13,
      0xFFFFFFFF);
    v12 += a6 + a6; /*0x61a288*/
    v128 = v12; /*0x61a28e*/
    v20 = Actor_GetBaseCalcAVi(a3, v12, v13, a6, 9); /*0x61a292*/
    v21 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 9, v20); /*0x61a2a5*/
    _sprintf((char *)&v140, "MAGICKA:%.2f/%d", v21, v121); /*0x61a2b7*/
    v84 = (float)(int)i; /*0x61a2c9*/
    v22 = *(float *)&v12; /*0x61a2d1*/
    InterfaceMgr_DebugTextLine((char)a3, v11, a1, *(float *)&v12, (char *)&v140, *(float *)&v12, v84, v13, 0xFFFFFFFF); /*0x61a2d9*/
  }
  v27 = a6 + v12; /*0x61a36a*/
  i = (int *)v27; /*0x61a374*/
  if ( v133 )
  {
    v28 = (*(int (__thiscall **)(int *, int))(*a3 + 0x224))(a3, v133); /*0x61a38a*/
    _sprintf((char *)&v140, "Disposition to Opponent: %d", v28);
    v87 = (float)(int)i; /*0x61a3a9*/
    v22 = *(float *)&v128; /*0x61a3b1*/
    InterfaceMgr_DebugTextLine((char)a3, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v87, v13, 0xFFFFFFFF); /*0x61a3b9*/
    v27 += a6; /*0x61a3c1*/
    i = (int *)v27; /*0x61a3c3*/
  }
  v29 = (*(int (__thiscall **)(int *))(*a3 + 0x330))(a3); /*0x61a3d2*/
  v30 = v29; /*0x61a3da*/
  if ( a3 == (int *)reference )
  {
    v88 = (float)(int)i; /*0x61a3f0*/
    v22 = *(float *)&v128; /*0x61a3f4*/
    InterfaceMgr_DebugTextLine( /*0x61a400*/
      (char)a3,
      v11,
      a1,
      *(float *)&v128,
      "Target is PLAYER. No AI info.",
      *(float *)&v128,
      v88,
      v129,
      0xFFFFFFFF);
    i = (int *)(a6 + v27); /*0x61a40a*/
  }
  else if ( v29 )
  {
    if ( *(_BYTE *)(v29 + 0x1BD) ) /*0x61a4f3*/
    {
      _sprintf((char *)&v140, "INITIALIZING (%d)", *(char *)(v29 + 0x1AC)); /*0x61a50e*/
      v92 = (float)(int)i; /*0x61a528*/
      InterfaceMgr_DebugTextLine( /*0x61a534*/
        (char)a3,
        v11,
        a1,
        *(float *)&v128,
        (char *)&v140,
        *(float *)&v128,
        v92,
        v129,
        0xFFFFFFFF);
      i = (int *)((char *)i + a6); /*0x61a53c*/
    }
    if ( v133 )
    {
      v114 = *(float *)(v30 + 0xCC) * dbl_A30DC8; /*0x61a558*/
      v35 = CombatController_GetCachedTargetSurfaceDistance(v30, v30); /*0x61a55b*/
      _sprintf((char *)&v140, "Distance: %.2f Position: %.2fdeg", v35, v114);
      v93 = (float)(int)i; /*0x61a586*/
      InterfaceMgr_DebugTextLine( /*0x61a596*/
        (char)a3,
        v11,
        a1,
        *(float *)&v128,
        (char *)&v140,
        *(float *)&v128,
        v93,
        v129,
        0xFFFFFFFF);
      i = (int *)((char *)i + a6); /*0x61a59e*/
    }
    v36 = *(_DWORD *)(v30 + 0x70); /*0x61a5a2*/
    if ( v36 == 2 || v36 == 4 )
    {
      v131 = 0.0; /*0x61a5b5*/
      v130 = 0.0; /*0x61a5ba*/
      CombatController_GetRangedDistanceBounds((_DWORD *)v30, COERCE_FLOAT(&v131), COERCE_FLOAT(&v130)); /*0x61a5c5*/
      _sprintf((char *)&v140, "Attack Range: %.2f(optimal) %.2f(max)", v131, v130);
    }
    else
    {
      DesiredCombatDistance = CombatController_GetDesiredCombatDistance(v30); /*0x61a5f4*/
      _sprintf((char *)&v140, "Attack Reach: %.2f", DesiredCombatDistance);
    }
    v94 = (float)(int)i; /*0x61a61f*/
    InterfaceMgr_DebugTextLine(v36, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v94, v129, 0xFFFFFFFF); /*0x61a62f*/
    i = (int *)((char *)i + a6); /*0x61a634*/
    v38 = *(_DWORD *)(v30 + 0x6C); /*0x61a63b*/
    v132 = *(float *)(v30 + 0x74); /*0x61a643*/
    if ( v36 ) /*0x61a647*/
    {
      switch ( v36 ) /*0x61a656*/
      {
        case 1: /*0x61a656*/
          v39 = "MELEE_WEAPON"; /*0x61a658*/
          break;
        case 2: /*0x61a656*/
          v39 = "RANGED_WEAPON"; /*0x61a667*/
          break;
        case 3: /*0x61a656*/
          v39 = "MELEE_MAGIC"; /*0x61a676*/
          break;
        case 4: /*0x61a656*/
          v39 = "RANGED_MAGIC"; /*0x61a682*/
          break;
        case 5: /*0x61a656*/
          v39 = "YIELD"; /*0x61a68e*/
          break;
        case 6: /*0x61a656*/
          v39 = "POST_YIELD"; /*0x61a69a*/
          break;
        case 7: /*0x61a656*/
          v39 = "FLEE"; /*0x61a6a6*/
          break;
        case 0xC: /*0x61a656*/
          v39 = "SWIM_FLEE"; /*0x61a6b2*/
          break;
        case 8: /*0x61a656*/
          v39 = "BUFF"; /*0x61a6be*/
          break;
        case 9: /*0x61a656*/
          v39 = "RESTORE"; /*0x61a6ca*/
          break;
        case 0xA: /*0x61a656*/
          v39 = "SWITCH"; /*0x61a6d6*/
          break;
        case 0xB: /*0x61a656*/
          v39 = "CALMED"; /*0x61a6e2*/
          break;
        default:
          v39 = "NONE"; /*0x61a6ec*/
          if ( v36 != 0xD ) /*0x61a6f1*/
            v39 = "UNKNOWN"; /*0x61a6f3*/
          break;
      }
    }
    else
    {
      v39 = "HAND TO HAND"; /*0x61a649*/
    }
    _sprintf((char *)&v140, "Strategy: %s", v39);
    v40 = v129; /*0x61a70c*/
    v95 = (float)(int)i; /*0x61a719*/
    InterfaceMgr_DebugTextLine(v129, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v95, v129, 0xFFFFFFFF); /*0x61a729*/
    v41 = v136[0x16]; /*0x61a732*/
    v42 = *(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v41 + 0x2C0); /*0x61a737*/
    i = (int *)((char *)i + a6); /*0x61a73d*/
    LODWORD(v131) = v42(v41); /*0x61a755*/
    memset(v143, 0, sizeof(v143)); /*0x61a759*/
    switch ( v38 )
    {
      case 1:
      case 0xB:
        v116 = *(float *)(v30 + 0xD8); /*0x61a7fb*/
        v130 = *(float *)(v30 + 0x44) - *(float *)(v30 + 0xD4); /*0x61a80f*/
        _sprintf(v143, "%.2f/%.2f", v130, v116); /*0x61a820*/
        break; /*0x61a828*/
      case 2:
        if ( (LOBYTE(v131) & 1) != 0 ) /*0x61a789*/
        {
          v43 = " FORWARD "; /*0x61a78b*/
        }
        else if ( (LOBYTE(v131) & 2) != 0 ) /*0x61a794*/
        {
          v43 = " BACKWARD "; /*0x61a796*/
        }
        else if ( (LOBYTE(v131) & 4) != 0 ) /*0x61a79f*/
        {
          v43 = " LEFT "; /*0x61a7a1*/
        }
        else
        {
          v43 = " RIGHT "; /*0x61a7aa*/
          if ( (LOBYTE(v131) & 8) == 0 ) /*0x61a7af*/
            v43 = EmptyString; /*0x61a7b1*/
        }
        v115 = *(float *)(v30 + 0xD8); /*0x61a7bf*/
        v130 = *(float *)(v30 + 0x44) - *(float *)(v30 + 0xD4); /*0x61a7d3*/
        _sprintf(v143, "%s %.2f/%.2f", v43, v130, v115); /*0x61a7e5*/
        break; /*0x61a7ed*/
      case 3:
        v117 = *(float *)(v30 + 0xFC); /*0x61a836*/
        v130 = *(float *)(v30 + 0x44) - *(float *)(v30 + 0xF8); /*0x61a84a*/
        _sprintf(v143, "%.2f/%.2f", v130, v117); /*0x61a85b*/
        break; /*0x61a863*/
      case 4:
        v44 = *(Atmosphere **)(v30 + 0x28); /*0x61a86b*/
        v45 = *(_DWORD **)(v30 + 0x24); /*0x61a874*/
        v130 = *(float *)(v30 + 0x44) - *(float *)(v30 + 0xEC); /*0x61a877*/
        v124 = Shared_GetPointerAtOffset08(v44); /*0x61a880*/
        Radius = TESPackage_LocationData_GetRadius(v45); /*0x61a883*/
        _sprintf(v143, "%.2f/%.2f pkg radius/tgt val: %d/%d", v130, *(float *)(v30 + 0xF0), Radius, v124);
        v40 = v129; /*0x61a8af*/
        break; /*0x61a8b6*/
      case 0xE:
      case 0x10:
        EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(v30 + 0x3C)); /*0x61a8bb*/
        v48 = ((double (__thiscall *)(int *))*(_DWORD *)(*EffectiveCombatStyle + 0x154))(EffectiveCombatStyle); /*0x61a8ca*/
        _sprintf(v143, "range %.2f", v48); /*0x61a8df*/
        break; /*0x61a8e7*/
      default:
        v143[0] = 0; /*0x61a8e9*/
        break; /*0x61a8e9*/
    }
    if ( v38 ) /*0x61a8f3*/
    {
      switch ( v38 ) /*0x61a902*/
      {
        case 0xA: /*0x61a902*/
          v49 = "RANGED_ALERT"; /*0x61a904*/
          break;
        case 0xF: /*0x61a902*/
          v49 = "MELEE_ALERT"; /*0x61a913*/
          break;
        case 0xB: /*0x61a902*/
          v49 = "ON_STATION"; /*0x61a922*/
          break;
        case 0xC: /*0x61a902*/
          v49 = "REPOSITION"; /*0x61a931*/
          break;
        case 1: /*0x61a902*/
          v49 = "IDLE"; /*0x61a940*/
          break;
        case 2: /*0x61a902*/
          v49 = "DODGE"; /*0x61a94f*/
          break;
        case 3: /*0x61a902*/
          if ( (LOBYTE(v131) & 1) != 0 ) /*0x61a960*/
            v49 = "CLOSE FORWARD"; /*0x61a962*/
          else
            v49 = "CLOSE BACKWARD"; /*0x61a969*/
          break;
        case 4: /*0x61a902*/
          v49 = "ADVANCE"; /*0x61a975*/
          break;
        case 5: /*0x61a902*/
          v49 = "WITHDRAW"; /*0x61a981*/
          break;
        case 6: /*0x61a902*/
          v49 = "TAKE_COVER"; /*0x61a98d*/
          break;
        case 7: /*0x61a902*/
          v49 = "ACQUIRE"; /*0x61a999*/
          break;
        case 0xE: /*0x61a902*/
          v49 = "STANDOFF"; /*0x61a9a5*/
          break;
        case 0x10: /*0x61a902*/
          v49 = "STANDOFF (backup)"; /*0x61a9b1*/
          break;
        case 0xD: /*0x61a902*/
          v49 = "DISARMED"; /*0x61a9bd*/
          break;
        default:
          v49 = "RUN_AWAY"; /*0x61a9c7*/
          if ( v38 != 8 ) /*0x61a9cc*/
            v49 = "UNKNOWN"; /*0x61a9ce*/
          break;
      }
    }
    else
    {
      v49 = "ENGAGE"; /*0x61a8f5*/
    }
    _sprintf((char *)&v140, "Maneuver: %s %s", v49, v143);
    v96 = (float)(int)i; /*0x61a9f8*/
    InterfaceMgr_DebugTextLine(v40, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v96, v40, 0xFFFFFFFF); /*0x61aa08*/
    i = (int *)((char *)i + a6); /*0x61aa0d*/
    if ( *(_BYTE *)(v30 + 0x17D) ) /*0x61aa14*/
    {
      v97 = (float)(int)i; /*0x61aa27*/
      InterfaceMgr_DebugTextLine( /*0x61aa37*/
        v40,
        v11,
        a1,
        *(float *)&v128,
        "Playing turning animation",
        *(float *)&v128,
        v97,
        v40,
        0xFFFFFFFF);
      i = (int *)((char *)i + a6); /*0x61aa3f*/
    }
    if ( v132 == 0.0 ) /*0x61aa4c*/
    {
      v51 = *(_DWORD *)(v30 + 0x50); /*0x61aaad*/
      switch ( v51 ) /*0x61aab3*/
      {
        case 0x14: /*0x61aab3*/
          v52 = "LEFT"; /*0x61aab5*/
          break;
        case 0x15: /*0x61aab3*/
          v52 = "RIGHT"; /*0x61aac1*/
          break;
        case 0x16: /*0x61aab3*/
          v52 = "NORMAL POWER"; /*0x61aacd*/
          break;
        case 0x17: /*0x61aab3*/
          v52 = "FORWARD POWER"; /*0x61aad9*/
          break;
        case 0x18: /*0x61aab3*/
          v52 = "BACK POWER"; /*0x61aae5*/
          break;
        case 0x19: /*0x61aab3*/
          v52 = "LEFT POWER"; /*0x61aaf1*/
          break;
        default:
          v14 = v51 == 0x1A; /*0x61aaf8*/
          v52 = "RIGHT POWER"; /*0x61aafb*/
          if ( !v14 ) /*0x61ab00*/
            v52 = EmptyString; /*0x61ab02*/
          break;
      }
      v53 = v143; /*0x61ab07*/
      do /*0x61ab1c*/
      {
        v54 = *v52; /*0x61ab10*/
        *v53++ = *v52++; /*0x61ab12*/
      }
      while ( v54 ); /*0x61ab1c*/
      v50 = "ATTACK"; /*0x61ab1e*/
    }
    else if ( LODWORD(v132) == 2 ) /*0x61aa51*/
    {
      v118 = *(float *)(v30 + 0xE4); /*0x61aa76*/
      v132 = *(float *)(v30 + 0x44) - *(float *)(v30 + 0xE0); /*0x61aa8a*/
      _sprintf(v143, "%.2f/%.2f", v132, v118); /*0x61aa9b*/
      v50 = "HOLD"; /*0x61aaa3*/
    }
    else
    {
      v143[0] = 0; /*0x61aa55*/
      if ( LODWORD(v132) == 1 ) /*0x61ab28*/
      {
        v50 = "BLOCK"; /*0x61ab2a*/
      }
      else
      {
        v50 = "DONE"; /*0x61ab40*/
        if ( LODWORD(v132) != 3 ) /*0x61ab45*/
          v50 = "UNKNOWN"; /*0x61ab47*/
      }
    }
    _sprintf((char *)&v140, "Melee: %s %s", v50, v143);
    v98 = (float)(int)i; /*0x61ab75*/
    InterfaceMgr_DebugTextLine(v40, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v98, v129, 0xFFFFFFFF); /*0x61ab85*/
    i = (int *)((char *)i + a6); /*0x61ab8a*/
    v99 = (float)(int)i; /*0x61ab9b*/
    v55 = *(float *)&v128; /*0x61ab9f*/
    InterfaceMgr_DebugTextLine(v40, v11, a1, *(float *)&v128, "Selected Spells", *(float *)&v128, v99, v129, 0xFFFFFFFF); /*0x61abab*/
    v15 = a5; /*0x61abb0*/
    v56 = *(void ****)(v30 + 0x80); /*0x61abb7*/
    i = (int *)((char *)i + a6); /*0x61abbd*/
    sub_616840(a1, *(float *)&v128, v56, (int)"Ranged", a5, a6, (signed int *)&i); /*0x61abce*/
    sub_616840(a1, v55, *(void ****)(v30 + 0x7C), (int)"Melee", a5, a6, (signed int *)&i); /*0x61abe3*/
    sub_616840(a1, v55, *(void ****)(v30 + 0x84), (int)"Restoration", a5, a6, (signed int *)&i); /*0x61abfb*/
    sub_616840(a1, v55, *(void ****)(v30 + 0x94), (int)"Bound Armor", a5, a6, (signed int *)&i); /*0x61ac16*/
    sub_616840(a1, v55, *(void ****)(v30 + 0x98), (int)"Bound Weapon", a5, a6, (signed int *)&i); /*0x61ac2e*/
    sub_616840(a1, v55, *(void ****)(v30 + 0x90), (int)"Buff", a5, a6, (signed int *)&i); /*0x61ac46*/
    sub_616840(a1, v55, *(void ****)(v30 + 0x9C), (int)"Summoning", a5, a6, (signed int *)&i); /*0x61ac5e*/
    v57 = *(_DWORD *)(v30 + 0x5C); /*0x61ac6b*/
    v100 = (float)(int)i; /*0x61ac77*/
    v58 = *(float *)&v128; /*0x61ac7b*/
    InterfaceMgr_DebugTextLine( /*0x61ac87*/
      v57,
      v11,
      a1,
      *(float *)&v128,
      "Available Spells",
      *(float *)&v128,
      v100,
      v129,
      0xFFFFFFFF);
    for ( i = (int *)((char *)i + a6); v57; v57 = *(_DWORD *)(v57 + 4) ) /*0x61ac95*/
    {
      if ( !*(_DWORD *)(v57 + 4) && !*(_DWORD *)v57 ) /*0x61ac9d*/
        break; /*0x61aca1*/
      sub_616840(a1, v58, *(void ****)v57, (int)"Ranged", a5, a6, (signed int *)&i); /*0x61acb3*/
    }
    for ( j = *(_DWORD *)(v30 + 0x60); j; j = *(_DWORD *)(j + 4) ) /*0x61acc7*/
    {
      if ( !*(_DWORD *)(j + 4) && !*(_DWORD *)j ) /*0x61acd6*/
        break; /*0x61acda*/
      sub_616840(a1, v58, *(void ****)j, (int)"Melee", a5, a6, (signed int *)&i); /*0x61acec*/
    }
    for ( k = *(_DWORD *)(v30 + 0x64); k; k = *(_DWORD *)(k + 4) ) /*0x61ad00*/
    {
      if ( !*(_DWORD *)(k + 4) && !*(_DWORD *)k ) /*0x61ad08*/
        break; /*0x61ad0c*/
      sub_616840(a1, v58, *(void ****)k, (int)"Restore", a5, a6, (signed int *)&i); /*0x61ad1e*/
    }
    for ( m = *(_DWORD *)(v30 + 0x68); m; m = *(_DWORD *)(m + 4) ) /*0x61ad32*/
    {
      if ( !*(_DWORD *)(m + 4) && !*(_DWORD *)m ) /*0x61ad3a*/
        break; /*0x61ad3e*/
      sub_616840(a1, v58, *(void ****)m, (int)"Backup Buffs", a5, a6, (signed int *)&i); /*0x61ad50*/
    }
    if ( *(_BYTE *)(v30 + 0xC4) )
    {
      v62 = 0; /*0x61ad68*/
      v63 = (float *)(v30 + 0xB0); /*0x61ad6a*/
      do
      {
        if ( *v63 > 0.0 )
        {
          _sprintf((char *)&v140, "%s Power Attack Range: %.2f", (const char *)v139[v62], *v63);
          v101 = (float)(int)i; /*0x61ada8*/
          InterfaceMgr_DebugTextLine( /*0x61adb8*/
            v62,
            v11,
            a1,
            *(float *)&v128,
            (char *)&v140,
            *(float *)&v128,
            v101,
            v129,
            0xFFFFFFFF);
          i = (int *)((char *)i + a6); /*0x61adc0*/
        }
        ++v62; /*0x61adc4*/
        ++v63; /*0x61adc7*/
      }
      while ( v62 < 5 );
      v15 = a5; /*0x61adcf*/
    }
    if ( v133 ) /*0x61addb*/
    {
      v64 = "Can see main target"; /*0x61ade8*/
      if ( !*(_BYTE *)(v30 + 0x158) ) /*0x61ade1*/
        v64 = "Cannot see main target"; /*0x61adef*/
      v65 = v129; /*0x61adf4*/
      v102 = (float)(int)i; /*0x61ae02*/
      InterfaceMgr_DebugTextLine(v129, v11, a1, *(float *)&v128, v64, *(float *)&v128, v102, v129, 0xFFFFFFFF); /*0x61ae0e*/
      i = (int *)((char *)i + a6); /*0x61ae13*/
      if ( *(_BYTE *)(v30 + 0x158) ) /*0x61ae1a*/
      {
        v66 = *(_DWORD *)(v30 + 0x180); /*0x61ae23*/
        if ( v66 ) /*0x61ae2c*/
        {
          v67 = v66 - 1; /*0x61ae2e*/
          if ( v67 ) /*0x61ae31*/
          {
            if ( v67 == 1 ) /*0x61ae36*/
              _sprintf((char *)&v140, "\tTop Segment in view"); /*0x61ae49*/
            else
              _sprintf((char *)&v140, "\tNo Segment in view"); /*0x61ae3d*/
          }
          else
          {
            _sprintf((char *)&v140, "\tMiddle Segment in view"); /*0x61ae55*/
          }
        }
        else
        {
          _sprintf((char *)&v140, "\tBottom Segment in view"); /*0x61ae61*/
        }
        v103 = (float)(int)i; /*0x61ae73*/
        InterfaceMgr_DebugTextLine(v65, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v103, v65, 0xFFFFFFFF); /*0x61ae83*/
        i = (int *)((char *)i + a6); /*0x61ae8b*/
      }
      if ( *(_BYTE *)(v30 + 0x159) ) /*0x61ae8f*/
      {
        v104 = (float)(int)i; /*0x61aea2*/
        InterfaceMgr_DebugTextLine( /*0x61aeb2*/
          v65,
          v11,
          a1,
          *(float *)&v128,
          "An ally blocks the main target",
          *(float *)&v128,
          v104,
          v65,
          0xFFFFFFFF);
        i = (int *)((char *)i + a6); /*0x61aeba*/
      }
      if ( *(_BYTE *)(v30 + 0x15B) ) /*0x61aebe*/
      {
        v105 = (float)(int)i; /*0x61aed1*/
        InterfaceMgr_DebugTextLine( /*0x61aee1*/
          v65,
          v11,
          a1,
          *(float *)&v128,
          "The last arrow hit an obstruction on the way to the target",
          *(float *)&v128,
          v105,
          v65,
          0xFFFFFFFF);
        i = (int *)((char *)i + a6); /*0x61aee9*/
      }
      if ( !CombatController_CanReachCurrentTarget(v30) ) /*0x61aeef*/
      {
        v106 = (float)(int)i; /*0x61af02*/
        InterfaceMgr_DebugTextLine( /*0x61af12*/
          v65,
          v11,
          a1,
          *(float *)&v128,
          "Cannot path to target",
          *(float *)&v128,
          v106,
          v65,
          0xFFFFFFFF);
        i = (int *)((char *)i + a6); /*0x61af1a*/
      }
      if ( *(_BYTE *)(v30 + 0x17C) ) /*0x61af1e*/
      {
        v107 = (float)(int)i; /*0x61af31*/
        InterfaceMgr_DebugTextLine( /*0x61af41*/
          v65,
          v11,
          a1,
          *(float *)&v128,
          "Don't use area spells, allies too close",
          *(float *)&v128,
          v107,
          v65,
          0xFFFFFFFF);
        i = (int *)((char *)i + a6); /*0x61af49*/
      }
    }
    if ( *(_BYTE *)(v30 + 0x15A) )
    {
      v119 = *(float *)(v30 + 0x168); /*0x61af5f*/
      v132 = *(float *)(v30 + 0x44) - *(float *)(v30 + 0x164); /*0x61af70*/
      _sprintf((char *)&v140, "In the way: %.2f/%.2f", v132, v119);
      v68 = v129; /*0x61af8a*/
      v108 = (float)(int)i; /*0x61af97*/
      InterfaceMgr_DebugTextLine(v129, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v108, v129, 0xFFFFFFFF); /*0x61afa7*/
      i = (int *)((char *)i + a6); /*0x61afaf*/
    }
    else
    {
      v68 = v129; /*0x61afb5*/
    }
    v69 = *(_WORD *)(v30 + 0x192); /*0x61afb9*/
    if ( v69 )
    {
      v70 = *(_DWORD *)(v30 + 0x6C); /*0x61afc9*/
      if ( v70 != 4 && v70 != 7 && v70 != 9 && v70 != 8 )
      {
        v71 = *(_WORD *)(v30 + 0x192); /*0x61aff0*/
        v72 = "Y"; /*0x61affc*/
        if ( (v69 & 2) != 0 ) /*0x61b001*/
          v72 = "N"; /*0x61b003*/
        v131 = COERCE_FLOAT("Y"); /*0x61b00f*/
        if ( (v69 & 1) != 0 ) /*0x61b017*/
          v131 = COERCE_FLOAT("N"); /*0x61b019*/
        v73 = "Y"; /*0x61b02b*/
        if ( (v71 & 8) != 0 ) /*0x61b030*/
          v73 = "N"; /*0x61b032*/
        v14 = (v71 & 4) != 0; /*0x61b03c*/
        v74 = "Y"; /*0x61b03e*/
        if ( v14 ) /*0x61b043*/
          v74 = "N"; /*0x61b045*/
        _sprintf(
          (char *)&v140,
          "Movement Restrictions: L:%s R:%s F:%s B:%s",
          v74,
          v73,
          (const char *)LODWORD(v131),
          v72);
        v109 = (float)(int)i; /*0x61b06e*/
        InterfaceMgr_DebugTextLine(v68, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v109, v68, 0xFFFFFFFF); /*0x61b07e*/
        i = (int *)((char *)i + a6); /*0x61b086*/
      }
    }
    if ( *(_BYTE *)(v30 + 0x191) ) /*0x61b08a*/
    {
      v110 = (float)(int)i; /*0x61b09d*/
      InterfaceMgr_DebugTextLine( /*0x61b0ad*/
        v68,
        v11,
        a1,
        *(float *)&v128,
        "Reset Movement restrictions",
        *(float *)&v128,
        v110,
        v68,
        0xFFFFFFFF);
      i = (int *)((char *)i + a6); /*0x61b0b5*/
    }
    v75 = *(_DWORD *)(v30 + 0x1A8); /*0x61b0b9*/
    v76 = "UNDETECTED"; /*0x61b0c1*/
    if ( v75 > 0 ) /*0x61b0c6*/
      v76 = EmptyString; /*0x61b0c8*/
    _sprintf((char *)&v140, "Detection level on current target: %d (%s)", v75, v76);
    v111 = (float)(int)i; /*0x61b0eb*/
    v22 = *(float *)&v128; /*0x61b0f3*/
    InterfaceMgr_DebugTextLine(v68, v11, a1, *(float *)&v128, (char *)&v140, *(float *)&v128, v111, v68, 0xFFFFFFFF); /*0x61b0fb*/
    i = (int *)((char *)i + a6); /*0x61b100*/
    if ( *(_BYTE *)(v30 + 0x1AD) ) /*0x61b107*/
    {
      v112 = (float)(int)i; /*0x61b11e*/
      v22 = *(float *)&v128; /*0x61b122*/
      InterfaceMgr_DebugTextLine( /*0x61b12e*/
        v68,
        v11,
        a1,
        *(float *)&v128,
        "Unable to buff standoff, don't bother next time",
        *(float *)&v128,
        v112,
        v68,
        0xFFFFFFFF);
      i = (int *)((char *)i + a6); /*0x61b136*/
    }
    goto LABEL_18; /*0x61b13a*/
  }
  v15 = a5; /*0x61a40e*/
LABEL_18:
  v31 = v136; /*0x61a415*/
  v32 = (*(int (__thiscall **)(int *))(*v136 + 0x19C))(v136); /*0x61a424*/
  v33 = v129; /*0x61a428*/
  if ( v32 ) /*0x61a42c*/
  {
    v89 = (float)(int)i; /*0x61a438*/
    v22 = *(float *)&v128; /*0x61a43c*/
    InterfaceMgr_DebugTextLine( /*0x61a448*/
      (char)v31,
      v11,
      a1,
      *(float *)&v128,
      "KNOCKED DOWN/OUT",
      *(float *)&v128,
      v89,
      v129,
      0xFFFFFFFF);
    i = (int *)((char *)i + a6); /*0x61a450*/
  }
  if ( Actor_GetCurrentAction((_DWORD **)v31) == 7 ) /*0x61a45e*/
  {
    v90 = (float)(int)i; /*0x61a46a*/
    v22 = *(float *)&v128; /*0x61a46e*/
    InterfaceMgr_DebugTextLine((char)v31, v11, a1, *(float *)&v128, "RECOILING", *(float *)&v128, v90, v33, 0xFFFFFFFF); /*0x61a47a*/
    i = (int *)((char *)i + a6); /*0x61a482*/
  }
  if ( sub_5E6FE0(v31) ) /*0x61a488*/
  {
    v91 = (float)(int)i; /*0x61a49b*/
    InterfaceMgr_DebugTextLine((char)v31, *(float *)&v128, a1, v22, "SURFACING", *(float *)&v128, v91, v33, 0xFFFFFFFF); /*0x61a4ab*/
    i = (int *)((char *)i + a6); /*0x61a4b3*/
  }
LABEL_24:
  if ( v15 ) /*0x61a4bd*/
  {
    result = v138; /*0x61a4ca*/
    *v134 = (int)i; /*0x61a4ce*/
    *v135 = result; /*0x61a4d4*/
  }
  else
  {
    result = v134; /*0x61b143*/
    v77 = v135; /*0x61b147*/
    *v134 = v137; /*0x61b14b*/
    *v77 = i; /*0x61b150*/
  }
  return result; /*0x61a4b7*/
}
