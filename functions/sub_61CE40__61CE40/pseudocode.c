// Combat dodge selection consumes Actor_GetFatigueFraction; SmartAI reads the same resource without changing actions.
void __usercall sub_61CE40(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>)
{
  _DWORD **CurrentTarget; // eax
  int CurrentAction; // eax
  Actor *v7; // edi
  double v8; // st7
  int *EffectiveCombatStyle; // eax
  unsigned int v10; // eax
  int v11; // eax
  float v12; // edx
  int v13; // eax
  bool v14; // al
  int *v15; // eax
  unsigned __int16 v16; // ax
  int v17; // ebx
  void *v18; // ecx
  unsigned int v19; // edi
  int *v20; // ebp
  double v21; // st7
  int *v22; // ebp
  int *v23; // ebp
  int *v24; // ebx
  double (__thiscall *v25)(int *); // eax
  int *v26; // ebp
  unsigned __int8 AnimGroup; // al
  double v28; // st6
  int v29; // eax
  const char *v30; // eax
  char *Name; // eax
  int *v32; // edi
  int *v33; // ebx
  int value1a; // [esp+Ch] [ebp-28h]
  float value1b; // [esp+Ch] [ebp-28h]
  float value1; // [esp+Ch] [ebp-28h]
  float value1c; // [esp+Ch] [ebp-28h]
  float value2a; // [esp+10h] [ebp-24h]
  char value2b; // [esp+10h] [ebp-24h]
  float value2; // [esp+10h] [ebp-24h]
  float value2c; // [esp+10h] [ebp-24h]
  __int16 v42; // [esp+14h] [ebp-20h]
  const char *v43; // [esp+14h] [ebp-20h]
  float v44; // [esp+14h] [ebp-20h]
  float v47; // [esp+24h] [ebp-10h]
  float CachedTargetSurfaceDistance; // [esp+24h] [ebp-10h]
  float v49; // [esp+24h] [ebp-10h]
  float DesiredCombatDistance; // [esp+28h] [ebp-Ch]
  int v51; // [esp+28h] [ebp-Ch]
  float v52; // [esp+28h] [ebp-Ch]
  int v53; // [esp+2Ch] [ebp-8h]
  float v54; // [esp+30h] [ebp-4h]
  int *v55; // [esp+30h] [ebp-4h]
  int *v56; // [esp+30h] [ebp-4h]
  float v57; // [esp+30h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h]
  float v59; // [esp+38h] [ebp+4h]

  if ( !(*(unsigned __int8 (__usercall **)@<al>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x25C))( /*0x61ce5d*/
          *(_DWORD *)(a1 + 0x3C),
          a4)
    && CombatController_GetCurrentTarget(a1) )
  {
    CurrentTarget = (_DWORD **)CombatController_GetCurrentTarget(a1); /*0x61ce6e*/
    CurrentAction = Actor_GetCurrentAction(CurrentTarget); /*0x61ce75*/
    v7 = *(Actor **)(a1 + 0x3C); /*0x61ce7a*/
    LOBYTE(v53) = CurrentAction == 2; /*0x61ce80*/
    value2a = Actor_GetFatigueFraction(v7, v53, (int)v7);// Dodge selection reads Actor_GetFatigueFraction and feeds it into CombatStyle_CalculateDodgeScore. /*0x61ce94*/
    v8 = sub_5E3590(v7); /*0x61ce97*/
    value1a = Double_To_SInt32(v8); /*0x61cea1*/
    EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(v7); /*0x61cea4*/
    v47 = CombatStyle_CalculateDodgeScore(EffectiveCombatStyle, value1a, value2a, *(float *)&v53); /*0x61ceaf*/
    if ( v47 < 0.0 ) /*0x61cec1*/
      v47 = 0.0; /*0x61cec3*/
    v10 = *(_DWORD *)(a1 + 0x70); /*0x61cecb*/
    if ( (v10 == 2 || v10 == 4) && (!*(_BYTE *)(a1 + 0x158) || *(_BYTE *)(a1 + 0x159) || *(_BYTE *)(a1 + 0x15B)) ) /*0x61ceea*/
      v47 = v47 + dbl_A3F3D0; /*0x61cefd*/
    if ( v10 < 2 || v10 == 3 ) /*0x61cf0d*/
    {
      if ( *(_BYTE *)(a1 + 0x15A) ) /*0x61cf0f*/
        v47 = v47 + dbl_A492B0; /*0x61cf22*/
    }
    if ( *(_DWORD *)(a1 + 0x74) == 2 ) /*0x61cf2a*/
      v47 = v47 + dbl_A3F3E8; /*0x61cf36*/
    if ( (v10 < 2 || v10 == 3) && (PlayerCharacter *)CombatController_GetCurrentTarget(a1) != reference ) /*0x61cf55*/
    {
      v11 = CombatController_GetCurrentTarget(a1); /*0x61cf59*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x334))(v11, 1) ) /*0x61cf6a*/
        v47 = v47 - fCostant_100; /*0x61cf7a*/
    }
    if ( v47 < (double)(Game_RandomLargeInteger(0) % 0x64) ) /*0x61cfa3*/
    {
      if ( *(_DWORD *)(a1 + 0x6C) != 1 ) /*0x61d2a8*/
      {
        v32 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d2b5*/
        v33 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d2be*/
        v44 = ((double (__thiscall *)(int *))*(_DWORD *)(*v32 + 0x104))(v32); /*0x61d2d5*/
        value2c = ((double (__thiscall *)(int *))*(_DWORD *)(*v33 + 0x100))(v33); /*0x61d2db*/
        v57 = RandomFloatBetween(value2c, v44); /*0x61d2e3*/
        *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x61d2ef*/
        *(float *)(a1 + 0xD8) = v57; /*0x61d2f9*/
        *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x61d305*/
        sub_6160B0((Actor **)a1); /*0x61d30b*/
        sub_619920(a1, 1); /*0x61d314*/
      }
    }
    else
    {
      LOBYTE(v54) = Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 2; /*0x61cfb9*/
      CachedTargetSurfaceDistance = CombatController_GetCachedTargetSurfaceDistance(a1, (char)v7); /*0x61cfc2*/
      DesiredCombatDistance = CombatController_GetDesiredCombatDistance((void *)a1); /*0x61cfcd*/
      LOBYTE(v12) = *(_BYTE *)(a1 + 0x159) || *(_BYTE *)(a1 + 0x15A); /*0x61cfe7*/
      v13 = *(_DWORD *)(a1 + 0x70); /*0x61cfe9*/
      v14 = v13 == 2 || v13 == 4; /*0x61cffa*/
      v42 = *(_WORD *)(a1 + 0x192); /*0x61d00d*/
      value2b = v14; /*0x61d00e*/
      value1b = v12; /*0x61d013*/
      v15 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d024*/
      v16 = sub_546E10( /*0x61d02a*/
              v15,
              v54,
              *(float *)&v53,
              CachedTargetSurfaceDistance,
              DesiredCombatDistance,
              value1b,
              value2b,
              v42);
      v17 = v16; /*0x61d02f*/
      v51 = v16; /*0x61d038*/
      if ( v16 && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)) ) /*0x61d04d*/
      {
        v18 = *(void **)(a1 + 0x3C); /*0x61d057*/
        v19 = 3; /*0x61d063*/
        if ( (v17 & 0xF) == 2 ) /*0x61d068*/
        {
          v19 = 4; /*0x61d12b*/
          v26 = Actor_GetEffectiveCombatStyle(v18); /*0x61d138*/
          v24 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d142*/
          (*(void (__thiscall **)(int *))(*v26 + 0xFC))(v26); /*0x61d14c*/
          v25 = *(double (__thiscall **)(int *))(*v24 + 0xF8); /*0x61d150*/
        }
        else
        {
          if ( (v17 & 0xF) != 4 ) /*0x61d071*/
          {
            if ( (v17 & 0xF) == 8 ) /*0x61d07a*/
            {
              v19 = 6; /*0x61d0bc*/
              v22 = Actor_GetEffectiveCombatStyle(v18); /*0x61d0c9*/
              v56 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d0d3*/
              value2 = ((double (__thiscall *)(int *))*(_DWORD *)(*v22 + 0xEC))(v22); /*0x61d0e6*/
              value1 = ((double (__thiscall *)(int *))*(_DWORD *)(*v56 + 0xE8))(v56); /*0x61d0f4*/
            }
            else
            {
              v20 = Actor_GetEffectiveCombatStyle(v18); /*0x61d084*/
              v55 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d08e*/
              value2 = ((double (__thiscall *)(int *))*(_DWORD *)(*v20 + 0xF4))(v20); /*0x61d0a1*/
              value1 = ((double (__thiscall *)(int *))*(_DWORD *)(*v55 + 0xF0))(v55); /*0x61d0af*/
            }
            v21 = RandomFloatBetween(value1, value2); /*0x61d0b2*/
            goto LABEL_42; /*0x61d0b7*/
          }
          v19 = 5; /*0x61d0fe*/
          v23 = Actor_GetEffectiveCombatStyle(v18); /*0x61d10b*/
          v24 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d115*/
          (*(void (__thiscall **)(int *))(*v23 + 0xEC))(v23); /*0x61d11f*/
          v25 = *(double (__thiscall **)(int *))(*v24 + 0xE8); /*0x61d123*/
        }
        value1c = v25(v24); /*0x61d15f*/
        v21 = RandomFloatBetween(value1c, CachedTargetSurfaceDistance); /*0x61d162*/
        v17 = v51; /*0x61d167*/
LABEL_42:
        v49 = v21; /*0x61d16b*/
        AnimGroup = Actor_LoadAnimGroup_(*(Actor **)(a1 + 0x3C), v19, 0, 0); /*0x61d17a*/
        if ( AnimKey_GetGroupID(AnimGroup) == v19 ) /*0x61d18b*/
        {
          v52 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), v19); /*0x61d19a*/
          if ( v49 < (double)v52 ) /*0x61d1ad*/
            v49 = v52; /*0x61d1af*/
          (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x61d1c8*/
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            v17,
            1,
            a3,
            a2);
          v59 = (float)(Game_RandomLargeInteger(0) % 0x64); /*0x61d1e9*/
          if ( !(_BYTE)retaddr /*0x61d20b*/
            || (v28 = *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x2E]),
                v29 = 0x200,
                v28 >= v59) )
          {
            v29 = 0x100; /*0x61d20d*/
          }
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x61d223*/
            *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
            v29,
            1);
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x61d228*/
          *(float *)(a1 + 0xD8) = v49; /*0x61d236*/
          *(float *)(a1 + 0xDC) = v52; /*0x61d240*/
          sub_619920(a1, 2); /*0x61d246*/
        }
        else if ( unk_B3B908 ) /*0x61d252*/
        {
          if ( (v17 & 4) != 0 ) /*0x61d262*/
          {
            v30 = "LEFT"; /*0x61d264*/
          }
          else if ( (v17 & 8) != 0 ) /*0x61d26e*/
          {
            v30 = "RIGHT"; /*0x61d270*/
          }
          else
          {
            v30 = "FOREWARD"; /*0x61d27a*/
            if ( (v17 & 1) == 0 ) /*0x61d27f*/
              v30 = "BACK"; /*0x61d281*/
          }
          v43 = v30; /*0x61d289*/
          Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x61d28a*/
          Interface_ConsolePrint("%.20s chose to dodge %s but has no corresponding animation", Name, v43); /*0x61d295*/
        }
      }
    }
  }
}
