double __usercall sub_6214B0@<st0>(int a1@<ecx>, double result@<st0>)
{
  int v4; // eax
  unsigned __int16 v5; // bx
  float *v6; // eax
  double v7; // st7
  _DWORD **CurrentTarget; // eax
  char *Name; // eax
  float *SafeFloatPointer; // eax
  char IsRangedWeaponMode; // al
  Actor **v12; // ecx
  float *v13; // eax
  _DWORD **v14; // eax
  int v15; // ecx
  int (__usercall *v16)@<eax>(int@<ecx>, double@<st0>); // edx
  float *v17; // eax
  _DWORD *v18; // ebx
  void (__thiscall **v19)(_DWORD *, int, _DWORD, _DWORD); // edi
  int v20; // eax
  float v21; // [esp+8h] [ebp-28h]
  char v22; // [esp+1Bh] [ebp-15h] BYREF
  float surfaceDistance; // [esp+1Ch] [ebp-14h]
  float maximumDistance; // [esp+20h] [ebp-10h]
  float v25; // [esp+24h] [ebp-Ch]
  float v26; // [esp+28h] [ebp-8h]
  float v27; // [esp+2Ch] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x6C) == 2 ) /*0x6214bf*/
  {
    v21 = *(float *)(a1 + 0x44); /*0x6214d4*/
    v22 = 1; /*0x6214d7*/
    if ( sub_612790((float *)(a1 + 0xD4), v21, (bool *)&v22) ) /*0x6214dc*/
    {
      sub_6160B0((Actor **)a1); /*0x6214e7*/
      sub_619920(a1, 0); /*0x6214f0*/
      v4 = *(_DWORD *)(a1 + 0x6C); /*0x6214f5*/
      if ( v4 != 4 && v4 != 7 && v4 != 9 && v4 != 8 && v4 != 0xC ) /*0x62151f*/
        *(_BYTE *)(a1 + 0x191) = 1; /*0x621526*/
      return result; /*0x621531*/
    }
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)); /*0x621546*/
    if ( !sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) ) /*0x621550*/
    {
LABEL_25:
      sub_619920(a1, 0); /*0x621682*/
      return result; /*0x621691*/
    }
    if ( !unk_B333B8 ) /*0x621556*/
    {
      v6 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x174))(*(_DWORD *)(a1 + 0x3C)); /*0x62156a*/
      v25 = *(float *)(a1 + 0x198) - *v6; /*0x621574*/
      v26 = *(float *)(a1 + 0x19C) - v6[1]; /*0x621581*/
      v27 = *(float *)(a1 + 0x1A0) - v6[2]; /*0x62158e*/
      v7 = unk_B372C8; /*0x6215b4*/
      surfaceDistance = v26 * v26 + v25 * v25 + v27 * v27; /*0x6215b6*/
      result = v7 * v7; /*0x6215c0*/
      if ( surfaceDistance >= result ) /*0x6215c9*/
        sub_614BB0(a1); /*0x6215cd*/
    }
    if ( CombatController_GetCurrentTarget(a1) ) /*0x6215d4*/
    {
      CurrentTarget = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x6215df*/
      if ( Actor_GetCurrentAction(CurrentTarget) == 2 && *(_DWORD *)(a1 + 0x74) == 2 ) /*0x6215f2*/
      {
        *(_DWORD *)(a1 + 0x78) = 2; /*0x6215f6*/
        *(_DWORD *)(a1 + 0x74) = 3; /*0x6215f9*/
        CombatController_UpdateCombatModeState((void *)a1); /*0x621600*/
      }
    }
    if ( (v5 & *(_WORD *)(a1 + 0x192)) != 0 ) /*0x62160c*/
    {
      if ( unk_B3B908 ) /*0x62160e*/
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x62161a*/
        Interface_ConsolePrint("%.20s has run out of room to dodge.", Name); /*0x621625*/
      }
