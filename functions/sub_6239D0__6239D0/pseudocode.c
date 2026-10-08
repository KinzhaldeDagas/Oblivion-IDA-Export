signed int __userpurge sub_6239D0@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        float *outScore,
        char a6)
{
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int *EffectiveCombatStyle; // eax
  int v12; // ebp
  char *Name; // eax
  TESObjectREFR *v14; // edi
  TESObjectREFR *CurrentTarget; // eax
  bool v16; // al
  Actor *v17; // edi
  TESObjectREFR *v18; // eax
  unsigned int v19; // eax
  int v20; // edi
  Actor *v21; // ebx
  __int16 EquippedWeaponForm; // ax
  bool v23; // [esp+8h] [ebp-18h]
  bool v24; // [esp+Ch] [ebp-14h]
  float DesiredCombatDistance; // [esp+Ch] [ebp-14h]

  v7 = *(_DWORD *)(a1 + 0x3C); /*0x6239d4*/
  if ( !v7 /*0x623a0b*/
    || (v8 = *(_DWORD *)(v7 + 0x58)) == 0
    || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0xEC))(v8, 1)
    || (v9 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xEC))(
                           *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                           1)
                       + 8)) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 0xA8); /*0x623a0d*/
  }
  if ( *(_DWORD *)(a1 + 0xA8) /*0x623a30*/
    || (EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)),
        (*(unsigned __int8 (__thiscall **)(int *, int))(*EffectiveCombatStyle + 0x168))(EffectiveCombatStyle, 1)) )
  {
    *(_BYTE *)(a1 + 0x48) = 1; /*0x623a36*/
  }
  if ( sub_5E1CF0(*(void **)(a1 + 0x3C)) && !v9 && !*(_BYTE *)(a1 + 0x48) && *(_DWORD *)(a1 + 0x70) != 6 ) /*0x623a53*/
    return 0xD; /*0x623a5c*/
  v12 = *(_DWORD *)(a1 + 0x70); /*0x623a60*/
  if ( v12 != 5 ) /*0x623a67*/
  {
    if ( unk_B3B908 ) /*0x623a69*/
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x623a7a*/
      Interface_ConsolePrint("%.20s is going to %s!", Name, "attempt to Yield"); /*0x623a85*/
    }
    a4 = kTerrainLODQuadRayDirectionZ; /*0x623a8d*/
    *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x623a93*/
  }
  v14 = *(TESObjectREFR **)(a1 + 0x3C); /*0x623a99*/
  *(_DWORD *)(a1 + 0x70) = 5; /*0x623a9e*/
  CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x623aa5*/
  *(_DWORD *)(a1 + 0xC8) = TESIdleForm_FindIdleForActor((TESObjectREFR *)dword_B361CC[0x3D], v14, CurrentTarget); /*0x623aba*/
  CombatController_SetCombatMode(a1, v12); /*0x623ac0*/
  v16 = a6 || *(_BYTE *)(a1 + 0x4D); /*0x623ad6*/
  v17 = *(Actor **)(a1 + 0x3C); /*0x623ae6*/
  v24 = *(_DWORD *)(a1 + 0xC8) != 0; /*0x623aec*/
  v23 = v16; /*0x623aed*/
  v18 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x623af1*/
  v19 = CombatSelection_EvaluateWeaponVsHandToHand(v17, 0, v18, outScore, v23, v24); /*0x623afa*/
  v20 = v19; /*0x623b04*/
  if ( !v9 ) /*0x623b06*/
    goto LABEL_32; /*0x623b06*/
  if ( v19 ) /*0x623b0e*/
  {
    if ( v19 == 0xD ) /*0x623b31*/
    {
      switch ( *(_BYTE *)(v9 + 0x90) ) /*0x623b3f*/
      {
        case 0: /*0x623b3f*/
        case 1: /*0x623b3f*/
        case 2: /*0x623b3f*/
        case 3: /*0x623b3f*/
          v20 = 1; /*0x623b81*/
          sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 1); /*0x623b87*/
          goto LABEL_36; /*0x623b8c*/
        case 4: /*0x623b3f*/
          goto LABEL_30;
        case 5: /*0x623b3f*/
          if ( !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xF4))( /*0x623b5c*/
                  *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                  1)
            && !*(_BYTE *)(a1 + 0x48) )
          {
            sub_5F5170(*(Actor **)(a1 + 0x3C), 1, 5); /*0x623b68*/
          }
LABEL_30:
          v20 = 2; /*0x623b6d*/
          sub_5E6D70(*(_DWORD **)(a1 + 0x3C), 1); /*0x623b77*/
          break; /*0x623b7c*/
        default:
          JUMPOUT(0x623B8E); /*0x623b8e*/
      }
      goto LABEL_36; /*0x623b7c*/
    }
LABEL_32:
    if ( v19 >= 2 && v19 != 3 && v19 != 2 && v19 != 4 ) /*0x623bb2*/
      return v20; /*0x623bb2*/
    goto LABEL_36; /*0x623bb2*/
  }
  v21 = *(Actor **)(a1 + 0x3C); /*0x623b10*/
  EquippedWeaponForm = CombatController_GetEquippedWeaponForm((_DWORD *)a1); /*0x623b1c*/
  Actor_UnequipItem(v21, a4, a2, a3, EquippedWeaponForm, 1, 0, 0, 1, 0); /*0x623b24*/
LABEL_36:
  CombatController_SetCombatMode(a1, v20); /*0x623bb4*/
  sub_61E8A0((void **)a1); /*0x623bbe*/
  DesiredCombatDistance = CombatController_GetDesiredCombatDistance((void *)a1); /*0x623bcd*/
  sub_612EA0((_DWORD **)a1, DesiredCombatDistance); /*0x623bd0*/
  CombatController_SetCombatMode(a1, v12); /*0x623bd8*/
  return v20; /*0x623a55*/
}
