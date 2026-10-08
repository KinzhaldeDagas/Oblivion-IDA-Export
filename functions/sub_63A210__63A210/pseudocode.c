// RadiantAI: HighProcess package action dispatcher. Uses selected package procedureArrayIndex and current procedure slot to index 0xB152B0. Case 5 calls HighProcess vtable +0x510 -> sub_62DA10.
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
  ExtraDataList *DwordAtOffset40; // eax
  TESObjectREFRVtbl *v22; // ecx
  EntryData *equippedLightData; // eax
  TESObjectCELL *v25; // eax
  ExtraDataList *v32; // eax
  TESPackage *(__thiscall *GetCurrentPackage)(BaseProcess *__hidden); // eax
  int v37; // ebx
  TESObjectREFR *v38; // eax
  void (__thiscall *Unk_61)(BaseProcess *__hidden, UInt32); // eax
  char v43; // al
  TESPackage *editorPackage; // ecx
  TESPackage *v45; // ecx
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
  ExtraDataList *v60; // eax
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
  TESPackageType type; // al
  TESObjectREFR *v78; // eax
  MiddleHighProcess_vtbl *v81; // edx
  Actor *v83; // ecx
  PlayerCharacter *v84; // ebp
  TESPackage *CurrentPackage; // eax
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
  TESPackageType v111; // al
  char v112; // al
  char v113; // al
  char *Name; // eax
  bool v115; // zf
  TESPackage *v116; // ecx
  float x; // ebx
  TESObjectREFRVtbl *v118; // ebx
  TESObjectREFRVtbl *v119; // ebx
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  BSExtraData *PackageExtraTarget; // eax
  void (__thiscall **p_SetProcedureCompleted)(TESObjectREFR *, int); // ebx
  int v123; // eax
  void (__thiscall *v124)(BaseFormComponent *); // ebx
  int v125; // eax
  TESPackage *v126; // ecx
  UInt32 *p_unk03C; // ebx
  int v129; // ebp
  float v131; // [esp+5Ch] [ebp-170h]
  float arg0; // [esp+60h] [ebp-16Ch]
  float arg0a; // [esp+60h] [ebp-16Ch]
  float arg0b; // [esp+60h] [ebp-16Ch]
  float arg0c; // [esp+60h] [ebp-16Ch]
  float arg0d; // [esp+60h] [ebp-16Ch]
  TESObjectREFR arg1[4]; // [esp+64h] [ebp-168h] BYREF

  LODWORD(arg1[0].member.rot.z) = a12; /*0x63a231*/
  if ( a12 ) /*0x63a235*/
  {
    if ( a12->vtbl->GetNiNode(a12) ) /*0x63a245*/
    {
      flags = a12->member.super.flags; /*0x63a24f*/
      if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 ) /*0x63a265*/
      {
        if ( Shared_GetDwordAtOffset40(a12) ) /*0x63a26d*/
        {
          if ( *(_BYTE *)(Shared_GetDwordAtOffset40(a12) + 0x26) == 6 /*0x63a2af*/
            && (!a12->vtbl->IsActor(a12) || _ECX->unk2BC != 4)
            && _ECX->unk2BC != 3 )
          {
            animData = _ECX->animData; /*0x63a2b5*/
            if ( animData ) /*0x63a2bd*/
            {
              if ( !ActorAnimData_HasPendingKFModels(animData) ) /*0x63a2c3*/
              {
                v15 = 0; /*0x63a2db*/
                if ( a12->vtbl->IsActor(a12) ) /*0x63a2dd*/
                  v15 = a12; /*0x63a2e3*/
                __asm /*0x63a2e7*/
                {
                  fld     dword ptr [esi+22Ch]
                  fsub    dword ptr ds:0B33E9Ch
                }
                unk1D1 = _ECX->unk1D1; /*0x63a2f3*/
                *(_DWORD *)&arg1[0].member.super.type = p_baseExtraList; /*0x63a2f9*/
                _ECX->unk1D1 = 0; /*0x63a2fa*/
                __asm { fstp    dword ptr [esi+22Ch] } /*0x63a301*/
                _ECX->unk22C = _ET1; /*0x63a301*/
                if ( !v15 ) /*0x63a307*/
                  goto LABEL_171; /*0x63a307*/
                if ( unk1D1 ) /*0x63a30f*/
                  sub_5EB400((Actor *)v15, a10); /*0x63a313*/
                if ( _ECX->unk1EC ) /*0x63a318*/
                {
                  if ( v15->vtbl->GetNiNode(v15) ) /*0x63a32b*/
                  {
                    if ( !((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) ) /*0x63a33b*/
                      sub_635E20((int *)_ECX, (int)v15); /*0x63a344*/
                  }
                }
                if ( _ECX->unk1D0 ) /*0x63a349*/
                  sub_63A020((int **)_ECX, v15); /*0x63a355*/
                if ( _ECX->unk16A || HIBYTE(qword_B3BB2C[0x15F]) ) /*0x63a365*/
                  _ECX->unk16A = sub_693210(v15, _ECX->unk16A); /*0x63a377*/
                if ( Actor::GetDeadState((Actor *)v15) == 3 ) /*0x63a387*/
                {
                  __asm { fld1 } /*0x63a389*/
                  __asm { fst     [esp+16Ch+arg1]; arg1 }
                  __asm { fstp    [esp+16Ch+arg0]; arg0 }
                  Actor_ProcessAction((Actor *)v15, arg0, *(float *)&arg1[0].vtbl); /*0x63a397*/
                  z = *(float *)&a12; /*0x63a39c*/
LABEL_180:
                  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(LODWORD(z) + 0x58) + 0x20))(*(_DWORD *)(LODWORD(z) + 0x58)); /*0x63ada6*/
                  return; /*0x63adae*/
                }
                if ( !sub_45A500(g_TESSaveLoadGame) /*0x63a3ce*/
                  && ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v15->vtbl[1].GetSleepState)(v15, 1)
                  && !((int (__thiscall *)(TESObjectREFR *))v15->vtbl[1].IsMobileObject)(v15) )
                {
                  sub_5E2E00((Actor *)v15); /*0x63a3d6*/
                  v20 = v19; /*0x63a3df*/
                  LOBYTE(arg1[0].member.baseForm) = sub_5E6CD0(v15, 0); /*0x63a3ef*/
                  sub_5EAE70((Actor *)v15, v20, (int)v15, *(int *)&arg1[0].member.super.type); /*0x63a3f6*/
                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int, TESForm *, TESForm *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))_ECX->Unk_89)( /*0x63a419*/
                    _ECX,
                    v15,
                    v20,
                    arg1[0].member.baseForm,
                    arg1[0].member.baseForm,
                    0,
                    0,
                    0,
                    0,
                    0,
                    1);
                  return; /*0x63a41b*/
                }
                if ( _ECX->unk1A0 && !Menu_GetOpenMenuTile(0x3F1) ) /*0x63a42e*/
                {
                  sub_6347E0((Actor *)v15); /*0x63a43d*/
                  _ECX->unk1A0 = 0; /*0x63a442*/
                  return; /*0x63a449*/
                }
                __asm { fld     dword ptr ds:0A3D65Ch } /*0x63a44e*/
                __asm { fstp    [esp+168h+arg1]; float }
                DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v15); /*0x63a45d*/
                if ( Actor_IsUnderwater__(v15, (int)v15->member.pos, DwordAtOffset40, *(float *)&arg1[0].vtbl) ) /*0x63a466*/
                {
                  equippedLightData = _ECX->equippedLightData; /*0x63a46f*/
                  if ( equippedLightData ) /*0x63a477*/
                    sub_5E4260(v15, a9, a10, GameHour, (TESObjectARMO *)equippedLightData->type, 1, 0, 0, 0); /*0x63a487*/
                }
                else
                {
                  __asm /*0x63a48e*/
                  {
                    fldz
                    fcomp   dword ptr [esi+0BCh]
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) == 0 ) /*0x63a49b*/
                    goto LABEL_42; /*0x63a49b*/
                  v25 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v15); /*0x63a49f*/
                  if ( TESObjectCELL_IsInterior(v25) ) /*0x63a4a6*/
                    goto LABEL_41; /*0x63a4a6*/
                  __asm { fld     dword ptr [esi+0BCh] } /*0x63a4af*/
                  __asm { fstp    qword ptr [esp+164h+var_14C+4] }
                  _EAX = GameSetting_GetSafeFloatPointer((int *)MEMORY[0xB37A58]); /*0x63a4be*/
                  __asm /*0x63a4c3*/
                  {
                    fld     dword ptr [eax]
                    fcomp   qword ptr [esp+164h+var_14C+4]
                    fnstsw  ax
                  }
                  if ( __SETP__(BYTE1(_EAX) & 5, 0) ) /*0x63a4cb*/
                  {
LABEL_41:
                    __asm /*0x63a4d0*/
                    {
                      fld     dword ptr [esi+0BCh]
                      fsub    dword ptr ds:0B33E9Ch
                      fstp    dword ptr [esi+0BCh]
                    }
                    _ECX->unk0BC = _ET1; /*0x63a4dc*/
                  }
                  else
                  {
LABEL_42:
                    sub_603160((int)v15, a4, a5, a6, a7, a8, a9, a10, GameHour); /*0x63a4e6*/
                  }
                }
                __asm /*0x63a4eb*/
                {
                  fldz
                  fcom    dword ptr [esi+2B0h]
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x63a4f8*/
                {
                  __asm { fstp    dword ptr [esi+2ACh] } /*0x63a510*/
                  _ECX->unk2AC = _ET1; /*0x63a510*/
                }
                else
                {
                  __asm /*0x63a4fa*/
                  {
                    fstp    st
                    fld     dword ptr [esi+2B0h]
                    fsub    dword ptr ds:0B33E9Ch
                    fstp    dword ptr [esi+2B0h]
                  }
                  _ECX->unk2B0 = _ET1; /*0x63a508*/
                }
                if ( _ECX->unk290 ) /*0x63a516*/
                {
                  __asm { fld     dword ptr [esi+28Ch] } /*0x63a51f*/
                  arg1[0].vtbl = v22; /*0x63a525*/
                  __asm { fsub    dword ptr ds:0B33E9Ch } /*0x63a526*/
                  __asm { fstp    dword ptr [esi+28Ch] }
                  _ECX->unk28C = _ET1; /*0x63a52e*/
                  __asm /*0x63a534*/
                  {
                    fld     dword ptr ds:0A3D65Ch
                    fstp    [esp+168h+arg1]; float
                  }
                  v32 = (ExtraDataList *)Shared_GetDwordAtOffset40(v15); /*0x63a53d*/
                  if ( Actor_IsUnderwater__(v15, (int)v15->member.pos, v32, *(float *)&arg1[0].vtbl) ) /*0x63a546*/
                  {
                    _EAX = GameSetting_GetSafeFloatPointer((int *)unk_B36C88); /*0x63a57d*/
                    __asm /*0x63a582*/
                    {
                      fld     dword ptr [eax]
                      fstp    dword ptr [esi+28Ch]
                    }
                    _ECX->unk28C = _ET1; /*0x63a584*/
                  }
                  else
                  {
                    __asm /*0x63a54f*/
                    {
                      fldz
                      fcomp   dword ptr [esi+28Ch]
                      fnstsw  ax
                    }
                    if ( (_AX & 0x100) == 0 ) /*0x63a55c*/
                    {
                      _ECX->RemoveWornItems(_ECX, (Actor *)v15, 0, 0); /*0x63a56d*/
                      _ECX->unk290 = 0; /*0x63a56f*/
                    }
                  }
                }
                if ( v15 != (TESObjectREFR *)reference ) /*0x63a590*/
                  sub_603320((int *)v15, (unsigned __int16 *)p_baseExtraList, a4, a5, a6, a7, a8, a9, a10, GameHour); /*0x63a594*/
                GetCurrentPackage = _ECX->GetCurrentPackage; /*0x63a59b*/
                LOBYTE(arg1[0].member.childCell.GetChildCell) = 0; /*0x63a5a3*/
                LOBYTE(arg1[0].member.baseForm) = 0; /*0x63a5a8*/
                v37 = (int)GetCurrentPackage(_ECX); /*0x63a5b5*/
                if ( v15 != (TESObjectREFR *)reference ) /*0x63a5b7*/
                {
                  if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) ) /*0x63a5c3*/
                  {
                    if ( Actor_IsNPC((Actor *)v15) ) /*0x63a5cb*/
                    {
                      if ( v37 ) /*0x63a5d6*/
                      {
                        if ( *(_BYTE *)(v37 + 0x20) == 0x16 ) /*0x63a5dc*/
                        {
                          v38 = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15); /*0x63a5eb*/
                          if ( !TESObjectREFR_IsOwnedBy(v38, v15, 1) ) /*0x63a5ef*/
                          {
                            sub_5EAE70((Actor *)v15, v37, (int)v15, *(int *)&arg1[0].member.super.type); /*0x63a5fa*/
                            return; /*0x63a5ff*/
                          }
                        }
                      }
                    }
                  }
                }
                __asm /*0x63a604*/
                {
                  fldz
                  fcomp   dword ptr [esi+260h]
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x63a60e*/
                {
                  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x63a61c*/
                  __asm /*0x63a621*/
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
                  if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x63a659*/
                  {
                    __asm { fldz } /*0x63a65d*/
                    Unk_61 = _ECX->Unk_61; /*0x63a65f*/
                    __asm { fstp    dword ptr [esi+1ACh] } /*0x63a665*/
                    _ECX->unk1AC = _ET1; /*0x63a665*/
                    LOBYTE(arg1[0].member.baseForm) = 1; /*0x63a670*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))Unk_61)(_ECX, v15, 3); /*0x63a675*/
                    p_baseExtraList = (Actor *)&v15->member.baseExtraList; /*0x63a67c*/
                    GameHour = Script_AddEventToExtraScript(v37, &v15->member.baseExtraList, 0x400); /*0x63a681*/
                    if ( v37 ) /*0x63a68b*/
                    {
                      if ( sub_565DF0((_DWORD *)v37) ) /*0x63a68f*/
                      {
                        GameHour = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x63a69d*/
                        ExtraDataList_SetRunOnceExtraPackage(&v15->member.baseExtraList, v37, v43); /*0x63a6a6*/
                      }
                    }
                  }
                }
                editorPackage = _ECX->editorPackage; /*0x63a6ab*/
                if ( editorPackage ) /*0x63a6b0*/
                  LOBYTE(arg1[0].member.baseForm) = sub_5660E0(editorPackage); /*0x63a6b7*/
                if ( v15 != (TESObjectREFR *)reference && !_ECX->currentPackage ) /*0x63a6c3*/
                {
                  v45 = _ECX->editorPackage; /*0x63a6cc*/
                  if ( !v45 || !TESPackage::IsTemporaryOverrideType(v45) ) /*0x63a6d3*/
                    LOBYTE(arg1[0].member.childCell.GetChildCell) = _ECX->Unk_06( /*0x63a6eb*/
                                                                      _ECX,
                                                                      (UInt32)v15,
                                                                      (UInt32)arg1[0].member.baseForm);
                }
                v46 = _ECX->GetCurrentPackage(_ECX); /*0x63a6f9*/
                if ( LOBYTE(arg1[0].member.childCell.GetChildCell) || !v46 && !_ECX->unk0D0 ) /*0x63a70a*/
                {
                  _ECX->RemoveFornitureInteraction(_ECX, (Actor *)v15); /*0x63a721*/
                  v47 = _ECX->GetCurrentPackage(_ECX); /*0x63a72f*/
                  if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) ) /*0x63a73b*/
                  {
                    v48 = _ECX->editorPackage; /*0x63a741*/
                    if ( v48 ) /*0x63a746*/
                    {
                      if ( (v48->members.packageFlags & 0x800000) == 0 ) /*0x63a750*/
                      {
                        v49 = (void *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15); /*0x63a75c*/
                        sub_5E9A60(v49, GameHour); /*0x63a760*/
                        if ( !v50 ) /*0x63a767*/
                        {
                          v51 = (Actor *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15); /*0x63a773*/
                          sub_5F80D0(v51); /*0x63a777*/
                          __asm /*0x63a77c*/
                          {
                            fldz
                            fstp    dword ptr [esi+1A8h]
                          }
                          _ECX->conversationScanCooldown = _ET1; /*0x63a77e*/
                        }
                        ((void (__fastcall *)(TESObjectREFR *))v15->vtbl[1].super.Unk_22)(v15); /*0x63a78e*/
                        return; /*0x63a78e*/
                      }
                    }
                  }
                  if ( v47 ) /*0x63a795*/
                  {
                    target = (Atmosphere *)v47->members.target; /*0x63a797*/
                    if ( target ) /*0x63a79c*/
                    {
                      if ( TargetData::GetTargetType((TargetData *)target) ) /*0x63a7a0*/
                        _ECX->unk038 = (UInt32)Shared_GetPointerAtOffset08(target); /*0x63a7b0*/
                    }
                  }
                }
                if ( !_ECX->currentPackage ) /*0x63a7b3*/
                {
                  switch ( ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) ) /*0x63a7d7*/
                  {
                    case 2: /*0x63a7d7*/
                    case 3: /*0x63a7d7*/
                      if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) ) /*0x63a810*/
                      {
                        vtbl = v15->vtbl; /*0x63a816*/
                        v57 = ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15); /*0x63a820*/
                        ((void (__thiscall *)(TESObjectREFR *, int))vtbl[1].super.Unk_21)(v15, v57); /*0x63a82b*/
                      }
                      break; /*0x63a82b*/
                    case 5: /*0x63a7d7*/
                    case 0xA: /*0x63a7d7*/
                      v54 = ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15); /*0x63a7e8*/
                      v55 = v15->vtbl; /*0x63a7ec*/
                      if ( v54 ) /*0x63a7f0*/
                        v55[1].super.Unk_22((TESForm *)v15); /*0x63a7f8*/
                      else
                        v55[1].Unk_5E(v15); /*0x63a802*/
                      break; /*0x63a7fa*/
                    default:
                      break;
                  }
                }
                v58 = _ECX->GetCurrentPackage(_ECX); /*0x63a82d*/
                _ECX->Unk_24(_ECX, (UInt32)v15); /*0x63a846*/
                if ( LOBYTE(arg1[0].member.childCell.GetChildCell) ) /*0x63a84d*/
                {
                  sub_5E7BE0(); /*0x63a851*/
                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_156)(_ECX, v15); /*0x63a861*/
                }
                if ( !((int (__thiscall *)(HighProcess *))_ECX->Unk_5C)(_ECX) ) /*0x63a86d*/
                {
                  if ( v58 ) /*0x63a879*/
                  {
                    if ( !TESPackage::IsTemporaryOverrideType(v58) ) /*0x63a881*/
                    {
                      v59 = _ECX->editorPackage; /*0x63a88a*/
                      if ( v59 ) /*0x63a88f*/
                      {
                        if ( *(_DWORD *)(*(_DWORD *)(4 * v59->members.procedureArrayIndex + 0xB152B0) /*0x63a89e*/
                                       + 4 * _ECX->editorPackProcedure) )
                        {
                          if ( ((unsigned __int8 (__thiscall *)(HighProcess *))_ECX->GetUnk25C)(_ECX) /*0x63a8da*/
                            || (v58->members.packageFlags & 0x200) != 0
                            && (v58->members.packageFlags & 1) != 0
                            && Shared_GetDwordAtOffset40(v15)
                            && (v60 = (ExtraDataList *)Shared_GetDwordAtOffset40(v15),
                                TESObjectCELL_IsOwnedByActor(v60, (Actor *)v15)) )
                          {
                            ((void (__thiscall *)(HighProcess *, TESObjectREFR *, _DWORD))_ECX->Unk_55)(_ECX, v15, 0); /*0x63a8f0*/
                            v58 = _ECX->GetCurrentPackage(_ECX); /*0x63a8fe*/
                          }
                        }
                      }
                    }
                  }
                }
                __asm /*0x63a900*/
                {
                  fldz
                  fcom    dword ptr [esi+248h]
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x63a90d*/
                {
                  __asm { fstp    st } /*0x63a985*/
                }
                else
                {
                  __asm /*0x63a90f*/
                  {
                    fld     dword ptr [esi+248h]
                    fsub    dword ptr ds:0B33E9Ch
                    fstp    [esp+164h+var_154]
                    fld     [esp+164h+var_154]
                    fst     dword ptr [esi+248h]
                  }
                  _ECX->unk248 = _ET1; /*0x63a923*/
                  __asm /*0x63a929*/
                  {
                    fcompp
                    fnstsw  ax
                  }
                  if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) && !sub_5E6CD0(v15, 0) ) /*0x63a936*/
                  {
                    __asm { fldz } /*0x63a941*/
                    Unk_64 = _ECX->Unk_64; /*0x63a943*/
                    __asm { fstp    dword ptr [esi+248h] } /*0x63a949*/
                    _ECX->unk248 = _ET1; /*0x63a949*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))Unk_64)(_ECX, v15); /*0x63a952*/
                    _ECX->SetCurrentPackage(_ECX, 0); /*0x63a960*/
                    _ECX->Unk_126(_ECX); /*0x63a96c*/
                    v66 = _ECX->GetCurrentPackage; /*0x63a970*/
                    _ECX->follow = 0; /*0x63a978*/
                    v58 = (TESPackage *)((int (__thiscall *)(HighProcess *, _DWORD))v66)( /*0x63a981*/
                                          _ECX,
                                          *(_DWORD *)&arg1[0].member.super.type);
                  }
                }
                _ECX->Unk_15C(_ECX); /*0x63a991*/
                if ( v15 != (TESObjectREFR *)reference ) /*0x63a999*/
                {
                  if ( (_ECX->GetIsAlerted(_ECX) || _ECX->unk244) && !_ECX->GetWeaponOut(_ECX) ) /*0x63a9c1*/
                  {
                    arg1[0].vtbl = (TESObjectREFRVtbl *)1; /*0x63a9c7*/
LABEL_122:
                    sub_5E6D70(v15, (int)arg1[0].vtbl); /*0x63aa30*/
                    goto LABEL_123; /*0x63aa32*/
                  }
                  if ( !_ECX->GetIsAlerted(_ECX) && !_ECX->unk244 ) /*0x63a9db*/
                  {
                    if ( _ECX->GetWeaponOut(_ECX) ) /*0x63a9ed*/
                    {
                      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v15->vtbl[1].GetSleepState)(v15, 1) ) /*0x63a9ff*/
                      {
                        if ( !_ECX->equippedWeaponData /*0x63aa28*/
                          || (p_baseExtraList = (Actor *)&_ECX->Unk_48,
                              v67 = (int)v15->vtbl->GetActiveSkinInfo(v15),
                              ((int (__thiscall *)(HighProcess *, int))p_baseExtraList->vtbl)(_ECX, v67)) )
                        {
                          arg1[0].vtbl = 0; /*0x63aa2e*/
                          goto LABEL_122; /*0x63aa2e*/
                        }
                      }
                    }
                  }
                }
