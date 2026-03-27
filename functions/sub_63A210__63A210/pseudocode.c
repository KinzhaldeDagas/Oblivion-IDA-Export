void __userpurge sub_63A210(
        HighProcess *_ECX@<ecx>,
        Actor *p_baseExtraList@<ebp>,
        int a3@<edi>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double GameHour@<st0>,
        TESObjectREFR *a12)
{
  TESForm::FormFlags flags; // eax
  ActorAnimData *animData; // ecx
  TESObjectREFR *v15; // edi
  UInt8 unk1D1; // al
  float z; // ecx
  int v19; // eax
  int v20; // ebx
  TESObjectCELL *ParentCell; // eax
  TESObjectREFRVtbl *v22; // ecx
  EntryData *equippedLightData; // eax
  TESObjectCELL *v25; // eax
  TESObjectCELL *v32; // eax
  TESPackage *(__thiscall *GetCurrentPackage)(BaseProcess *__hidden); // eax
  int v37; // ebx
  TESObjectREFR *v38; // eax
  void (__thiscall *Unk_61)(BaseProcess *__hidden, UInt32); // eax
  char v43; // al
  TESPackage *editorPackage; // ecx
  char *v45; // ecx
  TESPackage *v46; // eax
  TESPackage *v47; // ebx
  TESPackage *v48; // eax
  void *v49; // eax
  char v50; // al
  Actor *v51; // eax
  Atmosphere *target; // ebx
  int v54; // eax
  TESObjectREFRVtbl *v55; // edx
  TESObjectREFRVtbl *vtbl; // ebx
  int v57; // eax
  TESPackage *v58; // ebx
  TESPackage *v59; // eax
  TESObjectCELL *v60; // eax
  void (__thiscall *Unk_64)(BaseProcess *__hidden); // eax
  TESPackage *(__thiscall *v66)(BaseProcess *__hidden); // eax
  int v67; // eax
  MiddleHighProcess_vtbl *v68; // edx
  float *v69; // eax
  TESForm *v70; // eax
  LocationData *location; // ecx
  TESObjectREFR *unk030; // ecx
  UInt32 procedureArrayIndex; // ebp
  int *v74; // eax
  int v75; // edx
  Actor *follow; // ebp
  UInt8 type; // al
  TESObjectREFR *v78; // eax
  MiddleHighProcess_vtbl *v81; // edx
  Actor *v83; // ecx
  PlayerCharacter *v84; // ebp
  TESPackage *v85; // eax
  TESObjectCELL *v86; // eax
  Actor *v89; // ecx
  Actor *v90; // ebx
  UInt8 v93; // al
  Actor *v94; // eax
  Actor *v95; // ebx
  int v96; // eax
  void (__thiscall *Unk_66)(BaseProcess *__hidden); // eax
  UInt32 v99; // eax
  Atmosphere *v100; // ecx
  UInt32 v101; // ecx
  double v102; // st7
  char v103; // al
  LocationData *v104; // ecx
  char *v106; // ecx
  UInt8 v111; // al
  char v112; // al
  char v113; // al
  char *Name; // eax
  bool v115; // zf
  TESPackage *currentPackage; // ecx
  float x; // ebx
  TESObjectREFRVtbl *v118; // ebx
  TESObjectREFRVtbl *v119; // ebx
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  BSExtraData *v121; // eax
  void (__thiscall **p_Unk_5F)(TESObjectREFR *, int); // ebx
  int v123; // eax
  void (__thiscall *v124)(BaseFormComponent *); // ebx
  int v125; // eax
  TESPackage *v126; // ecx
  UInt32 *p_unk03C; // ebx
  int v129; // ebp
  float v131; // [esp+5Ch] [ebp-170h]
  float v132; // [esp+60h] [ebp-16Ch]
  float v133; // [esp+60h] [ebp-16Ch]
  float v134; // [esp+60h] [ebp-16Ch]
  float v135; // [esp+60h] [ebp-16Ch]
  float v136; // [esp+60h] [ebp-16Ch]
  TESObjectREFR v137[4]; // [esp+64h] [ebp-168h] BYREF

  LODWORD(v137[0].member.rot.z) = a12;
  if ( a12 )
  {
    if ( a12->vtbl->GetNiNode(a12) )
    {
      flags = a12->member.super.flags;
      if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 )
      {
        if ( TESObjectREFR_GetParentCell(a12) )
        {
          if ( TESObjectREFR_GetParentCell(a12)->members.cellProcessLevel == 6
            && (!a12->vtbl->IsActor(a12) || _ECX->unk2BC != 4)
            && _ECX->unk2BC != 3 )
          {
            animData = _ECX->animData;
            if ( animData )
            {
              if ( !sub_471730(animData) )
              {
                v15 = 0;
                if ( a12->vtbl->IsActor(a12) )
                  v15 = a12;
                __asm
                {
                  fld     dword ptr [esi+22Ch]
                  fsub    dword ptr ds:0B33E9Ch
                }
                unk1D1 = _ECX->unk1D1;
                *(_DWORD *)&v137[0].member.super.type = p_baseExtraList;
                _ECX->unk1D1 = 0;
                __asm { fstp    dword ptr [esi+22Ch] }
                _ECX->unk22C = _ET1;
                if ( !v15 )
                  goto LABEL_171;
                if ( unk1D1 )
                  sub_5EB400((Actor *)v15, a10);
                if ( _ECX->unk1EC )
                {
                  if ( v15->vtbl->GetNiNode(v15) )
                  {
                    if ( !((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) )
                      sub_635E20((int *)_ECX, (int)v15);
                  }
                }
                if ( _ECX->unk1D0 )
                  sub_63A020((int **)_ECX, v15);
                if ( _ECX->unk16A || byte_B3C0AB )
                  _ECX->unk16A = sub_693210(v15, _ECX->unk16A);
                if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v15) == (struct Concurrency::details::ScheduleGroupBase *)3 )
                {
                  __asm { fld1 }
                  __asm { fst     [esp+16Ch+var_168]; int }
                  __asm { fstp    [esp+16Ch+var_16C]; float }
                  Actor_ProcessAction((Actor *)v15, a9, a10, GameHour, v132, *(float *)&v137[0].vtbl);
                  z = *(float *)&a12;
LABEL_180:
                  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(LODWORD(z) + 0x58) + 0x20))(*(_DWORD *)(LODWORD(z) + 0x58));
                  return;
                }
                if ( !sub_45A500(SaveLoad_CurrentSavegame)
                  && ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v15->vtbl[1].GetSleepState)(v15, 1)
                  && !((int (__thiscall *)(TESObjectREFR *))v15->vtbl[1].IsMobileObject)(v15) )
                {
                  sub_5E2E00((Actor *)v15);
                  v20 = v19;
                  LOBYTE(v137[0].member.baseForm) = sub_5E6CD0(v15, 0);
                  sub_5EAE70((Actor *)v15, v20, (int)v15, *(int *)&v137[0].member.super.type);
                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int, TESForm *, TESForm *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))_ECX->Unk_89)(
                    _ECX,
                    v15,
                    v20,
                    v137[0].member.baseForm,
                    v137[0].member.baseForm,
                    0,
                    0,
                    0,
                    0,
                    0,
                    1);
                  return;
                }
                if ( _ECX->unk1A0 && !Menu_GetOpenMenuTile(0x3F1) )
                {
                  sub_6347E0((Actor *)v15);
                  _ECX->unk1A0 = 0;
                  return;
                }
                __asm { fld     dword ptr ds:0A3D65Ch }
                __asm { fstp    [esp+168h+var_168]; float }
                ParentCell = TESObjectREFR_GetParentCell(v15);
                if ( Actor_IsUnderwater__(
                       v15,
                       (int)v15->member.pos,
                       (ExtraDataList *)ParentCell,
                       *(float *)&v137[0].vtbl) )
                {
                  equippedLightData = _ECX->equippedLightData;
                  if ( equippedLightData )
                    sub_5E4260(v15, a9, a10, GameHour, (TESObjectARMO *)equippedLightData->type, 1, 0, 0, 0);
                }
                else
                {
                  __asm
                  {
                    fldz
                    fcomp   dword ptr [esi+0BCh]
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) == 0 )
                    goto LABEL_42;
                  v25 = TESObjectREFR_GetParentCell(v15);
                  if ( TESObjectCELL_IsInterior(v25) )
                    goto LABEL_41;
                  __asm { fld     dword ptr [esi+0BCh] }
                  __asm { fstp    qword ptr [esp+164h+var_14C+4] }
                  _EAX = GameSetting_GetSafeFloatPointer((int *)&fTorchEvaluationTimer);
                  __asm
                  {
                    fld     dword ptr [eax]
                    fcomp   qword ptr [esp+164h+var_14C+4]
                    fnstsw  ax
                  }
                  if ( __SETP__(BYTE1(_EAX) & 5, 0) )
                  {
LABEL_41:
                    __asm
                    {
                      fld     dword ptr [esi+0BCh]
                      fsub    dword ptr ds:0B33E9Ch
                      fstp    dword ptr [esi+0BCh]
                    }
                    _ECX->unk0BC = _ET1;
                  }
                  else
                  {
LABEL_42:
                    sub_603160((int)v15, a4, a5, a6, a7, a8, a9, a10, GameHour);
                  }
                }
                __asm
                {
                  fldz
                  fcom    dword ptr [esi+2B0h]
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 5, 0) )
                {
                  __asm { fstp    dword ptr [esi+2ACh] }
                  _ECX->unk2AC = _ET1;
                }
                else
                {
                  __asm
                  {
                    fstp    st
                    fld     dword ptr [esi+2B0h]
                    fsub    dword ptr ds:0B33E9Ch
                    fstp    dword ptr [esi+2B0h]
                  }
                  _ECX->unk2B0 = _ET1;
                }
                if ( _ECX->unk290 )
                {
                  __asm { fld     dword ptr [esi+28Ch] }
                  v137[0].vtbl = v22;
                  __asm { fsub    dword ptr ds:0B33E9Ch }
                  __asm { fstp    dword ptr [esi+28Ch] }
                  _ECX->unk28C = _ET1;
                  __asm
                  {
                    fld     dword ptr ds:0A3D65Ch
                    fstp    [esp+168h+var_168]; float
                  }
                  v32 = TESObjectREFR_GetParentCell(v15);
                  if ( Actor_IsUnderwater__(v15, (int)v15->member.pos, (ExtraDataList *)v32, *(float *)&v137[0].vtbl) )
                  {
                    _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36C88);
                    __asm
                    {
                      fld     dword ptr [eax]
                      fstp    dword ptr [esi+28Ch]
                    }
                    _ECX->unk28C = _ET1;
                  }
                  else
                  {
                    __asm
                    {
                      fldz
                      fcomp   dword ptr [esi+28Ch]
                      fnstsw  ax
                    }
                    if ( (_AX & 0x100) == 0 )
                    {
                      _ECX->RemoveWornItems(_ECX, (Actor *)v15, 0, 0);
                      _ECX->unk290 = 0;
                    }
                  }
                }
                if ( v15 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
                  sub_603320((int *)v15, (unsigned __int16 *)p_baseExtraList, a4, a5, a6, a7, a8, a9, a10, GameHour);
                GetCurrentPackage = _ECX->GetCurrentPackage;
                LOBYTE(v137[0].member.childCell.GetChildCell) = 0;
                LOBYTE(v137[0].member.baseForm) = 0;
                v37 = (int)GetCurrentPackage(_ECX);
                if ( v15 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
                {
                  if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) )
                  {
                    if ( Actor_IsNPC((Actor *)v15) )
                    {
                      if ( v37 )
                      {
                        if ( *(_BYTE *)(v37 + 0x20) == 0x16 )
                        {
                          v38 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15);
                          if ( !TESOBjectREFR_IsOwnedBy(v38, v15, 1) )
                          {
                            sub_5EAE70((Actor *)v15, v37, (int)v15, *(int *)&v137[0].member.super.type);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                __asm
                {
                  fldz
                  fcomp   dword ptr [esi+260h]
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
                {
                  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
                  __asm
                  {
                    fstp    [esp+164h+var_154]
                    fld     [esp+164h+var_154]
                    fsub    dword ptr [esi+0Ch]
                    fstp    [esp+164h+var_154]
                    fld     [esp+164h+var_154]
                    fabs
                    fstp    [esp+164h+var_154]
                    fld     [esp+164h+var_154]
                    fmul    qword ptr ds:0A309F0h
                    fstp    [esp+164h+var_154]
                    fld     [esp+164h+var_154]
                    fld     dword ptr [esi+260h]
                    fcompp
                    fnstsw  ax
                  }
                  if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) )
                  {
                    __asm { fldz }
                    Unk_61 = _ECX->Unk_61;
                    __asm { fstp    dword ptr [esi+1ACh] }
                    _ECX->unk1AC = _ET1;
                    LOBYTE(v137[0].member.baseForm) = 1;
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))Unk_61)(_ECX, v15, 3);
                    p_baseExtraList = (Actor *)&v15->member.baseExtraList;
                    GameHour = Script_AddEventToExtraScript(v37, &v15->member.baseExtraList, 0x400);
                    if ( v37 )
                    {
                      if ( sub_565DF0((_DWORD *)v37) )
                      {
                        GameHour = TimeGlobals_GetGameDay(&TimeGlobals);
                        sub_41FFC0(&v15->member.baseExtraList, v37, v43);
                      }
                    }
                  }
                }
                editorPackage = _ECX->editorPackage;
                if ( editorPackage )
                  LOBYTE(v137[0].member.baseForm) = sub_5660E0(editorPackage);
                if ( v15 != (TESObjectREFR *)TESDataHandler_g_PlayerRef && !_ECX->currentPackage )
                {
                  v45 = (char *)_ECX->editorPackage;
                  if ( !v45 || !sub_567770(v45) )
                    LOBYTE(v137[0].member.childCell.GetChildCell) = _ECX->Unk_06(
                                                                      _ECX,
                                                                      (UInt32)v15,
                                                                      (UInt32)v137[0].member.baseForm);
                }
                v46 = _ECX->GetCurrentPackage(_ECX);
                if ( LOBYTE(v137[0].member.childCell.GetChildCell) || !v46 && !_ECX->unk0D0 )
                {
                  _ECX->RemoveFornitureInteraction(_ECX, (Actor *)v15);
                  v47 = _ECX->GetCurrentPackage(_ECX);
                  if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) )
                  {
                    v48 = _ECX->editorPackage;
                    if ( v48 )
                    {
                      if ( (v48->members.packageFlags & 0x800000) == 0 )
                      {
                        v49 = (void *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15);
                        sub_5E9A60(v49, GameHour);
                        if ( !v50 )
                        {
                          v51 = (Actor *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15);
                          sub_5F80D0(v51);
                          __asm
                          {
                            fldz
                            fstp    dword ptr [esi+1A8h]
                          }
                          _ECX->unk1A8 = _ET1;
                        }
                        ((void (__fastcall *)(TESObjectREFR *))v15->vtbl[1].super.Unk_22)(v15);
                        return;
                      }
                    }
                  }
                  if ( v47 )
                  {
                    target = (Atmosphere *)v47->members.target;
                    if ( target )
                    {
                      if ( TargetData::GetTargetType((TargetData *)target) )
                        _ECX->unk038 = (UInt32)sub_452A60(target);
                    }
                  }
                }
                if ( !_ECX->currentPackage )
                {
                  switch ( ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) )
                  {
                    case 2:
                    case 3:
                      if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) )
                      {
                        vtbl = v15->vtbl;
                        v57 = ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15);
                        ((void (__thiscall *)(TESObjectREFR *, int))vtbl[1].super.Unk_21)(v15, v57);
                      }
                      break;
                    case 5:
                    case 0xA:
                      v54 = ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15);
                      v55 = v15->vtbl;
                      if ( v54 )
                        v55[1].super.Unk_22((TESForm *)v15);
                      else
                        v55[1].Unk_5E(v15);
                      break;
                    default:
                      break;
                  }
                }
                v58 = _ECX->GetCurrentPackage(_ECX);
                _ECX->Unk_24(_ECX, (UInt32)v15);
                if ( LOBYTE(v137[0].member.childCell.GetChildCell) )
                {
                  sub_5E7BE0();
                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_156)(_ECX, v15);
                }
                if ( !((int (__thiscall *)(HighProcess *))_ECX->Unk_5C)(_ECX) )
                {
                  if ( v58 )
                  {
                    if ( !sub_567770((char *)v58) )
                    {
                      v59 = _ECX->editorPackage;
                      if ( v59 )
                      {
                        if ( *(_DWORD *)(*(_DWORD *)(4 * v59->members.procedureArrayIndex + 0xB152B0)
                                       + 4 * _ECX->editorPackProcedure) )
                        {
                          if ( ((unsigned __int8 (__thiscall *)(HighProcess *))_ECX->GetUnk25C)(_ECX)
                            || (v58->members.packageFlags & 0x200) != 0
                            && (v58->members.packageFlags & 1) != 0
                            && TESObjectREFR_GetParentCell(v15)
                            && (v60 = TESObjectREFR_GetParentCell(v15), sub_4CAAC0((ExtraDataList *)v60, (Actor *)v15)) )
                          {
                            ((void (__thiscall *)(HighProcess *, TESObjectREFR *, _DWORD))_ECX->Unk_55)(_ECX, v15, 0);
                            v58 = _ECX->GetCurrentPackage(_ECX);
                          }
                        }
                      }
                    }
                  }
                }
                __asm
                {
                  fldz
                  fcom    dword ptr [esi+248h]
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 5, 0) )
                {
                  __asm { fstp    st }
                }
                else
                {
                  __asm
                  {
                    fld     dword ptr [esi+248h]
                    fsub    dword ptr ds:0B33E9Ch
                    fstp    [esp+164h+var_154]
                    fld     [esp+164h+var_154]
                    fst     dword ptr [esi+248h]
                  }
                  _ECX->unk248 = _ET1;
                  __asm
                  {
                    fcompp
                    fnstsw  ax
                  }
                  if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) && !sub_5E6CD0(v15, 0) )
                  {
                    __asm { fldz }
                    Unk_64 = _ECX->Unk_64;
                    __asm { fstp    dword ptr [esi+248h] }
                    _ECX->unk248 = _ET1;
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))Unk_64)(_ECX, v15);
                    _ECX->SetCurrentPackage(_ECX, 0);
                    _ECX->Unk_126(_ECX);
                    v66 = _ECX->GetCurrentPackage;
                    _ECX->follow = 0;
                    v58 = (TESPackage *)((int (__thiscall *)(HighProcess *, _DWORD))v66)(
                                          _ECX,
                                          *(_DWORD *)&v137[0].member.super.type);
                  }
                }
                _ECX->Unk_15C(_ECX);
                if ( v15 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
                {
                  if ( (_ECX->GetIsAlerted(_ECX) || _ECX->unk244) && !_ECX->GetWeaponOut(_ECX) )
                  {
                    v137[0].vtbl = (TESObjectREFRVtbl *)1;
LABEL_122:
                    sub_5E6D70(v15, (int)v137[0].vtbl);
                    goto LABEL_123;
                  }
                  if ( !_ECX->GetIsAlerted(_ECX) && !_ECX->unk244 )
                  {
                    if ( _ECX->GetWeaponOut(_ECX) )
                    {
                      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v15->vtbl[1].GetSleepState)(v15, 1) )
                      {
                        if ( !_ECX->equippedWeaponData
                          || (p_baseExtraList = (Actor *)&_ECX->Unk_48,
                              v67 = ((int (__thiscall *)(TESObjectREFR *))v15->vtbl->Unk_5A)(v15),
                              ((int (__thiscall *)(HighProcess *, int))p_baseExtraList->vtbl)(_ECX, v67)) )
                        {
                          v137[0].vtbl = 0;
                          goto LABEL_122;
                        }
                      }
                    }
                  }
                }
