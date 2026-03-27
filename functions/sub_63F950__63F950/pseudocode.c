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
  int *SafeFloatPointer; // eax
  TESObjectCELL *ParentCell; // eax
  int *v24; // eax
  char v25; // al
  _DWORD *v26; // eax
  char v27; // al
  int **v28; // eax
  _DWORD *p_vtbl; // edi
  int *v30; // eax
  Actor **v31; // eax
  TESForm *ActorBaseForm; // ebx
  char v33; // al
  int v34; // eax
  TESForm *v35; // ebx
  char v36; // al
  int v37; // eax
  float a5; // [esp+24h] [ebp-48h]
  float a5a; // [esp+24h] [ebp-48h]
  bool IsCreature; // [esp+2Ch] [ebp-40h]
  bool v42; // [esp+2Ch] [ebp-40h]
  int v43; // [esp+34h] [ebp-38h]
  int v44; // [esp+34h] [ebp-38h]
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
  int a6a; // [esp+78h] [ebp+Ch]

  v6 = (*(int (__fastcall **)(void *))(*(_DWORD *)this + 0x184))(this);
  v52 = v6;
  if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3)
    && (!v6 || (*(_DWORD *)(v6 + 0x1C) & 0x1000) == 0)
    && !sub_5E6B70(a2)
    && !sub_5E6BA0(a2)
    && !a2->vtbl->IsInCombat(a2, 0)
    && flt_B36B08 >= TesObjectREF_GetDistance(a3, (TESObjectREFR *)a2, 0) )
  {
    v8 = (int ***)sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)a3);
    v9 = *v8;
    v56 = v8;
    v55 = *v8;
    if ( *v8 && sub_67B710(v9) && !sub_67B6B0(v9, (int)a2, 0) )
    {
      v57 = (Actor *)sub_67B6B0(v9, (int)a3, 0);
      if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) )
      {
        v10 = *(Actor ****)(((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) + 0x40);
        vtbl = (TESChildCELL *)v10;
        if ( v10 )
        {
          while ( *v10 && !a2->vtbl->IsInCombat(a2, 1) && !sub_5E6BA0(a2) )
          {
            v11 = **v10;
            v53 = sub_67B6B0(v55, (int)v11, 0);
            v51 = ((int (__thiscall *)(Actor *, Actor *))a2->vtbl->GetDisposition)(a2, v11);
            if ( v11 )
            {
              if ( sub_5E9D40((TESObjectREFR *)a2, v11) )
              {
                v12 = ((int (__thiscall *)(Actor *, TESObjectREFR *))a2->vtbl->GetDisposition)(a2, a3);
                v43 = a2->vtbl->GetActorValue(a2, kActorVal_Responsibility);
                IsCreature = Actor_IsCreature(a2);
                a5 = TesObjectREF_GetDistance((TESObjectREFR *)a2, a3, 0);
                v13 = ((int (__thiscall *)(Actor *))a2->vtbl->GetActorValue)(a2);
                shouldActorFight(v12, friendlyFight_, v13, COERCE_FLOAT(0x21), SLOBYTE(a5), a6, IsCreature, 0);
                v15 = v14;
                v16 = (*(int (__thiscall **)(int, Actor *, int))(*(_DWORD *)v45 + 0x3B0))(v45, v11, v43);
                if ( v16 )
                {
                  if ( *(int *)(v16 + 0xC) > 0 && v15 > 0 )
                  {
                    (*(void (__thiscall **)(void *, Actor *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)this + 0x228))(
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
                    break;
                  }
                }
              }
            }
            friendlyFight_ = 0;
            if ( sub_5E9D40((TESObjectREFR *)a2, (Actor *)a3) )
              friendlyFight_ = ((int (__thiscall *)(Actor *, TESObjectREFR *))a2->vtbl->GetDisposition)(a2, a3);
            if ( v11 && (!sub_5E6C60(a2) || sub_5E6C60(v11)) )
            {
              LOBYTE(responsibility) = 0;
              v17 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)a3);
              v47 = v17;
              v54 = 0;
              if ( v17 )
              {
                while ( *v17 )
                {
                  v54 = (int **)*v17;
                  v18 = sub_67B6B0((int **)*v17, (int)a3, 0);
                  if ( v18 && *(_BYTE *)(v18 + 4) )
                  {
                    LOBYTE(responsibility) = 1;
                    break;
                  }
                  v17 = (_DWORD *)v17[1];
                  if ( !v17 )
                    break;
                }
                BSSimpleList_Clear(v47);
              }
              FormHeapFree((unsigned int)v47);
              v44 = a2->vtbl->GetActorValue(a2, kActorVal_Responsibility);
              v42 = Actor_IsCreature(a2);
              a5a = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)v11, 0);
              v19 = ((int (__thiscall *)(Actor *))a2->vtbl->GetActorValue)(a2);
              shouldActorFight(
                friendlyFight_,
                responsibility,
                v19,
                COERCE_FLOAT(0x21),
                SLOBYTE(a5a),
                a6,
                v42,
                responsibility);
              friendlyFight_ = v20;
              v21 = (*(int (__thiscall **)(int, Actor *, int))(*(_DWORD *)v45 + 0x3B0))(v45, v11, v44);
              if ( v21 && *(int *)(v21 + 0xC) > 0 && v51 > 0 )
              {
                (*(void (__thiscall **)(int, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _BYTE, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v45 + 0x228))(
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
                break;
              }
              SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36C48);
              v48 = Double_To_SInt32(*(float *)SafeFloatPointer);
              if ( TESObjectREFR_GetParentCell(a3) )
              {
                ParentCell = TESObjectREFR_GetParentCell(a3);
                if ( TESObjectCELL_IsInterior(ParentCell) )
                {
                  v24 = GameSetting_GetSafeFloatPointer((int *)&unk_B36C50);
                  v48 = Double_To_SInt32(*(float *)v24);
                }
              }
              if ( !Actor_IsCreature((Actor *)a3) )
              {
                sub_4DB760(a3);
                if ( !v25 && !a2->vtbl->IsInCombat(a2, 0) )
                {
                  if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) )
                  {
                    v26 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3);
                    if ( sub_613670(v26, (int)a2) )
                    {
                      if ( (double)v48 >= TesObjectREF_GetDistance((TESObjectREFR *)a2, a3, 0)
                        && !sub_5E6CD0((TESObjectREFR *)a2, 0)
                        && !a2->vtbl->IsYielding(a2) )
                      {
                        sub_633C50((PlayerCharacter *)v11);
                        break;
                      }
                    }
                  }
                }
              }
              if ( !sub_5E6BA0(a2)
                && !a2->vtbl->IsInCombat(a2, 0)
                && ((double)v48 >= TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)v11, 0)
                 || v52 && *(_BYTE *)(v52 + 0x20) == 4)
                && !(*(unsigned __int8 (**)(void))(*(_DWORD *)v45 + 0x210))() )
              {
                *argC = 1;
                dword_B3B930 = (int)v54;
              }
            }
            else if ( sub_5E6C60(a2) )
            {
              sub_4DB760(a3);
              if ( !v27 )
              {
                if ( v57->members.super.super.super.type )
                {
                  sub_633C50((PlayerCharacter *)a3);
                  break;
                }
                if ( v53 && *(_BYTE *)(v53 + 4) )
                {
                  sub_633C50(*(PlayerCharacter **)v53);
                  break;
                }
              }
            }
            vtbl = (TESChildCELL *)vtbl[1].vtbl;
            v10 = (Actor ***)vtbl;
            if ( !vtbl )
              break;
          }
        }
      }
      if ( ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) )
      {
        v28 = *(int ***)(((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3) + 0x40);
        p_vtbl = &v57->vtbl;
        v59 = (TESChildCELL *)v28;
        if ( v28 )
        {
          while ( 1 )
          {
            v30 = *v28;
            if ( !v30 )
              break;
            a6a = *v30;
            v31 = (Actor **)sub_67B6B0(v55, *v30, 0);
            p_vtbl = v31;
            ActorBaseForm = 0;
            if ( v31 )
            {
              if ( *v31 )
              {
                ActorBaseForm = Actor_GetActorBaseForm(*v31, 1);
                if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) )
                  ActorBaseForm = Actor_GetActorBaseForm((Actor *)*p_vtbl, 0);
              }
              if ( sub_5E32D0((void *)*p_vtbl) && sub_5E8A90((void *)*p_vtbl) )
              {
                TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID);
                if ( !v33 && !*((_BYTE *)p_vtbl + 4) )
                {
                  v34 = sub_675BF0(&ActorProcessManager_ptr, (int)a3, a6a, 3u);
                  if ( v34 )
                    ((void (__thiscall *)(Actor *, int, _DWORD, int, _DWORD))a2->vtbl->ManageAlarm)(a2, v34, 0, 1, 0);
                }
              }
            }
            v59 = (TESChildCELL *)v59[1].vtbl;
            if ( !v59 )
              break;
            v28 = (int **)v59;
          }
        }
      }
      else
      {
        p_vtbl = &v57->vtbl;
      }
      if ( p_vtbl )
      {
        if ( (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*p_vtbl + 0x338))(*p_vtbl) == TESDataHandler_g_PlayerRef )
        {
          v35 = Actor_GetActorBaseForm((Actor *)*p_vtbl, 1);
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v35[2].member.refID) )
            v35 = Actor_GetActorBaseForm((Actor *)*p_vtbl, 0);
          TESActorBaseData_AllFactionsAreEvil(&v35[1].member.refID);
          if ( !v36 )
          {
            v37 = sub_675BF0(&ActorProcessManager_ptr, *p_vtbl, (int)a3, 3u);
            if ( v37 )
              ((void (__thiscall *)(Actor *, int, _DWORD, int, _DWORD))a2->vtbl->ManageAlarm)(a2, v37, 0, 1, 0);
          }
        }
      }
      if ( sub_5E0F30(a2) )
      {
        a2->vtbl->AddPackageWakeUp(a2);
        --a2->members.super.process->editorPackProcedure;
      }
      v8 = v56;
    }
    BSSimpleList_Clear(v8);
    FormHeapFree((unsigned int)v8);
  }
  return 0;
}
