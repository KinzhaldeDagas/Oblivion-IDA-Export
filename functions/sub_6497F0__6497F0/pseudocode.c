void __userpurge sub_6497F0(
        LowProcess *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        MobileObject *arg0)
{
  double GameHour; // st7
  Actor *v7; // edi
  TESPackage *editorPackage; // ebp
  TESPackage *v9; // eax
  TargetData *target; // ebx
  TESPackage *v11; // eax
  TESPackage *v12; // ecx
  UInt32 procedureArrayIndex; // edx
  int v14; // ebx
  char v16; // al
  void (__thiscall **p_Unk_F6)(BaseProcess *__hidden); // ebp
  _DWORD *v18; // ebx
  TESObjectCELL *v19; // eax
  double v22; // st7
  TESPackage *v23; // ecx
  void (__thiscall **p_Unk_105)(BaseProcess *__hidden); // ebp
  int v25; // eax
  char v26; // al
  float *v27; // eax
  TESObjectCELL *v28; // eax
  float *v29; // eax
  TESObjectCELL *v30; // eax
  LocationData *v31; // ecx
  float *v33; // eax
  TESObjectCELL *ParentCell; // eax
  float *v35; // eax
  TESObjectCELL *v36; // eax
  LocationData *location; // ecx
  Actor *v39; // ecx
  char *Name; // eax
  char *v41; // eax
  Actor *follow; // eax
  UInt8 type; // al
  Atmosphere *v44; // ecx
  TESObjectCELL *v46; // eax
  TESPackage *v50; // eax
  TESPackage *v51; // ecx
  char v52; // al
  TESPackage *v53; // ecx
  char v54; // al
  TESPackage *v55; // ecx
  char *v56; // eax
  UInt32 *p_unk03C; // ebp
  int v58; // ebx
  TESPackage *v59; // ebx
  bool v60; // zf
  float *v62; // [esp+3Ch] [ebp-19Ch]
  float *a3a; // [esp+3Ch] [ebp-19Ch]
  float *a3b; // [esp+3Ch] [ebp-19Ch]
  float *a3c; // [esp+3Ch] [ebp-19Ch]
  float a3_4; // [esp+40h] [ebp-198h]
  float a3_4a; // [esp+40h] [ebp-198h]
  float a3_4b; // [esp+40h] [ebp-198h]
  float a3_4c; // [esp+40h] [ebp-198h]
  TESObjectCELL *v70; // [esp+44h] [ebp-194h]
  float *v71; // [esp+44h] [ebp-194h]
  float *v72; // [esp+44h] [ebp-194h]
  float *v73; // [esp+44h] [ebp-194h]
  float *v74; // [esp+44h] [ebp-194h]
  TESWorldSpace *v75; // [esp+48h] [ebp-190h]
  float a5a; // [esp+48h] [ebp-190h]
  float a5b; // [esp+48h] [ebp-190h]
  float a5c; // [esp+48h] [ebp-190h]
  float a5d; // [esp+48h] [ebp-190h]
  float v80; // [esp+4Ch] [ebp-18Ch]
  float v81; // [esp+50h] [ebp-188h]
  TESWorldSpace *v82; // [esp+50h] [ebp-188h]
  float v83; // [esp+50h] [ebp-188h]
  float v84; // [esp+50h] [ebp-188h]
  float v85; // [esp+50h] [ebp-188h]
  float v86; // [esp+50h] [ebp-188h]
  const char *v87; // [esp+50h] [ebp-188h]
  const char *v88; // [esp+50h] [ebp-188h]
  float v89; // [esp+50h] [ebp-188h]
  const char *v90; // [esp+50h] [ebp-188h]
  int v91; // [esp+54h] [ebp-184h]
  TESObjectREFR *v92; // [esp+64h] [ebp-174h]
  NiAVObject *v98; // [esp+64h] [ebp-174h]
  int v100; // [esp+64h] [ebp-174h]
  char v106[12]; // [esp+78h] [ebp-160h] BYREF
  char v107[12]; // [esp+84h] [ebp-154h] BYREF
  char v108[12]; // [esp+90h] [ebp-148h] BYREF
  char v109[12]; // [esp+9Ch] [ebp-13Ch] BYREF
  char Format[300]; // [esp+A8h] [ebp-130h] BYREF

  if ( !arg0 )
    return;
  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  __asm { fstp    [esp+184h+var_168] }
  v7 = (Actor *)OblivionDynamicCast(
                  arg0,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( v7 )
  {
    editorPackage = this->editorPackage;
    if ( this->Unk_06(this, (UInt32)v7, 0) )
    {
      this->RemoveFornitureInteraction(this, v7);
      editorPackage = this->editorPackage;
      sub_5E7BE0();
      ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_156)(this, v7);
      v9 = this->editorPackage;
      target = v9->members.target;
      if ( target )
      {
        if ( TargetData::GetTargetType(v9->members.target) )
          this->unk038 = (UInt32)sub_452A60((Atmosphere *)target);
      }
    }
    v11 = this->editorPackage;
    if ( v11 )
    {
      if ( v11->members.procedureArrayIndex != 0xFFFFFFFF
        && (!PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) && !TESDataHandler_g_PlayerRef->unk610
         || (this->editorPackage->members.packageFlags & 0x10000) == 0) )
      {
        sub_644CE0(this);
        v12 = this->editorPackage;
        procedureArrayIndex = v12->members.procedureArrayIndex;
        v14 = *(_DWORD *)(4 * procedureArrayIndex + 0xB152B0);
        switch ( *(_DWORD *)(v14 + 4 * this->editorPackProcedure) )
        {
          case 0:
            __asm { fld     dword ptr ds:0A30634h; jumptable 00649904 case 0 }
            _EBX = this->unk030;
            __asm { fstp    [esp+188h+var_188]; float }
            v92 = _EBX;
            GameHour = sub_566DC0(v12, GameHour, st6_0, v7, 0, v81);
            if ( v16 )
            {
              if ( !this->unk084 )
              {
                if ( sub_565DD0(this->editorPackage) )
                {
                  __asm { fld     dword ptr ds:0A5B6C0h }
                  __asm { fstp    [esp+190h+a5]; a5 }
                  v33 = v7->vtbl->super.super.GetPos(v7);
                  __asm { fld     dword ptr ds:0A5B6C0h }
                  v73 = v33;
                  __asm { fstp    [esp+198h+a3+4]; a3 }
                  a3b = v7->vtbl->super.super.GetPos(v7);
                  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v7);
                  sub_446B90(
                    ParentCell,
                    a3b,
                    a3_4b,
                    v73,
                    a5c,
                    (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30,
                    (int)v7);
                }
                this->unk084 = 1;
              }
              if ( sub_565DE0(this->editorPackage) )
              {
                __asm { fld     dword ptr ds:0A5B6C0h }
                __asm { fstp    [esp+190h+a5]; a5 }
                v35 = v7->vtbl->super.super.GetPos(v7);
                __asm { fld     dword ptr ds:0A5B6C0h }
                v74 = v35;
                __asm { fstp    [esp+198h+a3+4]; a3 }
                a3c = v7->vtbl->super.super.GetPos(v7);
                v36 = TESObjectREFR_GetParentCell((TESObjectREFR *)v7);
                sub_446B90(
                  v36,
                  a3c,
                  a3_4c,
                  v74,
                  a5d,
                  (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0,
                  (int)v7);
              }
              if ( _EBX && _EBX->vtbl->GetBaseForm(_EBX) == (TESForm *)TESDataHandler_g_XMarkerHeading
                || (location = this->editorPackage->members.location) != 0 && sub_569740((char *)location) == 3 )
              {
                if ( _EBX )
                {
                  __asm { fld     dword ptr [ebx+28h] }
                }
                else
                {
                  _EAX = ((int (__thiscall *)(Actor *, char *))v7->vtbl->super.super.GetStartingAngle)(v7, v108);
                  __asm { fld     dword ptr [eax+8] }
                }
                __asm
                {
                  fstp    dword ptr [esp+184h+var_174]
                  fld     dword ptr [esp+184h+var_174]
                }
                __asm { fstp    [esp+188h+var_188] }
                ((void (__thiscall *)(Actor *, _DWORD))v7->vtbl->super.Unk_7A)(v7, LODWORD(v86));
              }
              ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, v7, 1);
              goto LABEL_110;
            }
            if ( this->pathing )
            {
LABEL_17:
              _EBP = TESForm_LookupByFormID(0x3Au);
              TimeGlobals_GetGameHour(&TimeGlobals);
              __asm
              {
                fstp    [esp+184h+var_16C]
                fld     [esp+184h+var_16C]
              }
              __asm { fstp    [esp+184h+var_174] }
              sub_6599B0((TESChildCELL *)v7);
              __asm
              {
                fcomp   [esp+184h+var_174]
                fnstsw  ax
              }
              if ( (_AX & 0x4100) == 0 )
              {
                __asm
                {
                  fld     [esp+184h+var_16C]
                  fadd    qword ptr ds:0A2F920h
                  fstp    [esp+184h+var_16C]
                }
              }
              __asm { fld     [esp+184h+var_16C] }
              __asm { fstp    [esp+184h+var_174] }
              v22 = sub_6599B0((TESChildCELL *)v7);
              __asm { fsubr   [esp+184h+var_174] }
              __asm
              {
                fstp    [esp+18Ch+var_16C]
                fld     dword ptr [ebp+24h]
                fdivr   qword ptr ds:0A2F938h
                fmul    [esp+18Ch+var_16C]
                fstp    [esp+18Ch+var_16C]
              }
              GameHour = sub_5677B0(this->editorPackage, v22, (TESObjectREFR *)v7, 1);
              v23 = this->editorPackage;
              __asm { fstp    dword ptr [esp+184h+var_174] }
              if ( v23->members.type == 5 )
              {
                __asm
                {
                  fldz
                  fstp    dword ptr [esp+184h+var_174]
                }
              }
              __asm { fld     dword ptr [esp+184h+var_174] }
              __asm { fstp    [esp+18Ch+var_188] }
              p_Unk_105 = &this->Unk_105;
              __asm
              {
                fld     [esp+18Ch+var_16C]
                fstp    [esp+18Ch+var_18C]
              }
              v75 = sub_566940(v23, v7);
              v70 = sub_566A40((char **)this->editorPackage, v7);
              v25 = sub_566B30(this->editorPackage, (int)v109, v7);
              ((void (__thiscall *)(LowProcess *, Actor *, int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))*p_Unk_105)(
                this,
                v7,
                v25,
                v70,
                v75,
                LODWORD(v80),
                LODWORD(v83));
              if ( v7->members.super.process->GetProcessLevel(v7->members.super.process) == 3 )
              {
                __asm { fld     dword ptr ds:0A30634h }
                __asm { fstp    [esp+188h+var_188]; float }
                GameHour = sub_566DC0(this->editorPackage, GameHour, st6_0, v7, 0, v84);
                if ( v26 )
                {
                  if ( !this->unk084 )
                  {
                    if ( sub_565DD0(this->editorPackage) )
                    {
                      __asm { fld     dword ptr ds:0A5B6C0h }
                      __asm { fstp    [esp+190h+a5]; a5 }
                      v27 = v7->vtbl->super.super.GetPos(v7);
                      __asm { fld     dword ptr ds:0A5B6C0h }
                      v71 = v27;
                      __asm { fstp    [esp+198h+a3+4]; a3 }
                      v62 = v7->vtbl->super.super.GetPos(v7);
                      v28 = TESObjectREFR_GetParentCell((TESObjectREFR *)v7);
                      sub_446B90(
                        v28,
                        v62,
                        a3_4,
                        v71,
                        a5a,
                        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30,
                        (int)v7);
                    }
                    this->unk084 = 1;
                  }
                  if ( sub_565DE0(this->editorPackage) )
                  {
                    __asm { fld     dword ptr ds:0A5B6C0h }
                    __asm { fstp    [esp+190h+a5]; a5 }
                    v29 = v7->vtbl->super.super.GetPos(v7);
                    __asm { fld     dword ptr ds:0A5B6C0h }
                    v72 = v29;
                    __asm { fstp    [esp+198h+a3+4]; a3 }
                    a3a = v7->vtbl->super.super.GetPos(v7);
                    v30 = TESObjectREFR_GetParentCell((TESObjectREFR *)v7);
                    sub_446B90(
                      v30,
                      a3a,
                      a3_4a,
                      v72,
                      a5b,
                      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0,
                      (int)v7);
                  }
                  ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, v7, 1);
                  if ( _EBX && _EBX->vtbl->GetBaseForm(_EBX) == (TESForm *)TESDataHandler_g_XMarkerHeading
                    || (v31 = this->editorPackage->members.location) != 0 && sub_569740((char *)v31) == 3 )
                  {
                    if ( _EBX )
                    {
                      __asm { fld     dword ptr [ebx+28h] }
                    }
                    else
                    {
                      _EAX = ((int (__thiscall *)(Actor *, char *))v7->vtbl->super.super.GetStartingAngle)(v7, v107);
                      __asm { fld     dword ptr [eax+8] }
                    }
                    __asm
                    {
                      fstp    dword ptr [esp+184h+var_174]
                      fld     dword ptr [esp+184h+var_174]
                    }
                    __asm { fstp    [esp+188h+var_188] }
                    ((void (__thiscall *)(Actor *, _DWORD))v7->vtbl->super.Unk_7A)(v7, LODWORD(v85));
                  }
                }
              }
              goto LABEL_110;
            }
            p_Unk_F6 = &this->Unk_F6;
            v18 = (_DWORD *)sub_566B30(this->editorPackage, (int)v106, v7);
            v82 = sub_566940(this->editorPackage, v7);
            v19 = sub_566A40((char **)this->editorPackage, v7);
            if ( ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))*p_Unk_F6)(
                   this,
                   v7,
                   *v18,
                   v18[1],
                   v18[2],
                   v19,
                   v82) )
            {
              _EBX = v92;
              goto LABEL_17;
            }
            return;
          case 1:
            if ( procedureArrayIndex == 0x1A )
              ((void (__thiscall *)(LowProcess *, Actor *, unsigned int))this->Unk_61)(this, v7, 0xFFFFFFFF);
            goto LABEL_110;
          case 2:
            ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_146)(this, v7, 1);
            goto LABEL_110;
          case 3:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_148)(this, v7);
            goto LABEL_110;
          case 4:
            if ( sub_579440() == (TESObjectREFR *)v7 )
            {
              v87 = *(const char **)(4 * (char)this->editorPackage->members.type + 0xB12988);
              Name = TESObjectREFR_GetName((TESObjectREFR *)v7);
              _sprintf(Format, "%s is sleeping with %s", Name, v87);
              Interface_ConsolePrint(Format);
            }
            goto LABEL_110;
          case 5:
            if ( sub_579440() == (TESObjectREFR *)v7 )
            {
              v88 = *(const char **)(4 * (char)this->editorPackage->members.type + 0xB12988);
              v41 = TESObjectREFR_GetName((TESObjectREFR *)v7);
              _sprintf(Format, "%s is eating with %s", v41, v88);
              Interface_ConsolePrint(Format);
            }
            goto LABEL_110;
          case 6:
            ((void (__thiscall *)(LowProcess *, Actor *, int, unsigned int, _DWORD))this->Unk_65)(
              this,
              v7,
              1,
              0xFFFFFFFF,
              0);
            goto LABEL_110;
          case 7:
            switch ( v12->members.type )
            {
              case 1u:
              case 2u:
              case 7u:
              case 0x10u:
                ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_141)(this, v7);
                break;
              default:
                goto LABEL_110;
            }
            goto LABEL_110;
          case 8:
            this->Alarm(this, v7);
            goto LABEL_110;
          case 9:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_144)(this, v7);
            goto LABEL_110;
          case 0xA:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_67)(this, v7);
            goto LABEL_110;
          case 0xC:
            sub_5EAE70(v7, v14, (int)v7, v91);
            goto LABEL_110;
          case 0xD:
            if ( !this->follow )
              ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_155)(this, v7);
            follow = this->follow;
            if ( !follow || (follow->members.super.super.super.flags & 0x20) != 0 )
              goto LABEL_98;
            if ( (editorPackage->members.packageFlags & 0x10000) != 0 )
            {
              if ( !sub_663A60((int)v7) && sub_663A00() < dword_B36A80 )
                sub_5668E0(&this->editorPackage->BaseProcess::__vftable, 0);
              goto LABEL_110;
            }
            type = editorPackage->members.type;
            if ( type == 0x12 )
              goto LABEL_110;
            v44 = (Atmosphere *)editorPackage->members.target;
            if ( type == 1 )
            {
              v98 = sub_452A60(v44);
              __asm { fild    dword ptr [esp+184h+var_174] }
              __asm { fstp    dword ptr [esp+18Ch+var_174] }
              GameHour = TesObjectREF_GetDistance((TESObjectREFR *)v7, (TESObjectREFR *)this->follow, 0);
              __asm
              {
                fld     dword ptr [esp+184h+var_174]
                fcompp
                fnstsw  ax
              }
              if ( (_AX & 0x100) != 0 )
                goto LABEL_110;
            }
            else
            {
              v100 = (int)sub_452A60(v44);
              if ( v100 <= 0 )
                v100 = 0xC8;
              if ( TESObjectREFR_GetParentCell((TESObjectREFR *)v7)
                && (v46 = TESObjectREFR_GetParentCell((TESObjectREFR *)v7), TESObjectCELL_IsInterior(v46)) )
              {
                _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36AA0);
                __asm { fld     dword ptr [eax] }
              }
              else
              {
                _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36A98);
                __asm
                {
                  fild    dword ptr [esp+184h+var_174]
                  fmul    dword ptr [eax]
                }
              }
              __asm { fstp    dword ptr [esp+184h+var_174] }
              GameHour = TesObjectREF_GetDistance((TESObjectREFR *)v7, (TESObjectREFR *)this->follow, 0);
              __asm
              {
                fld     dword ptr [esp+184h+var_174]
                fmul    qword ptr ds:0A2FAA0h
                fcompp
                fnstsw  ax
              }
              if ( (_AX & 0x100) != 0 )
              {
LABEL_110:
                if ( Actor::GetProcessLevel(v7) == 3 )
                {
                  v50 = this->editorPackage;
                  if ( v50 )
                  {
                    if ( *(_DWORD *)(*(_DWORD *)(4 * v50->members.procedureArrayIndex + 0xB152B0)
                                   + 4 * this->editorPackProcedure) == 0x2C )
                    {
                      this->SetUnk01E(this, 0);
                      v51 = this->editorPackage;
                      if ( v51 )
                      {
                        if ( !v51->members.procedureArrayIndex )
                        {
                          __asm { fld     dword ptr ds:0A30634h }
                          __asm { fstp    [esp+188h+var_188]; float }
                          sub_566DC0(v51, GameHour, st6_0, v7, 0, v89);
                          if ( !v52 )
                          {
                            ((void (__thiscall *)(LowProcess *, Actor *, unsigned int))this->Unk_61)(
                              this,
                              v7,
                              0xFFFFFFFF);
                            return;
                          }
                        }
                      }
                      Script_AddEventToExtraScript(this->editorPackage, &v7->members.super.super.baseExtraList, 0x400);
                      v53 = this->editorPackage;
                      if ( v53 )
                      {
                        if ( sub_565DF0(v53) )
                        {
                          TimeGlobals_GetGameDay(&TimeGlobals);
                          sub_41FFC0(&v7->members.super.super.baseExtraList, (int)this->editorPackage, v54);
                        }
                      }
                      v55 = this->editorPackage;
                      if ( v55 )
                      {
                        if ( sub_5660A0(v55) )
                          sub_5EAE70(v7, (int)&v7->members.super.super.baseExtraList, (int)v7, v91);
                      }
                      if ( sub_579440() == (TESObjectREFR *)v7 )
                      {
                        v90 = *(const char **)(4 * (char)this->editorPackage->members.type + 0xB12988);
                        v56 = TESObjectREFR_GetName((TESObjectREFR *)v7);
                        _sprintf(Format, "%s is done with %s", v56, v90);
                        Interface_ConsolePrint(Format);
                      }
                      if ( this->unk044 )
                        FormHeapFree(this->unk044);
                      this->unk044 = 0;
                      p_unk03C = &this->unk03C;
                      while ( this->unk040 || *p_unk03C )
                      {
                        v58 = *p_unk03C;
                        if ( *p_unk03C )
                          FormHeapFree(*p_unk03C);
                        BSSimpleList_Remove(&this->unk03C, v58);
                      }
                      v59 = this->editorPackage;
                      if ( v59 )
                      {
                        if ( !v59->members.time.duration )
                        {
                          sub_648E40((int)this, st5_0, st6_0, (TESChildCELL *)v7);
                          __asm { fld     [esp+184h+var_168] }
                          v60 = v59 == this->editorPackage;
                          __asm { fstp    dword ptr [esi+0Ch] }
                          this->unk00C = _ET1;
                          if ( !v60 )
                            this->editorPackProcedure = kProcedure_TRAVEL;
                        }
                      }
                    }
                  }
                }
                break;
              }
            }
