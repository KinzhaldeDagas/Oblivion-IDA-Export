// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Attack control 4 held/pressed gates actor weapon attack handling.
bool __thiscall PlayerCharacter_ProcessAttackControl(PlayerCharacter *this)
{
  double v1; // st6
  double v2; // st7
  int v4; // edi
  BSExtraDataVtbl *AnimData; // eax
  BSAnimGroupSequence *input; // ebx
  ActorAnimData *v7; // ebp
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned __int16 v10; // ax
  TESFormVtbl **SafeFloatPointer; // eax
  unsigned __int16 v12; // ax
  char v13; // al
  unsigned __int16 v14; // ax
  int *v15; // eax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // ax
  BSAnimGroupSequence *NormalizedSequenceSlot; // edi
  size_t v20; // [esp-Ch] [ebp-2Ch]
  size_t v21; // [esp-Ch] [ebp-2Ch]
  size_t v22; // [esp-Ch] [ebp-2Ch]
  int v23; // [esp+0h] [ebp-20h]
  bool v24; // [esp+13h] [ebp-Dh]
  ActorAnimData *firstPersonAnimData; // [esp+14h] [ebp-Ch]
  float v26; // [esp+18h] [ebp-8h]
  BSAnimGroupSequence *v27; // [esp+1Ch] [ebp-4h]
  float v28; // [esp+1Ch] [ebp-4h]

  v4 = 0xFF; /*0x65e969*/
  AnimData = TESObjectREFR_GetAnimData((Actor *)this); /*0x65e96e*/
  input = (BSAnimGroupSequence *)MEMORY[0xB33398]->input; /*0x65e979*/
  v7 = (ActorAnimData *)AnimData; /*0x65e981*/
  firstPersonAnimData = this->firstPersonAnimData; /*0x65e989*/
  v27 = input; /*0x65e993*/
  v24 = 0; /*0x65e997*/
  if ( !this->super.super.super.process->Unk_4D(this->super.super.super.process) /*0x65e9b5*/
    || !MEMORY[0xB3BB04]
    || Actor_GetCurrentAction(this) == 5 )      // Calls process vtable +0x138, implemented for High/MiddleHighProcess by the byte getter at 0x6293C0 (process +0xF4). Its semantic name remains unproven; do not treat this call as an extra function argument.
  {
    if ( unk_B3BAF4 ) /*0x65e9ec*/
    {
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x65e9fd*/
      if ( AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value) ) /*0x65ea03*/
      {
        v10 = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x65ea17*/
        if ( AnimGroup_UsesPowerOrCastNoteTemplate(v10) ) /*0x65ea1d*/
          goto LABEL_94; /*0x65ea27*/
        if ( !this->super.super.super.process->Unk_4D(this->super.super.super.process) ) /*0x65ea40*/
        {
          if ( ActorAnimData_GetSlotActionState(v7, 3) != 2 ) /*0x65ea9a*/
            goto LABEL_94; /*0x65ea9a*/
          if ( unk_B3BAF4 == 1 ) /*0x65eaa8*/
          {
            HIDWORD(v20) = off_A70EA4; /*0x65eabf*/
            LODWORD(v20) = 3; /*0x65eac4*/
            v4 = 0x15 - (ActorAnimData_FindFirstTextKeyWithPrefix(v7, (int)this, v20, 0, v23) != 0xFFFFFFFF); /*0x65ead6*/
          }
          else
          {
            if ( unk_B3BAF4 != 2 ) /*0x65eaad*/
              goto LABEL_94; /*0x65eaad*/
            v4 = 0x16; /*0x65eab3*/
          }
          goto LABEL_44; /*0x65eab8*/
        }
        if ( ActorAnimData_GetSlotActionState(v7, 3) == 3 /*0x65ea68*/
          && (Actor_GetCurrentAction(this) != 5 || ActorAnimData_GetSlotActionState(v7, 3) > 3) )
        {
          this->unk640 = 0.0; /*0x65ea75*/
          v4 = 0x13; /*0x65ea7b*/
          SafeFloatPointer = (TESFormVtbl **)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF6]); /*0x65ea80*/
          v2 = *(float *)SafeFloatPointer; /*0x65ea85*/
          unk_B3BAFC.vtbl = *SafeFloatPointer; /*0x65ea87*/
LABEL_44:
          if ( Actor_GetCurrentAction(this) == 6 ) /*0x65ec40*/
            Actor_UpdateBlockingState((Actor *)this, 0); /*0x65ec46*/
          if ( Actor_IsSneaking(this) /*0x65ec8f*/
            && !this->super.super.super.process->Unk_4E(this->super.super.super.process)
            && !this->super.super.super.process->Unk_4D(this->super.super.super.process)
            && !Actor_IsSwimming((Actor *)this)
            && Actor_GetSkillMasteryLevel((Actor *)this, kSkillAV_Acrobatics) > kSkillMastery_Apprentice )
          {
            v4 = 0x16; /*0x65ec91*/
          }
          LOBYTE(input) = 0; /*0x65ec96*/
          if ( v4 == 0x16 ) /*0x65ec9b*/
          {
            if ( !Actor_IsSneaking(this) ) /*0x65eca3*/
            {
              v13 = this->super.super.super.process->GetMovementFlags(this->super.super.super.process); /*0x65ecbb*/
              if ( (v13 & 1) != 0 ) /*0x65ecc2*/
              {
                v4 = 0x17; /*0x65ecc8*/
              }
              else if ( (v13 & 2) != 0 ) /*0x65eea9*/
              {
                v4 = 0x18; /*0x65eeab*/
              }
              else if ( (v13 & 4) != 0 ) /*0x65eeb4*/
              {
                v4 = 0x19; /*0x65eeb6*/
              }
              else if ( (v13 & 8) != 0 ) /*0x65eebf*/
              {
                v4 = 0x1A; /*0x65eec1*/
              }
            }
            v2 = (double)Game_RandomLargeInteger(0) / dbl_A3D5A8; /*0x65eed8*/
            v1 = g_GameSettingStringPointers_B36CD8[0x9A]; /*0x65eede*/
            if ( v1 >= v2 ) /*0x65eeeb*/
              LOBYTE(input) = 1; /*0x65eeed*/
          }
          if ( PlayerCharacter_TryStartAttackAnimGroup(this, input, (int)v7, v4, v1, v2, v4) )// Accepted later attack input calls PlayerCharacter_TryStartAttackAnimGroup; it schedules a fresh AttackBow cycle. Release processing itself does not reload/nock. /*0x65eef2*/
          {
            if ( (_BYTE)input ) /*0x65eefd*/
            {
              if ( !this->super.super.super.process->Unk_4E(this->super.super.super.process) ) /*0x65ef0a*/
                ((void (__thiscall *)(PlayerCharacter *, PlayerCharacter *, int, _DWORD))this->vtbl->super.Unk_C2)( /*0x65ef1f*/
                  this,
                  this,
                  0xA,
                  0);
            }
          }
          input = v27; /*0x65ef21*/
          unk_B3BAF4 = 0; /*0x65ef27*/
          LOBYTE(qword_B3BB2C[0x16]) = 1; /*0x65ef2c*/
          qword_B3BB2C[0x15] = 0.0; /*0x65ef33*/
        }
      }
      else
      {
        if ( !this->super.super.super.process->Unk_4D(this->super.super.super.process) ) /*0x65eaed*/
        {
          if ( unk_B3BAF4 == 1 ) /*0x65eb1f*/
          {
            HIDWORD(v21) = off_B241C4; /*0x65eb3c*/
            LODWORD(v21) = 0; /*0x65eb3d*/
            v4 = (ActorAnimData_GetNextTextKeySuffixChar(v7, 0xFF, v21, 0, v23) != 0x6C) + 0x14; /*0x65eb50*/
          }
          else
          {
            if ( unk_B3BAF4 != 2 ) /*0x65eb24*/
              goto LABEL_94; /*0x65eb24*/
            v4 = 0x16; /*0x65eb2a*/
          }
          goto LABEL_44; /*0x65eb2f*/
        }
        if ( Actor_GetCurrentAction(this) != 5 || ActorAnimData_GetSlotActionState(v7, 3) > 3 ) /*0x65eb07*/
        {
          v4 = 0x13; /*0x65eb0d*/
          goto LABEL_44; /*0x65eb12*/
        }
      }
