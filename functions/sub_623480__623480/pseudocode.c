double __usercall sub_623480@<st0>(
        int a1@<ecx>,
        int a2@<ebx>,
        double result@<st0>,
        double a4@<st5>,
        double a5@<st2>,
        double a6@<st1>)
{
  TESObjectREFR *v11; // ebp
  TESObjectREFR *CurrentTarget; // eax
  bool v13; // al
  TESObjectREFRVtbl *vtbl; // edi
  TESObjectREFR *v15; // ecx
  bool v16; // c0
  double v17; // st4
  double v18; // st3
  char v19; // al
  Actor *v20; // eax
  unsigned int v21; // eax
  char *Name; // eax
  TESObjectREFRVtbl *v23; // ebx
  int v24; // eax
  int v25; // edi
  int v26; // eax
  char *v27; // eax
  bool v28; // c0
  double v29; // st7
  int v30; // eax
  bool v31; // c0
  double v32; // st4
  TESObjectREFR *v33; // eax
  int EquippedWeaponForm; // eax
  char v35; // al
  int v36; // ebx
  _DWORD *v37; // eax
  char NextTextKeySuffixChar; // al
  size_t surfaceDistance; // [esp+10h] [ebp-2Ch]
  bool v41; // [esp+2Eh] [ebp-Eh]
  char v42; // [esp+2Fh] [ebp-Dh]
  float maximumDistance; // [esp+30h] [ebp-Ch]
  float v44; // [esp+34h] [ebp-8h]
  float v45; // [esp+38h] [ebp-4h]
  float v46; // [esp+38h] [ebp-4h]
  float v47; // [esp+38h] [ebp-4h]
  float v48; // [esp+38h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x6C) == 4 ) /*0x62348a*/
  {
    v11 = *(TESObjectREFR **)(a1 + 0x3C); /*0x623499*/
    if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x6234a1*/
    {
      CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x6234a5*/
      *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v11, CurrentTarget, 0); /*0x6234b1*/
    }
    v44 = *(float *)(a1 + 0x184); /*0x6234c3*/
    maximumDistance = CombatController_GetDesiredCombatDistance((void *)a1); /*0x6234cc*/
    v13 = sub_6163A0(a1); /*0x6234d2*/
    vtbl = v11[1].vtbl; /*0x6234e0*/
    v41 = v13; /*0x6234e9*/
    if ( *(float *)(a1 + 0xF0) >= *(float *)(a1 + 0x44) - *(float *)(a1 + 0xEC) ) /*0x6234f4*/
    {
      v42 = 0; /*0x62362a*/
    }
    else
    {
      v42 = 1; /*0x623504*/
      if ( (*((unsigned __int16 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xB0))(vtbl) == 0x101 ) /*0x62350f*/
      {
        v11->vtbl->GetScale(v11); /*0x62351c*/
        v15 = *(TESObjectREFR **)(a1 + 0x3C); /*0x623520*/
        *(_DWORD *)(a1 + 0xD0) = 0x201; /*0x623525*/
        v16 = kHeadBodyNormalMatchRadius < sub_5E5850(v15, 7u); /*0x62353a*/
        v17 = kHeadBodyNormalMatchRadius; /*0x62353e*/
        if ( v16 ) /*0x623543*/
          v17 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 7u); /*0x62354c*/
        v45 = v17; /*0x623551*/
        *(float *)(a1 + 0xEC) = *(float *)(a1 + 0x44); /*0x623558*/
        *(float *)(a1 + 0xF0) = v45; /*0x623562*/
        *(float *)(a1 + 0xF4) = kTerrainLODQuadRayDirectionZ; /*0x62356e*/
      }
    }
    v18 = *(float *)(a1 + 0xD8); /*0x62357d*/
    if ( v18 < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) ) /*0x62358a*/
    {
      ((void (__thiscall *)(int))loc_622820)(a1); /*0x62358e*/
      if ( v19 ) /*0x623595*/
        return result; /*0x623595*/
      *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x62359e*/
      *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30; /*0x6235aa*/
      *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x6235b6*/
    }
    if ( CombatController_GetCurrentTarget(a1) ) /*0x6235be*/
    {
      v20 = (Actor *)CombatController_GetCurrentTarget(a1); /*0x6235c9*/
      if ( Actor_IsSwimming(v20) ) /*0x6235d0*/
      {
        v21 = *(_DWORD *)(a1 + 0x70); /*0x6235d9*/
        if ( (v21 < 2 || v21 == 3) && !Actor_IsSwimming((Actor *)v11) && !Actor_CanFightInWater(v11) ) /*0x6235f7*/
        {
          if ( unk_B3B908 ) /*0x623600*/
          {
            Name = TESObjectREFR_GetName(v11); /*0x62360a*/
            Interface_ConsolePrint("%.20s can't fight in the water, entering combat alert state.", Name); /*0x623615*/
          }
          sub_620E50((Actor **)a1, result); /*0x623625*/
          return result; /*0x623625*/
        }
      }
    }
    (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, _DWORD, _DWORD, int, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.InitializeComponent /*0x62364b*/
     + 0x66))(
      vtbl,
      v11,
      0,
      *(_DWORD *)(a1 + 0xD0),
      1,
      result,
      a6,
      a5);
    v23 = v11[1].vtbl; /*0x62364d*/
    v24 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0x61))(v23); /*0x62365a*/
    if ( !v24 || *(_BYTE *)(v24 + 0x20) != 0xC ) /*0x623667*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0x32))(v23) ) /*0x623673*/
        sub_5E02B0(v11); /*0x623686*/
      return result; /*0x623686*/
    }
    v25 = ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11); /*0x623698*/
    if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0x103))(v23) ) /*0x6236a4*/
    {
      v26 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0x103))(v23); /*0x6236b4*/
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 0x2C))(v26) ) /*0x6236bd*/
      {
        if ( unk_B3B908 ) /*0x6236c3*/
        {
          v27 = TESObjectREFR_GetName(v11); /*0x6236ce*/
          Interface_ConsolePrint("%.20s pathing failed, entering combat alert state.", v27); /*0x6236d9*/
        }
        *(_BYTE *)(a1 + 0x174) = 0;             // Explicit pathing-failed branch sets CombatController+0x174 false before entering combat alert state. /*0x6236e6*/
        sub_620E50((Actor **)v25, result); /*0x6236f1*/
        return result; /*0x6236f1*/
      }
    }
    if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0x32))(v23) ) /*0x623700*/
    {
      if ( v41 ) /*0x62370f*/
      {
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, int))v11[1].vtbl->super.super.InitializeComponent + 0xB1))( /*0x623727*/
          v11[1].vtbl,
          0x101,
          1);
        sub_619920(v25, 3); /*0x62372d*/
        v28 = kHeadBodyNormalMatchRadius < sub_5E5850(v11, 3u); /*0x623741*/
        v29 = kHeadBodyNormalMatchRadius; /*0x623745*/
        if ( v28 ) /*0x62374a*/
          v29 = sub_5E5850(v11, 3u); /*0x623752*/
        v46 = v29; /*0x623757*/
        *(float *)(v25 + 0xF8) = *(float *)(a1 + 0x44); /*0x623762*/
        *(float *)(v25 + 0xFC) = v46; /*0x62376c*/
        result = kTerrainLODQuadRayDirectionZ; /*0x623772*/
        *(float *)(v25 + 0x100) = kTerrainLODQuadRayDirectionZ; /*0x623778*/
        sub_612DA0((_DWORD *)v25, 9); /*0x62377e*/
        return result; /*0x62378a*/
      }
