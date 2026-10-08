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
  CombatController *v9; // eax
  PlayerCharacter *CurrentTarget; // ebx
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
  PlayerCharacter *v26; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  float *SafeFloatPointer; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  float *v32; // eax
  CombatController *v33; // eax
  Actor *v34; // ebx
  TESForm *v35; // eax
  char v36; // al
  TESForm *v37; // eax
  char v38; // al
  CombatController *v39; // eax
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

  *(_DWORD *)(a1 + 4) = a2; /*0x640ac9*/
  if ( a3->vtbl->GetCombatController(a3) ) /*0x640ad6*/
  {
    v9 = a3->vtbl->GetCombatController(a3); /*0x640aea*/
    CurrentTarget = (PlayerCharacter *)CombatController_GetCurrentTarget((int)v9); /*0x640af3*/
    if ( !*((_BYTE *)a3->vtbl->GetCombatController(a3) + 0x4D) && CurrentTarget == a4 ) /*0x640b09*/
    {
      if ( *GameSetting_GetSafeFloatPointer(flt_B36778) < (double)a9 ) /*0x640b22*/
      {
        *(float *)(a8 + 0x1B8) = 0.0; /*0x640b7c*/
      }
      else
      {
        v61 = *(float *)(a8 + 0x1B8) + *(float *)&MEMORY[0xB33E90][0xC]; /*0x640b39*/
        *(float *)(a8 + 0x1B8) = v61; /*0x640b41*/
        if ( *GameSetting_GetSafeFloatPointer(&flt_B36778[0x42]) <= (double)v61 ) /*0x640b59*/
        {
          ((void (__thiscall *)(Actor *, PlayerCharacter *))a3->vtbl->Unk_D0)(a3, a4); /*0x640b66*/
          *(float *)(arg8 + 0x1B8) = 0.0; /*0x640b6e*/
        }
      }
    }
  }
  if ( flt_B36778[0] < (double)a8 ) /*0x640b93*/
  {
    if ( !a4->vtbl->super.super.super.IsDead((TESObjectREFR *)a4, 0) /*0x640bda*/
      || a4->vtbl->super.super.IsDead((MobileObject *)a4)
      || ((unsigned __int8 (__thiscall *)(LowProcess *))a4->super.super.super.process->Unk_7F)(a4->super.super.super.process)
      || *(float *)&a4->super.super.unk080[1] > 0.0 )
    {
      v11 = arg4; /*0x640be9*/
    }
    else
    {
      v11 = arg4; /*0x640bdc*/
      *(_BYTE *)(arg4 + 0x1D0) = 1; /*0x640be0*/
    }
    if ( !a4->vtbl->super.super.super.IsDead((TESObjectREFR *)a4, 0) ) /*0x640bf8*/
    {
      if ( a4->vtbl->super.GetCombatController(a4) ) /*0x640c1a*/
      {
        if ( (!sub_5E8A90(a4) || !sub_5E8A90(reference)) /*0x640c77*/
          && a4->super.super.super.process->GetUnk01E(a4->super.super.super.process)
          && Actor_IsGuardClass(a3)
          && a4 != reference )
        {
          v59 = 0; /*0x640c88*/
          v58 = 0; /*0x640c8a*/
          v57 = 0; /*0x640c8c*/
          (*(void (__thiscall **)(int, Actor *, PlayerCharacter *, _DWORD, _DWORD))(*(_DWORD *)v11 + 0x228))( /*0x640c96*/
            v11,
            a3,
            a4,
            0,
            0);
        }
        v12 = unk_B333B8 == 0; /*0x640c9a*/
        v60 = 0; /*0x640ca0*/
        if ( v12 ) /*0x640ca4*/
        {
          v13 = (Actor ****)a4->vtbl->super.GetCombatController(a4); /*0x640cb6*/
          sub_6144D0(v13, (TESObjectREFR *)a3, (TESObjectREFR **)&v60); /*0x640cba*/
          if ( !v60 ) /*0x640cc9*/
            goto LABEL_40; /*0x640cc9*/
          sub_5E9D40((TESObjectREFR *)a3, v60); /*0x640cd2*/
        }
        else
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 0); /*0x640ce8*/
          TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID); /*0x640cf2*/
          if ( !v15 /*0x640d0f*/
            || (v16 = Actor_GetActorBaseForm(a3, 0), TESActorBaseData_AllFactionsAreEvil(&v16[1].member.refID), !v17) )
          {
            v18 = Actor_GetActorBaseForm((Actor *)a4, 0); /*0x640d1a*/
            TESActorBaseData_AllFactionsAreEvil(&v18[1].member.refID); /*0x640d24*/
            if ( !v19 ) /*0x640d2b*/
            {
              v20 = Actor_GetActorBaseForm(a3, 0); /*0x640d30*/
              TESActorBaseData_AllFactionsAreEvil(&v20[1].member.refID); /*0x640d3a*/
            }
          }
        }
        if ( v60 ) /*0x640d55*/
        {
          v21 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)v60); /*0x640d64*/
          v22 = v21; /*0x640d68*/
          if ( v21 ) /*0x640d6a*/
          {
            while ( *v21 ) /*0x640d75*/
            {
              v23 = sub_67B6B0((int **)*v21, (int)v60, 0); /*0x640d7e*/
              if ( v23 && *(_BYTE *)(v23 + 4) ) /*0x640d87*/
              {
                v59 = 1; /*0x640d98*/
                v58 = *(PlayerCharacter **)v23; /*0x640d9d*/
                break; /*0x640d9d*/
              }
              v21 = (_DWORD *)v21[1]; /*0x640d8d*/
              if ( !v21 ) /*0x640d92*/
                break; /*0x640d92*/
            }
            BSSimpleList_Clear(v22); /*0x640da1*/
          }
          FormHeapFree((unsigned int)v22); /*0x640da9*/
        }
      }