LABEL_123:
                if ( v58 )
                {
                  if ( v58->members.type == 0x12 )
                  {
                    p_baseExtraList = _ECX->follow;
                    if ( p_baseExtraList )
                    {
                      v137[0].member.super.modlist.next = (TESForm::ModReferenceList *)_ECX->GetProcessLevel(_ECX);
                      if ( (TESForm::ModReferenceList *)Actor::GetProcessLevel(p_baseExtraList) != v137[0].member.super.modlist.next )
                      {
                        v15->vtbl[1].GetAnimData(v15);
                        v58 = _ECX->GetCurrentPackage(_ECX);
                        _ECX->Unk_15C(_ECX);
                      }
                    }
                  }
                }
                if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) )
                {
                  if ( v15->vtbl->GetSleepState(v15) == kSitSleep_None )
                  {
                    if ( v58 )
                    {
                      if ( v58->members.type != 0x16 )
                      {
                        v137[0].vtbl = (TESObjectREFRVtbl *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15);
                        sub_602050((Actor *)v15, (int)v58, (int)v15, a9, v137[0]);
                      }
                    }
                  }
                }
                if ( !((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15)
                  && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.super.CopyFromBase)(v15)
                  && ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX)
                  && ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) != 9
                  && ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) != 4 )
                {
                  if ( v58
                    && (p_baseExtraList = (Actor *)v58->members.procedureArrayIndex,
                        *(_DWORD *)(*(_DWORD *)(4 * (_DWORD)p_baseExtraList + 0xB152B0)
                                  + 4 * _ECX->GetCurrentPackProcedure(_ECX)) == 0x16) )
                  {
                    if ( !(unsigned __int8)sub_654F10(v15) )
                      return;
                  }
                  else if ( !((unsigned __int8 (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_6C)(_ECX, v15) )
                  {
                    v68 = _ECX->__vftable;
                    if ( _ECX->furniture )
                      ((void (__thiscall *)(HighProcess *, TESObjectREFR *))v68->Unk_6B)(_ECX, v15);
                    else
                      v68->SetSleepState(_ECX, (Actor *)v15, 0, 0, 0x7F);
                  }
                }
                if ( !v58 || v58->members.procedureArrayIndex == 0xFFFFFFFF )
                  goto LABEL_171;
                v69 = sub_571F90(1);
                v137[0].member.super.modlist.next = (TESForm::ModReferenceList *)(dword_B139A4 - dword_B13980);
                __asm { fild    [esp+164h+var_154] }
                v137[0].vtbl = (TESObjectREFRVtbl *)1;
                __asm { fstp    [esp+170h+var_16C]; float }
                __asm
                {
                  fild    dword ptr ds:0B1399Ch
                  fstp    [esp+170h+var_170]; float
                }
                v70 = (TESForm *)sub_571720(v69, v131, v133, 1);
                location = v58->members.location;
                v137[0].member.baseForm = v70;
                if ( !location )
                  goto LABEL_156;
                if ( !sub_569A10(location) )
                  goto LABEL_156;
                p_baseExtraList = (Actor *)v58->members.procedureArrayIndex;
                if ( *(_DWORD *)(*(_DWORD *)(4 * (_DWORD)p_baseExtraList + 0xB152B0)
                               + 4 * _ECX->GetCurrentPackProcedure(_ECX)) == 0x2C )
                  goto LABEL_156;
                unk030 = _ECX->unk030;
                if ( unk030 )
                {
                  if ( !sub_4D74B0(unk030) || v15->vtbl->GetSleepState(v15) )
                    goto LABEL_156;
                }
                else
                {
                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_156)(_ECX, v15);
                }
                _ECX->SetCurrentPackProcedure(_ECX, kProcedure_TRAVEL);
LABEL_156:
                if ( v15 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
                  && (_ECX->movementFlags & 0xF) != 0
                  && (((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) == 9
                   || ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) == 4) )
                {
                  if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) )
                  {
                    sub_5F0410(v15, (int)p_baseExtraList);
                  }
                  else if ( _ECX->furniture )
                  {
                    sub_5E4140(v15);
                  }
                  else
                  {
                    _ECX->SetSleepState(_ECX, (Actor *)v15, 0, 0, 0x7F);
                  }
                }
                procedureArrayIndex = v58->members.procedureArrayIndex;
                switch ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0)
                                   + 4 * _ECX->GetCurrentPackProcedure(_ECX)) )
                {
                  case 0:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, TESObjectCELL *(__thiscall *)(TESChildCELL *), int, unsigned int))_ECX->Travel)(
                      _ECX,
                      v15,
                      v137[0].member.childCell.GetChildCell,
                      1,
                      0xFFFFFFFF);
                    goto LABEL_168;
                  case 1:
                    sub_6384B0((int *)_ECX, a10, GameHour, v15);
                    goto LABEL_168;
                  case 2:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_146)(_ECX, v15, 1);
                    goto LABEL_168;
                  case 3:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_148)(_ECX, v15);
                    goto LABEL_168;
                  case 4:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_142)(_ECX, v15);
                    goto LABEL_168;
                  case 5:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_143)(_ECX, v15);
                    goto LABEL_168;
                  case 6:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int, unsigned int, _DWORD))_ECX->Unk_65)(
                      _ECX,
                      v15,
                      1,
                      0xFFFFFFFF,
                      0);
                    goto LABEL_168;
                  case 7:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_141)(_ECX, v15);
                    goto LABEL_168;
                  case 8:
                    _ECX->Alarm(_ECX, (Actor *)v15);
                    goto LABEL_168;
                  case 0xA:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_67)(_ECX, v15);
                    goto LABEL_168;
                  case 0xC:
                    _ECX->Dialogue(_ECX, (Actor *)v15);
                    goto LABEL_168;
                  case 0xD:
                    if ( !_ECX->follow )
                      _ECX->Unk_155(_ECX, (TESChildCELL *)v15);
                    follow = _ECX->follow;
                    if ( !follow )
                      goto LABEL_248;
                    type = v58->members.type;
                    if ( type == 0x12 && follow == (Actor *)TESDataHandler_g_PlayerRef )
                    {
                      sub_5EAE70((Actor *)v15, (int)v58, (int)v15, *(int *)&v137[0].member.super.type);
                      sub_5E05F0((Actor *)v15, 0x30);
                      goto LABEL_168;
                    }
                    if ( type == 1 )
                    {
                      if ( sub_663A00() < dword_B36A80 )
                      {
LABEL_248:
                        ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1);
                        sub_5E05F0((Actor *)v15, 0x30);
                        goto LABEL_168;
                      }
                    }
                    else
                    {
                      if ( (follow->members.super.super.super.flags & 0x20) != 0
                        || (follow->members.super.super.super.flags & 0x800) != 0 )
                      {
                        if ( (follow->members.super.super.super.flags & 0x20) != 0 )
                          sub_566870((TargetData **)v58, (TESForm *)follow, 1);
                        goto LABEL_248;
                      }
                      if ( follow->vtbl->super.super.IsDead((TESObjectREFR *)follow, 1) )
                      {
                        sub_566870((TargetData **)v58, (TESForm *)_ECX->follow, 1);
                        ((void (__thiscall *)(TESObjectREFR *, Actor *))v15->vtbl[1].Set3D)(v15, _ECX->follow);
                        return;
                      }
                      if ( v58->members.type != 0x12 && (v58->members.packageFlags & 0x10000) == 0 )
                      {
                        if ( sub_5E0380((Actor *)v15)->members.type == 1 )
                        {
                          v137[0].member.super.modlist.next = (TESForm::ModReferenceList *)sub_452A60((Atmosphere *)v58->members.target);
                          __asm { fild    [esp+164h+var_154] }
                          v78 = (TESObjectREFR *)_ECX->follow;
                          __asm { fstp    [esp+16Ch+var_154] }
                          GameHour = TesObjectREF_GetDistance(v15, v78, 0);
                          __asm
                          {
                            fld     [esp+164h+var_154]
                            fcompp
                            fnstsw  ax
                          }
                          if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
                            goto LABEL_248;
                        }
                        else if ( v58->members.procedureArrayIndex == 0x16 )
                        {
                          GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
                          __asm { fstp    [esp+164h+var_154] }
                          _EAX = GameSetting_GetSafeFloatPointer((int *)&unk_B36B40);
                          __asm
                          {
                            fld     [esp+164h+var_154]
                            fld     dword ptr [eax]
                            fadd    dword ptr [esi+198h]
                            fcomp   st(1)
                            fnstsw  ax
                          }
                          if ( !__SETP__(BYTE1(_EAX) & 0x41, 0) )
                          {
                            v81 = _ECX->__vftable;
                            __asm { fstp    dword ptr [esi+198h] }
                            _ECX->unk198 = _ET1;
                            ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))v81->Unk_61)(
                              _ECX,
                              v15,
                              0xFFFFFFFF);
                            sub_5E05F0((Actor *)v15, 0x30);
                            goto LABEL_168;
                          }
                          __asm { fstp    st }
                        }
                        else
                        {
                          if ( sub_5E0380((Actor *)v15)->members.type == 2 )
                          {
                            v83 = _ECX->follow;
                            if ( v83 )
                            {
                              if ( v83->vtbl->super.super.IsActor((TESObjectREFR *)v83) )
                              {
                                v84 = (PlayerCharacter *)_ECX->follow;
                                if ( v84 )
                                {
                                  if ( v84 != TESDataHandler_g_PlayerRef )
                                  {
                                    v85 = sub_5E0380(_ECX->follow);
                                    if ( v85 && v85->members.type == 1 )
                                      v84->super.super.super.process->editorPackProcedure = kProcedure_WANDER;
                                    else
                                      ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)(
                                        _ECX,
                                        v15,
                                        0xFFFFFFFE);
                                  }
                                }
                              }
                            }
                          }
                          v137[0].member.baseForm = (TESForm *)sub_452A60((Atmosphere *)v58->members.target);
                          if ( (int)v137[0].member.baseForm <= 0 )
                            v137[0].member.baseForm = (TESForm *)0xC8;
                          if ( (PlayerCharacter *)_ECX->follow == TESDataHandler_g_PlayerRef )
                          {
                            __asm { fild    [esp+164h+var_14C] }
                          }
                          else
                          {
                            v86 = TESObjectREFR_GetParentCell(v15);
                            if ( TESObjectCELL_IsInterior(v86) )
                            {
                              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36AA0);
                              __asm { fld     dword ptr [eax] }
                            }
                            else
                            {
                              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36A98);
                              __asm
                              {
                                fild    [esp+164h+var_14C]
                                fmul    dword ptr [eax]
                              }
                            }
                          }
                          v89 = _ECX->follow;
                          __asm { fstp    [esp+164h+var_150] }
                          if ( !v89->vtbl->super.super.IsActor((TESObjectREFR *)v89)
                            || (v90 = _ECX->follow) == 0
                            || sub_5E05B0(&_ECX->follow->vtbl)
                            || v90 == (Actor *)TESDataHandler_g_PlayerRef )
                          {
                            GameHour = TesObjectREF_GetDistance(v15, (TESObjectREFR *)_ECX->follow, 0);
                            __asm
                            {
                              fld     [esp+164h+var_150]
                              fmul    qword ptr ds:0A2FAA0h
                              fcompp
                              fnstsw  ax
                            }
                            if ( (_AX & 0x100) == 0 )
                              goto LABEL_248;
                          }
                          else
                          {
                            GameHour = TesObjectREF_GetDistance(v15, (TESObjectREFR *)_ECX->follow, 0);
                            __asm
                            {
                              fld     [esp+164h+var_150]
                              fcompp
                              fnstsw  ax
                            }
                            if ( (_AX & 0x100) == 0 )
                              goto LABEL_248;
                          }
                        }
                      }
                    }
                    sub_5E05F0((Actor *)v15, 0x30);
                    goto LABEL_168;
                  case 0xE:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, _DWORD))_ECX->Unk_146)(_ECX, v15, 0);
                    goto LABEL_168;
                  case 0xF:
                    v95 = _ECX->follow;
                    v96 = ((int (__thiscall *)(HighProcess *, Actor *, _DWORD, TESForm::FormFlags))_ECX->GetDetectionState)(
                            _ECX,
                            v95,
                            *(_DWORD *)&v137[0].member.super.type,
                            v137[0].member.super.flags);
                    if ( v95 )
                    {
                      if ( v96 )
                        *(_DWORD *)(v96 + 4) = 3;
                      else
                        ((void (__thiscall *)(HighProcess *, Actor *, int))_ECX->Unk_EC)(_ECX, v95, 3);
                    }
                    Unk_66 = _ECX->Unk_66;
                    v137[0].member.super.flags = 0xFFFFFFFF;
                    *(_DWORD *)&v137[0].member.super.type = 1;
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, _DWORD))Unk_66)(_ECX, v15, 0);
                    goto LABEL_168;
                  case 0x10:
                    _ECX->SayTopic(_ECX, (Actor *)v15, 0, 0, 0, 1);
                    goto LABEL_168;
                  case 0x11:
                    if ( !_ECX->follow )
                    {
                      _ECX->Unk_155(_ECX, (TESChildCELL *)v15);
                      if ( !_ECX->follow )
                      {
                        ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1);
                        if ( !_ECX->unk0D0 )
                          ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_64)(_ECX, v15);
                      }
                    }
                    v94 = _ECX->follow;
                    if ( !v94 || v94 == (Actor *)TESDataHandler_g_PlayerRef )
                      goto LABEL_200;
                    _ECX->Unk_21(_ECX, (UInt32)v15, (UInt32)v58, 0);
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1);
                    goto LABEL_168;
                  case 0x12:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_69)(_ECX, v15);
                    goto LABEL_168;
                  case 0x14:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_6A)(_ECX, v15);
                    goto LABEL_168;
                  case 0x15:
                    sub_62A0E0((int)_ECX, a10, GameHour, (Actor *)v15);
                    goto LABEL_168;
                  case 0x16:
                    sub_654F10(v15);
                    goto LABEL_168;
                  case 0x17:
                    v93 = _ECX->MountHorse(_ECX, (Actor *)v15);
                    goto LABEL_257;
                  case 0x18:
                    v93 = _ECX->DismoutHorse(_ECX, (Actor *)v15);