LABEL_123:
                if ( v58 ) /*0x63aa39*/
                {
                  if ( v58->members.type == kPackageType_Dialogue ) /*0x63aa3f*/
                  {
                    p_baseExtraList = _ECX->follow; /*0x63aa41*/
                    if ( p_baseExtraList ) /*0x63aa46*/
                    {
                      arg1[0].member.super.modlist.next = (TESForm::ModReferenceList *)_ECX->GetProcessLevel(_ECX); /*0x63aa53*/
                      if ( (TESForm::ModReferenceList *)Actor::GetProcessLevel(p_baseExtraList) != arg1[0].member.super.modlist.next ) /*0x63aa62*/
                      {
                        v15->vtbl[1].GetAnimData(v15); /*0x63aa6e*/
                        v58 = _ECX->GetCurrentPackage(_ECX); /*0x63aa7c*/
                        _ECX->Unk_15C(_ECX); /*0x63aa88*/
                      }
                    }
                  }
                }
                if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) ) /*0x63aa94*/
                {
                  if ( v15->vtbl->GetSleepState(v15) == kSitSleep_None ) /*0x63aaa4*/
                  {
                    if ( v58 ) /*0x63aaac*/
                    {
                      if ( v58->members.type != kPackageType_MountHorse ) /*0x63aab2*/
                      {
                        arg1[0].vtbl = (TESObjectREFRVtbl *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15); /*0x63aac0*/
                        sub_602050((Actor *)v15, (int)v58, (int)v15, a9, arg1[0]); /*0x63aac3*/
                      }
                    }
                  }
                }
                if ( !((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) /*0x63ab24*/
                  && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.super.CopyFromBase)(v15)
                  && ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX)
                  && ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) != 9
                  && ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) != 4 )
                {
                  if ( v58 /*0x63ab44*/
                    && (p_baseExtraList = (Actor *)v58->members.procedureArrayIndex,
                        *(_DWORD *)(*(_DWORD *)(4 * (_DWORD)p_baseExtraList + 0xB152B0)
                                  + 4 * _ECX->GetCurrentPackProcedure(_ECX)) == 0x16) )
                  {
                    if ( !sub_654F10(_ECX, (int)v58, a9, a10, (int)v15) ) /*0x63ab50*/
                      return; /*0x63ab50*/
                  }
                  else if ( !((unsigned __int8 (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_6C)(_ECX, v15) ) /*0x63ab63*/
                  {
                    v68 = _ECX->__vftable; /*0x63ab70*/
                    if ( _ECX->furniture ) /*0x63ab69*/
                      ((void (__thiscall *)(HighProcess *, TESObjectREFR *))v68->Unk_6B)(_ECX, v15); /*0x63ab7d*/
                    else
                      v68->SetSleepState(_ECX, (Actor *)v15, 0, 0, 0x7F); /*0x63ab8e*/
                  }
                }
                if ( !v58 || v58->members.procedureArrayIndex == 0xFFFFFFFF ) /*0x63ab9c*/
                  goto LABEL_171; /*0x63ab9c*/
                v69 = sub_571F90(1); /*0x63aba4*/
                arg1[0].member.super.modlist.next = (TESForm::ModReferenceList *)(dword_B139A4 - dword_B13980); /*0x63abb8*/
                __asm { fild    [esp+164h+var_154] } /*0x63abbc*/
                arg1[0].vtbl = (TESObjectREFRVtbl *)1; /*0x63abc0*/
                __asm { fstp    [esp+170h+arg0]; float } /*0x63abc5*/
                __asm
                {
                  fild    dword ptr ds:0B1399Ch
                  fstp    [esp+170h+var_170]; float
                }
                v70 = (TESForm *)sub_571720(v69, v131, arg0a, 1); /*0x63abd4*/
                location = v58->members.location; /*0x63abd9*/
                arg1[0].member.baseForm = v70; /*0x63abde*/
                if ( !location ) /*0x63abe2*/
                  goto LABEL_156; /*0x63abe2*/
                if ( !sub_569A10(location) ) /*0x63abe4*/
                  goto LABEL_156; /*0x63abe4*/
                p_baseExtraList = (Actor *)v58->members.procedureArrayIndex; /*0x63abf5*/
                if ( *(_DWORD *)(*(_DWORD *)(4 * (_DWORD)p_baseExtraList + 0xB152B0) /*0x63ac07*/
                               + 4 * _ECX->GetCurrentPackProcedure(_ECX)) == 0x2C )
                  goto LABEL_156; /*0x63ac07*/
                unk030 = _ECX->unk030; /*0x63ac09*/
                if ( unk030 ) /*0x63ac0e*/
                {
                  if ( !sub_4D74B0(unk030) || v15->vtbl->GetSleepState(v15) ) /*0x63ac32*/
                    goto LABEL_156; /*0x63ac36*/
                }
                else
                {
                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_156)(_ECX, v15); /*0x63ac1b*/
                }
                _ECX->SetCurrentPackProcedure(_ECX, kProcedure_TRAVEL); /*0x63ac44*/
LABEL_156:
                if ( v15 != (TESObjectREFR *)reference /*0x63ac77*/
                  && (_ECX->movementFlags & 0xF) != 0
                  && (((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) == 9
                   || ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) == 4) )
                {
                  if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) ) /*0x63ac83*/
                  {
                    sub_5F0410(v15, (int)p_baseExtraList); /*0x63ac8b*/
                  }
                  else if ( _ECX->furniture ) /*0x63ac92*/
                  {
                    sub_5E4140(v15); /*0x63ac9d*/
                  }
                  else
                  {
                    _ECX->SetSleepState(_ECX, (Actor *)v15, 0, 0, 0x7F); /*0x63acb5*/
                  }
                }
                procedureArrayIndex = v58->members.procedureArrayIndex; /*0x63acbf*/
                switch ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) /*0x63acd5*/
                                   + 4 * _ECX->GetCurrentPackProcedure(_ECX)) )
                {
                  case 0: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, TESObjectCELL *(__thiscall *)(TESChildCELL *), int, unsigned int))_ECX->Travel)( /*0x63acf0*/
                      _ECX,
                      v15,
                      arg1[0].member.childCell.GetChildCell,
                      1,
                      0xFFFFFFFF);
                    goto LABEL_168; /*0x63acf2*/
                  case 1: /*0x63acd5*/
                    HighProcess::UpdatePackageProcedureAction1(_ECX, (Actor *)v15);// Package-procedure dispatcher action 1 invokes HighProcess::UpdatePackageProcedureAction1 directly; its embedded social scan is the second ambient-conversation entry path. /*0x63b359*/
                    goto LABEL_168; /*0x63b35e*/
                  case 2: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_146)(_ECX, v15, 1); /*0x63ae2b*/
                    goto LABEL_168; /*0x63ae2d*/
                  case 3: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_148)(_ECX, v15); /*0x63ae7d*/
                    goto LABEL_168; /*0x63ae7d*/
                  case 4: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_142)(_ECX, v15); /*0x63b36e*/
                    goto LABEL_168; /*0x63b370*/
                  case 5: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_143)(_ECX, v15);// Package-procedure dispatcher action 5 invokes HighProcess vtable +0x510 -> UpdatePackageProcedureAction5; its completed/idle branch contains the first ambient-conversation scan. /*0x63b392*/
                    goto LABEL_168; /*0x63b394*/
                  case 6: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int, unsigned int, _DWORD))_ECX->Unk_65)( /*0x63b3aa*/
                      _ECX,
                      v15,
                      1,
                      0xFFFFFFFF,
                      0);
                    goto LABEL_168; /*0x63b3ac*/
                  case 7: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_141)(_ECX, v15); /*0x63b3bc*/
                    goto LABEL_168; /*0x63b3be*/
                  case 8: /*0x63acd5*/
                    _ECX->Alarm(_ECX, (Actor *)v15); /*0x63b3ce*/
                    goto LABEL_168; /*0x63b3d0*/
                  case 0xA: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_67)(_ECX, v15); /*0x63b428*/
                    goto LABEL_168; /*0x63b42a*/
                  case 0xC: /*0x63acd5*/
                    _ECX->Dialogue(_ECX, (Actor *)v15); /*0x63b251*/
                    goto LABEL_168; /*0x63b253*/
                  case 0xD: /*0x63acd5*/
                    if ( !_ECX->follow ) /*0x63af04*/
                      _ECX->Unk_155(_ECX, (TESChildCELL *)v15); /*0x63af15*/
                    follow = _ECX->follow; /*0x63af17*/
                    if ( !follow ) /*0x63af1c*/
                      goto LABEL_248; /*0x63af1c*/
                    type = v58->members.type; /*0x63af3b*/
                    if ( type == kPackageType_Dialogue && follow == (Actor *)reference ) /*0x63af4a*/
                    {
                      sub_5EAE70((Actor *)v15, (int)v58, (int)v15, *(int *)&arg1[0].member.super.type); /*0x63af4e*/
                      sub_5E05F0((Actor *)v15, 0x30); /*0x63af57*/
                      goto LABEL_168; /*0x63af5c*/
                    }
                    if ( type == kPackageType_Follow ) /*0x63af63*/
                    {
                      if ( sub_663A00() < stru_B36A80 ) /*0x63af70*/
                      {
LABEL_248:
                        ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1); /*0x63b219*/
                        sub_5E05F0((Actor *)v15, 0x30); /*0x63b22c*/
                        goto LABEL_168; /*0x63b231*/
                      }
                    }
                    else
                    {
                      if ( (follow->members.super.super.super.flags & 0x20) != 0 /*0x63afa9*/
                        || (follow->members.super.super.super.flags & 0x800) != 0 )
                      {
                        if ( (follow->members.super.super.super.flags & 0x20) != 0 ) /*0x63b20d*/
                          sub_566870((TargetData **)v58, (TESForm *)follow, 1); /*0x63b214*/
                        goto LABEL_248; /*0x63b214*/
                      }
                      if ( follow->vtbl->super.super.IsDead((TESObjectREFR *)follow, 1) ) /*0x63afbc*/
                      {
                        sub_566870((TargetData **)v58, (TESForm *)_ECX->follow, 1); /*0x63afca*/
                        ((void (__thiscall *)(TESObjectREFR *, Actor *))v15->vtbl[1].Set3D)(v15, _ECX->follow); /*0x63afdd*/
                        return; /*0x63afdf*/
                      }
                      if ( v58->members.type != kPackageType_Dialogue && (v58->members.packageFlags & 0x10000) == 0 ) /*0x63aff2*/
                      {
                        if ( Actor::GetCurrentPackage((Actor *)v15)->members.type == kPackageType_Follow ) /*0x63b003*/
                        {
                          arg1[0].member.super.modlist.next = (TESForm::ModReferenceList *)Shared_GetPointerAtOffset08((Atmosphere *)v58->members.target); /*0x63b00d*/
                          __asm { fild    [esp+164h+var_154] } /*0x63b011*/
                          v78 = (TESObjectREFR *)_ECX->follow; /*0x63b015*/
                          __asm { fstp    [esp+16Ch+var_154] } /*0x63b01b*/
                          TesObjectREF_GetDistance(v15, v78, 0); /*0x63b021*/
                          __asm /*0x63b026*/
                          {
                            fld     [esp+164h+var_154]
                            fcompp
                            fnstsw  ax
                          }
                          if ( !__SETP__(HIBYTE(_AX) & 5, 0) ) /*0x63b031*/
                            goto LABEL_248; /*0x63b031*/
                        }
                        else if ( v58->members.procedureArrayIndex == 0x16 ) /*0x63b058*/
                        {
                          TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x63b05f*/
                          __asm { fstp    [esp+164h+var_154] } /*0x63b064*/
                          _EAX = GameSetting_GetSafeFloatPointer((int *)unk_B36B40); /*0x63b06d*/
                          __asm /*0x63b072*/
                          {
                            fld     [esp+164h+var_154]
                            fld     dword ptr [eax]
                            fadd    dword ptr [esi+198h]
                            fcomp   st(1)
                            fnstsw  ax
                          }
                          if ( !__SETP__(BYTE1(_EAX) & 0x41, 0) ) /*0x63b085*/
                          {
                            v81 = _ECX->__vftable; /*0x63b08b*/
                            __asm { fstp    dword ptr [esi+198h] } /*0x63b08d*/
                            _ECX->recentSocialTargetCooldown = _ET1; /*0x63b08d*/
                            ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))v81->Unk_61)( /*0x63b09e*/
                              _ECX,
                              v15,
                              0xFFFFFFFF);
                            sub_5E05F0((Actor *)v15, 0x30); /*0x63b0a4*/
                            goto LABEL_168; /*0x63b0a9*/
                          }
                          __asm { fstp    st } /*0x63b236*/
                        }
                        else
                        {
                          if ( Actor::GetCurrentPackage((Actor *)v15)->members.type == kPackageType_Escort ) /*0x63b0b9*/
                          {
                            v83 = _ECX->follow; /*0x63b0bb*/
                            if ( v83 ) /*0x63b0c0*/
                            {
                              if ( v83->vtbl->super.super.IsActor((TESObjectREFR *)v83) ) /*0x63b0ca*/
                              {
                                v84 = (PlayerCharacter *)_ECX->follow; /*0x63b0d0*/
                                if ( v84 ) /*0x63b0d5*/
                                {
                                  if ( v84 != reference ) /*0x63b0dd*/
                                  {
                                    CurrentPackage = Actor::GetCurrentPackage(_ECX->follow); /*0x63b0e1*/
                                    if ( CurrentPackage && CurrentPackage->members.type == kPackageType_Follow ) /*0x63b0ee*/
                                      v84->super.super.super.process->editorPackProcedure = kProcedure_WANDER; /*0x63b0f3*/
                                    else
                                      ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)( /*0x63b109*/
                                        _ECX,
                                        v15,
                                        0xFFFFFFFE);
                                  }
                                }
                              }
                            }
                          }
                          arg1[0].member.baseForm = (TESForm *)Shared_GetPointerAtOffset08((Atmosphere *)v58->members.target); /*0x63b115*/
                          if ( (int)arg1[0].member.baseForm <= 0 ) /*0x63b119*/
                            arg1[0].member.baseForm = (TESForm *)0xC8; /*0x63b11b*/
                          if ( (PlayerCharacter *)_ECX->follow == reference ) /*0x63b12c*/
                          {
                            __asm { fild    [esp+164h+var_14C] } /*0x63b12e*/
                          }
                          else
                          {
                            v86 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v15); /*0x63b136*/
                            if ( TESObjectCELL_IsInterior(v86) ) /*0x63b13d*/
                            {
                              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36A88[6]); /*0x63b14b*/
                              __asm { fld     dword ptr [eax] } /*0x63b150*/
                            }
                            else
                            {
                              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36A88[4]); /*0x63b159*/
                              __asm /*0x63b15e*/
                              {
                                fild    [esp+164h+var_14C]
                                fmul    dword ptr [eax]
                              }
                            }
                          }
                          v89 = _ECX->follow; /*0x63b164*/
                          __asm { fstp    [esp+164h+var_150] } /*0x63b167*/
                          if ( !v89->vtbl->super.super.IsActor((TESObjectREFR *)v89) /*0x63b191*/
                            || (v90 = _ECX->follow) == 0
                            || sub_5E05B0(&_ECX->follow->vtbl)
                            || v90 == (Actor *)reference )
                          {
                            TesObjectREF_GetDistance(v15, (TESObjectREFR *)_ECX->follow, 0); /*0x63b1d6*/
                            __asm /*0x63b1db*/
                            {
                              fld     [esp+164h+var_150]
                              fmul    qword ptr ds:0A2FAA0h
                              fcompp
                              fnstsw  ax
                            }
                            if ( (_AX & 0x100) == 0 ) /*0x63b1ec*/
                              goto LABEL_248; /*0x63b1ec*/
                          }
                          else
                          {
                            TesObjectREF_GetDistance(v15, (TESObjectREFR *)_ECX->follow, 0); /*0x63b19b*/
                            __asm /*0x63b1a0*/
                            {
                              fld     [esp+164h+var_150]
                              fcompp
                              fnstsw  ax
                            }
                            if ( (_AX & 0x100) == 0 ) /*0x63b1ab*/
                              goto LABEL_248; /*0x63b1ab*/
                          }
                        }
                      }
                    }
                    sub_5E05F0((Actor *)v15, 0x30); /*0x63b23c*/
                    goto LABEL_168; /*0x63b241*/
                  case 0xE: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, _DWORD))_ECX->Unk_146)(_ECX, v15, 0); /*0x63b34f*/
                    goto LABEL_168; /*0x63b351*/
                  case 0xF: /*0x63acd5*/
                    v95 = _ECX->follow; /*0x63b3d5*/
                    v96 = ((int (__thiscall *)(HighProcess *, Actor *, _DWORD, TESForm::FormFlags))_ECX->GetDetectionState)( /*0x63b3e3*/
                            _ECX,
                            v95,
                            *(_DWORD *)&arg1[0].member.super.type,
                            arg1[0].member.super.flags);
                    if ( v95 ) /*0x63b3e7*/
                    {
                      if ( v96 ) /*0x63b3eb*/
                        *(_DWORD *)(v96 + 4) = 3; /*0x63b3fe*/
                      else
                        ((void (__thiscall *)(HighProcess *, Actor *, int))_ECX->Unk_EC)(_ECX, v95, 3); /*0x63b3fa*/
                    }
                    Unk_66 = _ECX->Unk_66; /*0x63b407*/
                    arg1[0].member.super.flags = 0xFFFFFFFF; /*0x63b40d*/
                    *(_DWORD *)&arg1[0].member.super.type = 1; /*0x63b40f*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, _DWORD))Unk_66)(_ECX, v15, 0); /*0x63b416*/
                    goto LABEL_168; /*0x63b418*/
                  case 0x10: /*0x63acd5*/
                    _ECX->SayTopic(_ECX, (Actor *)v15, 0, 0, 0, 1); /*0x63b26b*/
                    goto LABEL_168; /*0x63b26d*/
                  case 0x11: /*0x63acd5*/
                    if ( !_ECX->follow ) /*0x63b2d1*/
                    {
                      _ECX->Unk_155(_ECX, (TESChildCELL *)v15); /*0x63b2e2*/
                      if ( !_ECX->follow ) /*0x63b2e4*/
                      {
                        ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1); /*0x63b2f7*/
                        if ( !_ECX->unk0D0 ) /*0x63b2f9*/
                          ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_64)(_ECX, v15); /*0x63b30d*/
                      }
                    }
                    v94 = _ECX->follow; /*0x63b30f*/
                    if ( !v94 || v94 == (Actor *)reference ) /*0x63b31c*/
                      goto LABEL_200; /*0x63b31c*/
                    _ECX->Unk_21(_ECX, (UInt32)v15, (UInt32)v58, 0); /*0x63b32c*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1); /*0x63b33b*/
                    goto LABEL_168; /*0x63b33d*/
                  case 0x12: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_69)(_ECX, v15); /*0x63b380*/
                    goto LABEL_168; /*0x63b382*/
                  case 0x14: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_6A)(_ECX, v15); /*0x63b27d*/
                    goto LABEL_168; /*0x63b27f*/
                  case 0x15: /*0x63acd5*/
                    sub_62A0E0((int)_ECX, a10, GameHour, (Actor *)v15); /*0x63b287*/
                    goto LABEL_168; /*0x63b28c*/
                  case 0x16: /*0x63acd5*/
                    sub_654F10(_ECX, (int)v58, a9, a10, (int)v15); /*0x63b294*/
                    goto LABEL_168; /*0x63b299*/
                  case 0x17: /*0x63acd5*/
                    v93 = _ECX->MountHorse(_ECX, (Actor *)v15); /*0x63b2cf*/
                    goto LABEL_257; /*0x63b2cf*/
                  case 0x18: /*0x63acd5*/
                    v93 = _ECX->DismoutHorse(_ECX, (Actor *)v15); /*0x63b2a9*/
