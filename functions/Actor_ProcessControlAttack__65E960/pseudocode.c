char __usercall Actor_ProcessControlAttack@<al>(Actor *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // edi
  BSExtraDataVtbl *AnimData; // eax
  InputGlobal *input; // ebx
  ActorAnimData *v8; // ebp
  __int16 AnimGroupFromField8Value; // ax
  __int16 v11; // ax
  TESFormVtbl **SafeFloatPointer; // eax
  __int16 v13; // ax
  char v14; // al
  __int16 v15; // ax
  int *v16; // eax
  __int16 v17; // ax
  __int16 v18; // ax
  __int16 v19; // ax
  PowerListEntry *v20; // edi
  size_t v21; // [esp-Ch] [ebp-2Ch]
  size_t v22; // [esp-Ch] [ebp-2Ch]
  size_t v23; // [esp-Ch] [ebp-2Ch]
  int v24; // [esp+0h] [ebp-20h]
  char v25; // [esp+13h] [ebp-Dh]
  _BYTE *v26; // [esp+14h] [ebp-Ch]
  float v27; // [esp+18h] [ebp-8h]
  InputGlobal *v28; // [esp+1Ch] [ebp-4h]
  float v29; // [esp+1Ch] [ebp-4h]

  v5 = 0xFF;
  AnimData = TESObjectREFR_GetAnimData(a1);
  input = OSGlobals->input;
  v8 = (ActorAnimData *)AnimData;
  v26 = (_BYTE *)a1[5].members.unk0B4[1];
  v28 = input;
  v25 = 0;
  if ( !a1->members.super.process->Unk_4D(a1->members.super.process)
    || !VanityCamState
    || Actor_GetCurrentAction(a1) == 5 )
  {
    if ( dword_B3BAF4 )
    {
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
      if ( sub_51AC80(AnimGroupFromField8Value) )
      {
        v11 = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
        if ( sub_51ACC0(v11) )
          goto LABEL_94;
        if ( !a1->members.super.process->Unk_4D(a1->members.super.process) )
        {
          if ( ActorAnimData_GetSomethingFromField8Value(v8, 3) != 2 )
            goto LABEL_94;
          if ( dword_B3BAF4 == 1 )
          {
            HIDWORD(v21) = off_A70EA4;
            LODWORD(v21) = 3;
            v5 = 0x15 - (sub_472720(v8, (int)a1, v21, 0, v24) != 0xFFFFFFFF);
          }
          else
          {
            if ( dword_B3BAF4 != 2 )
              goto LABEL_94;
            v5 = 0x16;
          }
          goto LABEL_44;
        }
        if ( ActorAnimData_GetSomethingFromField8Value(v8, 3) == 3
          && (Actor_GetCurrentAction(a1) != 5 || ActorAnimData_GetSomethingFromField8Value(v8, 3) > 3) )
        {
          a1[6].members.super.super.rot.z = 0.0;
          v5 = 0x13;
          SafeFloatPointer = (TESFormVtbl **)GameSetting_GetSafeFloatPointer((int *)&flt_B370B0);
          a4 = *(float *)SafeFloatPointer;
          flt_B3BAFC.vtbl = *SafeFloatPointer;
LABEL_44:
          if ( Actor_GetCurrentAction(a1) == 6 )
            sub_5F4AE0(a1, a2, a3, a4, 0);
          if ( Actor_IsSneaking(a1)
            && !a1->members.super.process->Unk_4E(a1->members.super.process)
            && !a1->members.super.process->Unk_4D(a1->members.super.process)
            && !Actor_IsSwimming(a1)
            && Actor_GetSkillMasteryLevel((int *)a1, (int)input, v5, 0x1A) > 1 )
          {
            v5 = 0x16;
          }
          LOBYTE(input) = 0;
          if ( v5 == 0x16 )
          {
            if ( !Actor_IsSneaking(a1) )
            {
              v14 = a1->members.super.process->GetMovementFlags(a1->members.super.process);
              if ( (v14 & 1) != 0 )
              {
                v5 = 0x17;
              }
              else if ( (v14 & 2) != 0 )
              {
                v5 = 0x18;
              }
              else if ( (v14 & 4) != 0 )
              {
                v5 = 0x19;
              }
              else if ( (v14 & 8) != 0 )
              {
                v5 = 0x1A;
              }
            }
            a4 = (double)GetRandomLargeInteger_(0) / dbl_A3D5A8;
            a3 = fCombatSpeakPowerAttackChance;
            if ( a3 >= a4 )
              LOBYTE(input) = 1;
          }
          if ( sub_5F48D0((PlayerCharacter *)a1, (int)input, (int)v8, v5, a3, a4, v5) )
          {
            if ( (_BYTE)input )
            {
              if ( !a1->members.super.process->Unk_4E(a1->members.super.process) )
                ((void (__thiscall *)(Actor *, Actor *, int, _DWORD))a1->vtbl->Unk_C2)(a1, a1, 0xA, 0);
            }
          }
          input = v28;
          dword_B3BAF4 = 0;
          byte_B3BB84 = 1;
          dword_B3BB80 = 0;
        }
      }
      else
      {
        if ( !a1->members.super.process->Unk_4D(a1->members.super.process) )
        {
          if ( dword_B3BAF4 == 1 )
          {
            HIDWORD(v22) = off_B241C4;
            LODWORD(v22) = 0;
            v5 = (sub_4727E0(v8, 0xFF, v22, 0, v24) != 0x6C) + 0x14;
          }
          else
          {
            if ( dword_B3BAF4 != 2 )
              goto LABEL_94;
            v5 = 0x16;
          }
          goto LABEL_44;
        }
        if ( Actor_GetCurrentAction(a1) != 5 || ActorAnimData_GetSomethingFromField8Value(v8, 3) > 3 )
        {
          v5 = 0x13;
          goto LABEL_44;
        }
      }
LABEL_94:
      if ( (InputGlobals::QueryControlState(input, 4, 0) || InputGlobals::QueryControlState(input, 4, 1))
        && a1->members.super.process->GetWeaponOut(a1->members.super.process)
        && !a1->members.super.process->Unk_4E(a1->members.super.process)
        && !byte_B3BAEB )
      {
        v18 = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
        if ( sub_51AC80(v18) )
        {
          v19 = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
          if ( !sub_51ACC0(v19) && !dword_B3BAF4 )
          {
            v20 = sub_4706E0(v8, 3);
            v29 = *(float *)&v20[9].data + v8->unk94;
            if ( a1->members.super.process->Unk_4D(a1->members.super.process) )
            {
              if ( ActorAnimData_GetSomethingFromField8Value(v8, 3) == 2 && byte_B3BB84 )
              {
LABEL_109:
                sub_4706D0(v8, 3);
                sub_4706D0(v26, 3);
                return v25;
              }
            }
            else if ( (v29 <= 0.0 || v20[8].next != (PowerListEntry *)1)
                   && !((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->Unk_97)(a1) )
            {
              goto LABEL_109;
            }
          }
        }
      }
      else
      {
        byte_B3BB84 = 0;
        if ( Actor_GetCurrentAction(a1) == 0xFFFFFFFF )
          byte_B3BAEB = 0;
      }
      return v25;
    }
    if ( !InputGlobals::QueryControlState(input, 4, 1) || byte_B3BAEB )
    {
      if ( !InputGlobals::QueryControlState(input, 4, 0)
        || !a1->members.super.process->GetWeaponOut(a1->members.super.process)
        || byte_B3BAEB )
      {
        goto LABEL_94;
      }
      if ( a1->members.super.process->Unk_4D(a1->members.super.process) )
      {
        if ( (Actor_GetCurrentAction(a1) == 4 || Actor_GetCurrentAction(a1) == 5)
          && ActorAnimData_GetSomethingFromField8Value(v8, 3) <= 3 )
        {
          a1[6].members.super.super.rot.z = a1[6].members.super.super.rot.z + flt_B33E9C;
          a4 = flt_B33E9C + *(float *)&flt_B3BAFC.vtbl;
        }
        else
        {
          a1[6].members.super.super.rot.z = 0.0;
          v5 = 0x13;
          a4 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B370B0);
        }
        *(float *)&flt_B3BAFC.vtbl = a4;
      }
      if ( ((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->Unk_97)(a1) )
      {
LABEL_43:
        if ( v5 == 0xFF )
          goto LABEL_94;
        goto LABEL_44;
      }
      v15 = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
      if ( !sub_51ACC0(v15)
        && dword_B3BAF4 != 2
        && !a1->members.super.process->Unk_4D(a1->members.super.process)
        && !a1->members.super.process->Unk_4E(a1->members.super.process) )
      {
        flt_B3BAF8 = flt_B33E9C + flt_B3BAF8;
      }
      v16 = GameSetting_GetSafeFloatPointer((int *)&unk_B36B48);
      a4 = flt_B3BAF8;
      a3 = *(float *)v16;
      if ( a3 >= a4 )
      {
LABEL_42:
        v25 = 1;
        goto LABEL_43;
      }
      if ( !Actor_IsSwimming(a1)
        && (Actor_GetSkillMasteryLevel((int *)a1, (int)input, v5, 0x1A) > 1 || !sub_5EC180((MobileObject *)a1)) )
      {
        v17 = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
        if ( sub_51AC80(v17)
          && (v27 = *(float *)&sub_4706E0(v8, 3)[9].data + v8->unk94, v27 > (double)*(float *)&SrcStr) )
        {
          dword_B3BAF4 = 2;
        }
        else
        {
          v5 = 0x16;
        }
        goto LABEL_41;
      }
    }
    else
    {
      if ( !a1->members.super.process->GetWeaponOut(a1->members.super.process) )
      {
        sub_5E6D70(a1, 1);
        goto LABEL_41;
      }
      if ( a1->members.super.process->Unk_4D(a1->members.super.process) )
      {
        if ( Actor_GetCurrentAction(a1) != 4 && Actor_GetCurrentAction(a1) != 5
          || ActorAnimData_GetSomethingFromField8Value(v8, 3) > 3 )
        {
          a1[6].members.super.super.rot.z = 0.0;
          v5 = 0x13;
          flt_B3BAFC.vtbl = *(TESFormVtbl **)GameSetting_GetSafeFloatPointer((int *)&flt_B370B0);
        }
        goto LABEL_41;
      }
      v13 = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
      if ( !sub_51AC80(v13) )
      {
        HIDWORD(v23) = off_B241C4;
        LODWORD(v23) = 0;
        v5 = (sub_4727E0(v8, 0xFF, v23, 0, v24) != 0x6C) + 0x14;
        goto LABEL_41;
      }
      if ( Actor_IsSneaking(a1) )
      {
LABEL_41:
        a4 = 0.0;
        flt_B3BAF8 = 0.0;
        goto LABEL_42;
      }
    }
    dword_B3BAF4 = 1;
    goto LABEL_41;
  }
  if ( InputGlobals::QueryControlState(input, 4, 0) || InputGlobals::QueryControlState(input, 4, 1) )
    return byte_B3BB05;
  else
    return 0;
}
