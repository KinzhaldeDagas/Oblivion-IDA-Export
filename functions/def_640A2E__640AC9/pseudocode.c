void __userpurge def_640A2E(
        int a1@<ebx>,
        int a2@<ebp>,
        Actor *a3@<edi>,
        PlayerCharacter *a4@<esi>,
        int a5,
        int arg4,
        int arg8,
        int a8,
        int a9)
{
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  bool v12; // zf
  Actor ****v13; // eax
  TESForm *ActorBaseForm; // eax
  char v15; // al
  TESForm *v16; // eax
  char v17; // al
  TESForm *v18; // eax
  char v19; // al
  TESForm *v20; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // ebx
  int v23; // eax
  LowProcess *process; // ecx
  TESObjectREFR *v25; // ebp
  TESObjectREFR *v26; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int *SafeFloatPointer; // eax
  TESObjectCELL *ParentCell; // eax
  int *v32; // eax
  CombatController *v33; // eax
  Actor *v34; // ebx
  TESForm *v35; // eax
  char v36; // al
  TESForm *v37; // eax
  char v38; // al
  int v39; // eax
  void *v40; // edi
  TESForm *v41; // eax
  char v42; // al
  TESForm *v43; // eax
  char v44; // al
  float v45; // [esp-4h] [ebp-7Ch]
  int v46; // [esp+0h] [ebp-78h]
  int a6; // [esp+4h] [ebp-74h]
  int v48; // [esp+Ch] [ebp-6Ch]
  int v49; // [esp+14h] [ebp-64h]
  Actor *v50; // [esp+1Ch] [ebp-5Ch]
  void *v51; // [esp+28h] [ebp-50h]
  int v52; // [esp+30h] [ebp-48h]
  bool a7; // [esp+34h] [ebp-44h]
  int v54; // [esp+38h] [ebp-40h]
  int v55; // [esp+3Ch] [ebp-3Ch]
  int aggressionStat; // [esp+40h] [ebp-38h]
  int v57; // [esp+54h] [ebp-24h]
  PlayerCharacter *v58; // [esp+58h] [ebp-20h]
  char v59; // [esp+5Ch] [ebp-1Ch]
  Actor *v60; // [esp+74h] [ebp-4h] BYREF
  float v61; // [esp+A4h] [ebp+2Ch]

  *(_DWORD *)(a1 + 4) = a2;
  if ( a3->vtbl->GetCombatController(a3) )
  {
    v9 = (int)a3->vtbl->GetCombatController(a3);
    v10 = sub_6135F0(v9);
    if ( !*((_BYTE *)a3->vtbl->GetCombatController(a3) + 0x4D) && (PlayerCharacter *)v10 == a4 )
    {
      if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36778) < (double)a9 )
      {
        *(float *)(a8 + 0x1B8) = 0.0;
      }
      else
      {
        v61 = *(float *)(a8 + 0x1B8) + flt_B33E9C;
        *(float *)(a8 + 0x1B8) = v61;
        if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&fFightAbleToDetectTimer) <= (double)v61 )
        {
          ((void (__thiscall *)(Actor *, PlayerCharacter *))a3->vtbl->Unk_D0)(a3, a4);
          *(float *)(arg8 + 0x1B8) = 0.0;
        }
      }
    }
  }
  if ( flt_B36778 < (double)a8 )
  {
    if ( !a4->vtbl->super.super.super.IsDead((TESObjectREFR *)a4, 0)
      || a4->vtbl->super.super.IsDead((MobileObject *)a4)
      || ((unsigned __int8 (__thiscall *)(LowProcess *))a4->super.super.super.process->Unk_7F)(a4->super.super.super.process)
      || *(float *)&a4->super.super.unk080[1] > 0.0 )
    {
      v11 = arg4;
    }
    else
    {
      v11 = arg4;
      *(_BYTE *)(arg4 + 0x1D0) = 1;
    }
    if ( !a4->vtbl->super.super.super.IsDead((TESObjectREFR *)a4, 0) )
    {
      if ( a4->vtbl->super.GetCombatController((Actor *)a4) )
      {
        if ( (!sub_5E8A90(a4) || !sub_5E8A90(TESDataHandler_g_PlayerRef))
          && a4->super.super.super.process->GetUnk01E(a4->super.super.super.process)
          && sub_5E6C60(a3)
          && a4 != TESDataHandler_g_PlayerRef )
        {
          v59 = 0;
          v58 = 0;
          v57 = 0;
          (*(void (__thiscall **)(int, Actor *, PlayerCharacter *, _DWORD, _DWORD))(*(_DWORD *)v11 + 0x228))(
            v11,
            a3,
            a4,
            0,
            0);
        }
        v12 = byte_B333B8 == 0;
        v60 = 0;
        if ( v12 )
        {
          v13 = (Actor ****)a4->vtbl->super.GetCombatController((Actor *)a4);
          sub_6144D0(v13, (TESObjectREFR *)a3, (TESObjectREFR **)&v60);
          if ( !v60 )
            goto LABEL_40;
          sub_5E9D40((TESObjectREFR *)a3, v60);
        }
        else
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 0);
          TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID);
          if ( !v15
            || (v16 = Actor_GetActorBaseForm(a3, 0), TESActorBaseData_AllFactionsAreEvil(&v16[1].member.refID), !v17) )
          {
            v18 = Actor_GetActorBaseForm((Actor *)a4, 0);
            TESActorBaseData_AllFactionsAreEvil(&v18[1].member.refID);
            if ( !v19 )
            {
              v20 = Actor_GetActorBaseForm(a3, 0);
              TESActorBaseData_AllFactionsAreEvil(&v20[1].member.refID);
            }
          }
        }
        if ( v60 )
        {
          v21 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)v60);
          v22 = v21;
          if ( v21 )
          {
            while ( *v21 )
            {
              v23 = sub_67B6B0((int **)*v21, (int)v60, 0);
              if ( v23 && *(_BYTE *)(v23 + 4) )
              {
                v59 = 1;
                v58 = *(PlayerCharacter **)v23;
                break;
              }
              v21 = (_DWORD *)v21[1];
              if ( !v21 )
                break;
            }
            BSSimpleList_Clear(v22);
          }
          FormHeapFree((unsigned int)v22);
        }
      }
