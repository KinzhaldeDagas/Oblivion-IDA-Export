// RadiantAI: LowProcess editor-package action dispatcher. Uses editorPackage->procedureArrayIndex and editorPackProcedure to index 0xB152B0, then dispatches action code; cases 4/5 print sleeping/eating debug text for selected debug actor.
void __userpurge sub_6497F0(
        LowProcess *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        MobileObject *arg0)
{
  double GameHour; // st7
  Actor *a5; // edi
  TESPackage *editorPackage; // ebp
  TESPackage *v9; // eax
  TargetData *target; // ebx
  TESPackage *v11; // eax
  TESPackage *v12; // ecx
  UInt32 procedureArrayIndex; // edx
  int v14; // ebx
  char v16; // al
  void (__thiscall **p_Unk_F6)(BaseProcess *__hidden); // ebp
  float *v18; // ebx
  BSExtraDataVtbl *v19; // eax
  double v22; // st7
  TESPackage *v23; // ecx
  void (__thiscall **p_Unk_105)(BaseProcess *__hidden); // ebp
  float *v25; // eax
  char v26; // al
  float *v27; // eax
  TESObjectCELL *v28; // eax
  float *v29; // eax
  TESObjectCELL *v30; // eax
  LocationData *v31; // ecx
  float *v33; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  float *v35; // eax
  TESObjectCELL *v36; // eax
  LocationData *location; // ecx
  Actor *v39; // ecx
  char *Name; // eax
  char *v41; // eax
  Actor *follow; // eax
  TESPackageType type; // al
  Atmosphere *v44; // ecx
  TESObjectCELL *v46; // eax
  TESPackage *v50; // eax
  TESPackage *v51; // ecx
  char v52; // al
  double GameDay; // st7
  TESPackage *v54; // ecx
  char v55; // al
  TESPackage *v56; // ecx
  char *v57; // eax
  UInt32 *p_unk03C; // ebp
  int v59; // ebx
  TESPackage *v60; // ebx
  bool v61; // zf
  float *v63; // [esp+3Ch] [ebp-19Ch]
  float *a3a; // [esp+3Ch] [ebp-19Ch]
  float *a3b; // [esp+3Ch] [ebp-19Ch]
  float *a3c; // [esp+3Ch] [ebp-19Ch]
  float a3_4; // [esp+40h] [ebp-198h]
  float a3_4a; // [esp+40h] [ebp-198h]
  float a3_4b; // [esp+40h] [ebp-198h]
  float a3_4c; // [esp+40h] [ebp-198h]
  BSExtraDataVtbl *v71; // [esp+44h] [ebp-194h]
  float *v72; // [esp+44h] [ebp-194h]
  float *v73; // [esp+44h] [ebp-194h]
  float *v74; // [esp+44h] [ebp-194h]
  float *v75; // [esp+44h] [ebp-194h]
  TESWorldSpace *v76; // [esp+48h] [ebp-190h]
  float a5a; // [esp+48h] [ebp-190h]
  float a5b; // [esp+48h] [ebp-190h]
  float a5c; // [esp+48h] [ebp-190h]
  float a5d; // [esp+48h] [ebp-190h]
  float v81; // [esp+4Ch] [ebp-18Ch]
  float v82; // [esp+50h] [ebp-188h]
  TESWorldSpace *v83; // [esp+50h] [ebp-188h]
  float v84; // [esp+50h] [ebp-188h]
  float v85; // [esp+50h] [ebp-188h]
  float v86; // [esp+50h] [ebp-188h]
  float v87; // [esp+50h] [ebp-188h]
  const char *v88; // [esp+50h] [ebp-188h]
  const char *v89; // [esp+50h] [ebp-188h]
  float v90; // [esp+50h] [ebp-188h]
  const char *v91; // [esp+50h] [ebp-188h]
  int v92; // [esp+54h] [ebp-184h]
  TESObjectREFR *v93; // [esp+64h] [ebp-174h]
  NiAVObject *PointerAtOffset08; // [esp+64h] [ebp-174h]
  int v101; // [esp+64h] [ebp-174h]
  char v107[12]; // [esp+78h] [ebp-160h] BYREF
  char v108[12]; // [esp+84h] [ebp-154h] BYREF
  char v109[12]; // [esp+90h] [ebp-148h] BYREF
  char v110[12]; // [esp+9Ch] [ebp-13Ch] BYREF
  char Format[300]; // [esp+A8h] [ebp-130h] BYREF

  if ( !arg0 ) /*0x649817*/
    return; /*0x649817*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x649822*/
  __asm { fstp    [esp+184h+var_168] } /*0x649827*/
  a5 = (Actor *)OblivionDynamicCast( /*0x64983f*/
                  arg0,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( a5 ) /*0x649846*/
  {
    editorPackage = this->editorPackage; /*0x649851*/
    if ( this->Unk_06(this, (UInt32)a5, 0) ) /*0x649859*/
    {
      this->RemoveFornitureInteraction(this, a5); /*0x64986a*/
      editorPackage = this->editorPackage; /*0x64986c*/
      sub_5E7BE0(); /*0x649871*/
      ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_156)(this, a5); /*0x649881*/
      v9 = this->editorPackage; /*0x649883*/
      target = v9->members.target; /*0x649886*/
      if ( target ) /*0x64988b*/
      {
        if ( TargetData::GetTargetType(v9->members.target) ) /*0x64988f*/
          this->unk038 = (UInt32)Shared_GetPointerAtOffset08((Atmosphere *)target); /*0x64989f*/
      }
    }
    v11 = this->editorPackage; /*0x6498a2*/
    if ( v11 ) /*0x6498a7*/
    {
      if ( v11->members.procedureArrayIndex != 0xFFFFFFFF /*0x6498db*/
        && (!PlayerCharacter::IsJailed(reference) && !reference->unk610
         || (this->editorPackage->members.packageFlags & 0x10000) == 0) )
      {
        sub_644CE0(this); /*0x6498e3*/
        v12 = this->editorPackage; /*0x6498e8*/
        procedureArrayIndex = v12->members.procedureArrayIndex; /*0x6498eb*/
        v14 = *(_DWORD *)(4 * procedureArrayIndex + 0xB152B0); /*0x6498f1*/
        switch ( *(_DWORD *)(v14 + 4 * this->editorPackProcedure) ) /*0x649904*/
        {
          case 0: /*0x649904*/
            __asm { fld     dword ptr ds:0A30634h; jumptable 00649904 case 0 } /*0x64990b*/
            _EBX = this->unk030; /*0x649911*/
            __asm { fstp    [esp+188h+var_188]; float } /*0x649915*/
            v93 = _EBX; /*0x64991b*/
            GameHour = sub_566DC0(v12, GameHour, st6_0, st5_0, a5, 0, v82); /*0x64991f*/
            if ( v16 ) /*0x649926*/
            {
              if ( !this->unk084 ) /*0x649bb4*/
              {
                if ( sub_565DD0(this->editorPackage) ) /*0x649bc0*/
                {
                  __asm { fld     dword ptr ds:0A5B6C0h } /*0x649bcb*/
                  __asm { fstp    [esp+190h+a5]; a5 }
                  v33 = a5->vtbl->super.super.GetPos(a5); /*0x649be3*/
                  __asm { fld     dword ptr ds:0A5B6C0h } /*0x649be5*/
                  v74 = v33; /*0x649beb*/
                  __asm { fstp    [esp+198h+a3+4]; a3 } /*0x649bf7*/
                  a3b = a5->vtbl->super.super.GetPos(a5); /*0x649bfc*/
                  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x649bff*/
                  sub_446B90( /*0x649c0b*/
                    DwordAtOffset40,
                    a3b,
                    a3_4b,
                    v74,
                    a5c,
                    (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
                    (int)a5);
                }
                this->unk084 = 1; /*0x649c10*/
              }
              if ( sub_565DE0(this->editorPackage) ) /*0x649c1a*/
              {
                __asm { fld     dword ptr ds:0A5B6C0h } /*0x649c25*/
                __asm { fstp    [esp+190h+a5]; a5 }
                v35 = a5->vtbl->super.super.GetPos(a5); /*0x649c3d*/
                __asm { fld     dword ptr ds:0A5B6C0h } /*0x649c3f*/
                v75 = v35; /*0x649c45*/
                __asm { fstp    [esp+198h+a3+4]; a3 } /*0x649c51*/
                a3c = a5->vtbl->super.super.GetPos(a5); /*0x649c56*/
                v36 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x649c59*/
                sub_446B90( /*0x649c65*/
                  v36,
                  a3c,
                  a3_4c,
                  v75,
                  a5d,
                  (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor,
                  (int)a5);
              }
              if ( _EBX && _EBX->vtbl->GetBaseForm(_EBX) == (TESForm *)MEMORY[0xB35EB0] /*0x649c94*/
                || (location = this->editorPackage->members.location) != 0 && sub_569740((char *)location) == 3 )
              {
                if ( _EBX ) /*0x649c98*/
                {
                  __asm { fld     dword ptr [ebx+28h] } /*0x649c9a*/
                }
                else
                {
                  _EAX = ((int (__thiscall *)(Actor *, char *))a5->vtbl->super.super.GetStartingAngle)(a5, v109); /*0x649cae*/
                  __asm { fld     dword ptr [eax+8] } /*0x649cb0*/
                }
                __asm /*0x649cb5*/
                {
                  fstp    dword ptr [esp+184h+var_174]
                  fld     dword ptr [esp+184h+var_174]
                }
                __asm { fstp    [esp+188h+var_188] }
                ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.Unk_7A)(a5, LODWORD(v87)); /*0x649cc9*/
              }
              ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, a5, 1); /*0x649cd8*/
              goto LABEL_110; /*0x649cda*/
            }
            if ( this->pathing ) /*0x64992c*/
            {
LABEL_17:
              _EBP = TESForm_LookupByFormID(0x3Au); /*0x649987*/
              TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x649998*/
              __asm /*0x64999d*/
              {
                fstp    [esp+184h+var_16C]
                fld     [esp+184h+var_16C]
              }
              __asm { fstp    [esp+184h+var_174] }
              sub_6599B0((TESChildCELL *)a5); /*0x6499ab*/
              __asm /*0x6499b0*/
              {
                fcomp   [esp+184h+var_174]
                fnstsw  ax
              }
              if ( (_AX & 0x4100) == 0 ) /*0x6499b9*/
              {
                __asm /*0x6499bb*/
                {
                  fld     [esp+184h+var_16C]
                  fadd    qword ptr ds:0A2F920h
                  fstp    [esp+184h+var_16C]
                }
              }
              __asm { fld     [esp+184h+var_16C] } /*0x6499c9*/
              __asm { fstp    [esp+184h+var_174] }
              v22 = sub_6599B0((TESChildCELL *)a5); /*0x6499d3*/
              __asm { fsubr   [esp+184h+var_174] } /*0x6499d8*/
              __asm
              {
                fstp    [esp+18Ch+var_16C]
                fld     dword ptr [ebp+24h]
                fdivr   qword ptr ds:0A2F938h
                fmul    [esp+18Ch+var_16C]
                fstp    [esp+18Ch+var_16C]
              }
              GameHour = sub_5677B0(this->editorPackage, v22, (TESObjectREFR *)a5, 1); /*0x6499f7*/
              v23 = this->editorPackage; /*0x6499fc*/
              __asm { fstp    dword ptr [esp+184h+var_174] } /*0x6499ff*/
              if ( v23->members.type == kPackageType_Wander ) /*0x649a07*/
              {
                __asm /*0x649a09*/
                {
                  fldz
                  fstp    dword ptr [esp+184h+var_174]
                }
              }
              __asm { fld     dword ptr [esp+184h+var_174] } /*0x649a0f*/
              __asm { fstp    [esp+18Ch+var_188] }
              p_Unk_105 = &this->Unk_105; /*0x649a1c*/
              __asm /*0x649a22*/
              {
                fld     [esp+18Ch+var_16C]
                fstp    [esp+18Ch+var_18C]
              }
              v76 = sub_566940(v23, a5); /*0x649a32*/
              v71 = sub_566A40((char **)this->editorPackage, a5); /*0x649a39*/
              v25 = sub_566B30(this->editorPackage, (float *)v110, a5); /*0x649a43*/
              ((void (__thiscall *)(LowProcess *, Actor *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD, _DWORD))*p_Unk_105)( /*0x649a4f*/
                this,
                a5,
                v25,
                v71,
                v76,
                LODWORD(v81),
                LODWORD(v84));
              if ( a5->members.super.process->GetProcessLevel(a5->members.super.process) == 3 ) /*0x649a5e*/
              {
                __asm { fld     dword ptr ds:0A30634h } /*0x649a64*/
                __asm { fstp    [esp+188h+var_188]; float }
                GameHour = sub_566DC0(this->editorPackage, GameHour, st6_0, st5_0, a5, 0, v85); /*0x649a74*/
                if ( v26 ) /*0x649a7b*/
                {
                  if ( !this->unk084 ) /*0x649a81*/
                  {
                    if ( sub_565DD0(this->editorPackage) ) /*0x649a8d*/
                    {
                      __asm { fld     dword ptr ds:0A5B6C0h } /*0x649a98*/
                      __asm { fstp    [esp+190h+a5]; a5 }
                      v27 = a5->vtbl->super.super.GetPos(a5); /*0x649ab0*/
                      __asm { fld     dword ptr ds:0A5B6C0h } /*0x649ab2*/
                      v72 = v27; /*0x649ab8*/
                      __asm { fstp    [esp+198h+a3+4]; a3 } /*0x649ac4*/
                      v63 = a5->vtbl->super.super.GetPos(a5); /*0x649ac9*/
                      v28 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x649acc*/
                      sub_446B90( /*0x649ad8*/
                        v28,
                        v63,
                        a3_4,
                        v72,
                        a5a,
                        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
                        (int)a5);
                    }
                    this->unk084 = 1; /*0x649add*/
                  }
                  if ( sub_565DE0(this->editorPackage) ) /*0x649ae7*/
                  {
                    __asm { fld     dword ptr ds:0A5B6C0h } /*0x649af2*/
                    __asm { fstp    [esp+190h+a5]; a5 }
                    v29 = a5->vtbl->super.super.GetPos(a5); /*0x649b0a*/
                    __asm { fld     dword ptr ds:0A5B6C0h } /*0x649b0c*/
                    v73 = v29; /*0x649b12*/
                    __asm { fstp    [esp+198h+a3+4]; a3 } /*0x649b1e*/
                    a3a = a5->vtbl->super.super.GetPos(a5); /*0x649b23*/
                    v30 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x649b26*/
                    sub_446B90( /*0x649b32*/
                      v30,
                      a3a,
                      a3_4a,
                      v73,
                      a5b,
                      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor,
                      (int)a5);
                  }
                  ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, a5, 1); /*0x649b44*/
                  if ( _EBX && _EBX->vtbl->GetBaseForm(_EBX) == (TESForm *)MEMORY[0xB35EB0] /*0x649b74*/
                    || (v31 = this->editorPackage->members.location) != 0 && sub_569740((char *)v31) == 3 )
                  {
                    if ( _EBX ) /*0x649b7c*/
                    {
                      __asm { fld     dword ptr [ebx+28h] } /*0x649b7e*/
                    }
                    else
                    {
                      _EAX = ((int (__thiscall *)(Actor *, char *))a5->vtbl->super.super.GetStartingAngle)(a5, v108); /*0x649b92*/
                      __asm { fld     dword ptr [eax+8] } /*0x649b94*/
                    }
                    __asm /*0x649b99*/
                    {
                      fstp    dword ptr [esp+184h+var_174]
                      fld     dword ptr [esp+184h+var_174]
                    }
                    __asm { fstp    [esp+188h+var_188] }
                    ((void (__thiscall *)(Actor *, _DWORD))a5->vtbl->super.Unk_7A)(a5, LODWORD(v86)); /*0x649bad*/
                  }
                }
              }
              goto LABEL_110; /*0x649baf*/
            }
            p_Unk_F6 = &this->Unk_F6; /*0x64993d*/
            v18 = sub_566B30(this->editorPackage, (float *)v107, a5); /*0x64994c*/
            v83 = sub_566940(this->editorPackage, a5); /*0x649956*/
            v19 = sub_566A40((char **)this->editorPackage, a5); /*0x649958*/
            if ( ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *))*p_Unk_F6)( /*0x649979*/
                   this,
                   a5,
                   *(_DWORD *)v18,
                   *((_DWORD *)v18 + 1),
                   *((_DWORD *)v18 + 2),
                   v19,
                   v83) )
            {
              _EBX = v93; /*0x649983*/
              goto LABEL_17; /*0x649983*/
            }
            return; /*0x64997d*/
          case 1: /*0x649904*/
            if ( procedureArrayIndex == 0x1A ) /*0x649ea9*/
              ((void (__thiscall *)(LowProcess *, Actor *, unsigned int))this->Unk_61)(this, a5, 0xFFFFFFFF); /*0x649ebc*/
            goto LABEL_110; /*0x649ebe*/
          case 2: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_146)(this, a5, 1); /*0x649e7b*/
            goto LABEL_110; /*0x649e7d*/
          case 3: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_148)(this, a5); /*0x649e31*/
            goto LABEL_110; /*0x649e33*/
          case 4: /*0x649904*/
            if ( sub_579440() == (TESObjectREFR *)a5 ) /*0x649eca*/
            {
              v88 = *(const char **)(4 * this->editorPackage->members.type + 0xB12988); /*0x649ede*/
              Name = TESObjectREFR_GetName((TESObjectREFR *)a5); /*0x649ee1*/
              _sprintf(Format, "%s is sleeping with %s", Name, v88); /*0x649ef1*/
              Interface_ConsolePrint(Format); /*0x649efb*/
            }
            goto LABEL_110; /*0x649f03*/
          case 5: /*0x649904*/
            if ( sub_579440() == (TESObjectREFR *)a5 ) /*0x649f0f*/
            {
              v89 = *(const char **)(4 * this->editorPackage->members.type + 0xB12988); /*0x649f23*/
              v41 = TESObjectREFR_GetName((TESObjectREFR *)a5); /*0x649f26*/
              _sprintf(Format, "%s is eating with %s", v41, v89); /*0x649f36*/
              Interface_ConsolePrint(Format); /*0x649f40*/
            }
            goto LABEL_110; /*0x649f48*/
          case 6: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *, int, unsigned int, _DWORD))this->Unk_65)( /*0x649f5e*/
              this,
              a5,
              1,
              0xFFFFFFFF,
              0);
            goto LABEL_110; /*0x649f60*/
          case 7: /*0x649904*/
            switch ( v12->members.type ) /*0x64a0cc*/
            {
              case kPackageType_Follow: /*0x64a0cc*/
              case kPackageType_Escort: /*0x64a0cc*/
              case kPackageType_Accompany: /*0x64a0cc*/
              case kPackageType_Flee: /*0x64a0cc*/
                ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_141)(this, a5); /*0x64a0db*/
                break; /*0x64a0db*/
              default:
                goto LABEL_110;
            }
            goto LABEL_110;
          case 8: /*0x649904*/
            this->Alarm(this, a5); /*0x649e4f*/
            goto LABEL_110; /*0x649e51*/
          case 9: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_144)(this, a5); /*0x64a0e8*/
            goto LABEL_110; /*0x64a0e8*/
          case 0xA: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_67)(this, a5); /*0x649d34*/
            goto LABEL_110; /*0x649d36*/
          case 0xC: /*0x649904*/
            sub_5EAE70(a5, v14, (int)a5, v92); /*0x649e3a*/
            goto LABEL_110; /*0x649e3f*/
          case 0xD: /*0x649904*/
            if ( !this->follow ) /*0x649f72*/
              ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_155)(this, a5); /*0x649f83*/
            follow = this->follow; /*0x649f85*/
            if ( !follow || (follow->members.super.super.super.flags & 0x20) != 0 ) /*0x649f99*/
              goto LABEL_98; /*0x649f99*/
            if ( (editorPackage->members.packageFlags & 0x10000) != 0 ) /*0x649fa3*/
            {
              if ( !sub_663A60((int)a5) && sub_663A00() < (int)stru_B36A80.value ) /*0x649fca*/
                sub_5668E0(&this->editorPackage->BaseProcess::__vftable, 0); /*0x649fd5*/
              goto LABEL_110; /*0x649fda*/
            }
            type = editorPackage->members.type; /*0x649fdf*/
            if ( type == kPackageType_Dialogue ) /*0x649fe4*/
              goto LABEL_110; /*0x649fe4*/
            v44 = (Atmosphere *)editorPackage->members.target; /*0x649fec*/
            if ( type == kPackageType_Follow ) /*0x649fef*/
            {
              PointerAtOffset08 = Shared_GetPointerAtOffset08(v44); /*0x649ff9*/
              __asm { fild    dword ptr [esp+184h+var_174] } /*0x649ffd*/
              __asm { fstp    dword ptr [esp+18Ch+var_174] }
              GameHour = TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)this->follow, 0); /*0x64a00a*/
              __asm /*0x64a00f*/
              {
                fld     dword ptr [esp+184h+var_174]
                fcompp
                fnstsw  ax
              }
              if ( (_AX & 0x100) != 0 ) /*0x64a01a*/
                goto LABEL_110; /*0x64a01a*/
            }
            else
            {
              v101 = (int)Shared_GetPointerAtOffset08(v44); /*0x64a03b*/
              if ( v101 <= 0 ) /*0x64a03f*/
                v101 = 0xC8; /*0x64a041*/
              if ( Shared_GetDwordAtOffset40(a5) /*0x64a05d*/
                && (v46 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5), TESObjectCELL_IsInterior(v46)) )
              {
                _EAX = GameSetting_GetSafeFloatPointer(&flt_B36A88[6]); /*0x64a06b*/
                __asm { fld     dword ptr [eax] } /*0x64a070*/
              }
              else
              {
                _EAX = GameSetting_GetSafeFloatPointer(&flt_B36A88[4]); /*0x64a079*/
                __asm /*0x64a07e*/
                {
                  fild    dword ptr [esp+184h+var_174]
                  fmul    dword ptr [eax]
                }
              }
              __asm { fstp    dword ptr [esp+184h+var_174] } /*0x64a087*/
              GameHour = TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)this->follow, 0); /*0x64a090*/
              __asm /*0x64a095*/
              {
                fld     dword ptr [esp+184h+var_174]
                fmul    qword ptr ds:0A2FAA0h
                fcompp
                fnstsw  ax
              }
              if ( (_AX & 0x100) != 0 ) /*0x64a0a6*/
              {
LABEL_110:
                if ( Actor::GetProcessLevel(a5) == 3 ) /*0x64a0f4*/
                {
                  v50 = this->editorPackage; /*0x64a0fa*/
                  if ( v50 ) /*0x64a0ff*/
                  {
                    if ( *(_DWORD *)(*(_DWORD *)(4 * v50->members.procedureArrayIndex + 0xB152B0) /*0x64a116*/
                                   + 4 * this->editorPackProcedure) == 0x2C )
                    {
                      this->SetUnk01E(this, 0); /*0x64a128*/
                      v51 = this->editorPackage; /*0x64a12a*/
                      if ( v51 ) /*0x64a12f*/
                      {
                        if ( !v51->members.procedureArrayIndex ) /*0x64a131*/
                        {
                          __asm { fld     dword ptr ds:0A30634h } /*0x64a137*/
                          __asm { fstp    [esp+188h+var_188]; float }
                          sub_566DC0(v51, GameHour, st6_0, st5_0, a5, 0, v90); /*0x64a144*/
                          if ( !v52 ) /*0x64a14b*/
                          {
                            ((void (__thiscall *)(LowProcess *, Actor *, unsigned int))this->Unk_61)( /*0x64a15a*/
                              this,
                              a5,
                              0xFFFFFFFF);
                            return; /*0x64a15c*/
                          }
                        }
                      }
                      GameDay = Script_AddEventToExtraScript( /*0x64a16e*/
                                  this->editorPackage,
                                  &a5->members.super.super.baseExtraList,
                                  0x400);
                      v54 = this->editorPackage; /*0x64a173*/
                      if ( v54 ) /*0x64a17b*/
                      {
                        if ( sub_565DF0(v54) ) /*0x64a17d*/
                        {
                          GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x64a18b*/
                          ExtraDataList_SetRunOnceExtraPackage( /*0x64a197*/
                            &a5->members.super.super.baseExtraList,
                            (int)this->editorPackage,
                            v55);
                        }
                      }
                      v56 = this->editorPackage; /*0x64a19c*/
                      if ( v56 ) /*0x64a1a1*/
                      {
                        if ( TESPackage_IsRuntimePackage(v56) ) /*0x64a1a3*/
                          sub_5EAE70(a5, (int)&a5->members.super.super.baseExtraList, (int)a5, v92); /*0x64a1ae*/
                      }
                      if ( sub_579440() == (TESObjectREFR *)a5 ) /*0x64a1ba*/
                      {
                        v91 = *(const char **)(4 * this->editorPackage->members.type + 0xB12988); /*0x64a1ca*/
                        v57 = TESObjectREFR_GetName((TESObjectREFR *)a5); /*0x64a1cd*/
                        _sprintf(Format, "%s is done with %s", v57, v91); /*0x64a1dd*/
                        Interface_ConsolePrint(Format); /*0x64a1e7*/
                      }
                      if ( this->unk044 ) /*0x64a1ef*/
                        FormHeapFree(this->unk044); /*0x64a1f7*/
                      this->unk044 = 0; /*0x64a1ff*/
                      p_unk03C = &this->unk03C; /*0x64a206*/
                      while ( this->unk040 || *p_unk03C ) /*0x64a21a*/
                      {
                        v59 = *p_unk03C; /*0x64a21c*/
                        if ( *p_unk03C ) /*0x64a21c*/
                          FormHeapFree(*p_unk03C); /*0x64a224*/
                        BSSimpleList_Remove((int *)&this->unk03C, v59); /*0x64a22f*/
                      }
                      v60 = this->editorPackage; /*0x64a236*/
                      if ( v60 ) /*0x64a23b*/
                      {
                        if ( !v60->members.time.duration ) /*0x64a23d*/
                        {
                          sub_648E40((int)this, st6_0, GameDay, (TESChildCELL *)a5); /*0x64a246*/
                          __asm { fld     [esp+184h+var_168] } /*0x64a24b*/
                          v61 = v60 == this->editorPackage; /*0x64a24f*/
                          __asm { fstp    dword ptr [esi+0Ch] } /*0x64a252*/
                          this->unk00C = _ET1; /*0x64a252*/
                          if ( !v61 ) /*0x64a255*/
                            this->editorPackProcedure = kProcedure_TRAVEL; /*0x64a257*/
                        }
                      }
                    }
                  }
                }
                break; /*0x64a257*/
              }
            }