LABEL_40:
      process = a4->super.super.super.process; /*0x640db1*/
      v25 = (TESObjectREFR *)a3; /*0x640db6*/
      if ( process && ((int (__thiscall *)(LowProcess *))process->Unk_F3)(process) ) /*0x640dc2*/
        v26 = (PlayerCharacter *)((int (__thiscall *)(LowProcess *))a4->super.super.super.process->Unk_F3)(a4->super.super.super.process); /*0x640dd5*/
      else
        v26 = a4; /*0x640dd9*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v57 + 0x3D0))(v57) ) /*0x640de7*/
      {
        a3 = (Actor *)(*(int (__thiscall **)(int))(*(_DWORD *)v57 + 0x3D0))(v57); /*0x640dfb*/
        if ( a3 == (Actor *)reference ) /*0x640e04*/
        {
          a3 = (Actor *)v26; /*0x640e06*/
          v26 = reference; /*0x640e08*/
        }
      }
      if ( v59 ) /*0x640e0f*/
      {
        if ( v58 ) /*0x640e16*/
        {
          if ( Actor_IsGuardClass(a3) && v58 != reference ) /*0x640e2d*/
          {
            aggressionStat = 1; /*0x640e3f*/
            v54 = 0; /*0x640e43*/
            a7 = 0; /*0x640e45*/
            v52 = 0; /*0x640e47*/
            v51 = 0; /*0x640e4b*/
            v50 = a3; /*0x640e50*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v57 + 0x228))(v57); /*0x640e51*/
          }
        }
      }
      v49 = ((int (__thiscall *)(Actor *))a3->vtbl->GetActorValue)(a3); /*0x640e61*/
      LOBYTE(v27) = Actor_IsCreature(a3); /*0x640e69*/
      v48 = v27; /*0x640e72*/
      *(float *)&a6 = TesObjectREF_GetDistance((TESObjectREFR *)a3, (TESObjectREFR *)v26, 0); /*0x640e87*/
      v45 = COERCE_FLOAT(((int (__thiscall *)(Actor *))a3->vtbl->GetActorValue)(a3)); /*0x640e96*/
      v28 = ((int (__thiscall *)(Actor *))a3->vtbl->GetDisposition)(a3); /*0x640ea1*/
      shouldActorFight(v28, (int)v26, aggressionStat, v45, 0x21, a6, a7, v48); /*0x640ea4*/
      v55 = v29; /*0x640eae*/
      if ( Actor_IsGhost(a3) || Actor_IsGhost((Actor *)v26) || a3 == (Actor *)v26 ) /*0x640ec8*/
      {
        v55 = 0; /*0x640eca*/
      }
      else if ( v55 > 0 ) /*0x640ed9*/
      {
        goto LABEL_67; /*0x640ed9*/
      }
      SafeFloatPointer = GameSetting_GetSafeFloatPointer(unk_B36C48); /*0x640ee4*/
      Double_To_SInt32(*SafeFloatPointer); /*0x640eeb*/
      if ( Shared_GetDwordAtOffset40(a4) ) /*0x640ef6*/
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x640f01*/
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x640f08*/
        {
          v32 = GameSetting_GetSafeFloatPointer(unk_B36C50); /*0x640f16*/
          Double_To_SInt32(*v32); /*0x640f1d*/
        }
      }
      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD, int, int))v25->vtbl[1].GetSleepState)( /*0x640f33*/
              v25,
              0,
              v52,
              v49) )
      {
        if ( a4->vtbl->super.GetCombatController(a4) ) /*0x640f43*/
        {
          v33 = a4->vtbl->super.GetCombatController(a4); /*0x640f54*/
          if ( sub_613670(v33, (int)v25) ) /*0x640f58*/
          {
            if ( (double)v55 >= TesObjectREF_GetDistance(v25, (TESObjectREFR *)a4, 0) /*0x640f8f*/
              && !sub_5E6CD0((TESObjectREFR *)a4, 0)
              && !a4->vtbl->super.IsYielding((Actor *)a4) )
            {
              v34 = v50; /*0x640f95*/
              sub_633C50((Actor *)a4); /*0x640f9c*/
              goto LABEL_68; /*0x640fa1*/
            }
          }
        }
      }