LABEL_40:
      process = a4->super.super.super.process;
      v25 = (TESObjectREFR *)a3;
      if ( process && ((int (__thiscall *)(LowProcess *))process->Unk_F3)(process) )
        v26 = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a4->super.super.super.process->Unk_F3)(a4->super.super.super.process);
      else
        v26 = (TESObjectREFR *)a4;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v57 + 0x3D0))(v57) )
      {
        a3 = (Actor *)(*(int (__thiscall **)(int))(*(_DWORD *)v57 + 0x3D0))(v57);
        if ( a3 == (Actor *)TESDataHandler_g_PlayerRef )
        {
          a3 = (Actor *)v26;
          v26 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        }
      }
      if ( v59 )
      {
        if ( v58 )
        {
          if ( sub_5E6C60(a3) && v58 != TESDataHandler_g_PlayerRef )
          {
            aggressionStat = 1;
            v54 = 0;
            a7 = 0;
            v52 = 0;
            v51 = 0;
            v50 = a3;
            (*(void (__thiscall **)(int))(*(_DWORD *)v57 + 0x228))(v57);
          }
        }
      }
      v49 = ((int (__thiscall *)(Actor *))a3->vtbl->GetActorValue)(a3);
      LOBYTE(v27) = Actor_IsCreature(a3);
      v48 = v27;
      *(float *)&a6 = TesObjectREF_GetDistance((TESObjectREFR *)a3, v26, 0);
      v45 = COERCE_FLOAT(((int (__thiscall *)(Actor *))a3->vtbl->GetActorValue)(a3));
      v28 = ((int (__thiscall *)(Actor *))a3->vtbl->GetDisposition)(a3);
      shouldActorFight(v28, (int)v26, aggressionStat, v45, 0x21, a6, a7, v48);
      v55 = v29;
      if ( Actor_IsGhost(a3) || Actor_IsGhost((Actor *)v26) || a3 == (Actor *)v26 )
      {
        v55 = 0;
      }
      else if ( v55 > 0 )
      {
        goto LABEL_67;
      }
      SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36C48);
      Double_To_SInt32(*(float *)SafeFloatPointer);
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a4) )
      {
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a4);
        if ( TESObjectCELL_IsInterior(ParentCell) )
        {
          v32 = GameSetting_GetSafeFloatPointer((int *)&unk_B36C50);
          Double_To_SInt32(*(float *)v32);
        }
      }
      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD, int, int))v25->vtbl[1].GetSleepState)(
              v25,
              0,
              v52,
              v49) )
      {
        if ( a4->vtbl->super.GetCombatController((Actor *)a4) )
        {
          v33 = a4->vtbl->super.GetCombatController((Actor *)a4);
          if ( sub_613670(v33, (int)v25) )
          {
            if ( (double)v55 >= TesObjectREF_GetDistance(v25, (TESObjectREFR *)a4, 0)
              && !sub_5E6CD0((TESObjectREFR *)a4, 0)
              && !a4->vtbl->super.IsYielding((Actor *)a4) )
            {
              v34 = v50;
              sub_633C50(a4);
              goto LABEL_68;
            }
          }
        }
      }