LABEL_257:
                    if ( !v93 ) /*0x63b2ad*/
                      goto LABEL_200; /*0x63b2ad*/
                    goto LABEL_168; /*0x63b2ad*/
                  case 0x1A: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_152)(_ECX, v15); /*0x63ae6d*/
                    goto LABEL_168; /*0x63ae6d*/
                  case 0x1B: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_151)(_ECX, v15); /*0x63ae4d*/
                    goto LABEL_168; /*0x63ae4d*/
                  case 0x1C: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_153)(_ECX, v15); /*0x63ae5d*/
                    goto LABEL_168; /*0x63ae5d*/
                  case 0x1D: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_147)(_ECX, v15); /*0x63aeaa*/
                    goto LABEL_168; /*0x63aeaa*/
                  case 0x1E: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14B)(_ECX, v15); /*0x63add6*/
                    goto LABEL_168; /*0x63add6*/
                  case 0x1F: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_149)(_ECX, v15); /*0x63aeba*/
                    goto LABEL_168; /*0x63aeba*/
                  case 0x20: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14A)(_ECX, v15); /*0x63aeca*/
                    goto LABEL_168; /*0x63aeca*/
                  case 0x21: /*0x63acd5*/
                    sub_628330(_ECX, v15); /*0x63adde*/
                    goto LABEL_168; /*0x63ade3*/
                  case 0x22: /*0x63acd5*/
                    if ( !((int (__thiscall *)(HighProcess *))_ECX->Unk_A9)(_ECX) ) /*0x63aee6*/