LABEL_24:
      sub_6160B0((Actor **)a1); /*0x62167b*/
      goto LABEL_25; /*0x62167d*/
    }
    surfaceDistance = CombatController_GetCachedTargetSurfaceDistance(a1, 2); /*0x621636*/
    result = CombatController_GetDesiredCombatDistance((void *)a1); /*0x62163c*/
    maximumDistance = result; /*0x621641*/
    if ( (v5 & 0xC) == 0 ) /*0x621648*/
    {
      if ( (v5 & 1) != 0 ) /*0x62164d*/
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x90]); /*0x621658*/
        result = surfaceDistance; /*0x62165d*/
        if ( *SafeFloatPointer >= (double)surfaceDistance ) /*0x62166a*/
        {
          if ( v22 ) /*0x621675*/
            goto LABEL_24; /*0x621675*/
        }
      }
      goto LABEL_39; /*0x621675*/
    }
    result = surfaceDistance; /*0x621692*/
    if ( maximumDistance >= (double)surfaceDistance ) /*0x6216a1*/
    {
      v13 = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x90]); /*0x621724*/
      result = surfaceDistance; /*0x621729*/
      if ( *v13 > (double)surfaceDistance && (v5 & 1) != 0 ) /*0x62173b*/
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x62174f*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          1,
          0);
      goto LABEL_39; /*0x62174f*/
    }
    if ( CombatController_IsTargetWithinRangedDistance((void *)a1, surfaceDistance, maximumDistance, 0) ) /*0x6216b1*/
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x621717*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        1,
        1);
    }
    else
    {
      if ( !v22 ) /*0x6216be*/
        goto LABEL_39; /*0x6216be*/
      IsRangedWeaponMode = CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70)); /*0x6216c8*/
      v12 = (Actor **)a1; /*0x6216d2*/
      if ( !IsRangedWeaponMode ) /*0x6216d4*/
        goto LABEL_34; /*0x6216d4*/
      if ( !CombatController_CanReachCurrentTarget(a1) ) /*0x6216d6*/
      {
        sub_6160B0((Actor **)a1); /*0x6216e1*/
        sub_61FE90((float *)a1, result); /*0x6216e8*/
        goto LABEL_39; /*0x6216ed*/
      }
      if ( *(_DWORD *)(a1 + 0x74) ) /*0x6216ef*/
      {
        v12 = (Actor **)a1; /*0x6216f5*/
LABEL_34:
        sub_6160B0(v12); /*0x6216f7*/
        sub_61D320(a1); /*0x6216fe*/
      }
    }
LABEL_39:
    if ( CombatController_GetCurrentTarget(a1) /*0x62176c*/
      && (v14 = (_DWORD **)CombatController_GetCurrentTarget(a1), Actor_GetCurrentAction(v14) == 2) )
    {
      LODWORD(maximumDistance) = Game_RandomLargeInteger(0) % 0x64; /*0x621780*/
      v15 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58); /*0x62178b*/
      v16 = *(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)v15 + 0x2C0); /*0x621790*/
      maximumDistance = (float)SLODWORD(maximumDistance); /*0x621796*/
      if ( (v16(v15, result) & 0x100) != 0 && !*(_BYTE *)(a1 + 0x49) ) /*0x6217a2*/
      {
        v17 = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x2E]); /*0x6217ad*/
        result = maximumDistance; /*0x6217b2*/
        if ( *v17 < (double)maximumDistance ) /*0x6217bf*/
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x6217ce*/
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            0x200,
            1);
      }
    }
    else if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) /*0x6217e4*/
             & 0x200) != 0 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x6217fb*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        0x100,
        1);
    }
    maximumDistance = COERCE_FLOAT(Game_RandomLargeInteger(0)); /*0x621804*/
    if ( g_GameSettingStringPointers_B36CD8[0x9C] >= (double)SLODWORD(maximumDistance) / dbl_A3D5A8 ) /*0x621822*/
    {
      v18 = *(_DWORD **)(a1 + 0x3C); /*0x621824*/
      v19 = (void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*v18 + 0x308); /*0x62182f*/
      v20 = CombatController_GetCurrentTarget(a1); /*0x621835*/
      (*v19)(v18, v20, 0, 0); /*0x62183f*/
    }
  }
  return result; /*0x621525*/
}