LABEL_257:
                    if ( !v93 )
                      goto LABEL_200;
                    goto LABEL_168;
                  case 0x1A:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_152)(_ECX, v15);
                    goto LABEL_168;
                  case 0x1B:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_151)(_ECX, v15);
                    goto LABEL_168;
                  case 0x1C:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_153)(_ECX, v15);
                    goto LABEL_168;
                  case 0x1D:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_147)(_ECX, v15);
                    goto LABEL_168;
                  case 0x1E:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14B)(_ECX, v15);
                    goto LABEL_168;
                  case 0x1F:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_149)(_ECX, v15);
                    goto LABEL_168;
                  case 0x20:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14A)(_ECX, v15);
                    goto LABEL_168;
                  case 0x21:
                    sub_628330(_ECX, v15);
                    goto LABEL_168;
                  case 0x22:
                    if ( !((int (__thiscall *)(HighProcess *))_ECX->Unk_A9)(_ECX) )
LABEL_200:
                      ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1);
                    goto LABEL_168;
                  case 0x23:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14C)(_ECX, v15);
                    goto LABEL_168;
                  case 0x24:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14D)(_ECX, v15);
                    goto LABEL_168;
                  case 0x25:
                    _ECX->RemoveWornItems(_ECX, (Actor *)v15, 1, 0);
                    goto LABEL_168;
                  case 0x26:
                    sub_62B5C0((float *)_ECX, (int)v15);
                    goto LABEL_168;
                  case 0x27:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_150)(_ECX, v15);
                    goto LABEL_168;
                  case 0x28:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14F)(_ECX, v15);
                    goto LABEL_168;
                  case 0x29:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14E)(_ECX, v15);
                    goto LABEL_168;
                  case 0x2A:
                    sub_633DF0((int)_ECX, (int)v58, a9, a10, GameHour, (PlayerCharacter *)v15);
                    goto LABEL_168;
                  case 0x2B:
                    sub_630100(_ECX, a9, a10, GameHour, (Actor *)v15);
                    goto LABEL_168;
                  case 0x2C:
                    if ( !_ECX->currentPackage )
                    {
                      __asm
                      {
                        fldz
                        fstp    dword ptr [esi+260h]
                      }
                      _ECX->unk260 = _ET1;
                    }
                    v99 = v58->members.procedureArrayIndex;
                    if ( v99 == 1 || v99 == 5 || v99 == 4 )
                      goto LABEL_325;
                    if ( v99 == 0x1E )
                    {
                      v100 = (Atmosphere *)v58->members.target;
                      if ( v100 )
                      {
                        if ( !sub_452A60(v100) )
                        {
                          ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)(
                            _ECX,
                            v15,
                            0xFFFFFFFD);
                          return;
                        }
                      }
                    }
                    v101 = v58->members.procedureArrayIndex;
                    if ( v101 )
                    {
                      v111 = v58->members.type;
                      if ( v111 != 3 && v111 != 4 )
                      {
                        if ( v101 != 7 )
                          goto LABEL_319;
                        __asm { fld     dword ptr ds:0A30634h }
                        __asm { fstp    [esp+168h+var_168]; float }
                        sub_566DC0(v58, GameHour, a10, (Actor *)v15, 0, *(float *)&v137[0].vtbl);
                        if ( v112 )
                        {
LABEL_319:
                          ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_64)(_ECX, v15);
                          if ( _ECX->unk25C )
                          {
                            ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)(
                              _ECX,
                              v15,
                              0xFFFFFFFF);
                            _ECX->Unk_2E(_ECX, 0);
                            return;
                          }
                          GameHour = Script_AddEventToExtraScript(v58, &v15->member.baseExtraList, 0x400);
                          if ( sub_565DF0(v58) )
                          {
                            GameHour = TimeGlobals_GetGameDay(&TimeGlobals);
                            sub_41FFC0(&v15->member.baseExtraList, (int)v58, v113);
                          }
                          if ( v58->members.procedureArrayIndex == 0x1A )
                          {
                            if ( _ECX->Unk_2F(_ECX) )
                              return;
                            goto LABEL_325;
                          }
                          if ( sub_579440() == v15 )
                          {
                            v137[0].vtbl = *(TESObjectREFRVtbl **)(4 * (char)_ECX->editorPackage->members.type + 0xB12988);
                            Name = TESObjectREFR_GetName(v15);
                            _sprintf(
                              (char *)&v137[0].member.scale,
                              "%s is done with %s",
                              Name,
                              (const char *)v137[0].vtbl);
                            if ( !v137[0].member.baseForm
                              || _mbsicmp(
                                   (const unsigned __int8 *)&v137[0].member.scale,
                                   (const unsigned __int8 *)v137[0].member.baseForm) )
                            {
                              Interface_ConsolePrint((char *)&v137[0].member.scale);
                            }
                          }
                          if ( !v58->members.time.duration )
                          {
                            v115 = _ECX->currentPackage == 0;
                            _ECX->follow = 0;
                            if ( v115 || ((unsigned __int8 (__thiscall *)(HighProcess *))_ECX->GetUnk25C)(_ECX) )
                            {
                              if ( sub_5660A0(_ECX->editorPackage) )
                              {
                                x = *(float *)&_ECX->editorPackage;
                                v137[0].member.rot.x = x;
                                if ( sub_567770((char *)LODWORD(x)) )
                                {
                                  ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, TESForm::FormFlags))v15->vtbl->super.ClearModified)(
                                    v15,
                                    0x30000,
                                    *(_DWORD *)&v137[0].member.super.type,
                                    v137[0].member.super.flags);
                                  if ( ExtraDataList::GetExtraPackage(&v15->member.baseExtraList) )
                                  {
                                    v118 = v15[1].vtbl;
                                    v118->super.super.CopyFromBase = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))ExtraDataList::GetExtraPackage(&v15->member.baseExtraList);
                                    sub_5E8DE0((Actor *)v15, (TESPackage *)v15[1].vtbl->super.super.CopyFromBase);
                                    v119 = v15[1].vtbl;
                                    v119->super.super.ClearComponentReferences = (void (__thiscall *)(BaseFormComponent *))sub_41FB40(&v15->member.baseExtraList);
                                    InitializeComponent = v15[1].vtbl->super.super.InitializeComponent;
                                    LODWORD(v137[0].member.rot.y) = v15[1].vtbl;
                                    v121 = sub_41FB60(&v15->member.baseExtraList);
                                    (*((void (__thiscall **)(_DWORD, BSExtraData *))InitializeComponent + 0x34))(
                                      LODWORD(v137[0].member.rot.y),
                                      v121);
                                    p_Unk_5F = (void (__thiscall **)(TESObjectREFR *, int))&v15->vtbl->Unk_5F;
                                    LOBYTE(v123) = sub_41FB80(&v15->member.baseExtraList);
                                    (*p_Unk_5F)(v15, v123);
                                    v124 = v15[1].vtbl->super.super.InitializeComponent;
                                    v137[0].member.baseForm = (TESForm *)v15[1].vtbl;
                                    LOBYTE(v125) = sub_41FBA0(&v15->member.baseExtraList);
                                    (*((void (__thiscall **)(TESForm *, int))v124 + 0xE5))(
                                      v137[0].member.baseForm,
                                      v125);
                                    sub_4246D0(&v15->member.baseExtraList);
                                    x = v137[0].member.rot.x;
                                  }
                                  else
                                  {
                                    v15[1].vtbl->super.super.CopyFromBase = 0;
                                    v15[1].vtbl->super.super.ClearComponentReferences = 0;
                                    (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v15[1].vtbl->super.super.InitializeComponent
                                     + 0x34))(
                                      v15[1].vtbl,
                                      0);
                                    ((void (__thiscall *)(TESObjectREFR *, _DWORD))v15->vtbl->Unk_5F)(v15, 0);
                                    (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v15[1].vtbl->super.super.InitializeComponent
                                     + 0xE5))(
                                      v15[1].vtbl,
                                      0);
                                    (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))v15[1].vtbl->super.super.InitializeComponent
                                     + 6))(
                                      v15[1].vtbl,
                                      v15,
                                      0);
                                  }
                                }
                                else
                                {
                                  _ECX->editorPackage = 0;
                                }
                                if ( x != 0.0 )
                                  (*(void (__thiscall **)(float, int))(*(_DWORD *)LODWORD(x) + 0x10))(
                                    COERCE_FLOAT(LODWORD(x)),
                                    1);
                                if ( !_ECX->unk0D0 )
                                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_64)(_ECX, v15);
                              }
                            }
                            else
                            {
                              currentPackage = _ECX->currentPackage;
                              if ( currentPackage )
                                currentPackage->__vftable->super.Destroy((TESForm *)currentPackage, 1);
                              _ECX->currentPackage = 0;
                            }
                            v126 = _ECX->editorPackage;
                            if ( v126 )
                            {
                              if ( sub_565DF0(v126)
                                || (_ECX->editorPackage->members.packageFlags & 2) != 0
                                || (_ECX->editorPackage->members.packageFlags & 4) != 0 )
                              {
                                __asm
                                {
                                  fldz
                                  fstp    dword ptr [esi+1ACh]
                                }
                                _ECX->unk1AC = _ET1;
                              }
                            }
                            if ( _ECX->unk044 )
                              FormHeapFree(_ECX->unk044);
                            _ECX->unk044 = 0;
                            _ECX->usedItem = 0;
                            p_unk03C = &_ECX->unk03C;
                            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&_ECX->unk03C) )
                            {
                              v129 = *p_unk03C;
                              if ( *p_unk03C )
                                FormHeapFree(*p_unk03C);
                              BSSimpleList_Remove(&_ECX->unk03C, v129);
                            }
                            __asm { fldz }
                            __asm { fstp    dword ptr [esi+198h] }
                            _ECX->unk198 = _ET1;
                            _ECX->unk030 = 0;
                            BSSimpleList_Clear(&_ECX->unk04C);
                          }
