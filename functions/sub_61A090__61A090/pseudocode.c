int *__usercall sub_61A090@<eax>(double a1@<st1>, double a2@<st0>, int *a3, int a4, char a5, int a6, int *a7, int **a8)
{
  int *v9; // esi
  int v10; // eax
  int v11; // ecx
  double v12; // st5
  int v13; // ebx
  int v14; // edi
  bool v15; // zf
  char v16; // bl
  int v17; // eax
  double v18; // st7
  int v19; // eax
  double v20; // st7
  int v21; // eax
  double v22; // st7
  double v23; // st7
  int BaseCalcAVi; // eax
  int v25; // eax
  int v26; // eax
  double v27; // st7
  signed int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int *v32; // ebp
  char v33; // al
  int v34; // edi
  int *result; // eax
  double v36; // st7
  int v37; // ebp
  double v38; // st7
  int v39; // ebx
  const char *v40; // eax
  int v41; // ebp
  int v42; // ecx
  unsigned __int16 (__thiscall *v43)(int); // eax
  const char *v44; // eax
  Atmosphere *v45; // ecx
  _DWORD *v46; // ebp
  int Radius; // eax
  int *v48; // eax
  double v49; // st7
  const char *v50; // eax
  const char *v51; // eax
  int v52; // eax
  const char *v53; // eax
  char *v54; // edx
  char v55; // cl
  double v56; // st7
  void ***v57; // edx
  int v58; // ebp
  double v59; // st7
  int i; // ebp
  int j; // ebp
  int k; // ebp
  int v63; // ebp
  float *v64; // ebx
  char *v65; // eax
  int v66; // ebp
  int v67; // eax
  int v68; // eax
  int v69; // ebp
  __int16 v70; // cx
  int v71; // eax
  char v72; // al
  const char *v73; // edx
  const char *v74; // ecx
  const char *v75; // eax
  int v76; // eax
  const char *v77; // ecx
  int *v78; // ecx
  int v79; // [esp+14h] [ebp-1A0h]
  double v80; // [esp+18h] [ebp-19Ch]
  double v81; // [esp+1Ch] [ebp-198h]
  int v82; // [esp+20h] [ebp-194h]
  float v83; // [esp+24h] [ebp-190h]
  float v84; // [esp+24h] [ebp-190h]
  float v85; // [esp+24h] [ebp-190h]
  double v86; // [esp+24h] [ebp-190h]
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
  float v113; // [esp+24h] [ebp-190h]
  float v114; // [esp+28h] [ebp-18Ch]
  double v115; // [esp+28h] [ebp-18Ch]
  double v116; // [esp+28h] [ebp-18Ch]
  double v117; // [esp+28h] [ebp-18Ch]
  double v118; // [esp+28h] [ebp-18Ch]
  double v119; // [esp+28h] [ebp-18Ch]
  double v120; // [esp+28h] [ebp-18Ch]
  float v121; // [esp+2Ch] [ebp-188h]
  int v122; // [esp+2Ch] [ebp-188h]
  double v123; // [esp+2Ch] [ebp-188h]
  int v124; // [esp+2Ch] [ebp-188h]
  NiAVObject *v125; // [esp+2Ch] [ebp-188h]
  int v126; // [esp+30h] [ebp-184h]
  int v127; // [esp+34h] [ebp-180h]
  signed int v128; // [esp+40h] [ebp-174h] BYREF
  int v129; // [esp+44h] [ebp-170h]
  int v130; // [esp+48h] [ebp-16Ch]
  float v131; // [esp+4Ch] [ebp-168h] BYREF
  float v132; // [esp+50h] [ebp-164h] BYREF
  float v133; // [esp+54h] [ebp-160h]
  int v134; // [esp+58h] [ebp-15Ch]
  int *v135; // [esp+5Ch] [ebp-158h]
  int *v136; // [esp+60h] [ebp-154h]
  int *v137; // [esp+64h] [ebp-150h]
  int v138; // [esp+68h] [ebp-14Ch]
  int *v139; // [esp+6Ch] [ebp-148h]
  _DWORD v140[5]; // [esp+70h] [ebp-144h]
  int v141; // [esp+84h] [ebp-130h] BYREF
  int v142; // [esp+88h] [ebp-12Ch] BYREF
  char v143[192]; // [esp+8Ch] [ebp-128h] BYREF
  char v144[100]; // [esp+14Ch] [ebp-68h] BYREF

  v134 = a4;
  v9 = *a8;
  v135 = a7;
  v10 = *a7;
  v137 = a3;
  v136 = (int *)a8;
  v138 = v10;
  v139 = v9;
  if ( a5 )
    v11 = iDebugTextLeftRightOffset;
  else
    v11 = 0x500 - iDebugTextLeftRightOffset;
  v12 = (double)v11;
  *(float *)&v129 = v12;
  v13 = v10;
  v14 = 2 * (a5 == 0) + 1;
  v130 = v14;
  if ( !a5 )
    v13 = (int)v9;
  v15 = (a3[2] & 0x800) == 0;
  v128 = v13;
  v140[0] = "NORMAL";
  v140[1] = "FORWARD";
  v140[2] = "BACK";
  v140[3] = "LEFT";
  v140[4] = "RIGHT";
  if ( !v15 )
  {
    v83 = (float)v128;
    InterfaceMgr_DebugTextLine((char)a3, *(float *)&v129, a1, a2, "DISABLED", *(float *)&v129, v83, v14, 0xFFFFFFFF);
    v128 = a6 + v13;
    v16 = a5;
    goto LABEL_24;
  }
  if ( (*(unsigned __int8 (__usercall **)@<al>(int *@<ecx>, double@<st0>, double@<st1>))(*a3 + 0x25C))(a3, a2, a1) )
  {
    v84 = (float)v128;
    InterfaceMgr_DebugTextLine(
      (char)a3,
      v12,
      a1,
      *(float *)&v129,
      "OVER-ENCUMBERED",
      *(float *)&v129,
      v84,
      v14,
      0xFFFFFFFF);
    v13 += a6;
    v128 = v13;
  }
  if ( a6 < 0x1E )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(a3, v13, v14, a6, 9);
    v123 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 9, BaseCalcAVi);
    v25 = Actor_GetBaseCalcAVi(a3, v13, v14, a6, 0xA);
    v81 = ((double (__thiscall *)(int *, int, int, _DWORD, _DWORD))*(_DWORD *)(*a3 + 0x288))(
            a3,
            0xA,
            v25,
            LODWORD(v123),
            HIDWORD(v123));
    v26 = Actor_GetBaseCalcAVi(a3, v13, v14, a6, 8);
    v27 = ((double (__thiscall *)(int *, int, int, _DWORD, _DWORD))*(_DWORD *)(*a3 + 0x288))(
            a3,
            8,
            v26,
            LODWORD(v81),
            HIDWORD(v81));
    _sprintf((char *)&v141, "H:%.2f/%d F:%.2f/%d M:%.2f/%d", v27, v79, v80, v82, v86, v124);
    v87 = (float)v128;
    v23 = *(float *)&v129;
    InterfaceMgr_DebugTextLine((char)a3, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v87, v14, 0xFFFFFFFF);
  }
  else
  {
    v17 = Actor_GetBaseCalcAVi(a3, v13, v14, a6, 8);
    v18 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 8, v17);
    _sprintf(v143, "HEALTH:%.2f/%d", v18, v127);
    v121 = (float)v130;
    InterfaceMgr_DebugTextLine((char)a3, v12, a1, v131, v143, v131, v121, v14, 0xFFFFFFFF);
    v130 = a6 + v13;
    v19 = Actor_GetBaseCalcAVi(a3, a6 + v13, v14, a6, 0xA);
    v20 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 0xA, v19);
    _sprintf((char *)&v142, "FATIGUE:%.2f/%d", v20, v126);
    v114 = (float)v129;
    InterfaceMgr_DebugTextLine(
      (char)a3,
      v12,
      a1,
      *(float *)&v130,
      (char *)&v142,
      *(float *)&v130,
      v114,
      v14,
      0xFFFFFFFF);
    v13 += a6 + a6;
    v129 = v13;
    v21 = Actor_GetBaseCalcAVi(a3, v13, v14, a6, 9);
    v22 = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a3 + 0x288))(a3, 9, v21);
    _sprintf((char *)&v141, "MAGICKA:%.2f/%d", v22, v122);
    v85 = (float)v128;
    v23 = *(float *)&v13;
    InterfaceMgr_DebugTextLine((char)a3, v12, a1, *(float *)&v13, (char *)&v141, *(float *)&v13, v85, v14, 0xFFFFFFFF);
  }
  v28 = a6 + v13;
  v128 = v28;
  if ( v134 )
  {
    v29 = (*(int (__thiscall **)(int *, int))(*a3 + 0x224))(a3, v134);
    _sprintf((char *)&v141, "Disposition to Opponent: %d", v29);
    v88 = (float)v128;
    v23 = *(float *)&v129;
    InterfaceMgr_DebugTextLine((char)a3, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v88, v14, 0xFFFFFFFF);
    v28 += a6;
    v128 = v28;
  }
  v30 = (*(int (__thiscall **)(int *))(*a3 + 0x330))(a3);
  v31 = v30;
  if ( a3 == (int *)TESDataHandler_g_PlayerRef )
  {
    v89 = (float)v128;
    v23 = *(float *)&v129;
    InterfaceMgr_DebugTextLine(
      (char)a3,
      v12,
      a1,
      *(float *)&v129,
      "Target is PLAYER. No AI info.",
      *(float *)&v129,
      v89,
      v130,
      0xFFFFFFFF);
    v128 = a6 + v28;
  }
  else if ( v30 )
  {
    if ( *(_BYTE *)(v30 + 0x1BD) )
    {
      _sprintf((char *)&v141, "INITIALIZING (%d)", *(char *)(v30 + 0x1AC));
      v93 = (float)v128;
      InterfaceMgr_DebugTextLine(
        (char)a3,
        v12,
        a1,
        *(float *)&v129,
        (char *)&v141,
        *(float *)&v129,
        v93,
        v130,
        0xFFFFFFFF);
      v128 += a6;
    }
    if ( v134 )
    {
      v115 = *(float *)(v31 + 0xCC) * dbl_A30DC8;
      v36 = sub_615980(v31, v31);
      _sprintf((char *)&v141, "Distance: %.2f Position: %.2fdeg", v36, v115);
      v94 = (float)v128;
      InterfaceMgr_DebugTextLine(
        (char)a3,
        v12,
        a1,
        *(float *)&v129,
        (char *)&v141,
        *(float *)&v129,
        v94,
        v130,
        0xFFFFFFFF);
      v128 += a6;
    }
    v37 = *(_DWORD *)(v31 + 0x70);
    if ( v37 == 2 || v37 == 4 )
    {
      v132 = 0.0;
      v131 = 0.0;
      sub_6142D0((_DWORD *)v31, COERCE_FLOAT(&v132), COERCE_FLOAT(&v131));
      _sprintf((char *)&v141, "Attack Range: %.2f(optimal) %.2f(max)", v132, v131);
    }
    else
    {
      v38 = sub_615520(v31);
      _sprintf((char *)&v141, "Attack Reach: %.2f", v38);
    }
    v95 = (float)v128;
    InterfaceMgr_DebugTextLine(v37, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v95, v130, 0xFFFFFFFF);
    v128 += a6;
    v39 = *(_DWORD *)(v31 + 0x6C);
    v133 = *(float *)(v31 + 0x74);
    if ( v37 )
    {
      switch ( v37 )
      {
        case 1:
          v40 = "MELEE_WEAPON";
          break;
        case 2:
          v40 = "RANGED_WEAPON";
          break;
        case 3:
          v40 = "MELEE_MAGIC";
          break;
        case 4:
          v40 = "RANGED_MAGIC";
          break;
        case 5:
          v40 = "YIELD";
          break;
        case 6:
          v40 = "POST_YIELD";
          break;
        case 7:
          v40 = "FLEE";
          break;
        case 0xC:
          v40 = "SWIM_FLEE";
          break;
        case 8:
          v40 = "BUFF";
          break;
        case 9:
          v40 = "RESTORE";
          break;
        case 0xA:
          v40 = "SWITCH";
          break;
        case 0xB:
          v40 = "CALMED";
          break;
        default:
          v40 = "NONE";
          if ( v37 != 0xD )
            v40 = "UNKNOWN";
          break;
      }
    }
    else
    {
      v40 = "HAND TO HAND";
    }
    _sprintf((char *)&v141, "Strategy: %s", v40);
    v41 = v130;
    v96 = (float)v128;
    InterfaceMgr_DebugTextLine(v130, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v96, v130, 0xFFFFFFFF);
    v42 = v137[0x16];
    v43 = *(unsigned __int16 (__thiscall **)(_DWORD))(*(_DWORD *)v42 + 0x2C0);
    v128 += a6;
    LODWORD(v132) = v43(v42);
    memset(v144, 0, sizeof(v144));
    switch ( v39 )
    {
      case 1:
      case 0xB:
        v117 = *(float *)(v31 + 0xD8);
        v131 = *(float *)(v31 + 0x44) - *(float *)(v31 + 0xD4);
        _sprintf(v144, "%.2f/%.2f", v131, v117);
        break;
      case 2:
        if ( (LOBYTE(v132) & 1) != 0 )
        {
          v44 = " FORWARD ";
        }
        else if ( (LOBYTE(v132) & 2) != 0 )
        {
          v44 = " BACKWARD ";
        }
        else if ( (LOBYTE(v132) & 4) != 0 )
        {
          v44 = " LEFT ";
        }
        else
        {
          v44 = " RIGHT ";
          if ( (LOBYTE(v132) & 8) == 0 )
            v44 = EmptyString;
        }
        v116 = *(float *)(v31 + 0xD8);
        v131 = *(float *)(v31 + 0x44) - *(float *)(v31 + 0xD4);
        _sprintf(v144, "%s %.2f/%.2f", v44, v131, v116);
        break;
      case 3:
        v118 = *(float *)(v31 + 0xFC);
        v131 = *(float *)(v31 + 0x44) - *(float *)(v31 + 0xF8);
        _sprintf(v144, "%.2f/%.2f", v131, v118);
        break;
      case 4:
        v45 = *(Atmosphere **)(v31 + 0x28);
        v46 = *(_DWORD **)(v31 + 0x24);
        v131 = *(float *)(v31 + 0x44) - *(float *)(v31 + 0xEC);
        v125 = sub_452A60(v45);
        Radius = TESPackage_LocationData_GetRadius(v46);
        _sprintf(v144, "%.2f/%.2f pkg radius/tgt val: %d/%d", v131, *(float *)(v31 + 0xF0), Radius, v125);
        v41 = v130;
        break;
      case 0xE:
      case 0x10:
        v48 = sub_5E0F50(*(void **)(v31 + 0x3C));
        v49 = ((double (__thiscall *)(int *))*(_DWORD *)(*v48 + 0x154))(v48);
        _sprintf(v144, "range %.2f", v49);
        break;
      default:
        v144[0] = 0;
        break;
    }
    if ( v39 )
    {
      switch ( v39 )
      {
        case 0xA:
          v50 = "RANGED_ALERT";
          break;
        case 0xF:
          v50 = "MELEE_ALERT";
          break;
        case 0xB:
          v50 = "ON_STATION";
          break;
        case 0xC:
          v50 = "REPOSITION";
          break;
        case 1:
          v50 = "IDLE";
          break;
        case 2:
          v50 = "DODGE";
          break;
        case 3:
          if ( (LOBYTE(v132) & 1) != 0 )
            v50 = "CLOSE FORWARD";
          else
            v50 = "CLOSE BACKWARD";
          break;
        case 4:
          v50 = "ADVANCE";
          break;
        case 5:
          v50 = "WITHDRAW";
          break;
        case 6:
          v50 = "TAKE_COVER";
          break;
        case 7:
          v50 = "ACQUIRE";
          break;
        case 0xE:
          v50 = "STANDOFF";
          break;
        case 0x10:
          v50 = "STANDOFF (backup)";
          break;
        case 0xD:
          v50 = "DISARMED";
          break;
        default:
          v50 = "RUN_AWAY";
          if ( v39 != 8 )
            v50 = "UNKNOWN";
          break;
      }
    }
    else
    {
      v50 = "ENGAGE";
    }
    _sprintf((char *)&v141, "Maneuver: %s %s", v50, v144);
    v97 = (float)v128;
    InterfaceMgr_DebugTextLine(v41, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v97, v41, 0xFFFFFFFF);
    v128 += a6;
    if ( *(_BYTE *)(v31 + 0x17D) )
    {
      v98 = (float)v128;
      InterfaceMgr_DebugTextLine(
        v41,
        v12,
        a1,
        *(float *)&v129,
        "Playing turning animation",
        *(float *)&v129,
        v98,
        v41,
        0xFFFFFFFF);
      v128 += a6;
    }
    if ( v133 == 0.0 )
    {
      v52 = *(_DWORD *)(v31 + 0x50);
      switch ( v52 )
      {
        case 0x14:
          v53 = "LEFT";
          break;
        case 0x15:
          v53 = "RIGHT";
          break;
        case 0x16:
          v53 = "NORMAL POWER";
          break;
        case 0x17:
          v53 = "FORWARD POWER";
          break;
        case 0x18:
          v53 = "BACK POWER";
          break;
        case 0x19:
          v53 = "LEFT POWER";
          break;
        default:
          v15 = v52 == 0x1A;
          v53 = "RIGHT POWER";
          if ( !v15 )
            v53 = EmptyString;
          break;
      }
      v54 = v144;
      do
      {
        v55 = *v53;
        *v54++ = *v53++;
      }
      while ( v55 );
      v51 = "ATTACK";
    }
    else if ( LODWORD(v133) == 2 )
    {
      v119 = *(float *)(v31 + 0xE4);
      v133 = *(float *)(v31 + 0x44) - *(float *)(v31 + 0xE0);
      _sprintf(v144, "%.2f/%.2f", v133, v119);
      v51 = "HOLD";
    }
    else
    {
      v144[0] = 0;
      if ( LODWORD(v133) == 1 )
      {
        v51 = "BLOCK";
      }
      else
      {
        v51 = "DONE";
        if ( LODWORD(v133) != 3 )
          v51 = "UNKNOWN";
      }
    }
    _sprintf((char *)&v141, "Melee: %s %s", v51, v144);
    v99 = (float)v128;
    InterfaceMgr_DebugTextLine(v41, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v99, v130, 0xFFFFFFFF);
    v128 += a6;
    v100 = (float)v128;
    v56 = *(float *)&v129;
    InterfaceMgr_DebugTextLine(
      v41,
      v12,
      a1,
      *(float *)&v129,
      "Selected Spells",
      *(float *)&v129,
      v100,
      v130,
      0xFFFFFFFF);
    v16 = a5;
    v57 = *(void ****)(v31 + 0x80);
    v128 += a6;
    sub_616840(a1, *(float *)&v129, v57, (int)"Ranged", a5, a6, &v128);
    sub_616840(a1, v56, *(void ****)(v31 + 0x7C), (int)"Melee", a5, a6, &v128);
    sub_616840(a1, v56, *(void ****)(v31 + 0x84), (int)"Restoration", a5, a6, &v128);
    sub_616840(a1, v56, *(void ****)(v31 + 0x94), (int)"Bound Armor", a5, a6, &v128);
    sub_616840(a1, v56, *(void ****)(v31 + 0x98), (int)"Bound Weapon", a5, a6, &v128);
    sub_616840(a1, v56, *(void ****)(v31 + 0x90), (int)"Buff", a5, a6, &v128);
    sub_616840(a1, v56, *(void ****)(v31 + 0x9C), (int)"Summoning", a5, a6, &v128);
    v58 = *(_DWORD *)(v31 + 0x5C);
    v101 = (float)v128;
    v59 = *(float *)&v129;
    InterfaceMgr_DebugTextLine(
      v58,
      v12,
      a1,
      *(float *)&v129,
      "Available Spells",
      *(float *)&v129,
      v101,
      v130,
      0xFFFFFFFF);
    for ( v128 += a6; v58; v58 = *(_DWORD *)(v58 + 4) )
    {
      if ( !*(_DWORD *)(v58 + 4) && !*(_DWORD *)v58 )
        break;
      sub_616840(a1, v59, *(void ****)v58, (int)"Ranged", a5, a6, &v128);
    }
    for ( i = *(_DWORD *)(v31 + 0x60); i; i = *(_DWORD *)(i + 4) )
    {
      if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
        break;
      sub_616840(a1, v59, *(void ****)i, (int)"Melee", a5, a6, &v128);
    }
    for ( j = *(_DWORD *)(v31 + 0x64); j; j = *(_DWORD *)(j + 4) )
    {
      if ( !*(_DWORD *)(j + 4) && !*(_DWORD *)j )
        break;
      sub_616840(a1, v59, *(void ****)j, (int)"Restore", a5, a6, &v128);
    }
    for ( k = *(_DWORD *)(v31 + 0x68); k; k = *(_DWORD *)(k + 4) )
    {
      if ( !*(_DWORD *)(k + 4) && !*(_DWORD *)k )
        break;
      sub_616840(a1, v59, *(void ****)k, (int)"Backup Buffs", a5, a6, &v128);
    }
    if ( *(_BYTE *)(v31 + 0xC4) )
    {
      v63 = 0;
      v64 = (float *)(v31 + 0xB0);
      do
      {
        if ( *v64 > 0.0 )
        {
          _sprintf((char *)&v141, "%s Power Attack Range: %.2f", (const char *)v140[v63], *v64);
          v102 = (float)v128;
          InterfaceMgr_DebugTextLine(
            v63,
            v12,
            a1,
            *(float *)&v129,
            (char *)&v141,
            *(float *)&v129,
            v102,
            v130,
            0xFFFFFFFF);
          v128 += a6;
        }
        ++v63;
        ++v64;
      }
      while ( v63 < 5 );
      v16 = a5;
    }
    if ( v134 )
    {
      v65 = "Can see main target";
      if ( !*(_BYTE *)(v31 + 0x158) )
        v65 = "Cannot see main target";
      v66 = v130;
      v103 = (float)v128;
      InterfaceMgr_DebugTextLine(v130, v12, a1, *(float *)&v129, v65, *(float *)&v129, v103, v130, 0xFFFFFFFF);
      v128 += a6;
      if ( *(_BYTE *)(v31 + 0x158) )
      {
        v67 = *(_DWORD *)(v31 + 0x180);
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            if ( v68 == 1 )
              _sprintf((char *)&v141, "\tTop Segment in view");
            else
              _sprintf((char *)&v141, "\tNo Segment in view");
          }
          else
          {
            _sprintf((char *)&v141, "\tMiddle Segment in view");
          }
        }
        else
        {
          _sprintf((char *)&v141, "\tBottom Segment in view");
        }
        v104 = (float)v128;
        InterfaceMgr_DebugTextLine(v66, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v104, v66, 0xFFFFFFFF);
        v128 += a6;
      }
      if ( *(_BYTE *)(v31 + 0x159) )
      {
        v105 = (float)v128;
        InterfaceMgr_DebugTextLine(
          v66,
          v12,
          a1,
          *(float *)&v129,
          "An ally blocks the main target",
          *(float *)&v129,
          v105,
          v66,
          0xFFFFFFFF);
        v128 += a6;
      }
      if ( *(_BYTE *)(v31 + 0x15B) )
      {
        v106 = (float)v128;
        InterfaceMgr_DebugTextLine(
          v66,
          v12,
          a1,
          *(float *)&v129,
          "The last arrow hit an obstruction on the way to the target",
          *(float *)&v129,
          v106,
          v66,
          0xFFFFFFFF);
        v128 += a6;
      }
      if ( !sub_614290(v31) )
      {
        v107 = (float)v128;
        InterfaceMgr_DebugTextLine(
          v66,
          v12,
          a1,
          *(float *)&v129,
          "Cannot path to target",
          *(float *)&v129,
          v107,
          v66,
          0xFFFFFFFF);
        v128 += a6;
      }
      if ( *(_BYTE *)(v31 + 0x17C) )
      {
        v108 = (float)v128;
        InterfaceMgr_DebugTextLine(
          v66,
          v12,
          a1,
          *(float *)&v129,
          "Don't use area spells, allies too close",
          *(float *)&v129,
          v108,
          v66,
          0xFFFFFFFF);
        v128 += a6;
      }
    }
    if ( *(_BYTE *)(v31 + 0x15A) )
    {
      v120 = *(float *)(v31 + 0x168);
      v133 = *(float *)(v31 + 0x44) - *(float *)(v31 + 0x164);
      _sprintf((char *)&v141, "In the way: %.2f/%.2f", v133, v120);
      v69 = v130;
      v109 = (float)v128;
      InterfaceMgr_DebugTextLine(v130, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v109, v130, 0xFFFFFFFF);
      v128 += a6;
    }
    else
    {
      v69 = v130;
    }
    v70 = *(_WORD *)(v31 + 0x192);
    if ( v70 )
    {
      v71 = *(_DWORD *)(v31 + 0x6C);
      if ( v71 != 4 && v71 != 7 && v71 != 9 && v71 != 8 )
      {
        v72 = *(_WORD *)(v31 + 0x192);
        v73 = "Y";
        if ( (v70 & 2) != 0 )
          v73 = "N";
        v132 = COERCE_FLOAT("Y");
        if ( (v70 & 1) != 0 )
          v132 = COERCE_FLOAT("N");
        v74 = "Y";
        if ( (v72 & 8) != 0 )
          v74 = "N";
        v15 = (v72 & 4) != 0;
        v75 = "Y";
        if ( v15 )
          v75 = "N";
        _sprintf(
          (char *)&v141,
          "Movement Restrictions: L:%s R:%s F:%s B:%s",
          v75,
          v74,
          (const char *)LODWORD(v132),
          v73);
        v110 = (float)v128;
        InterfaceMgr_DebugTextLine(v69, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v110, v69, 0xFFFFFFFF);
        v128 += a6;
      }
    }
    if ( *(_BYTE *)(v31 + 0x191) )
    {
      v111 = (float)v128;
      InterfaceMgr_DebugTextLine(
        v69,
        v12,
        a1,
        *(float *)&v129,
        "Reset Movement restrictions",
        *(float *)&v129,
        v111,
        v69,
        0xFFFFFFFF);
      v128 += a6;
    }
    v76 = *(_DWORD *)(v31 + 0x1A8);
    v77 = "UNDETECTED";
    if ( v76 > 0 )
      v77 = EmptyString;
    _sprintf((char *)&v141, "Detection level on current target: %d (%s)", v76, v77);
    v112 = (float)v128;
    v23 = *(float *)&v129;
    InterfaceMgr_DebugTextLine(v69, v12, a1, *(float *)&v129, (char *)&v141, *(float *)&v129, v112, v69, 0xFFFFFFFF);
    v128 += a6;
    if ( *(_BYTE *)(v31 + 0x1AD) )
    {
      v113 = (float)v128;
      v23 = *(float *)&v129;
      InterfaceMgr_DebugTextLine(
        v69,
        v12,
        a1,
        *(float *)&v129,
        "Unable to buff standoff, don't bother next time",
        *(float *)&v129,
        v113,
        v69,
        0xFFFFFFFF);
      v128 += a6;
    }
    goto LABEL_18;
  }
  v16 = a5;
