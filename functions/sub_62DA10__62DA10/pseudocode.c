void __userpurge sub_62DA10(
        _DWORD *a1@<ecx>,
        double st0_0@<st7>,
        double st1_0@<st6>,
        double a4@<st5>,
        double st3_0@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        TESChildCELL *a10)
{
  char **v11; // ebp
  ExtraDataList ****v13; // eax
  ExtraDataList ****v14; // ebx
  double v15; // st7
  char v16; // al
  _DWORD *v17; // ebp
  _BYTE *v18; // ecx
  bool v19; // zf
  TESObjectREFR *v20; // ecx
  int v21; // ebx
  int RandomLargeInteger; // eax
  int v23; // edx
  ActorAnimData *v24; // eax
  ExtraDataList **v25; // eax
  int v26; // eax
  ActorAnimData *v27; // eax
  BaseExtraList *v28; // ebp
  int *v29; // ebx
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  TESObjectREFR **v33; // eax
  BSExtraDataVtbl *Owner; // eax
  int v35; // edi
  int v36; // eax
  TESObjectCELL *v37; // ebp
  int *v38; // eax
  double v39; // st7
  float *v40; // eax
  void (__thiscall *v41)(_DWORD *, TESChildCELL *); // edx
  int v42; // eax
  _DWORD *v43; // ebp
  TESForm *v44; // eax
  ActorAnimData *v45; // eax
  int v46; // edi
  _DWORD *v47; // eax
  int v48; // eax
  TESObjectREFR *v49; // ebp
  TESObjectCELL *ParentCell; // eax
  double Distance; // st7
  char v52; // al
  double v53; // st7
  TESObjectCELL *v54; // eax
  double v55; // st7
  char v56; // al
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v58; // eax
  char *CopyFromBase; // eax
  char v60; // al
  int v61; // edx
  char v62; // bl
  TESObjectREFRVtbl *v63; // eax
  TESObjectREFRVtbl *v64; // ebx
  BSExtraData *v65; // eax
  TESPackage *v66; // eax
  float a5; // [esp+24h] [ebp-3Ch]
  char v68; // [esp+28h] [ebp-38h]
  char v69; // [esp+2Ch] [ebp-34h]
  int v70; // [esp+30h] [ebp-30h]
  int v71; // [esp+34h] [ebp-2Ch]
  int v72; // [esp+38h] [ebp-28h]
  int v73; // [esp+3Ch] [ebp-24h]
  TESPackage *v74; // [esp+40h] [ebp-20h]
  float v75; // [esp+40h] [ebp-20h]
  int v76; // [esp+40h] [ebp-20h]
  int v77; // [esp+44h] [ebp-1Ch]
  _DWORD *i; // [esp+44h] [ebp-1Ch]
  int a2; // [esp+48h] [ebp-18h] BYREF
  int v80; // [esp+4Ch] [ebp-14h]
  int v81; // [esp+50h] [ebp-10h]
  int v82[3]; // [esp+54h] [ebp-Ch] BYREF
  TESChildCELL *v83; // [esp+64h] [ebp+4h]
  float v84; // [esp+64h] [ebp+4h]
  float a3; // [esp+64h] [ebp+4h]
  float v86; // [esp+64h] [ebp+4h]
  float v87; // [esp+64h] [ebp+4h]
  float v88; // [esp+64h] [ebp+4h]
  float v89; // [esp+64h] [ebp+4h]
  float v90; // [esp+64h] [ebp+4h]

  v11 = (char **)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*a1 + 0x184))(
                   a1,
                   a9,
                   a8,
                   a7,
                   a6,
                   st3_0,
                   a4,
                   st1_0,
                   st0_0);
  v74 = (TESPackage *)v11;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0xC0))(a1) || !sub_5E32D0(a10) )
  {
    v43 = (_DWORD *)sub_566D00(v11, (int)a10);
    if ( !sub_5E32D0(a10) )
    {
      if ( v43 )
      {
        if ( (v43[2] & 0x20) == 0 && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v43 + 0x170))(v43) + 4) == 0x19 )
        {
          (*((void (__thiscall **)(TESChildCELL *, _DWORD *, int))a10->vtbl + 0xB3))(a10, v43, 1);
          a1[9] = (*(int (__thiscall **)(_DWORD *))(*v43 + 0x170))(v43);
          v44 = (TESForm *)(*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v43 + 0x170))(v43, v43 + 0x11, 1);
          Actor_EquipIngredient_((PlayerCharacter *)a10, a7, a8, a9, v44, 0, v70);
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x594))(a1, a10);
        }
      }
    }
    if ( (*((int (__thiscall **)(TESChildCELL *))a10->vtbl + 0x59))(a10) )
    {
      v45 = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))a10->vtbl + 0x59))(a10);
      if ( sub_472EA0(v45) )
      {
        if ( ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0x220))(a1) > *(float *)&SrcStr )
        {
          v87 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0x220))(a1);
          v88 = v87 - flt_B33E9C;
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x224))(a1, LODWORD(v88));
          v47 = (_DWORD *)a1[0x63];
          *((_BYTE *)a1 + 0x1D0) = 0;
          for ( i = v47; i; v47 = i )
          {
            v48 = *v47;
            if ( !v48 )
              break;
            v49 = *(TESObjectREFR **)v48;
            if ( *(_DWORD *)(v48 + 4) == 3
              && !v49->vtbl->IsDead(v49, 0)
              && v49 != (TESObjectREFR *)a10
              && v49 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
              && Actor_IsNPC((Actor *)v49) )
            {
              v75 = flt_A57EF8;
              v89 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialRadiusToTriggerConversation);
              ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a10);
              if ( TESObjectCELL_IsInterior(ParentCell) )
                v89 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialRadiusToTriggerConversationInt);
              if ( v89 < fConst_200 )
                v75 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialRadiusToTriggerConversation);
              Distance = TesObjectREF_GetDistance(v49, (TESObjectREFR *)a10, 0);
              if ( v75 >= Distance )
              {
                sub_5ED730(v49, Distance, (int)a10);
                if ( v52 )
                {
                  v53 = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1 + 0x32)
                      ? *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36AA8)
                      : *((float *)a1 + 0x66) - flt_B33E9C;
                  *((float *)a1 + 0x66) = v53;
                  if ( *((float *)a1 + 0x66) <= 0.0 )
                    BSSimpleList_Clear(a1 + 0x64);
                  v76 = GetRandomLargeInteger_(0) % (int)0xFFFFFF9C;
                  if ( !sub_446C30((BSSimpleList_VoidPtr *)a1 + 0x32, v49) )
                  {
                    v90 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialchanceForConversation);
                    v54 = TESObjectREFR_GetParentCell((TESObjectREFR *)a10);
                    if ( TESObjectCELL_IsInterior(v54) )
                      v90 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialchanceForConversationInterior);
                    v55 = (double)v76;
                    if ( v90 > v55 )
                    {
                      BSSimpleList_PushFront(a1 + 0x64, (int)v49);
                      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESChildCELL *))v49[1].vtbl->super.super.InitializeComponent
                       + 0x5B))(
                        v49[1].vtbl,
                        a10);
                      if ( sub_5E32D0(v49)
                        && !v49->vtbl->HasFatigue(v49)
                        && !sub_5E0F30(v49)
                        && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v49) != (struct Concurrency::details::ScheduleGroupBase *)3 )
                      {
                        sub_5ED730(v49, v55, (int)a10);
                        if ( v56 )
                        {
                          vtbl = v49[1].vtbl;
                          if ( vtbl )
                          {
                            if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent
                                   + 0x80))(vtbl)
                              && v49 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
                              && !v49->vtbl->IsDead(v49, 0) )
                            {
                              if ( v49->vtbl->GetNiNode(v49) )
                              {
                                v58 = v49[1].vtbl;
                                if ( v58 )
                                {
                                  CopyFromBase = (char *)v58->super.super.CopyFromBase;
                                  if ( !CopyFromBase || !sub_567770(CopyFromBase) )
                                  {
                                    v60 = (*((int (__thiscall **)(TESChildCELL *, TESObjectREFR *, _DWORD, _DWORD))a10->vtbl
                                           + 0xBD))(
                                            a10,
                                            v49,
                                            0,
                                            0);
                                    v61 = *a1;
                                    *((float *)a1 + 0x76) = 0.0;
                                    v62 = v60;
                                    (*(void (__thiscall **)(_DWORD *, _DWORD))(v61 + 0x224))(a1, 0.0);
                                    *((float *)a1 + 0x6A) = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36AB0);
                                    if ( v62 )
                                    {
                                      if ( !sub_5E0380((Actor *)v49)
                                        || (sub_5E0380((Actor *)v49)->members.packageFlags & 0x1000) == 0 )
                                      {
                                        v63 = v49[1].vtbl;
                                        if ( v63->super.super.CopyFromBase )
                                        {
                                          if ( !sub_5660A0((TESPackage *)v63->super.super.CopyFromBase) )
                                          {
                                            v64 = v49[1].vtbl;
                                            v69 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v64->super.super.InitializeComponent
                                                   + 0xE4))(v64);
                                            v68 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v64->super.super.InitializeComponent
                                                   + 0x30))(v64);
                                            v65 = (BSExtraData *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v64->super.super.InitializeComponent
                                                                  + 0x33))(v64);
                                            sub_4268B0(
                                              &v49->member.baseExtraList,
                                              (TESPackage *)v64->super.super.CopyFromBase,
                                              (int)v64->super.super.ClearComponentReferences,
                                              v65,
                                              v68,
                                              v69);
                                          }
                                        }
                                        v66 = sub_5E0380((Actor *)a10);
                                        Actor_AddPackage_((Actor *)v49, v66, 0, 1);
                                        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESChildCELL *, int))v49[1].vtbl->super.super.InitializeComponent
                                         + 0x62))(
                                          v49[1].vtbl,
                                          a10,
                                          1);
                                      }
                                    }
                                    *((float *)a1 + 0x76) = 0.0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      return;
                    }
                  }
                }
              }
            }
            i = (_DWORD *)i[1];
          }
        }
        else
        {
          sub_520F00(a1[9]);
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x48))(a1, a10);
          v46 = *a1;
          v86 = (double)(GetRandomLargeInteger_(0) % 0x1388) * dbl_A30E40 + dbl_A2F928;
          (*(void (__thiscall **)(_DWORD *, _DWORD))(v46 + 0x224))(a1, LODWORD(v86));
          sub_520F00(0);
        }
      }
    }
  }
  else
  {
    sub_5E4400(a10);
    v14 = v13;
    v83 = (TESChildCELL *)v13;
    if ( v13 )
    {
      v15 = sub_566DC0((TESPackage *)v11, flt_A30634, a8, (Actor *)a10, 0, flt_A30634);
      if ( !v16 && !a1[0x48] )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x17C))(a1, 0);
        return;
      }
      if ( !(*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) && !a1[0x48] )
      {
        if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1 + 0x16) )
          sub_6553E0(a1, (int)a10, COERCE_FLOAT(1));
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) == 4 )
      {
        v27 = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))a10->vtbl + 0x59))(a10);
        a1[9] = v14[2];
        v28 = 0;
        if ( *v14 )
          v28 = (BaseExtraList *)**v14;
        if ( !v27 || sub_472EA0(v27) )
          Actor_EquipIngredient_((PlayerCharacter *)a10, a7, a8, v15, (TESForm *)v14[2], v28, 1);
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
        BSSimpleList_Clear(a1 + 0x2C);
      }
      else
      {
        if ( !a1[0x48] )
        {
          v17 = a1 + 0x2C;
          if ( BSSimpleList_Count(a1 + 0x2C) )
          {
            v18 = (_BYTE *)*v17;
            v19 = *v17 == 0;
            for ( a1[0x48] = *v17; !v19; a1[0x48] = *v17 )
            {
              if ( sub_4DB9A0(v18) )
                break;
              BSSimpleList_Remove(a1 + 0x2C, a1[0x48]);
              v18 = (_BYTE *)*v17;
              v19 = *v17 == 0;
            }
            v20 = (TESObjectREFR *)a1[0x48];
            if ( v20 )
            {
              if ( !TESObjectREFR_GetOwner(v20) )
              {
                v21 = BSSimpleList_Count(a1 + 0x2C);
                RandomLargeInteger = GetRandomLargeInteger_(0);
                v23 = RandomLargeInteger % v21;
                if ( RandomLargeInteger % v21 >= v21 )
                  v23 = v21;
                if ( v23 > 0 )
                {
                  do
                  {
                    --v23;
                    v17 = (_DWORD *)v17[1];
                  }
                  while ( v23 );
                }
                v14 = (ExtraDataList ****)v83;
                a1[0x48] = *v17;
              }
            }
          }
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, a1[0x48]);
        v24 = (ActorAnimData *)(*((int (__thiscall **)(TESChildCELL *))a10->vtbl + 0x59))(a10);
        if ( !a1[0x48] )
          goto LABEL_118;
        if ( !v24 || sub_472EA0(v24) )
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *, _DWORD))(*a1 + 0x51C))(a1, a10, 0);
        if ( !a1[0x48] )
        {
LABEL_118:
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1 + 0x16) )
          {
            v25 = 0;
            if ( *v14 )
              v25 = **v14;
            a1[9] = v14[2];
            Actor_EquipItem(
              (PlayerCharacter *)a10,
              (unsigned __int16 *)a1 + 0x58,
              a7,
              a8,
              st3_0,
              v15,
              st0_0,
              a6,
              a4,
              st1_0,
              (TESForm *)v14[2],
              1,
              v25,
              1,
              0,
              v70,
              v71,
              v72,
              v73,
              (int)v74,
              v77,
              a2,
              v80,
              v81,
              v82[0],
              v82[1]);
            (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
            BSSimpleList_Clear(a1 + 0x2C);
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x224))(a1, 0.0);
          }
        }
        if ( !sub_64ADA0((Actor *)a1) )
          goto LABEL_42;
        a1[0x48] = 0;
        sub_6FAEE0((Unk128 *)(a1 + 0x4A), 0.0);
        *((_BYTE *)a1 + 0x136) = 0;
        a1[0x4A] = LODWORD(Vector3_InitValue_);
        v26 = *a1;
        a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
        a1[0x4C] = LODWORD(dword_B3F9B0);
        (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(v26 + 0x194))(a1, a10);
      }
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x224))(a1, 0.0);
LABEL_42:
      if ( ((*(int (__thiscall **)(_DWORD *))(*a1 + 0x2C0))(a1) & 0x400) != 0 )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 0x2C4))(a1, 0x400, 0);
      return;
    }
    if ( a1[0xB] )
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x524))(a1, a10);
    }
    else
    {
      v29 = a1 + 0xF;
      if ( a1[0x10] || *v29 )
      {
        v30 = *v29;
        a1[0x11] = *v29;
        *(_DWORD *)(v30 + 0x10) = 1;
        BSSimpleList_Remove(a1 + 0xF, a1[0x11]);
        v31 = (int *)a1[0x11];
        v19 = v31[7] == 2;
        v32 = *v31;
        if ( v19 )
        {
          v19 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v32 + 0x190))(v32) == 0;
          v33 = (TESObjectREFR **)a1[0x11];
          if ( v19 )
          {
            Owner = TESObjectREFR_GetOwner(*v33);
            if ( Owner )
            {
              if ( LOBYTE(Owner->CompareTo) == 0x23 )
              {
                v35 = *a1;
                sub_675220(Owner);
                (*(void (__thiscall **)(_DWORD *, int))(v35 + 0xD0))(a1, v36);
              }
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0xD0))(a1, *v33);
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xD0))(a1, v32);
        }
      }
      else
      {
        v37 = sub_566A40(v11, (Actor *)a10);
        v38 = (int *)(*((int (__thiscall **)(TESChildCELL *))a10->vtbl + 0x5D))(a10);
        a2 = *v38;
        v80 = v38[1];
        v81 = v38[2];
        if ( !v37 )
          v37 = TESObjectREFR_GetParentCell((TESObjectREFR *)a10);
        byte_B3B934 = 1;
        a1[0x1B] = 0x14;
        a1[0x19] = 0;
        if ( TESObjectCELL_IsInterior(v37) )
          v39 = flt_A32048;
        else
          v39 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance);
        v84 = v39;
        a5 = v84;
        v40 = (float *)sub_566B30(v74, (int)v82, (Actor *)a10);
        a3 = v84 * dbl_A2FAA0;
        sub_446B90(
          v37,
          (float *)&a2,
          a3,
          v40,
          a5,
          (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
          (int)a10);
        v41 = *(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x568);
        byte_B3B934 = 0;
        a1[0x1B] = 0;
        v41(a1, a10);
        if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(a1 + 0xF)) )
        {
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a10);
          v42 = *a1;
          *((float *)a1 + 0x7A) = flt_A417B4;
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(v42 + 0x188))(a1, a10, 1);
        }
      }
    }
  }
}