LABEL_67:
      v34 = v50;
LABEL_68:
      if ( !Actor_IsCreature((Actor *)v25)
        && Actor_IsNPC((Actor *)a4)
        && (Actor::GetRaceIfNPC((Actor *)a4)->isPlayable & 1) != 0
        && (v35 = Actor_GetActorBaseForm((Actor *)a4, 0), TESActorBaseData_AllFactionsAreEvil(&v35[1].member.refID),
                                                          !v36)
        || v54 <= 0 )
      {
        if ( !sub_5E6C60((Actor *)v25)
          || !Actor_IsNPC((Actor *)a4)
          || a4->vtbl->super.IsInCombat((Actor *)a4, 0)
          || ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v25->vtbl[1].GetSleepState)(v25, 0)
          || (double)iCrimeGoldAttackMin > ((double (__thiscall *)(PlayerCharacter *))a4->vtbl->super.Unk_94)(a4)
          || a4 == TESDataHandler_g_PlayerRef && PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) )
        {
          if ( !sub_5E6C60((Actor *)v25) && v52 > 0 )
          {
            if ( a4->vtbl->super.GetCombatController((Actor *)a4) )
            {
              v39 = (int)a4->vtbl->super.GetCombatController((Actor *)a4);
              v40 = (void *)sub_6135F0(v39);
            }
            else
            {
              v40 = v51;
            }
            if ( !sub_5E8A90(a4) || !v40 || !sub_5E8A90(v40) )
            {
              sub_5E6C60((Actor *)v25);
              v41 = Actor_GetActorBaseForm((Actor *)v25, 0);
              TESActorBaseData_AllFactionsAreEvil(&v41[1].member.refID);
              if ( v42 )
              {
                LOBYTE(v52) = 1;
              }
              else
              {
                v43 = Actor_GetActorBaseForm((Actor *)a4, 0);
                TESActorBaseData_AllFactionsAreEvil(&v43[1].member.refID);
                if ( v44 )
                  LOBYTE(v52) = 0;
                else
                  LOBYTE(v52) = sub_67CB50(&dword_B3BDB0, a4) == 0;
              }
              v46 = 1;
              if ( ((unsigned __int8 (__thiscall *)(Actor *, TESObjectREFR *, PlayerCharacter *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))v34->vtbl->ProcessControl)(
                     v34,
                     v25,
                     a4,
                     v52,
                     0,
                     0,
                     v52,
                     0,
                     0,
                     0) )
              {
                v34[1].members.greaterPowerList.next = (PowerListEntry *)a4;
              }
            }
          }
          sub_63F950(v34, (Actor *)v25, (TESObjectREFR *)a4, v46, (_BYTE *)0x24);
        }
        else
        {
          ((void (__thiscall *)(TESObjectREFR *, _DWORD, _DWORD, _DWORD))v25->vtbl[1].Unk_5A)(v25, 0, 0, 0);
          sub_63F950(v34, (Actor *)v25, (TESObjectREFR *)a4, (int)a4, (_BYTE *)0x24);
        }
      }
      else
      {
        sub_5E6C60((Actor *)v25);
        v37 = Actor_GetActorBaseForm((Actor *)v25, 0);
        TESActorBaseData_AllFactionsAreEvil(&v37[1].member.refID);
        if ( v38 )
          LOBYTE(v54) = 1;
        else
          LOBYTE(v54) = sub_67CB50(&dword_B3BDB0, a4) == 0;
        ((void (__thiscall *)(Actor *, TESObjectREFR *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, int, _DWORD))v34->vtbl->ProcessControl)(
          v34,
          v25,
          a4,
          0,
          0,
          0,
          v54,
          0);
        sub_63F950(v34, (Actor *)v25, (TESObjectREFR *)a4, 0, (_BYTE *)0x24);
      }
    }
  }
}