LABEL_18:
  v32 = v137;
  v33 = (*(int (__thiscall **)(int *))(*v137 + 0x19C))(v137);
  v34 = v130;
  if ( v33 )
  {
    v90 = (float)v128;
    v23 = *(float *)&v129;
    InterfaceMgr_DebugTextLine(
      (char)v32,
      v12,
      a1,
      *(float *)&v129,
      "KNOCKED DOWN/OUT",
      *(float *)&v129,
      v90,
      v130,
      0xFFFFFFFF);
    v128 += a6;
  }
  if ( Actor_GetCurrentAction((_DWORD **)v32) == 7 )
  {
    v91 = (float)v128;
    v23 = *(float *)&v129;
    InterfaceMgr_DebugTextLine((char)v32, v12, a1, *(float *)&v129, "RECOILING", *(float *)&v129, v91, v34, 0xFFFFFFFF);
    v128 += a6;
  }
  if ( sub_5E6FE0(v32) )
  {
    v92 = (float)v128;
    InterfaceMgr_DebugTextLine((char)v32, *(float *)&v129, a1, v23, "SURFACING", *(float *)&v129, v92, v34, 0xFFFFFFFF);
    v128 += a6;
  }
LABEL_24:
  if ( v16 )
  {
    result = v139;
    *v135 = v128;
    *v136 = (int)result;
  }
  else
  {
    result = v135;
    v78 = v136;
    *v135 = v138;
    *v78 = v128;
  }
  return result;
}
