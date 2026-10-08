// RadiantAI: alternate/lower process action dispatcher with same 0xB152B0 procedure-row logic as 0x6497F0. Case 5 prints eating debug text but does not itself perform HighProcess sub_62DA10 acquire action.
char __userpurge sub_659010@<al>(
        LowProcess *a1@<ecx>,
        int a2@<edi>,
        double st5_0@<st2>,
        double a4@<st1>,
        double st7_0@<st0>,
        MobileObject *a6)
{
  char result; // al
  Actor *v8; // edi
  double GameHour; // st7
  TESPackage *editorPackage; // eax
  UInt32 v11; // ebp
  TESPackage *v12; // eax
  LocationData *location; // ecx
  UInt32 procedureArrayIndex; // eax
  char v16; // al
  double v19; // st7
  TESPackage *v20; // ecx
  void (__thiscall **p_Unk_105)(BaseProcess *__hidden); // ebp
  float *v22; // eax
  char v23; // al
  int v24; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  int v26; // eax
  TESObjectCELL *v27; // eax
  LocationData *v28; // ecx
  Actor *v30; // eax
  char *Name; // eax
  char *v32; // eax
  Actor *follow; // eax
  char v34; // al
  TESObjectCELL *v36; // eax
  char IsInterior; // al
  float *v38; // ecx
  TESPackage *v41; // eax
  TESPackage *v42; // ecx
  char v43; // al
  double GameDay; // st7
  TESPackage *v45; // ecx
  char v46; // al
  TESPackage *v47; // ecx
  char *v48; // eax
  UInt32 *p_unk03C; // ebp
  int v50; // ebx
  TESPackage *v51; // ebp
  bool v52; // zf
  float *v54; // [esp+24h] [ebp-184h]
  float *v55; // [esp+24h] [ebp-184h]
  float a3; // [esp+28h] [ebp-180h]
  float a3a; // [esp+28h] [ebp-180h]
  BSExtraDataVtbl *v58; // [esp+2Ch] [ebp-17Ch]
  float *v59; // [esp+2Ch] [ebp-17Ch]
  float *v60; // [esp+2Ch] [ebp-17Ch]
  TESWorldSpace *a5; // [esp+30h] [ebp-178h]
  float a5a; // [esp+30h] [ebp-178h]
  float a5b; // [esp+30h] [ebp-178h]
  float v64; // [esp+34h] [ebp-174h]
  float v65; // [esp+38h] [ebp-170h]
  float v66; // [esp+38h] [ebp-170h]
  float v67; // [esp+38h] [ebp-170h]
  float v68; // [esp+38h] [ebp-170h]
  const char *v69; // [esp+38h] [ebp-170h]
  const char *v70; // [esp+38h] [ebp-170h]
  float v71; // [esp+38h] [ebp-170h]
  const char *v72; // [esp+38h] [ebp-170h]
  NiAVObject *PointerAtOffset08; // [esp+4Ch] [ebp-15Ch]
  char v85[12]; // [esp+60h] [ebp-148h] BYREF
  char v86[12]; // [esp+6Ch] [ebp-13Ch] BYREF
  char Format[300]; // [esp+78h] [ebp-130h] BYREF

  result = (char)a6; /*0x659024*/
  if ( a6 ) /*0x659034*/
  {
    v8 = (Actor *)OblivionDynamicCast( /*0x659059*/
                    a6,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x65905b*/
    __asm { fstp    [esp+16Ch+var_14C] } /*0x659060*/
    if ( v8 ) /*0x659066*/
    {
      if ( a1->Unk_06(a1, (UInt32)v8, 0) ) /*0x659076*/
      {
        a1->RemoveFornitureInteraction(a1, v8); /*0x659087*/
        sub_5E7BE0(); /*0x65908b*/
        ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_156)(a1, v8); /*0x65909b*/
      }
      editorPackage = a1->editorPackage; /*0x65909d*/
      v11 = (UInt32)editorPackage; /*0x6590a2*/
      if ( editorPackage ) /*0x6590a4*/
      {
        if ( editorPackage->members.procedureArrayIndex != 0xFFFFFFFF /*0x6590d5*/
          && (!PlayerCharacter::IsJailed(reference) && !reference->unk610 || (*(_BYTE *)(v11 + 0x1E) & 1) == 0) )
        {
          sub_644CE0(a1); /*0x6590dd*/
          v12 = a1->editorPackage; /*0x6590e2*/
          location = v12->members.location; /*0x6590e5*/
          procedureArrayIndex = v12->members.procedureArrayIndex; /*0x6590e8*/
          _EBX = *(_DWORD *)(4 * procedureArrayIndex + 0xB152B0); /*0x6590ee*/
          switch ( *(_DWORD *)(_EBX + 4 * a1->editorPackProcedure) ) /*0x659110*/
          {
            case 0: /*0x659110*/
              if ( location ) /*0x659119*/
                _EBX = sub_5697E0(location); /*0x659120*/
              else
                _EBX = 0; /*0x659124*/
              __asm { fld     dword ptr ds:0A30634h } /*0x659128*/
              __asm { fstp    [esp+170h+var_170]; float }
              GameHour = sub_566DC0(a1->editorPackage, GameHour, a4, st5_0, v8, 0, v65); /*0x659138*/
              if ( !v16 ) /*0x65913f*/
              {
                _EBP = TESForm_LookupByFormID(0x3Au); /*0x659154*/
                TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x659156*/
                __asm /*0x65915b*/
                {
                  fstp    [esp+16Ch+var_154]
                  fld     [esp+16Ch+var_154]
                }
                __asm { fstp    [esp+16Ch+var_15C] }
                sub_6599B0((TESChildCELL *)v8); /*0x659169*/
                __asm /*0x65916e*/
                {
                  fcomp   [esp+16Ch+var_15C]
                  fnstsw  ax
                }
                if ( (_AX & 0x4100) == 0 ) /*0x659177*/
                {
                  __asm /*0x659179*/
                  {
                    fld     [esp+16Ch+var_154]
                    fadd    qword ptr ds:0A2F920h
                    fstp    [esp+16Ch+var_154]
                  }
                }
                __asm { fld     [esp+16Ch+var_154] } /*0x659187*/
                __asm { fstp    [esp+16Ch+var_15C] }
                v19 = sub_6599B0((TESChildCELL *)v8); /*0x659191*/
                __asm { fsubr   [esp+16Ch+var_15C] } /*0x659196*/
                __asm
                {
                  fstp    [esp+174h+var_154]
                  fld     dword ptr [ebp+24h]
                  fdivr   qword ptr ds:0A2F938h
                  fmul    [esp+174h+var_154]
                  fstp    [esp+174h+var_154]
                }
                GameHour = sub_5677B0(a1->editorPackage, v19, (TESObjectREFR *)v8, 1); /*0x6591b5*/
                v20 = a1->editorPackage; /*0x6591ba*/
                __asm { fstp    dword ptr [esp+16Ch+var_15C] } /*0x6591bd*/
                if ( v20->members.type == kPackageType_Wander ) /*0x6591c5*/
                {
                  __asm /*0x6591c7*/
                  {
                    fldz
                    fstp    dword ptr [esp+16Ch+var_15C]
                  }
                }
                __asm { fld     dword ptr [esp+16Ch+var_15C] } /*0x6591cd*/
                __asm { fstp    [esp+174h+var_170] }
                p_Unk_105 = &a1->Unk_105; /*0x6591da*/
                __asm /*0x6591e0*/
                {
                  fld     [esp+174h+var_154]
                  fstp    [esp+174h+var_174]
                }
                a5 = sub_566940(v20, v8); /*0x6591f0*/
                v58 = sub_566A40((char **)a1->editorPackage, v8); /*0x6591fa*/
                v22 = sub_566B30(a1->editorPackage, (float *)v85, v8); /*0x659201*/
                ((void (__thiscall *)(LowProcess *, Actor *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD, _DWORD))*p_Unk_105)( /*0x65920d*/
                  a1,
                  v8,
                  v22,
                  v58,
                  a5,
                  LODWORD(v64),
                  LODWORD(v66));
              }
              if ( v8->members.super.process->GetProcessLevel(v8->members.super.process) == 2 ) /*0x65921c*/
              {
                __asm { fld     dword ptr ds:0A30634h } /*0x659222*/
                __asm { fstp    [esp+170h+var_170]; float }
                GameHour = sub_566DC0(a1->editorPackage, GameHour, a4, st5_0, v8, 0, v67); /*0x659232*/
                if ( v23 ) /*0x659239*/
                {
                  if ( !a1->unk084 ) /*0x65923f*/
                  {
                    if ( sub_565DD0(a1->editorPackage) ) /*0x65924b*/
                    {
                      __asm { fld     dword ptr ds:0A5B6C0h } /*0x659256*/
                      __asm { fstp    [esp+178h+a5]; a5 }
                      v24 = (int)v8->vtbl->super.super.GetPos((TESObjectREFR *)v8); /*0x65926e*/
                      __asm { fld     dword ptr ds:0A5B6C0h } /*0x659270*/
                      v59 = (float *)v24; /*0x659276*/
                      __asm { fstp    [esp+180h+a3]; a3 } /*0x659282*/
                      v54 = v8->vtbl->super.super.GetPos((TESObjectREFR *)v8); /*0x659287*/
                      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v8); /*0x65928a*/
                      sub_446B90( /*0x659296*/
                        DwordAtOffset40,
                        v54,
                        a3,
                        v59,
                        a5a,
                        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
                        (int)v8);
                    }
                    a1->unk084 = 1; /*0x65929b*/
                  }
                  if ( sub_565DE0(a1->editorPackage) ) /*0x6592a5*/
                  {
                    __asm { fld     dword ptr ds:0A5B6C0h } /*0x6592b0*/
                    __asm { fstp    [esp+178h+a5]; a5 }
                    v26 = (int)v8->vtbl->super.super.GetPos((TESObjectREFR *)v8); /*0x6592c8*/
                    __asm { fld     dword ptr ds:0A5B6C0h } /*0x6592ca*/
                    v60 = (float *)v26; /*0x6592d0*/
                    __asm { fstp    [esp+180h+a3]; a3 } /*0x6592dc*/
                    v55 = v8->vtbl->super.super.GetPos((TESObjectREFR *)v8); /*0x6592e1*/
                    v27 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v8); /*0x6592e4*/
                    sub_446B90( /*0x6592f0*/
                      v27,
                      v55,
                      a3a,
                      v60,
                      a5b,
                      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor,
                      (int)v8);
                  }
                  ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_61)(a1, v8, 1); /*0x659302*/
                  if ( _EBX && (*(int (__thiscall **)(int))(*(_DWORD *)_EBX + 0x170))(_EBX) == MEMORY[0xB35EB0] /*0x659332*/
                    || (v28 = a1->editorPackage->members.location) != 0 && sub_569740((char *)v28) == 3 )
                  {
                    if ( _EBX ) /*0x65933a*/
                    {
                      __asm { fld     dword ptr [ebx+28h] } /*0x65933c*/
                    }
                    else
                    {
                      _EAX = ((int (__thiscall *)(Actor *, char *))v8->vtbl->super.super.GetStartingAngle)(v8, v86); /*0x659350*/
                      __asm { fld     dword ptr [eax+8] } /*0x659352*/
                    }
                    __asm /*0x659357*/
                    {
                      fstp    dword ptr [esp+16Ch+var_15C]
                      fld     dword ptr [esp+16Ch+var_15C]
                    }
                    __asm { fstp    [esp+170h+var_170] }
                    ((void (__thiscall *)(Actor *, _DWORD))v8->vtbl->super.Unk_7A)(v8, LODWORD(v68)); /*0x65936b*/
                  }
                }
              }
              break; /*0x65936d*/
            case 1: /*0x659110*/
              if ( procedureArrayIndex == 0x1A ) /*0x65952f*/
                ((void (__thiscall *)(LowProcess *, Actor *, unsigned int))a1->Unk_61)(a1, v8, 0xFFFFFFFF); /*0x659542*/
              break; /*0x659544*/
            case 2: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_146)(a1, v8, 1); /*0x659525*/
              break; /*0x659527*/
            case 3: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_148)(a1, v8); /*0x6594e7*/
              break; /*0x6594e9*/
            case 4: /*0x659110*/
              if ( sub_579440() == (TESObjectREFR *)v8 ) /*0x659550*/
              {
                v69 = *(const char **)(4 * a1->editorPackage->members.type + 0xB12988); /*0x659564*/
                Name = TESObjectREFR_GetName((TESObjectREFR *)v8); /*0x659567*/
                _sprintf(Format, "%s is sleeping with %s", Name, v69); /*0x659577*/
                Interface_ConsolePrint(Format); /*0x659581*/
              }
              break; /*0x659589*/
            case 5: /*0x659110*/
              if ( sub_579440() == (TESObjectREFR *)v8 ) /*0x659595*/
              {
                v70 = *(const char **)(4 * a1->editorPackage->members.type + 0xB12988); /*0x6595a9*/
                v32 = TESObjectREFR_GetName((TESObjectREFR *)v8); /*0x6595ac*/
                _sprintf(Format, "%s is eating with %s", v32, v70); /*0x6595bc*/
                Interface_ConsolePrint(Format); /*0x6595c6*/
              }
              break; /*0x6595ce*/
            case 6: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *, int, unsigned int, _DWORD))a1->Unk_65)( /*0x6595e4*/
                a1,
                v8,
                1,
                0xFFFFFFFF,
                0);
              break; /*0x6595e6*/
            case 7: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_141)(a1, v8); /*0x659722*/
              break; /*0x659722*/
            case 8: /*0x659110*/
              a1->Alarm(a1, v8); /*0x6594f9*/
              break; /*0x6594fb*/
            case 9: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_144)(a1, v8); /*0x65949d*/
              break; /*0x65949f*/
            case 0xA: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_67)(a1, v8); /*0x659443*/
              break; /*0x659445*/
            case 0xD: /*0x659110*/
              if ( !a1->follow ) /*0x6595eb*/
                ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_155)(a1, v8); /*0x6595fc*/
              follow = a1->follow; /*0x6595fe*/
              if ( !follow || (follow->members.super.super.super.flags & 0x20) != 0 ) /*0x659612*/
                goto LABEL_80; /*0x659612*/
              if ( (*(_BYTE *)(v11 + 0x1E) & 1) != 0 ) /*0x65961c*/
              {
                if ( !sub_663A60((int)v8) && sub_663A00() < (int)stru_B36A80.value ) /*0x659643*/
                  sub_5668E0((_DWORD *)v11, 0); /*0x65964d*/
              }
              else
              {
                v34 = *(_BYTE *)(v11 + 0x20); /*0x659657*/
                if ( v34 == 0x12 ) /*0x65965c*/
                  goto LABEL_80; /*0x65965c*/
                if ( v34 == 1 ) /*0x659664*/
                {
                  PointerAtOffset08 = Shared_GetPointerAtOffset08(*(Atmosphere **)(v11 + 0x28)); /*0x659671*/
                  __asm { fild    dword ptr [esp+16Ch+var_15C] } /*0x659675*/
                  __asm { fstp    dword ptr [esp+174h+var_15C] }
                  GameHour = TesObjectREF_GetDistance((TESObjectREFR *)v8, (TESObjectREFR *)a1->follow, 0); /*0x659682*/
                  __asm /*0x659687*/
                  {
                    fld     dword ptr [esp+16Ch+var_15C]
                    fcompp
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) == 0 ) /*0x659692*/
                    goto LABEL_80; /*0x659692*/
                }
                else
                {
                  Shared_GetPointerAtOffset08((Atmosphere *)a1->editorPackage->members.target); /*0x6596af*/
                  if ( !Shared_GetDwordAtOffset40(v8) /*0x6596d4*/
                    || (v36 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v8),
                        IsInterior = TESObjectCELL_IsInterior(v36),
                        v38 = &flt_B36A88[6],
                        !IsInterior) )
                  {
                    v38 = &flt_B36A88[4]; /*0x6596d6*/
                  }
                  _EAX = GameSetting_GetSafeFloatPointer(v38); /*0x6596db*/
                  __asm { fld     dword ptr [eax] } /*0x6596e0*/
                  __asm { fstp    dword ptr [esp+16Ch+var_15C] }
                  GameHour = TesObjectREF_GetDistance((TESObjectREFR *)v8, (TESObjectREFR *)a1->follow, 0); /*0x6596ee*/
                  __asm /*0x6596f3*/
                  {
                    fld     dword ptr [esp+16Ch+var_15C]
                    fmul    qword ptr ds:0A2FAA0h
                    fcompp
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) == 0 ) /*0x659704*/
                    goto LABEL_80; /*0x659704*/
                }
              }
              break; /*0x659652*/
            case 0xE: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *, _DWORD))a1->Unk_146)(a1, v8, 0); /*0x6594d5*/
              break; /*0x6594d7*/
            case 0xF: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, int, unsigned int))a1->Unk_66)( /*0x659511*/
                a1,
                v8,
                0,
                1,
                0xFFFFFFFF);
              break; /*0x659513*/
            case 0x11: /*0x659110*/
              if ( !a1->follow ) /*0x6593a8*/
                ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_155)(a1, v8); /*0x6593b9*/
              v30 = a1->follow; /*0x6593bb*/
              if ( v30 ) /*0x6593c0*/
              {
                if ( v30 != (Actor *)reference ) /*0x6593c8*/
                  a1->Unk_21(a1, (UInt32)v8, v11, 1); /*0x6593d8*/
              }