LABEL_168:
                          if ( ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) == 4 )
                          {
                            if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) )
                            {
                              v74 = (int *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15);
                              __asm { fld     dword ptr ds:0B33E9Ch }
                              v75 = *v74;
                              __asm { fstp    [esp+168h+var_168] }
                              (*(void (__thiscall **)(int *, TESObjectREFRVtbl *))(v75 + 0x228))(v74, v137[0].vtbl);
                            }
                          }
LABEL_171:
                          if ( v15->vtbl->GetNiNode(v15) )
                          {
                            if ( v15 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
                              || TESDataHandler_g_PlayerRef->isThirdPerson )
                            {
                              __asm { fld1 }
                              __asm { fst     [esp+16Ch+var_168]; int }
                              __asm { fstp    [esp+16Ch+var_16C]; float }
                              Actor_ProcessAction((Actor *)v15, a9, a10, GameHour, v134, *(float *)&v137[0].vtbl);
                            }
                          }
                          if ( byte_B15800 && dword_B3BF80 )
                          {
                            if ( sub_6825C0((Actor *)v15) )
                              return;
                            sub_6826D0((_DWORD *)dword_B3BF80, v15);
                          }
                          z = v137[0].member.rot.z;
                          goto LABEL_180;
                        }
                      }
                    }
                    else
                    {
                      __asm { fld     dword ptr ds:0A30634h }
                      __asm { fstp    [esp+168h+var_168]; float }
                      v102 = sub_566DC0(v58, GameHour, a10, (Actor *)v15, v101, *(float *)&v137[0].vtbl);
                      if ( v103 )
                      {
                        v104 = v58->members.location;
                        _EBP = 0;
                        if ( v104 )
                          _EBP = (TESObjectREFR *)sub_5697E0(v104);
                        if ( _ECX->unk030 )
                          _EBP = _ECX->unk030;
                        if ( (_EBP && _EBP->vtbl->GetBaseForm(_EBP) == (TESForm *)TESDataHandler_g_XMarkerHeading
                           || (v106 = (char *)v58->members.location) != 0 && sub_569740(v106) == 3)
                          && !sub_64ADA0((Actor *)_ECX)
                          && v15->vtbl->GetSleepState(v15) == kSitSleep_None
                          && !((unsigned __int8 (__thiscall *)(HighProcess *))_ECX->Unk_136)(_ECX) )
                        {
                          if ( _EBP )
                          {
                            __asm { fld     dword ptr [ebp+28h] }
                          }
                          else
                          {
                            _EAX = ((int (__thiscall *)(TESObjectREFR *, float *))v15->vtbl->GetStartingAngle)(
                                     v15,
                                     v137[0].member.pos);
                            __asm { fld     dword ptr [eax+8] }
                          }
                          __asm
                          {
                            fstp    [esp+164h+var_150]
                            fldz
                            fld     [esp+164h+var_150]
                            fcom    st(1)
                            fnstsw  ax
                            fstp    st(1)
                          }
                          __asm { fld     qword ptr ds:0A3D5B0h }
                          if ( __SETP__(HIBYTE(_AX) & 5, 0) )
                          {
                            __asm
                            {
                              fcom    st(1)
                              fnstsw  ax
                            }
                            if ( __SETP__(HIBYTE(_AX) & 0x41, 0) )
                            {
                              __asm { fstp    st }
                            }
                            else
                            {
                              unknown_libname_14(a10, v102);
                              __asm
                              {
                                fstp    [esp+164h+var_154]
                                fld     [esp+164h+var_154]
                                fstp    [esp+164h+var_150]
                                fld     [esp+164h+var_150]
                              }
                            }
                          }
                          else
                          {
                            unknown_libname_14(a10, v102);
                            __asm
                            {
                              fstp    [esp+164h+var_154]
                              fld     [esp+164h+var_154]
                              fadd    qword ptr ds:0A3D5B0h
                              fstp    [esp+164h+var_150]
                              fld     [esp+164h+var_150]
                            }
                          }
                          __asm { fldz }
                          __asm { fstp    [esp+168h+var_154] }
                          __asm { fstp    [esp+16Ch+var_16C]; float }
                          sub_683D80((int)v15, v135, (int)&v137[0].member.super.modlist.next);
                          __asm
                          {
                            fstp    [esp+170h+var_14C+4]
                            fld     [esp+170h+var_14C+4]
                          }
                          __asm
                          {
                            fabs
                            fstp    [esp+164h+var_14C+4]
                            fld     [esp+164h+var_14C+4]
                            fild    dword ptr ds:0B36C18h
                            fmul    qword ptr ds:0A31C78h
                            fstp    [esp+164h+var_14C+4]
                            fld     [esp+164h+var_14C+4]
                            fcompp
                            fnstsw  ax
                          }
                          if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
                          {
                            __asm { fld     [esp+164h+var_150] }
                            __asm { fstp    [esp+16Ch+var_16C]; float }
                            sub_685530((Actor *)v15, v136, 1);
                            return;
                          }
                          sub_5E05F0((Actor *)v15, 0x30);
                        }
                        goto LABEL_319;
                      }
                    }
LABEL_325:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)(
                      _ECX,
                      v15,
                      0xFFFFFFFF);
                    return;
                  default:
                    goto LABEL_168;
                }
              }
            }
          }
        }
      }
    }
  }
}