LABEL_98:
            ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, v7, 1);
            goto LABEL_110;
          case 0xE:
            ((void (__thiscall *)(LowProcess *, Actor *, _DWORD))this->Unk_146)(this, v7, 0);
            goto LABEL_110;
          case 0xF:
            ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, int, unsigned int))this->Unk_66)(
              this,
              v7,
              0,
              1,
              0xFFFFFFFF);
            goto LABEL_110;
          case 0x11:
            if ( !this->follow )
              ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_155)(this, v7);
            v39 = this->follow;
            if ( v39 )
            {
              if ( v39 != (Actor *)TESDataHandler_g_PlayerRef && v39->vtbl->super.super.IsActor((TESObjectREFR *)v39) )
                this->Unk_21(this, (UInt32)v7, (UInt32)this->editorPackage, 1);
            }
            goto LABEL_98;
          case 0x17:
            this->MountHorse(this, v7);
            goto LABEL_110;
          case 0x18:
            this->DismoutHorse(this, v7);
            goto LABEL_110;
          case 0x1A:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_152)(this, v7);
            goto LABEL_110;
          case 0x1B:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_151)(this, v7);
            goto LABEL_110;
          case 0x1C:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_153)(this, v7);
            goto LABEL_110;
          case 0x1D:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_147)(this, v7);
            goto LABEL_110;
          case 0x1E:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14B)(this, v7);
            goto LABEL_110;
          case 0x20:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14A)(this, v7);
            goto LABEL_110;
          case 0x23:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14C)(this, v7);
            goto LABEL_110;
          case 0x24:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14D)(this, v7);
            goto LABEL_110;
          case 0x25:
            this->Unk_20(this, (UInt32)v7, 1);
            goto LABEL_110;
          case 0x28:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14F)(this, v7);
            goto LABEL_110;
          case 0x29:
            ((void (__thiscall *)(LowProcess *, Actor *))this->Unk_14E)(this, v7);
            goto LABEL_110;
          case 0x2B:
            ((void (__thiscall *)(LowProcess *, Actor *, int))this->Unk_61)(this, v7, 2);
            goto LABEL_110;
          default:
            goto LABEL_110;
        }
      }
    }
  }
  if ( byte_B15800 && v7 && dword_B3BF80 )
  {
    if ( sub_6825C0(v7) )
      return;
    sub_6826D0((_DWORD *)dword_B3BF80, v7);
  }
  arg0->process->Unk_08(arg0->process);
}