LABEL_80:
              ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_61)(a1, v8, 1); /*0x659698*/
              break; /*0x6596a7*/
            case 0x17: /*0x659110*/
              a1->MountHorse(a1, v8); /*0x6594c1*/
              break; /*0x6594c3*/
            case 0x18: /*0x659110*/
              a1->DismoutHorse(a1, v8); /*0x6594af*/
              break; /*0x6594b1*/
            case 0x1A: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_152)(a1, v8); /*0x659431*/
              break; /*0x659433*/
            case 0x1B: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_151)(a1, v8); /*0x6593f9*/
              break; /*0x6593fb*/
            case 0x1C: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_153)(a1, v8); /*0x65941f*/
              break; /*0x659421*/
            case 0x1D: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_147)(a1, v8); /*0x659479*/
              break; /*0x65947b*/
            case 0x1E: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14B)(a1, v8); /*0x65937d*/
              break; /*0x65937f*/
            case 0x20: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14A)(a1, v8); /*0x65948b*/
              break; /*0x65948d*/
            case 0x23: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14C)(a1, v8); /*0x65938f*/
              break; /*0x659391*/
            case 0x24: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14D)(a1, v8); /*0x659467*/
              break; /*0x659469*/
            case 0x28: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14F)(a1, v8); /*0x659455*/
              break; /*0x659457*/
            case 0x29: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *))a1->Unk_14E)(a1, v8); /*0x6593a1*/
              break; /*0x6593a3*/
            case 0x2B: /*0x659110*/
              ((void (__thiscall *)(LowProcess *, Actor *, int))a1->Unk_61)(a1, v8, 2); /*0x65940d*/
              break; /*0x65940f*/
            default:
              break;
          }
          if ( Actor::GetProcessLevel(v8) == 2 ) /*0x65972e*/
          {
            v41 = a1->editorPackage; /*0x659734*/
            if ( v41 ) /*0x659739*/
            {
              if ( *(_DWORD *)(*(_DWORD *)(4 * v41->members.procedureArrayIndex + 0xB152B0) + 4 /*0x659750*/
                                                                                            * a1->editorPackProcedure) == 0x2C )
              {
                a1->SetUnk01E(a1, 0); /*0x659762*/
                v42 = a1->editorPackage; /*0x659764*/
                if ( v42 ) /*0x659769*/
                {
                  if ( !v42->members.procedureArrayIndex ) /*0x65976b*/
                  {
                    __asm { fld     dword ptr ds:0A30634h } /*0x659771*/
                    __asm { fstp    [esp+170h+var_170]; float }
                    sub_566DC0(v42, GameHour, a4, st5_0, v8, 0, v71); /*0x65977e*/
                    if ( !v43 ) /*0x659785*/
                      return ((int (__thiscall *)(LowProcess *, Actor *, unsigned int))a1->Unk_61)(a1, v8, 0xFFFFFFFF); /*0x659796*/
                  }
                }
                GameDay = Script_AddEventToExtraScript(a1->editorPackage, &v8->members.super.super.baseExtraList, 0x400); /*0x6597a8*/
                v45 = a1->editorPackage; /*0x6597ad*/
                if ( v45 ) /*0x6597b5*/
                {
                  if ( sub_565DF0(v45) ) /*0x6597b7*/
                  {
                    GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x6597c5*/
                    ExtraDataList_SetRunOnceExtraPackage( /*0x6597d1*/
                      &v8->members.super.super.baseExtraList,
                      (int)a1->editorPackage,
                      v46);
                  }
                }
                v47 = a1->editorPackage; /*0x6597d6*/
                if ( v47 ) /*0x6597db*/
                {
                  if ( TESPackage_IsRuntimePackage(v47) ) /*0x6597dd*/
                    sub_5EAE70(v8, _EBX, (int)v8, a2); /*0x6597e8*/
                }
                if ( sub_579440() == (TESObjectREFR *)v8 ) /*0x6597f4*/
                {
                  v72 = *(const char **)(4 * a1->editorPackage->members.type + 0xB12988); /*0x659804*/
                  v48 = TESObjectREFR_GetName((TESObjectREFR *)v8); /*0x659807*/
                  _sprintf(Format, "%s is done with %s", v48, v72); /*0x659817*/
                  Interface_ConsolePrint(Format); /*0x659821*/
                }
                if ( a1->unk044 ) /*0x659829*/
                  FormHeapFree(a1->unk044); /*0x659831*/
                a1->unk044 = 0; /*0x659839*/
                p_unk03C = &a1->unk03C; /*0x659840*/
                while ( a1->unk040 || *p_unk03C ) /*0x65984d*/
                {
                  v50 = *p_unk03C; /*0x65984f*/
                  if ( *p_unk03C ) /*0x65984f*/
                    FormHeapFree(*p_unk03C); /*0x659857*/
                  BSSimpleList_Remove((int *)&a1->unk03C, v50); /*0x659862*/
                }
                v51 = a1->editorPackage; /*0x659869*/
                if ( v51 ) /*0x65986e*/
                {
                  if ( !v51->members.time.duration ) /*0x659870*/
                  {
                    sub_648E40((int)a1, a4, GameDay, (TESChildCELL *)v8); /*0x659879*/
                    __asm { fld     [esp+16Ch+var_14C] } /*0x65987e*/
                    v52 = v51 == a1->editorPackage; /*0x659882*/
                    __asm { fstp    dword ptr [esi+0Ch] } /*0x659885*/
                    a1->unk00C = _ET1; /*0x659885*/
                    if ( !v52 ) /*0x659888*/
                      a1->editorPackProcedure = kProcedure_TRAVEL; /*0x65988a*/
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( byte_B15800 && v8 && unk_B3BF80 ) /*0x65989e*/
    {
      result = sub_6825C0((_DWORD *)unk_B3BF80, v8); /*0x6598a9*/
      if ( result ) /*0x6598b0*/
        return result; /*0x6598b0*/
      sub_6826D0((_DWORD *)unk_B3BF80, v8); /*0x6598b9*/
    }
    return ((int (__thiscall *)(LowProcess *))a6->process->Unk_08)(a6->process); /*0x6598ca*/
  }
  return result; /*0x6598cf*/
}
