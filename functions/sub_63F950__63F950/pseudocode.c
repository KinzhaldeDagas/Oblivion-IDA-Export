char __thiscall sub_63F950(void *this, Actor *a2, TESObjectREFR *a3, int a6, _BYTE *argC)
{
  int v6; // esi
  int ***v8; // ebx
  int **v9; // edi
  Actor ***v10; // edi
  Actor *v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  _DWORD *v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  float *SafeFloatPointer; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  float *v24; // eax
  char v25; // al
  _DWORD *v26; // eax
  char v27; // al
  int **v28; // eax
  _DWORD *p_vtbl; // edi
  int *v30; // eax
  Actor **v31; // eax
  TESForm *ActorBaseForm; // ebx
  char v33; // al
  Crime *Crime; // eax
  TESForm *v35; // ebx
  char v36; // al
  Crime *v37; // eax
  float a5; // [esp+24h] [ebp-48h]
  float a5a; // [esp+24h] [ebp-48h]
  bool IsCreature; // [esp+2Ch] [ebp-40h]
  bool v42; // [esp+2Ch] [ebp-40h]
  SInt32 v43; // [esp+34h] [ebp-38h]
  SInt32 v44; // [esp+34h] [ebp-38h]
  int v45; // [esp+44h] [ebp-28h]
  _DWORD *v47; // [esp+4Ch] [ebp-20h]
  int v48; // [esp+4Ch] [ebp-20h]
  int responsibility; // [esp+50h] [ebp-1Ch]
  int friendlyFight_; // [esp+54h] [ebp-18h]
  int v51; // [esp+58h] [ebp-14h]
  int v52; // [esp+5Ch] [ebp-10h]
  int v53; // [esp+60h] [ebp-Ch]
  int **v54; // [esp+60h] [ebp-Ch]
  int **v55; // [esp+64h] [ebp-8h]
  int ***v56; // [esp+68h] [ebp-4h]
  Actor *v57; // [esp+70h] [ebp+4h]
  TESChildCELL *vtbl; // [esp+74h] [ebp+8h]
  TESChildCELL *v59; // [esp+74h] [ebp+8h]
  TESObjectREFR *a6a; // [esp+78h] [ebp+Ch]

  v6 = (*(int (__fastcall **)(void *))(*(_DWORD *)this + 0x184))(this); /*0x63f967*/
  v52 = v6; /*0x63f974*/
  if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) /*0x63f9e3*/
    && (!v6 || (*(_DWORD *)(v6 + 0x1C) & 0x1000) == 0)
    && !sub_5E6B70(a2)
    && !sub_5E6BA0(a2)
    && !a2->vtbl->IsInCombat(a2, 0)
    && unk_B36B08 >= TesObjectREF_GetDistance(a3, (TESObjectREFR *)a2, 0) )
  {
    v8 = (int ***)sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)a3); /*0x63f9f8*/
    v9 = *v8; /*0x63f9fa*/
    v56 = v8; /*0x63f9fe*/
    v55 = *v8; /*0x63fa02*/
    if ( *v8 && sub_67B710(v9) && !sub_67B6B0(v9, (int)a2, 0) ) /*0x63fa20*/
    {
      v57 = (Actor *)sub_67B6B0(v9, (int)a3, 0); /*0x63fa39*/
      if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) ) /*0x63fa45*/
      {
        v10 = *(Actor ****)(((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) + 0x40); /*0x63fa5c*/
        vtbl = (TESChildCELL *)v10; /*0x63fa61*/
        if ( v10 ) /*0x63fa65*/
        {
          while ( *v10 && !a2->vtbl->IsInCombat(a2, 1) && !sub_5E6BA0(a2) ) /*0x63fa98*/
          {
            v11 = **v10; /*0x63faa0*/
            v53 = sub_67B6B0(v55, (int)v11, 0); /*0x63fab0*/
            v51 = ((int (__thiscall *)(Actor *, Actor *))a2->vtbl->GetDisposition)(a2, v11); /*0x63fac1*/
            if ( v11 ) /*0x63fac5*/
            {
              if ( sub_5E9D40((TESObjectREFR *)a2, v11) ) /*0x63face*/
              {
                v12 = ((int (__thiscall *)(Actor *, TESObjectREFR *))a2->vtbl->GetDisposition)(a2, a3); /*0x63fae6*/
                v43 = a2->vtbl->GetActorValue(a2, kActorVal_Responsibility); /*0x63faf4*/
                IsCreature = Actor_IsCreature(a2); /*0x63fb02*/
                a5 = TesObjectREF_GetDistance((TESObjectREFR *)a2, a3, 0); /*0x63fb17*/
                v13 = ((int (__thiscall *)(Actor *))a2->vtbl->GetActorValue)(a2); /*0x63fb1e*/
                shouldActorFight(v12, friendlyFight_, v13, COERCE_FLOAT(0x21), SLOBYTE(a5), a6, IsCreature, 0); /*0x63fb27*/
                v15 = v14; /*0x63fb35*/
                v16 = (*(int (__thiscall **)(int, Actor *, SInt32))(*(_DWORD *)v45 + 0x3B0))(v45, v11, v43); /*0x63fb3e*/
                if ( v16 ) /*0x63fb42*/
                {
                  if ( *(int *)(v16 + 0xC) > 0 && v15 > 0 ) /*0x63fb4c*/
                  {
                    (*(void (__thiscall **)(void *, Actor *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 0x228))( /*0x63fe1e*/
                      this,
                      a2,
                      a3,
                      0,
                      0,
                      0,
                      0,
                      0,
                      0,
                      0,
                      1);
                    break; /*0x63fe20*/
                  }
                }
              }
            }
            friendlyFight_ = 0; /*0x63fb55*/
            if ( sub_5E9D40((TESObjectREFR *)a2, (Actor *)a3) ) /*0x63fb5d*/
              friendlyFight_ = ((int (__thiscall *)(Actor *, TESObjectREFR *))a2->vtbl->GetDisposition)(a2, a3); /*0x63fb73*/
            if ( v11 && (!Actor_IsGuardClass(a2) || Actor_IsGuardClass(v11)) ) /*0x63fb8c*/
            {
              LOBYTE(responsibility) = 0; /*0x63fba1*/
              v17 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)a3); /*0x63fbab*/
              v47 = v17; /*0x63fbaf*/
              v54 = 0; /*0x63fbb3*/
              if ( v17 ) /*0x63fbbb*/
              {
                while ( *v17 ) /*0x63fbc4*/
                {
                  v54 = (int **)*v17; /*0x63fbcb*/
                  v18 = sub_67B6B0((int **)*v17, (int)a3, 0); /*0x63fbcf*/
                  if ( v18 && *(_BYTE *)(v18 + 4) ) /*0x63fbd8*/
                  {
                    LOBYTE(responsibility) = 1; /*0x63fbe7*/
                    break; /*0x63fbe7*/
                  }
                  v17 = (_DWORD *)v17[1]; /*0x63fbde*/
                  if ( !v17 ) /*0x63fbe3*/
                    break; /*0x63fbe3*/
                }
                BSSimpleList_Clear(v47); /*0x63fbec*/
              }
              FormHeapFree((unsigned int)v47); /*0x63fbfa*/
              v44 = a2->vtbl->GetActorValue(a2, kActorVal_Responsibility); /*0x63fc14*/
              v42 = Actor_IsCreature(a2); /*0x63fc23*/
              a5a = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)v11, 0); /*0x63fc36*/
              v19 = ((int (__thiscall *)(Actor *))a2->vtbl->GetActorValue)(a2); /*0x63fc3d*/
              shouldActorFight( /*0x63fc4a*/
                friendlyFight_,
                responsibility,
                v19,
                COERCE_FLOAT(0x21),
                SLOBYTE(a5a),
                a6,
                v42,
                responsibility);
              friendlyFight_ = v20; /*0x63fc58*/
              v21 = (*(int (__thiscall **)(int, Actor *, SInt32))(*(_DWORD *)v45 + 0x3B0))(v45, v11, v44); /*0x63fc65*/
              if ( v21 && *(int *)(v21 + 0xC) > 0 && v51 > 0 ) /*0x63fc76*/
              {
                (*(void (__thiscall **)(int, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _BYTE, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v45 + 0x228))( /*0x63fe41*/
                  v45,
                  a2,
                  v11,
                  0,
                  0,
                  0,
                  responsibility,
                  0,
                  0,
                  0,
                  1);
                break; /*0x63fe43*/
              }
              SafeFloatPointer = GameSetting_GetSafeFloatPointer(unk_B36C48); /*0x63fc81*/
              v48 = Double_To_SInt32(*SafeFloatPointer); /*0x63fc8f*/
              if ( Shared_GetDwordAtOffset40(a3) ) /*0x63fc93*/
              {
                DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x63fc9e*/
                if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x63fca5*/
                {
                  v24 = GameSetting_GetSafeFloatPointer(unk_B36C50); /*0x63fcb3*/
                  v48 = Double_To_SInt32(*v24); /*0x63fcbf*/
                }
              }
              if ( !Actor_IsCreature((Actor *)a3) ) /*0x63fcc5*/
              {
                sub_4DB760(a3); /*0x63fcd4*/
                if ( !v25 && !a2->vtbl->IsInCombat(a2, 0) ) /*0x63fce9*/
                {
                  if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) ) /*0x63fcfa*/
                  {
                    v26 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3); /*0x63fd0c*/
                    if ( sub_613670(v26, (int)a2) ) /*0x63fd10*/
                    {
                      if ( (double)v48 >= TesObjectREF_GetDistance((TESObjectREFR *)a2, a3, 0) /*0x63fd4b*/
                        && !sub_5E6CD0((TESObjectREFR *)a2, 0)
                        && !a2->vtbl->IsYielding(a2) )
                      {
                        sub_633C50(v11); /*0x63fe48*/
                        break; /*0x63fe48*/
                      }
                    }
                  }
                }
              }
              if ( !sub_5E6BA0(a2) /*0x63fda4*/
                && !a2->vtbl->IsInCombat(a2, 0)
                && ((double)v48 >= TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)v11, 0)
                 || v52 && *(_BYTE *)(v52 + 0x20) == 4)
                && !(*(unsigned __int8 (**)(void))(*(_DWORD *)v45 + 0x210))() )
              {
                *argC = 1; /*0x63fdb2*/
                unk_B3B930 = (int)v54; /*0x63fdb5*/
              }
            }
            else if ( Actor_IsGuardClass(a2) ) /*0x63fdbf*/
            {
              sub_4DB760(a3); /*0x63fdca*/
              if ( !v27 ) /*0x63fdd1*/
              {
                if ( v57->members.super.super.super.type ) /*0x63fdd7*/
                {
                  sub_633C50((Actor *)a3); /*0x63fe4b*/
                  break; /*0x63fe4b*/
                }
                if ( v53 && *(_BYTE *)(v53 + 4) ) /*0x63fde5*/
                {
                  sub_633C50(*(Actor **)v53); /*0x63fe54*/
                  break; /*0x63fe54*/
                }
              }
            }
            vtbl = (TESChildCELL *)vtbl[1].vtbl; /*0x63fdf4*/
            v10 = (Actor ***)vtbl; /*0x63fdef*/
            if ( !vtbl ) /*0x63fdf8*/
              break; /*0x63fdf8*/
          }
        }
      }
      if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) ) /*0x63fe64*/
      {
        v28 = *(int ***)(((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) + 0x40); /*0x63fe7b*/
        p_vtbl = &v57->vtbl; /*0x63fe80*/
        v59 = (TESChildCELL *)v28; /*0x63fe84*/
        if ( v28 ) /*0x63fe88*/
        {
          while ( 1 ) /*0x63fe94*/
          {
            v30 = *v28; /*0x63fe94*/
            if ( !v30 ) /*0x63fe98*/
              break; /*0x63fe98*/
            a6a = (TESObjectREFR *)*v30; /*0x63fea7*/
            v31 = (Actor **)sub_67B6B0(v55, *v30, 0); /*0x63feab*/
            p_vtbl = v31; /*0x63feb0*/
            ActorBaseForm = 0; /*0x63feb2*/
            if ( v31 ) /*0x63feb6*/
            {
              if ( *v31 ) /*0x63feb8*/
              {
                ActorBaseForm = Actor_GetActorBaseForm(*v31, 1); /*0x63fec5*/
                if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) ) /*0x63feca*/
                  ActorBaseForm = Actor_GetActorBaseForm((Actor *)*p_vtbl, 0); /*0x63fedc*/
              }
              if ( Actor::HasNPCBaseForm((Actor *)*p_vtbl) && sub_5E8A90((void *)*p_vtbl) ) /*0x63feeb*/
              {
                TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID); /*0x63fef7*/
                if ( !v33 && !*((_BYTE *)p_vtbl + 4) ) /*0x63ff00*/
                {
                  Crime = ActorProcessManager_FindCrime( /*0x63ff12*/
                            (ActorProcessManager *)&qword_B3BB2C[0x75],
                            (Actor *)a3,
                            a6a,
                            kCrime_Attack);
                  if ( Crime ) /*0x63ff19*/
                    ((void (__thiscall *)(Actor *, Crime *, _DWORD, int, _DWORD))a2->vtbl->ManageAlarm)( /*0x63ff2c*/
                      a2,
                      Crime,
                      0,
                      1,
                      0);
                }
              }
            }
            v59 = (TESChildCELL *)v59[1].vtbl; /*0x63ff37*/
            if ( !v59 ) /*0x63ff3b*/
              break; /*0x63ff3b*/
            v28 = (int **)v59; /*0x63fe90*/
          }
        }
      }
      else
      {
        p_vtbl = &v57->vtbl; /*0x63ff43*/
      }
      if ( p_vtbl ) /*0x63ff49*/
      {
        if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*p_vtbl + 0x338))(*p_vtbl) == reference ) /*0x63ff5d*/
        {
          v35 = Actor_GetActorBaseForm((Actor *)*p_vtbl, 1); /*0x63ff68*/
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v35[2].member.refID) ) /*0x63ff6d*/
            v35 = Actor_GetActorBaseForm((Actor *)*p_vtbl, 0); /*0x63ff7f*/
          TESActorBaseData_AllFactionsAreEvil(&v35[1].member.refID); /*0x63ff84*/
          if ( !v36 ) /*0x63ff8b*/
          {
            v37 = ActorProcessManager_FindCrime( /*0x63ff98*/
                    (ActorProcessManager *)&qword_B3BB2C[0x75],
                    (Actor *)*p_vtbl,
                    a3,
                    kCrime_Attack);
            if ( v37 ) /*0x63ff9f*/
              ((void (__thiscall *)(Actor *, Crime *, _DWORD, int, _DWORD))a2->vtbl->ManageAlarm)(a2, v37, 0, 1, 0); /*0x63ffb2*/
          }
        }
      }
      if ( Actor::IsSleeping(a2) ) /*0x63ffb6*/
      {
        a2->vtbl->AddPackageWakeUp(a2); /*0x63ffc9*/
        --a2->members.super.process->editorPackProcedure; /*0x63ffce*/
      }
      v8 = v56; /*0x63ffd2*/
    }
    BSSimpleList_Clear(v8); /*0x63ffd8*/
    FormHeapFree((unsigned int)v8); /*0x63ffde*/
  }
  return 0; /*0x63ffe8*/
}