LABEL_67:
      v34 = v50; /*0x640fa3*/
LABEL_68:
      if ( !Actor_IsCreature((Actor *)v25) /*0x640fe6*/
        && Actor_IsNPC((Actor *)a4)
        && (Actor::GetRaceIfNPC((Actor *)a4)->isPlayable & 1) != 0
        && (v35 = Actor_GetActorBaseForm((Actor *)a4, 0), TESActorBaseData_AllFactionsAreEvil(&v35[1].member.refID),
                                                          !v36)
        || v54 <= 0 )
      {
        if ( !Actor_IsGuardClass((Actor *)v25) /*0x6410a7*/
          || !Actor_IsNPC((Actor *)a4)
          || a4->vtbl->super.IsInCombat((Actor *)a4, 0)
          || ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v25->vtbl[1].GetSleepState)(v25, 0)
          || (double)(int)MEMORY[0xB36A60].value > ((double (__thiscall *)(PlayerCharacter *))a4->vtbl->super.Unk_94)(a4)
          || a4 == reference && PlayerCharacter::IsJailed(reference) )
        {
          if ( !Actor_IsGuardClass((Actor *)v25) && v52 > 0 ) /*0x6410dd*/
          {
            if ( a4->vtbl->super.GetCombatController(a4) ) /*0x6410ed*/
            {
              v39 = a4->vtbl->super.GetCombatController(a4); /*0x6410fd*/
              v40 = (void *)CombatController_GetCurrentTarget((int)v39); /*0x641106*/
            }
            else
            {
              v40 = v51; /*0x64110a*/
            }
            if ( !sub_5E8A90(a4) || !v40 || !sub_5E8A90(v40) ) /*0x64111f*/
            {
              Actor_IsGuardClass((Actor *)v25); /*0x64112e*/
              v41 = Actor_GetActorBaseForm((Actor *)v25, 0); /*0x641137*/
              TESActorBaseData_AllFactionsAreEvil(&v41[1].member.refID); /*0x641141*/
              if ( v42 ) /*0x641148*/
              {
                LOBYTE(v52) = 1; /*0x64114a*/
              }
              else
              {
                v43 = Actor_GetActorBaseForm((Actor *)a4, 0); /*0x641155*/
                TESActorBaseData_AllFactionsAreEvil(&v43[1].member.refID); /*0x64115f*/
                if ( v44 ) /*0x641166*/
                  LOBYTE(v52) = 0; /*0x641168*/
                else
                  LOBYTE(v52) = sub_67CB50((int *)&qword_B3BB2C[0xA1], (Actor *)a4) == 0; /*0x64117f*/
              }
              v46 = 1; /*0x641189*/
              if ( ((unsigned __int8 (__thiscall *)(Actor *, TESObjectREFR *, PlayerCharacter *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))v34->vtbl->ProcessControl)( /*0x6411a1*/
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
                v34[1].members.greaterPowerList.next = (PowerListEntry *)a4; /*0x6411a7*/
              }
            }
          }
          sub_63F950(v34, (Actor *)v25, (TESObjectREFR *)a4, v46, (_BYTE *)0x24); /*0x6411bb*/
        }
        else
        {
          ((void (__thiscall *)(TESObjectREFR *, _DWORD, _DWORD, _DWORD))v25->vtbl[1].GetActiveSkinInfo)(v25, 0, 0, 0); /*0x6410c2*/
          sub_63F950(v34, (Actor *)v25, (TESObjectREFR *)a4, (int)a4, (_BYTE *)0x24); /*0x6410c4*/
        }
      }
      else
      {
        Actor_IsGuardClass((Actor *)v25); /*0x640fea*/
        v37 = Actor_GetActorBaseForm((Actor *)v25, 0); /*0x640ff3*/
        TESActorBaseData_AllFactionsAreEvil(&v37[1].member.refID); /*0x640ffd*/
        if ( v38 ) /*0x641004*/
          LOBYTE(v54) = 1; /*0x641006*/
        else
          LOBYTE(v54) = sub_67CB50((int *)&qword_B3BB2C[0xA1], (Actor *)a4) == 0; /*0x64101d*/
        ((void (__thiscall *)(Actor *, TESObjectREFR *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, int, _DWORD))v34->vtbl->ProcessControl)( /*0x641040*/
          v34,
          v25,
          a4,
          0,
          0,
          0,
          v54,
          0);
        sub_63F950(v34, (Actor *)v25, (TESObjectREFR *)a4, 0, (_BYTE *)0x24); /*0x641042*/
      }
    }
  }
}
