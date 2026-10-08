void __usercall sub_61FC30(int a1@<ecx>, float a2@<edi>)
{
  int v2; // edi
  int v4; // eax
  int v5; // ecx
  TESObjectREFR *v6; // edi
  int CurrentTarget; // eax
  ActorAnimData *v8; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  ActorAnimData *v10; // eax
  unsigned __int16 v11; // ax
  bool v12; // bl
  float *SafeFloatPointer; // eax
  int *v14; // esi
  int v15; // edi
  double v16; // st7
  void (__thiscall *v17)(int *, _DWORD); // eax
  _DWORD *v18; // ebx
  void (__thiscall **v19)(_DWORD *, int); // edi
  int v20; // eax
  int v21; // [esp+0h] [ebp-1Ch]
  float v22; // [esp+Ch] [ebp-10h]
  bool v23; // [esp+13h] [ebp-9h]
  float v24; // [esp+14h] [ebp-8h]
  float v25; // [esp+18h] [ebp-4h] BYREF

  v4 = *(_DWORD *)(a1 + 0x6C); /*0x61fc36*/
  if ( v4 == 7 /*0x61fc87*/
    || (v5 = *(_DWORD *)(a1 + 0x70), v5 == 7)
    || v5 == 0xC
    || v4 == 8
    || v4 == 0xE
    || v4 == 0xC
    || v4 == 4 && *(_DWORD *)(a1 + 0x74)
    || !CombatController_GetCurrentTarget(a1)
    || *(_DWORD *)(a1 + 0x1A8) < (int)MEMORY[0xB372F0].value )
  {
    v25 = v22; /*0x615050*/
    if ( *(_BYTE *)(a1 + 0x17D) ) /*0x615053*/
    {
      (*(void (__thiscall **)(_DWORD, int, float))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xC4))( /*0x61506c*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        1,
        COERCE_FLOAT(LODWORD(v25)));
      sub_5E05F0(*(Actor **)(a1 + 0x3C), 0x30); /*0x615073*/
      *(_BYTE *)(a1 + 0x17D) = 0; /*0x615078*/
    }
    if ( *(_DWORD *)(a1 + 0x1A8) < (int)MEMORY[0xB372F0].value ) /*0x61508b*/
    {
      v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x4CC))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)); /*0x6150a0*/
      if ( v2 == CombatController_GetCurrentTarget(a1) ) /*0x6150aa*/
        __asm { jmp     eax } /*0x6150bb*/
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 0x17D) ) /*0x61fc89*/
    {
      sub_61FAD0(a1, a2); /*0x61fc98*/
      return; /*0x61fc98*/
    }
    v6 = *(TESObjectREFR **)(a1 + 0x3C); /*0x61fca5*/
    v21 = *(_DWORD *)(a1 + 0x180); /*0x61fca8*/
    CurrentTarget = CombatController_GetCurrentTarget(a1); /*0x61fcb0*/
    v24 = Actor_CalculateAimAnglesToTarget(v6, CurrentTarget, &v25, v21); /*0x61fcbc*/
    v8 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)); /*0x61fcd0*/
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v8, 3); /*0x61fcd4*/
    v23 = AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value); /*0x61fce2*/
    v10 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)); /*0x61fcf3*/
    v11 = ActorAnimData_GetAnimGroupFromField8Value(v10, 3); /*0x61fcf7*/
    v12 = AnimGroup_UsesPowerOrCastNoteTemplate(v11); /*0x61fd02*/
    if ( *(_DWORD *)(a1 + 0x6C) >= 2u && *(_DWORD *)(a1 + 0x70) != 6 && (sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) || v12) ) /*0x61fd33*/
    {
      SafeFloatPointer = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0x32]); /*0x61fd3e*/
      v25 = dbl_A30DC8 * v24; /*0x61fd4f*/
      v25 = fabs(v25); /*0x61fd59*/
      if ( *SafeFloatPointer <= (double)v25 /*0x61fd84*/
        && !(unsigned __int8)CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70))
        && !v23
        && !sub_612CD0((_DWORD *)a1) )
      {
        *(_BYTE *)(a1 + 0x17D) = 1; /*0x61fd91*/
        return; /*0x61fd9c*/
      }
      if ( (unsigned __int8)CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70)) ) /*0x61fda1*/
      {
        v25 = fabs(v24); /*0x61fdaf*/
        if ( v25 > (double)*(float *)&SrcStr ) /*0x61fdc2*/
          goto LABEL_25; /*0x61fdc2*/
      }
      v18 = *(_DWORD **)(a1 + 0x3C); /*0x61fdf6*/
      v19 = (void (__thiscall **)(_DWORD *, int))(*v18 + 0x1E4); /*0x61fdfd*/
      v20 = CombatController_GetCurrentTarget(a1); /*0x61fe03*/
      (*v19)(v18, v20); /*0x61fe0d*/
    }
    else
    {
      if ( (unsigned __int8)CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70)) ) /*0x61fe1a*/
      {
LABEL_25:
        v14 = *(int **)(a1 + 0x3C); /*0x61fdc4*/
        v15 = *v14; /*0x61fdc7*/
        v16 = ((double (__thiscall *)(int *))*(_DWORD *)(*v14 + 0x1E0))(v14); /*0x61fdd1*/
        v17 = *(void (__thiscall **)(int *, _DWORD))(v15 + 0x1E8); /*0x61fdd7*/
        v25 = v16 + v24; /*0x61fdde*/
        v17(v14, LODWORD(v25)); /*0x61fdeb*/
        return; /*0x61fdf3*/
      }
      v25 = v24 * dbl_A30DC8; /*0x61fe60*/
      v25 = fabs(v25); /*0x61fe6a*/
      if ( v25 >= (double)flt_A31C80 ) /*0x61fe7d*/
        *(_BYTE *)(a1 + 0x17D) = 1; /*0x61fe7f*/
    }
  }
}