LABEL_94:
      if ( (InputGlobals::QueryControlState((InputGlobal *)input, 4, 0) /*0x65ef84*/
         || InputGlobals::QueryControlState((InputGlobal *)input, 4, 1))
        && this->super.super.super.process->GetWeaponOut(this->super.super.super.process)
        && !this->super.super.super.process->Unk_4E(this->super.super.super.process)
        && !unk_B3BAEB )
      {
        v17 = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x65ef94*/
        if ( AnimGroup_UsesAttackOrCastNoteTemplate(v17) ) /*0x65ef9a*/
        {
          v18 = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x65efae*/
          if ( !AnimGroup_UsesPowerOrCastNoteTemplate(v18) && !unk_B3BAF4 ) /*0x65efc4*/
          {
            NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v7, 3u); /*0x65efdf*/
            v28 = *((float *)NormalizedSequenceSlot + 0x12) + v7->unk94; /*0x65eff0*/
            if ( this->super.super.super.process->Unk_4D(this->super.super.super.process) )// Bow-control branch tests the same process +0xF4 flag. When set, slot 3 must be at phase 2 and the attack-input latch must be armed before update state 3 is sent to both perspectives. /*0x65eff4*/
            {                                   // Native AttackBow Hold gate: current slot-3 required-note phase must equal 2 and the attack-control latch at 0xB3BB84 must be set.
              if ( ActorAnimData_GetSlotActionState(v7, 3) == 2 && LOBYTE(qword_B3BB2C[0x16]) ) /*0x65f008*/
              {
LABEL_109:
                ActorAnimData_SetUpdateState(v7, 3);// Control-to-animation bridge: write ActorAnimData update-control state 3 to third-person and first-person data. This does not directly write the slot phase; the required-note scheduler advances it. /*0x65f036*/
                ActorAnimData_SetUpdateState(firstPersonAnimData, 3); /*0x65f045*/
                return v24; /*0x65f055*/
              }
            }
            else if ( (v28 <= 0.0 || *((_DWORD *)NormalizedSequenceSlot + 0x11) != 1) /*0x65f030*/
                   && !((unsigned __int8 (__thiscall *)(PlayerCharacter *))this->vtbl->super.Unk_97)(this) )
            {
              goto LABEL_109; /*0x65f034*/
            }
          }
        }
      }
      else
      {
        LOBYTE(qword_B3BB2C[0x16]) = 0; /*0x65f058*/
        if ( Actor_GetCurrentAction(this) == 0xFFFFFFFF ) /*0x65f067*/
          unk_B3BAEB = 0; /*0x65f069*/
      }
      return v24; /*0x65f070*/
    }
    if ( !InputGlobals::QueryControlState((InputGlobal *)input, 4, 1) || unk_B3BAEB ) /*0x65eb6a*/
    {
      if ( !InputGlobals::QueryControlState((InputGlobal *)input, 4, 0) /*0x65ed1c*/
        || !this->super.super.super.process->GetWeaponOut(this->super.super.super.process)
        || unk_B3BAEB )
      {
        goto LABEL_94; /*0x65ed23*/
      }
      if ( this->super.super.super.process->Unk_4D(this->super.super.super.process) ) /*0x65ed34*/
      {
        if ( (Actor_GetCurrentAction(this) == 4 || Actor_GetCurrentAction(this) == 5) /*0x65ed5e*/
          && ActorAnimData_GetSlotActionState(v7, 3) <= 3 )
        {
          this->unk640 = this->unk640 + *(float *)&MEMORY[0xB33E90][0xC]; /*0x65ed87*/
          v2 = *(float *)&MEMORY[0xB33E90][0xC] + *(float *)&unk_B3BAFC.vtbl; /*0x65ed93*/
        }
        else
        {
          this->unk640 = 0.0; /*0x65ed67*/
          v4 = 0x13; /*0x65ed6d*/
          v2 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF6]); /*0x65ed77*/
        }
        *(float *)&unk_B3BAFC.vtbl = v2; /*0x65ed99*/
      }
      if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *))this->vtbl->super.Unk_97)(this) ) /*0x65eda9*/
      {
LABEL_43:
        if ( v4 == 0xFF ) /*0x65ec30*/
          goto LABEL_94; /*0x65ec30*/
        goto LABEL_44; /*0x65ec30*/
      }
      v14 = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x65edb7*/
      if ( !AnimGroup_UsesPowerOrCastNoteTemplate(v14) /*0x65edee*/
        && unk_B3BAF4 != 2
        && !this->super.super.super.process->Unk_4D(this->super.super.super.process)
        && !this->super.super.super.process->Unk_4E(this->super.super.super.process) )
      {
        unk_B3BAF8 = *(float *)&MEMORY[0xB33E90][0xC] + unk_B3BAF8; /*0x65ee00*/
      }
      v15 = GameSetting_GetSafeFloatPointer((int *)unk_B36B48); /*0x65ee0b*/
      v2 = unk_B3BAF8; /*0x65ee10*/
      v1 = *(float *)v15; /*0x65ee16*/
      if ( v1 >= v2 ) /*0x65ee1f*/
      {
LABEL_42:
        v24 = 1; /*0x65ec25*/
        goto LABEL_43; /*0x65ec25*/
      }
      if ( !Actor_IsSwimming((Actor *)this) /*0x65ee44*/
        && (Actor_GetSkillMasteryLevel((Actor *)this, kSkillAV_Acrobatics) > kSkillMastery_Apprentice
         || !MobileObject_IsJumpSuppressedByFallAnimOrInAir((MobileObject *)this)) )
      {
        v16 = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x65ee55*/
        if ( AnimGroup_UsesAttackOrCastNoteTemplate(v16) /*0x65ee8c*/
          && (v26 = *((float *)ActorAnimData_GetNormalizedSequenceSlot(v7, 3u) + 0x12) + v7->unk94,
              v26 > (double)*(float *)&SrcStr) )
        {
          unk_B3BAF4 = 2; /*0x65ee8e*/
        }
        else
        {
          v4 = 0x16; /*0x65ee9d*/
        }
        goto LABEL_41; /*0x65ee98*/
      }
    }
    else
    {
      if ( !this->super.super.super.process->GetWeaponOut(this->super.super.super.process) ) /*0x65eb82*/
      {
        sub_5E6D70(this, 1); /*0x65eb8c*/
        goto LABEL_41; /*0x65eb91*/
      }
      if ( this->super.super.super.process->Unk_4D(this->super.super.super.process) ) /*0x65eba1*/
      {
        if ( Actor_GetCurrentAction(this) != 4 && Actor_GetCurrentAction(this) != 5 /*0x65ebcb*/
          || ActorAnimData_GetSlotActionState(v7, 3) > 3 )
        {
          this->unk640 = 0.0; /*0x65ebd4*/
          v4 = 0x13; /*0x65ebda*/
          unk_B3BAFC.vtbl = *(TESFormVtbl **)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xF6]); /*0x65ebe6*/
        }
        goto LABEL_41; /*0x65ebec*/
      }
      v12 = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x65ebf2*/
      if ( !AnimGroup_UsesAttackOrCastNoteTemplate(v12) ) /*0x65ec02*/
      {
        HIDWORD(v22) = off_B241C4; /*0x65ecd9*/
        LODWORD(v22) = 0; /*0x65ecda*/
        v4 = (ActorAnimData_GetNextTextKeySuffixChar(v7, 0xFF, v22, 0, v23) != 0x6C) + 0x14; /*0x65eced*/
        goto LABEL_41; /*0x65ecef*/
      }
      if ( Actor_IsSneaking(this) ) /*0x65ec0a*/
      {
LABEL_41:
        v2 = 0.0; /*0x65ec1d*/
        unk_B3BAF8 = 0.0; /*0x65ec1f*/
        goto LABEL_42; /*0x65ec1f*/
      }
    }
    unk_B3BAF4 = 1; /*0x65ec13*/
    goto LABEL_41; /*0x65ec13*/
  }
  if ( InputGlobals::QueryControlState((InputGlobal *)input, 4, 0) /*0x65e9cc*/
    || InputGlobals::QueryControlState((InputGlobal *)input, 4, 1) )
  {
    return unk_B3BB05; /*0x65e9df*/
  }
  else
  {
    return 0; /*0x65e9d8*/
  }
}