LABEL_200:
                      ((void (__thiscall *)(HighProcess *, TESObjectREFR *, int))_ECX->Unk_61)(_ECX, v15, 1); /*0x63aef0*/
                    goto LABEL_168; /*0x63aeff*/
                  case 0x23: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14C)(_ECX, v15); /*0x63ae3d*/
                    goto LABEL_168; /*0x63ae3d*/
                  case 0x24: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14D)(_ECX, v15); /*0x63ae8d*/
                    goto LABEL_168; /*0x63ae8d*/
                  case 0x25: /*0x63acd5*/
                    _ECX->RemoveWornItems(_ECX, (Actor *)v15, 1, 0); /*0x63adf7*/
                    goto LABEL_168; /*0x63adf9*/
                  case 0x26: /*0x63acd5*/
                    sub_62B5C0((float *)_ECX, (int)v15); /*0x63ae95*/
                    goto LABEL_168; /*0x63ae9a*/
                  case 0x27: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_150)(_ECX, v15); /*0x63ae09*/
                    goto LABEL_168; /*0x63ae09*/
                  case 0x28: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14F)(_ECX, v15); /*0x63acff*/
                    goto LABEL_168; /*0x63acff*/
                  case 0x29: /*0x63acd5*/
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_14E)(_ECX, v15); /*0x63ae19*/
                    goto LABEL_168; /*0x63ae19*/
                  case 0x2A: /*0x63acd5*/
                    sub_633DF0((int)_ECX, (int)v58, a9, a10, GameHour, (PlayerCharacter *)v15); /*0x63b432*/
                    goto LABEL_168; /*0x63b437*/
                  case 0x2B: /*0x63acd5*/
                    sub_630100(_ECX, a9, a10, GameHour, (Actor *)v15); /*0x63aed2*/
                    goto LABEL_168; /*0x63aed7*/
                  case 0x2C: /*0x63acd5*/
                    if ( !_ECX->currentPackage ) /*0x63b43c*/
                    {
                      __asm /*0x63b445*/
                      {
                        fldz
                        fstp    dword ptr [esi+260h]
                      }
                      _ECX->unk260 = _ET1; /*0x63b447*/
                    }
                    v99 = v58->members.procedureArrayIndex; /*0x63b44d*/
                    if ( v99 == 1 || v99 == 5 || v99 == 4 ) /*0x63b465*/
                      goto LABEL_325; /*0x63b465*/
                    if ( v99 == 0x1E ) /*0x63b46e*/
                    {
                      v100 = (Atmosphere *)v58->members.target; /*0x63b470*/
                      if ( v100 ) /*0x63b475*/
                      {
                        if ( !Shared_GetPointerAtOffset08(v100) ) /*0x63b477*/
                        {
                          ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)( /*0x63b48d*/
                            _ECX,
                            v15,
                            0xFFFFFFFD);
                          return; /*0x63b48f*/
                        }
                      }
                    }
                    v101 = v58->members.procedureArrayIndex; /*0x63b494*/
                    if ( v101 ) /*0x63b499*/
                    {
                      v111 = v58->members.type; /*0x63b61d*/
                      if ( v111 != kPackageType_Eat && v111 != kPackageType_Sleep ) /*0x63b62a*/
                      {
                        if ( v101 != 7 ) /*0x63b633*/
                          goto LABEL_319; /*0x63b633*/
                        __asm { fld     dword ptr ds:0A30634h } /*0x63b635*/
                        __asm { fstp    [esp+168h+arg1]; float }
                        sub_566DC0(v58, GameHour, a10, (Actor *)v15, 0, *(float *)&arg1[0].vtbl); /*0x63b644*/
                        if ( v112 ) /*0x63b64b*/
                        {
LABEL_319:
                          ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_64)(_ECX, v15); /*0x63b651*/
                          if ( _ECX->unk25C ) /*0x63b65e*/
                          {
                            ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)( /*0x63b674*/
                              _ECX,
                              v15,
                              0xFFFFFFFF);
                            _ECX->Unk_2E(_ECX, 0); /*0x63b682*/
                            return; /*0x63b684*/
                          }
                          Script_AddEventToExtraScript(v58, &v15->member.baseExtraList, 0x400); /*0x63b693*/
                          if ( sub_565DF0(v58) ) /*0x63b69d*/
                          {
                            TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x63b6ab*/
                            ExtraDataList_SetRunOnceExtraPackage(&v15->member.baseExtraList, (int)v58, v113); /*0x63b6b4*/
                          }
                          if ( v58->members.procedureArrayIndex == 0x1A ) /*0x63b6bd*/
                          {
                            if ( _ECX->Unk_2F(_ECX) ) /*0x63b6c9*/
                              return; /*0x63b6cd*/
                            goto LABEL_325; /*0x63b6cd*/
                          }
                          if ( sub_579440() == v15 ) /*0x63b6ee*/
                          {
                            arg1[0].vtbl = *(TESObjectREFRVtbl **)(4 * _ECX->editorPackage->members.type + 0xB12988); /*0x63b6fe*/
                            Name = TESObjectREFR_GetName(v15); /*0x63b701*/
                            _sprintf( /*0x63b711*/
                              (char *)&arg1[0].member.scale,
                              "%s is done with %s",
                              Name,
                              (const char *)arg1[0].vtbl);
                            if ( !arg1[0].member.baseForm /*0x63b72a*/
                              || _mbsicmp(
                                   (const unsigned __int8 *)&arg1[0].member.scale,
                                   (const unsigned __int8 *)arg1[0].member.baseForm) )
                            {
                              Interface_ConsolePrint((char *)&arg1[0].member.scale); /*0x63b73b*/
                            }
                          }
                          if ( !v58->members.time.duration ) /*0x63b743*/
                          {
                            v115 = _ECX->currentPackage == 0; /*0x63b74d*/
                            _ECX->follow = 0; /*0x63b754*/
                            if ( v115 || ((unsigned __int8 (__thiscall *)(HighProcess *))_ECX->GetUnk25C)(_ECX) ) /*0x63b767*/
                            {
                              if ( TESPackage_IsRuntimePackage(_ECX->editorPackage) ) /*0x63b792*/
                              {
                                x = *(float *)&_ECX->editorPackage; /*0x63b79f*/
                                arg1[0].member.rot.x = x; /*0x63b7a4*/
                                if ( TESPackage::IsTemporaryOverrideType((TESPackage *)LODWORD(x)) ) /*0x63b7a8*/
                                {
                                  ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, TESForm::FormFlags))v15->vtbl->super.ClearModified)( /*0x63b7c1*/
                                    v15,
                                    0x30000,
                                    *(_DWORD *)&arg1[0].member.super.type,
                                    arg1[0].member.super.flags);
                                  if ( ExtraDataList::GetExtraPackage(&v15->member.baseExtraList) ) /*0x63b7c5*/
                                  {
                                    v118 = v15[1].vtbl; /*0x63b7d2*/
                                    v118->super.super.CopyFromBase = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))ExtraDataList::GetExtraPackage(&v15->member.baseExtraList); /*0x63b7dc*/
                                    sub_5E8DE0((Actor *)v15, (TESPackage *)v15[1].vtbl->super.super.CopyFromBase); /*0x63b7e8*/
                                    v119 = v15[1].vtbl; /*0x63b7ed*/
                                    v119->super.super.ClearComponentReferences = (void (__thiscall *)(BaseFormComponent *))ExtraDataList_GetPackageExtraIndex(&v15->member.baseExtraList); /*0x63b7f7*/
                                    InitializeComponent = v15[1].vtbl->super.super.InitializeComponent; /*0x63b7fd*/
                                    LODWORD(arg1[0].member.rot.y) = v15[1].vtbl; /*0x63b801*/
                                    PackageExtraTarget = ExtraDataList_GetPackageExtraTarget(&v15->member.baseExtraList); /*0x63b80b*/
                                    (*((void (__thiscall **)(_DWORD, BSExtraData *))InitializeComponent + 0x34))( /*0x63b817*/
                                      LODWORD(arg1[0].member.rot.y),
                                      PackageExtraTarget);
                                    p_SetProcedureCompleted = (void (__thiscall **)(TESObjectREFR *, int))&v15->vtbl->SetProcedureCompleted; /*0x63b81d*/
                                    LOBYTE(v123) = ExtraDataList_GetPackageExtraComplete(&v15->member.baseExtraList); /*0x63b823*/
                                    (*p_SetProcedureCompleted)(v15, v123); /*0x63b82d*/
                                    v124 = v15[1].vtbl->super.super.InitializeComponent; /*0x63b832*/
                                    arg1[0].member.baseForm = (TESForm *)v15[1].vtbl; /*0x63b836*/
                                    LOBYTE(v125) = ExtraDataList_GetPackageExtraActivate(&v15->member.baseExtraList); /*0x63b840*/
                                    (*((void (__thiscall **)(TESForm *, int))v124 + 0xE5))( /*0x63b84c*/
                                      arg1[0].member.baseForm,
                                      v125);
                                    sub_4246D0(&v15->member.baseExtraList); /*0x63b850*/
                                    x = arg1[0].member.rot.x; /*0x63b855*/
                                  }
                                  else
                                  {
                                    v15[1].vtbl->super.super.CopyFromBase = 0; /*0x63b860*/
                                    v15[1].vtbl->super.super.ClearComponentReferences = 0; /*0x63b866*/
                                    (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v15[1].vtbl->super.super.InitializeComponent /*0x63b875*/
                                     + 0x34))(
                                      v15[1].vtbl,
                                      0);
                                    v15->vtbl->SetProcedureCompleted(v15, 0); /*0x63b882*/
                                    (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v15[1].vtbl->super.super.InitializeComponent /*0x63b890*/
                                     + 0xE5))(
                                      v15[1].vtbl,
                                      0);
                                    (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))v15[1].vtbl->super.super.InitializeComponent /*0x63b89c*/
                                     + 6))(
                                      v15[1].vtbl,
                                      v15,
                                      0);
                                  }
                                }
                                else
                                {
                                  _ECX->editorPackage = 0; /*0x63b8a0*/
                                }
                                if ( x != 0.0 ) /*0x63b8a9*/
                                  (*(void (__thiscall **)(float, int))(*(_DWORD *)LODWORD(x) + 0x10))( /*0x63b8b4*/
                                    COERCE_FLOAT(LODWORD(x)),
                                    1);
                                if ( !_ECX->unk0D0 ) /*0x63b8b6*/
                                  ((void (__thiscall *)(HighProcess *, TESObjectREFR *))_ECX->Unk_64)(_ECX, v15); /*0x63b8ca*/
                              }
                            }
                            else
                            {
                              v116 = _ECX->currentPackage; /*0x63b76d*/
                              if ( v116 ) /*0x63b775*/
                                v116->__vftable->super.Destroy((TESForm *)v116, 1); /*0x63b77e*/
                              _ECX->currentPackage = 0; /*0x63b780*/
                            }
                            v126 = _ECX->editorPackage; /*0x63b8cc*/
                            if ( v126 ) /*0x63b8d3*/
                            {
                              if ( sub_565DF0(v126) /*0x63b8f2*/
                                || (_ECX->editorPackage->members.packageFlags & 2) != 0
                                || (_ECX->editorPackage->members.packageFlags & 4) != 0 )
                              {
                                __asm /*0x63b8f4*/
                                {
                                  fldz
                                  fstp    dword ptr [esi+1ACh]
                                }
                                _ECX->unk1AC = _ET1; /*0x63b8f6*/
                              }
                            }
                            if ( _ECX->unk044 ) /*0x63b8fc*/
                              FormHeapFree(_ECX->unk044); /*0x63b904*/
                            _ECX->unk044 = 0; /*0x63b90c*/
                            _ECX->usedItem = 0; /*0x63b90f*/
                            p_unk03C = &_ECX->unk03C; /*0x63b912*/
                            while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&_ECX->unk03C) ) /*0x63b917*/
                            {
                              v129 = *p_unk03C; /*0x63b920*/
                              if ( *p_unk03C ) /*0x63b920*/
                                FormHeapFree(*p_unk03C); /*0x63b927*/
                              BSSimpleList_Remove((int *)&_ECX->unk03C, v129); /*0x63b932*/
                            }
                            __asm { fldz } /*0x63b942*/
                            __asm { fstp    dword ptr [esi+198h] }
                            _ECX->recentSocialTargetCooldown = _ET1; /*0x63b947*/
                            _ECX->unk030 = 0; /*0x63b94d*/
                            BSSimpleList_Clear(&_ECX->unk04C); /*0x63b954*/
                          }
