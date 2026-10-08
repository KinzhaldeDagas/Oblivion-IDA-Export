// Selects normal/directional power attack from combat style, reach/distance, movement, and chance data.
int __userpurge CombatController_SelectPowerAttack@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        float a5,
        float maximumDistance,
        int a7,
        int a8,
        char a9)
{
  int v10; // esi
  int *EffectiveCombatStyle; // eax
  double v13; // st7
  int v14; // ecx
  double v15; // st6
  float *v16; // edx
  double v17; // st4
  double v18; // rt0
  double v19; // st4
  double v20; // st6
  double v21; // rt1
  double v22; // rt2
  int v23; // ecx
  int *v24; // eax
  int *v25; // eax
  int v26; // esi
  unsigned __int8 v27; // al
  bool v28; // bl
  int v29; // edi
  int *v30; // eax
  int v31; // esi
  bool v32; // bl
  int *v33; // eax
  int v34; // esi
  bool v35; // bl
  int *v36; // eax
  int v37; // esi
  bool v38; // bl
  int *v39; // eax
  int v40; // esi
  bool v41; // bl
  int *v42; // eax
  float y; // eax
  float z; // ecx
  int v45; // esi
  int v46; // eax
  const char *v47; // eax
  char *Name; // eax
  float surfaceDistance; // [esp+8h] [ebp-4Ch]
  const char *v50; // [esp+10h] [ebp-44h]
  char v51; // [esp+26h] [ebp-2Eh]
  char v52; // [esp+27h] [ebp-2Dh]
  unsigned int v53; // [esp+28h] [ebp-2Ch]
  int v54; // [esp+2Ch] [ebp-28h]
  float v55; // [esp+30h] [ebp-24h]
  float v56; // [esp+30h] [ebp-24h]
  float v57; // [esp+30h] [ebp-24h]
  float v58[3]; // [esp+34h] [ebp-20h] BYREF
  int v59[5]; // [esp+40h] [ebp-14h] BYREF
  int v60; // [esp+68h] [ebp+14h]

  v52 = 0; /*0x61e108*/
  v51 = 0; /*0x61e10d*/
  v54 = 0xFF; /*0x61e112*/
  v53 = 0xFF; /*0x61e116*/
  v10 = 0; /*0x61e11a*/
  if ( (*(unsigned __int8 (__usercall **)@<al>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x25C))( /*0x61e11c*/
         *(_DWORD *)(a1 + 0x3C),
         a4,
         a3,
         a2) )
  {
    return 0xFF; /*0x61e12a*/
  }
  if ( !*(_BYTE *)(a1 + 0xC4) || CombatController_IsTargetWithinRangedDistance((void *)a1, a5, maximumDistance, 0) ) /*0x61e151*/
    goto LABEL_24; /*0x61e151*/
  EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e161*/
  v55 = ((double (__thiscall *)(int *))*(_DWORD *)(*EffectiveCombatStyle + 0x164))(EffectiveCombatStyle); /*0x61e172*/
  v13 = v55; /*0x61e176*/
  v14 = 0; /*0x61e17a*/
  v15 = 0.0; /*0x61e17c*/
  v16 = (float *)(a1 + 0xB0); /*0x61e17e*/
  v17 = maximumDistance; /*0x61e188*/
  do /*0x61e1d1*/
  {
    v18 = v17; /*0x61e18c*/
    v19 = v15; /*0x61e18c*/
    v20 = v18; /*0x61e18c*/
    if ( v19 < *v16 ) /*0x61e195*/
    {
      v56 = *v16; /*0x61e1a1*/
      v22 = v19; /*0x61e1a5*/
      v17 = v20; /*0x61e1a5*/
      v15 = v22; /*0x61e1a5*/
    }
    else
    {
      v21 = v19; /*0x61e197*/
      v17 = v20; /*0x61e197*/
      v15 = v21; /*0x61e197*/
      v56 = v17; /*0x61e199*/
    }
    v57 = v56 * v13; /*0x61e1ad*/
    if ( v57 >= (double)a5 ) /*0x61e1bc*/
      v59[v10++] = v14 + 0x16; /*0x61e1c1*/
    ++v14; /*0x61e1c8*/
    ++v16; /*0x61e1cb*/
  }
  while ( v14 < 5 ); /*0x61e1d1*/
  if ( !v10 && a9 ) /*0x61e1e4*/
    return 0xFF; /*0x61e1ef*/
  if ( v10 < 5 ) /*0x61e1f5*/
    memset32(&v59[v10], 0xFF, 5 - v10); /*0x61e204*/
  if ( v10 == 1 ) /*0x61e209*/
  {
    v23 = v59[0]; /*0x61e20b*/
  }
  else
  {
    if ( v10 <= 1 ) /*0x61e211*/
      goto LABEL_24; /*0x61e211*/
    v24 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e216*/
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v24 + 0x16C))(v24, 2) ) /*0x61e227*/
    {
      v51 = 1; /*0x61e22d*/
      goto LABEL_24; /*0x61e232*/
    }
    v23 = v59[Game_RandomLargeInteger(0) % v10]; /*0x61e241*/
  }
  v53 = v23; /*0x61e247*/
  if ( v23 == 0xFF ) /*0x61e24b*/
  {
LABEL_24:
    v25 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e251*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v25 + 0x16C))(v25, 2) ) /*0x61e265*/
    {
      if ( g_GameSettingStringPointers_B36CD8[0x90] <= (double)a5 ) /*0x61e280*/
      {
        if ( maximumDistance * dbl_A3FA98 >= a5 ) /*0x61e29c*/
        {
          v27 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)); /*0x61e2b3*/
          if ( (v27 & 4) != 0 ) /*0x61e2ba*/
            v26 = 3; /*0x61e2bc*/
          else
            v26 = (v27 >> 1) & 4; /*0x61e2c8*/
        }
        else
        {
          v26 = 1; /*0x61e29e*/
        }
      }
      else
      {
        v26 = 2; /*0x61e284*/
      }
      if ( CombatController_IsTargetWithinRangedDistance((void *)a1, a5, maximumDistance, 0) ) /*0x61e2e1*/
        v53 = *(_DWORD *)(4 * v26 + 0xB14B78); /*0x61e2f5*/
      goto LABEL_72; /*0x61e2f9*/
    }
    v28 = 0; /*0x61e300*/
    v60 = 0; /*0x61e302*/
    v29 = Game_RandomLargeInteger(0) % 0x64; /*0x61e31e*/
    if ( v51 ) /*0x61e320*/
      v28 = v59[0] == 0x16; /*0x61e329*/
    v30 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e32e*/
    v31 = (*(char (__thiscall **)(int *))(*v30 + 0x128))(v30); /*0x61e33f*/
    if ( v29 > v31 ) /*0x61e344*/
    {
      if ( v28 ) /*0x61e360*/
        v60 = 1; /*0x61e362*/
    }
    else if ( !v51 || v28 ) /*0x61e34f*/
    {
      v53 = 0x16; /*0x61e351*/
      goto LABEL_72; /*0x61e359*/
    }
    v32 = 0; /*0x61e36a*/
    if ( v51 ) /*0x61e370*/
      v32 = v59[v60] == 0x17; /*0x61e37d*/
    v33 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e382*/
    v34 = (*(char (__thiscall **)(int *))(*v33 + 0x12C))(v33) + v31; /*0x61e396*/
    if ( v29 > v34 ) /*0x61e39a*/
    {
      if ( v32 ) /*0x61e3b6*/
        ++v60; /*0x61e3b8*/
    }
    else if ( !v51 || v32 ) /*0x61e3a5*/
    {
      v53 = 0x17; /*0x61e3a7*/
      goto LABEL_72; /*0x61e3af*/
    }
    v35 = 0; /*0x61e3bd*/
    if ( v51 ) /*0x61e3c3*/
      v35 = v59[v60] == 0x18; /*0x61e3d0*/
    v36 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e3d5*/
    v37 = (*(char (__thiscall **)(int *))(*v36 + 0x130))(v36) + v34; /*0x61e3e9*/
    if ( v29 > v37 ) /*0x61e3ed*/
    {
      if ( v35 ) /*0x61e409*/
        ++v60; /*0x61e40b*/
    }
    else if ( !v51 || v35 ) /*0x61e3f8*/
    {
      v53 = 0x18; /*0x61e3fa*/
      goto LABEL_72; /*0x61e402*/
    }
    v38 = 0; /*0x61e410*/
    if ( v51 ) /*0x61e416*/
      v38 = v59[v60] == 0x19; /*0x61e423*/
    v39 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e428*/
    v40 = (*(char (__thiscall **)(int *))(*v39 + 0x134))(v39) + v37; /*0x61e43c*/
    if ( v29 > v40 ) /*0x61e440*/
    {
      if ( v38 ) /*0x61e459*/
        ++v60; /*0x61e45b*/
    }
    else if ( !v51 || v38 ) /*0x61e44b*/
    {
      v53 = 0x19; /*0x61e44d*/
      goto LABEL_72; /*0x61e455*/
    }
    v41 = 0; /*0x61e460*/
    if ( v51 ) /*0x61e466*/
      v41 = v59[v60] == 0x1A; /*0x61e473*/
    v42 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61e478*/
    if ( v29 <= v40 + (*(char (__thiscall **)(int *))(*v42 + 0x138))(v42) && (!v51 || v41) ) /*0x61e49b*/
      v53 = 0x1A; /*0x61e49d*/
  }