LABEL_48:
      sub_619920(v25, 0); /*0x623857*/
      sub_612DA0((_DWORD *)v25, 9); /*0x623864*/
      return result; /*0x623870*/
    }
    if ( Actor_IsBlocking(v11) ) /*0x62378d*/
      Actor_UpdateBlockingState((Actor *)v11, 0); /*0x62379a*/
    v30 = *(_DWORD *)(v25 + 0x70); /*0x62379f*/
    if ( v30 == 2 || v30 == 4 ) /*0x6237aa*/
    {
      if ( *(_DWORD *)(v25 + 0x74) ) /*0x6237ac*/
        return result; /*0x6237b0*/
      goto LABEL_48; /*0x6237b0*/
    }
    if ( CombatController_IsTargetWithinRangedDistance((void *)v25, v44, maximumDistance, 0) && *(_BYTE *)(v25 + 0x158) ) /*0x6237de*/
    {
      if ( v41 ) /*0x6237f0*/
      {
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, int))v11[1].vtbl->super.super.InitializeComponent + 0xB1))( /*0x623804*/
          v11[1].vtbl,
          0x101,
          1);
        sub_619920(v25, 3); /*0x62380a*/
        v31 = kHeadBodyNormalMatchRadius < sub_5E5850(v11, 3u); /*0x62381e*/
        v32 = kHeadBodyNormalMatchRadius; /*0x623822*/
        if ( v31 ) /*0x623827*/
          v32 = sub_5E5850(v11, 3u); /*0x62382f*/
        v47 = v32; /*0x623834*/
        *(float *)(v25 + 0xF8) = *(float *)(a1 + 0x44); /*0x62383b*/
        *(float *)(v25 + 0xFC) = v47; /*0x623845*/
        *(float *)(v25 + 0x100) = kTerrainLODQuadRayDirectionZ; /*0x623851*/
      }
      goto LABEL_48; /*0x623851*/
    }
    if ( *(_DWORD *)(v25 + 0x74) /*0x6238e3*/
      && (v48 = maximumDistance + maximumDistance,
          CombatController_IsTargetWithinRangedDistance((void *)v25, v44, v48, 0))
      && *(_BYTE *)(v25 + 0x158)
      && Actor_IsNPC(*(Actor **)(v25 + 0x3C))
      && (unsigned __int8)CombatMode_IsNonRangedMode(*(_DWORD *)(v25 + 0x70))
      && (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0xB7))(v23) )
    {
      v33 = (TESObjectREFR *)CombatController_GetCurrentTarget(v25); /*0x6238f1*/
      if ( Actor_IsFacingReferenceWithinCombatAngle((Actor *)v11, v33, 0) ) /*0x6238f8*/
      {
        EquippedWeaponForm = CombatController_GetEquippedWeaponForm((_DWORD *)v25); /*0x62390a*/
        if ( EquippedWeaponForm ) /*0x623911*/
        {
          v35 = *(_BYTE *)(EquippedWeaponForm + 0x90); /*0x623917*/
          if ( v35 != 5 && v35 != 4 ) /*0x623927*/
          {
            result = *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xA4]) * fCostant_100; /*0x623939*/
            v36 = Double_To_SInt32(result); /*0x623946*/
            if ( Game_RandomLargeInteger(0) % 0x64 < v36 ) /*0x62395a*/
            {
              HIDWORD(surfaceDistance) = off_B241C4; /*0x623969*/
              LODWORD(surfaceDistance) = 0; /*0x623970*/
              v37 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x164))( /*0x623974*/
                                *(_DWORD *)(a1 + 0x3C),
                                result,
                                a6,
                                a5);
              NextTextKeySuffixChar = ActorAnimData_GetNextTextKeySuffixChar(v37, v25, surfaceDistance, 0, a2); /*0x623978*/
              CombatController_TryStartAttackAction( /*0x62398e*/
                v25,
                v36,
                (int)v11,
                a6,
                result,
                (NextTextKeySuffixChar != 0x6C) + 0x14,
                0);
            }
          }
        }
      }
    }
    else if ( v42 ) /*0x6239a0*/
    {
      sub_61E5A0(v25, (int)v11, a5, a6, result, v44, v18, a4, v44, maximumDistance); /*0x6239b6*/
    }
  }
  return result; /*0x623621*/
}