LABEL_98:
            ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, a5, 1); /*0x64a020*/
            goto LABEL_110; /*0x64a02f*/
          case 0xE: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *, _DWORD))this->Unk_146)(this, a5, 0); /*0x649e1f*/
            goto LABEL_110; /*0x649e21*/
          case 0xF: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, int, unsigned int))this->Unk_66)( /*0x649e67*/
              this,
              a5,
              0,
              1,
              0xFFFFFFFF);
            goto LABEL_110; /*0x649e69*/
          case 0x11: /*0x649904*/
            if ( !this->follow ) /*0x649dbb*/
              ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_155)(this, a5); /*0x649dcc*/
            v39 = this->follow; /*0x649dce*/
            if ( v39 ) /*0x649dd3*/
            {
              if ( v39 != (Actor *)reference && v39->vtbl->super.super.IsActor((TESObjectREFR *)v39) ) /*0x649de5*/
                this->Unk_21(this, (UInt32)a5, (UInt32)this->editorPackage, 1); /*0x649dfc*/
            }
            goto LABEL_98; /*0x649dfc*/
          case 0x17: /*0x649904*/
            this->MountHorse(this, a5); /*0x649e9f*/
            goto LABEL_110; /*0x649ea1*/
          case 0x18: /*0x649904*/
            this->DismoutHorse(this, a5); /*0x649e8d*/
            goto LABEL_110; /*0x649e8f*/
          case 0x1A: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_152)(this, a5); /*0x649d7e*/
            goto LABEL_110; /*0x649d80*/
          case 0x1B: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_151)(this, a5); /*0x649cea*/
            goto LABEL_110; /*0x649cec*/
          case 0x1C: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_153)(this, a5); /*0x649d6c*/
            goto LABEL_110; /*0x649d6e*/
          case 0x1D: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_147)(this, a5); /*0x649da2*/
            goto LABEL_110; /*0x649da4*/
          case 0x1E: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14B)(this, a5); /*0x649db4*/
            goto LABEL_110; /*0x649db6*/
          case 0x20: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14A)(this, a5); /*0x649f6d*/
            goto LABEL_110; /*0x649f6d*/
          case 0x23: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14C)(this, a5); /*0x649d0e*/
            goto LABEL_110; /*0x649d10*/
          case 0x24: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14D)(this, a5); /*0x649d46*/
            goto LABEL_110; /*0x649d48*/
          case 0x25: /*0x649904*/
            this->Unk_20(this, (UInt32)a5, 1); /*0x649d5a*/
            goto LABEL_110; /*0x649d5c*/
          case 0x28: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14F)(this, a5); /*0x649d90*/
            goto LABEL_110; /*0x649d92*/
          case 0x29: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14E)(this, a5); /*0x649cfc*/
            goto LABEL_110; /*0x649cfe*/
          case 0x2B: /*0x649904*/
            ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, a5, 2); /*0x649d22*/
            goto LABEL_110; /*0x649d24*/
          default:
            goto LABEL_110;
        }
      }
    }
  }
  if ( byte_B15800 && a5 && unk_B3BF80 ) /*0x64a26b*/
  {
    if ( sub_6825C0((_DWORD *)unk_B3BF80, a5) ) /*0x64a276*/
      return; /*0x64a27d*/
    sub_6826D0((_DWORD *)unk_B3BF80, a5); /*0x64a286*/
  }
  arg0->process->Unk_08(arg0->process); /*0x64a297*/
}