LABEL_168:
                          if ( ((int (__thiscall *)(HighProcess *))_ECX->GetSitSleepState)(_ECX) == 4 ) /*0x63ad10*/
                          {
                            if ( ((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15) ) /*0x63ad1c*/
                            {
                              v74 = (int *)((int (__thiscall *)(TESObjectREFR *))v15->vtbl[2].super.Unk_0C)(v15); /*0x63ad2c*/
                              __asm { fld     dword ptr ds:0B33E9Ch } /*0x63ad2e*/
                              v75 = *v74; /*0x63ad34*/
                              __asm { fstp    [esp+168h+arg1] } /*0x63ad39*/
                              (*(void (__thiscall **)(int *, TESObjectREFRVtbl *))(v75 + 0x228))(v74, arg1[0].vtbl); /*0x63ad42*/
                            }
                          }
LABEL_171:
                          if ( v15->vtbl->GetNiNode(v15) ) /*0x63ad4e*/
                          {
                            if ( v15 != (TESObjectREFR *)reference || reference->isThirdPerson ) /*0x63ad5d*/
                            {
                              __asm { fld1 } /*0x63ad66*/
                              __asm { fst     [esp+16Ch+arg1]; arg1 }
                              __asm { fstp    [esp+16Ch+arg0]; arg0 }
                              Actor_ProcessAction((Actor *)v15, arg0b, *(float *)&arg1[0].vtbl); /*0x63ad74*/
                            }
                          }
                          if ( byte_B15800 && LODWORD(qword_B3BB2C[0x115]) ) /*0x63ad82*/
                          {
                            if ( sub_6825C0((_DWORD *)LODWORD(qword_B3BB2C[0x115]), (Actor *)v15) ) /*0x63ad8d*/
                              return; /*0x63ad94*/
                            sub_6826D0((_DWORD *)LODWORD(qword_B3BB2C[0x115]), v15); /*0x63ad9d*/
                          }
                          z = arg1[0].member.rot.z; /*0x63ada2*/
                          goto LABEL_180; /*0x63ada2*/
                        }
                      }
                    }
                    else
                    {
                      __asm { fld     dword ptr ds:0A30634h } /*0x63b49f*/
                      __asm { fstp    [esp+168h+arg1]; float }
                      v102 = sub_566DC0(v58, GameHour, a10, (Actor *)v15, v101, *(float *)&arg1[0].vtbl); /*0x63b4ad*/
                      if ( v103 ) /*0x63b4b4*/
                      {
                        v104 = v58->members.location; /*0x63b4ba*/
                        _EBP = 0; /*0x63b4bd*/
                        if ( v104 ) /*0x63b4c1*/
                          _EBP = (TESObjectREFR *)sub_5697E0(v104); /*0x63b4c8*/
                        if ( _ECX->unk030 ) /*0x63b4ca*/
                          _EBP = _ECX->unk030; /*0x63b4d1*/
                        if ( (_EBP && _EBP->vtbl->GetBaseForm(_EBP) == (TESForm *)MEMORY[0xB35EB0] /*0x63b532*/
                           || (v106 = (char *)v58->members.location) != 0 && sub_569740(v106) == 3)
                          && !sub_64ADA0((Actor *)_ECX)
                          && v15->vtbl->GetSleepState(v15) == kSitSleep_None
                          && !((unsigned __int8 (__thiscall *)(HighProcess *))_ECX->Unk_136)(_ECX) )
                        {
                          if ( _EBP ) /*0x63b53e*/
                          {
                            __asm { fld     dword ptr [ebp+28h] } /*0x63b540*/
                          }
                          else
                          {
                            _EAX = ((int (__thiscall *)(TESObjectREFR *, float *))v15->vtbl->GetStartingAngle)( /*0x63b554*/
                                     v15,
                                     arg1[0].member.pos);
                            __asm { fld     dword ptr [eax+8] } /*0x63b556*/
                          }
                          __asm /*0x63b559*/
                          {
                            fstp    [esp+164h+var_150]
                            fldz
                            fld     [esp+164h+var_150]
                            fcom    st(1)
                            fnstsw  ax
                            fstp    st(1)
                          }
                          __asm { fld     qword ptr ds:0A3D5B0h }
                          if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x63b572*/
                          {
                            __asm /*0x63b591*/
                            {
                              fcom    st(1)
                              fnstsw  ax
                            }
                            if ( __SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x63b598*/
                            {
                              __asm { fstp    st } /*0x63b5b1*/
                            }
                            else
                            {
                              unknown_libname_14(a10, v102); /*0x63b59a*/
                              __asm /*0x63b59f*/
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
                            unknown_libname_14(a10, v102); /*0x63b574*/
                            __asm /*0x63b579*/
                            {
                              fstp    [esp+164h+var_154]
                              fld     [esp+164h+var_154]
                              fadd    qword ptr ds:0A3D5B0h
                              fstp    [esp+164h+var_150]
                              fld     [esp+164h+var_150]
                            }
                          }
                          __asm { fldz } /*0x63b5b3*/
                          __asm { fstp    [esp+168h+var_154] }
                          __asm { fstp    [esp+16Ch+arg0]; float }
                          sub_683D80((int)v15, arg0c, (float *)&arg1[0].member.super.modlist.next); /*0x63b5c3*/
                          __asm /*0x63b5c8*/
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
                          if ( !__SETP__(HIBYTE(_AX) & 5, 0) ) /*0x63b5f8*/
                          {
                            __asm { fld     [esp+164h+var_150] } /*0x63b5fa*/
                            __asm { fstp    [esp+16Ch+arg0]; float }
                            sub_685530((Actor *)v15, arg0d, 1); /*0x63b605*/
                            return; /*0x63b60d*/
                          }
                          sub_5E05F0((Actor *)v15, 0x30); /*0x63b616*/
                        }
                        goto LABEL_319; /*0x63b61b*/
                      }
                    }
LABEL_325:
                    ((void (__thiscall *)(HighProcess *, TESObjectREFR *, unsigned int))_ECX->Unk_61)( /*0x63b6d3*/
                      _ECX,
                      v15,
                      0xFFFFFFFF);
                    return; /*0x63b6e2*/
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