LABEL_72:
  y = g_zeroNiPoint3.y; /*0x61e4a5*/
  z = g_zeroNiPoint3.z; /*0x61e4b4*/
  v58[0] = g_zeroNiPoint3.x; /*0x61e4ba*/
  v58[1] = y; /*0x61e4c3*/
  surfaceDistance = *(float *)(a1 + 0x3C); /*0x61e4cb*/
  v58[2] = z; /*0x61e4cc*/
  if ( sub_615F70(surfaceDistance, v53, v58) ) /*0x61e4d0*/
  {
    v45 = *(_DWORD *)(a1 + 0x3C); /*0x61e4dc*/
    v46 = (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 0x154))(v45); /*0x61e4e9*/
    NiPoint3_MultiplyMatrix3((float *)v59, v58, (float *)(v46 + 0x30)); /*0x61e4f9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v45 + 0x174))(v45); /*0x61e50b*/
    v54 = v53; /*0x61e50d*/
    v52 = 1; /*0x61e511*/
  }
  if ( !unk_B3B908 || !v52 ) /*0x61e524*/
    return v54; /*0x61e593*/
  switch ( v54 ) /*0x61e52d*/
  {
    case 0x16: /*0x61e52d*/
      v47 = "NORMAL"; /*0x61e52f*/
      break;
    case 0x17: /*0x61e52d*/
      v47 = "FORWARD"; /*0x61e53b*/
      break;
    case 0x18: /*0x61e52d*/
      v47 = "BACKWARD"; /*0x61e547*/
      break;
    case 0x19: /*0x61e52d*/
      v47 = "LEFT"; /*0x61e553*/
      break;
    default:
      v47 = "RIGHT"; /*0x61e55d*/
      if ( v54 != 0x1A ) /*0x61e562*/
        v47 = "NO"; /*0x61e564*/
      break;
  }
  v50 = v47; /*0x61e56c*/
  Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x61e56f*/
  Interface_ConsolePrint("%.20s selects %s power attack!", Name, v50); /*0x61e57a*/
  return v54; /*0x61e122*/
}
