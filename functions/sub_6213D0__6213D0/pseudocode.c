void __thiscall CombatController_UpdateCombatModeState(void *this)
{
  void *v1; // esi
  int v2; // eax
  void **v3; // edi
  bool v4; // bl
  ActorAnimData *v5; // eax
  ActorAnimData *v6; // eax
  double Health; // st7
  _DWORD **v8; // eax
  void *v9; // esi
  int v10; // eax
  bool v11; // al
  ActorAnimData *v12; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned int v14; // ecx
  int v15; // eax
  ActorAnimData *v16; // eax
  int v17; // edx
  ActorAnimData *v18; // eax
  _DWORD *CurrentTarget; // eax
  int v20; // edi
  ActorAnimData *v21; // eax
  int v22; // ecx
  TESObjectREFR *v23; // edi
  int v24; // eax
  Actor *v25; // esi
  double AimPitch; // st7
  int v27; // ebx
  int v28; // edi
  double v29; // st5
  double v30; // st6
  _DWORD *v31; // esi
  int v32; // eax
  int v33; // eax
  int v34; // [esp+0h] [ebp-14h]
  int v35; // [esp+0h] [ebp-14h]
  int v36; // [esp+4h] [ebp-10h]
  float v37; // [esp+10h] [ebp-4h] BYREF

  while ( 2 )
  {
    v31 = this; /*0x6213d1*/
    switch ( *((_DWORD *)this + 0x1D) )
    {
      case 0:
        v37 = *(float *)&this; /*0x620c30*/
        v9 = this; /*0x620c32*/
        if ( *((_DWORD *)this + 0x1D) ) /*0x620c34*/
          return; /*0x620c38*/
        v10 = *((_DWORD *)this + 0x1C); /*0x620c3e*/
        if ( v10 == 4 || v10 == 3 || v10 == 8 || v10 == 9 ) /*0x620c58*/
        {
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(*((_DWORD *)this + 0xF) + 0x5C) + 0x30))(*((_DWORD *)this + 0xF) + 0x5C) != 0; /*0x620c69*/
        }
        else
        {
          v12 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xF) + 0x164))(*((_DWORD *)this + 0xF)); /*0x620c7a*/
          AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v12, 3); /*0x620c7e*/
          v11 = AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value); /*0x620c84*/
        }
        v14 = *((_DWORD *)v9 + 0x1C); /*0x620c8c*/
        if ( (v14 == 4 || v14 == 3 || v14 == 8 || v14 == 9) && v14 != 4 ) /*0x620caa*/
        {
          if ( v11 ) /*0x620cae*/
            return; /*0x620cae*/
          goto LABEL_54; /*0x620cae*/
        }
        if ( v14 < 2 ) /*0x620cc3*/
        {
          if ( v11 ) /*0x620cd0*/
          {
            v16 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v9 + 0xF) + 0x164))(*((_DWORD *)v9 + 0xF)); /*0x620cde*/
            if ( ActorAnimData_GetSlotActionState(v16, 3) == 2 ) /*0x620cea*/
            {
              *((_DWORD *)v9 + 0x1E) = *((_DWORD *)v9 + 0x1D); /*0x620cf3*/
              *((_DWORD *)v9 + 0x1D) = 3; /*0x620cfa*/
              CombatController_EvaluateCloseCombatOptions(v9, 0); /*0x620cfd*/
            }
          }
          else
          {
            v17 = *((_DWORD *)v9 + 0x1D); /*0x620d06*/
            *((_DWORD *)v9 + 0x1D) = 3; /*0x620d09*/
            *((_DWORD *)v9 + 0x1E) = v17; /*0x620d0d*/
          }
          return; /*0x620d05*/
        }
        if ( v14 == 2 || v14 == 4 )
        {
          if ( v11 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)v9 + 0xF) + 0x58) + 0x138))(*(_DWORD *)(*((_DWORD *)v9 + 0xF) + 0x58)) )
            {
              v18 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v9 + 0xF) + 0x164))(*((_DWORD *)v9 + 0xF)); /*0x620d4a*/
              if ( ActorAnimData_GetSlotActionState(v18, 3) != 2 /*0x620d67*/
                || (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)v9 + 0xF) + 0x25C))(*((_DWORD *)v9 + 0xF)) )
              {
                return; /*0x620d6b*/
              }
              if ( CombatController_GetCurrentTarget((int)v9) )
              {
                CurrentTarget = (_DWORD *)CombatController_GetCurrentTarget((int)v9); /*0x620d7e*/
                v20 = sub_5E05B0(CurrentTarget) ? 5 : 0x32;
              }
              else
              {
                v20 = 0; /*0x620d98*/
              }
              if ( (!*((_BYTE *)v9 + 0x17E) || *((_BYTE *)v9 + 0x159)) /*0x620dd0*/
                && (Game_RandomLargeInteger(0) % 0x64 >= v20 || *((_BYTE *)v9 + 0x159) || !*((_BYTE *)v9 + 0x158)) )
              {
                v21 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v9 + 0xF) + 0x164))(*((_DWORD *)v9 + 0xF)); /*0x620de5*/
                ActorAnimData_SetUpdateState(v21, 3); /*0x620de9*/
                return; /*0x620df2*/
              }
              *((_BYTE *)v9 + 0x17E) = 0; /*0x620df3*/
            }
            v22 = *((_DWORD *)v9 + 0x60); /*0x620dfa*/
            v23 = *((TESObjectREFR **)v9 + 0xF); /*0x620e02*/
            v37 = 0.0; /*0x620e05*/
            v35 = v22; /*0x620e09*/
            v24 = CombatController_GetCurrentTarget((int)v9); /*0x620e11*/
            Actor_CalculateAimAnglesToTarget(v23, v24, &v37, v35); /*0x620e18*/
            v25 = *((Actor **)v9 + 0xF); /*0x620e1f*/
            AimPitch = Actor_GetAimPitch(v25); /*0x620e27*/
            v37 = AimPitch + v37; /*0x620e33*/
            sub_65A650((TESObjectREFR *)v25, v37); /*0x620e3e*/
            return; /*0x620e3e*/
          }
LABEL_54:
          v15 = *((_DWORD *)v9 + 0x1D); /*0x620cb4*/
          *((_DWORD *)v9 + 0x1D) = 3; /*0x620cb7*/
          *((_DWORD *)v9 + 0x1E) = v15; /*0x620cbb*/
        }
        return;
      case 1:
        v1 = this; /*0x61c551*/
        if ( *((_DWORD *)this + 0x1D) != 1 ) /*0x61c557*/
          return; /*0x61c557*/
        if ( !Actor_IsBlocking(*((_DWORD **)this + 0xF)) ) /*0x61c560*/
        {
          *((_DWORD *)v1 + 0x1E) = *((_DWORD *)v1 + 0x1D); /*0x61c56c*/
          *((_DWORD *)v1 + 0x1D) = 3; /*0x61c56f*/
        }
        v2 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*((_DWORD *)v1 + 0xF) + 0x58) + 0xF8))( /*0x61c587*/
               *(_DWORD *)(*((_DWORD *)v1 + 0xF) + 0x58),
               1,
               v28);
        if ( !v2 ) /*0x61c58b*/
          v2 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)v1 + 0xF) + 0x58) + 0xEC))( /*0x61c59d*/
                 *(_DWORD *)(*((_DWORD *)v1 + 0xF) + 0x58),
                 1);
        v3 = (void **)v2; /*0x61c59f*/
        if ( !v2 ) /*0x61c5a3*/
          return; /*0x61c5a3*/
        v34 = v27; /*0x61c5b0*/
        v4 = 0; /*0x61c5b1*/
        if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)v1 + 0xF) + 0x164))(*((_DWORD *)v1 + 0xF)) ) /*0x61c5b3*/
        {
          v5 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v1 + 0xF) + 0x164))(*((_DWORD *)v1 + 0xF)); /*0x61c5c6*/
          if ( ActorAnimData_GetNormalizedSequenceSlot(v5, 1u) ) /*0x61c5ca*/
          {
            v6 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v1 + 0xF) + 0x164))(*((_DWORD *)v1 + 0xF)); /*0x61c5e0*/
            v4 = *((_DWORD *)ActorAnimData_GetNormalizedSequenceSlot(v6, 1u) + 0x11) != 1; /*0x61c5ef*/
          }
        }
        Health = ContainerEntryExtraData_GetHealth(v3, 0); /*0x61c5f5*/
        if ( Health <= *(float *)&SrcStr && !v4 ) /*0x61c609*/
        {
          Actor_UpdateBlockingState(*((Actor **)v1 + 0xF), 0); /*0x61c610*/
          *((_DWORD *)v1 + 0x1E) = *((_DWORD *)v1 + 0x1D); /*0x61c618*/
          *((_DWORD *)v1 + 0x1D) = 3; /*0x61c61b*/
          return; /*0x61c61b*/
        }
        if ( !CombatController_GetCurrentTarget((int)v1) /*0x61c647*/
          || (v8 = (_DWORD **)CombatController_GetCurrentTarget((int)v1), Actor_GetCurrentAction(v8) != 7) )
        {
          if ( !v4 ) /*0x61c670*/
            sub_6191B0((int)v1, v29, v30, Health); /*0x61c677*/
          return; /*0x61c677*/
        }
        if ( v4 ) /*0x61c64b*/
          return; /*0x61c64b*/
        Actor_UpdateBlockingState(*((Actor **)v1 + 0xF), 0); /*0x61c652*/
        v27 = v34; /*0x61c65a*/
        v28 = v36; /*0x61c65b*/
        *((_DWORD *)v1 + 0x1E) = *((_DWORD *)v1 + 0x1D); /*0x61c65c*/
        *((_DWORD *)v1 + 0x1D) = 3; /*0x61c65f*/
        this = v1; /*0x61c666*/
        continue; /*0x61c669*/
      case 2:
        if ( *((_DWORD *)this + 0x1D) == 2 /*0x612c50*/
          && *((float *)this + 0x39) < *((float *)this + 0x11) - *((float *)this + 0x38) )
        {
          *((_DWORD *)this + 0x1E) = 2; /*0x612c52*/
          *((_DWORD *)this + 0x1D) = 3; /*0x612c55*/
        }
        return; /*0x612c55*/
      case 3:
        if ( CombatController_GetCurrentTarget((int)this) /*0x621408*/
          && *(_DWORD *)(CombatController_GetCurrentTarget((int)v31) + 0x58) )
        {
          v32 = CombatController_GetCurrentTarget((int)v31); /*0x621410*/
          v33 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v32 + 0x58) + 0x47C))(*(_DWORD *)(v32 + 0x58)); /*0x621420*/
        }
        else
        {
          v33 = 0; /*0x621424*/
        }
        if ( v31[0x6A] < (int)MEMORY[0xB372F0].value ) /*0x621432*/
          goto LABEL_78; /*0x621432*/
        if ( v33 ) /*0x621436*/
          goto LABEL_78; /*0x621436*/
        if ( (unsigned __int8)CombatMode_IsNonRangedMode(v31[0x1C]) ) /*0x62143c*/
        {
          CombatController_EvaluateCloseCombatOptions(v31, 0); /*0x62144a*/
        }
        else if ( v31[0x1F] ) /*0x62144c*/
        {
          CombatController_EvaluateCloseCombatOptions(v31, 1); /*0x621456*/
        }
        if ( v31[0x1B] != 4 ) /*0x62145f*/
        {
          if ( (unsigned __int8)CombatMode_IsRangedWeaponMode(v31[0x1C]) ) /*0x621465*/
            CombatController_EvaluateRangedAttackOptions(v31, 0); /*0x621475*/
        }
        if ( !v31[0x20] || (unsigned __int8)CombatMode_IsRangedWeaponMode(v31[0x1C]) ) /*0x621487*/
          goto LABEL_78; /*0x621491*/
        CombatController_EvaluateRangedAttackOptions(v31, 1); /*0x621497*/
        def_6213DF(); /*0x621498*/
        return; /*0x621498*/
      default:
LABEL_78:
        JUMPOUT(0x62149C); /*0x62149c*/
    }
  }
}
