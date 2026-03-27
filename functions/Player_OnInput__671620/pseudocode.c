void __userpurge Player_OnInput(
        PlayerCharacter *this@<ecx>,
        double st0_0@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        float a2)
{
  SceneGraph *v10; // edx
  InputGlobal *input; // ecx
  Actor *v15; // edi
  bhkCharacterProxy *CharProxy; // eax
  LowProcess_vtbl *v17; // edx
  UInt32 v22; // esi
  InterfaceManager *Singleton; // eax
  TESObjectREFR *ObjectToActivate; // ecx
  Actor *v25; // eax
  LowProcess *process; // ecx
  __int16 v27; // si
  LONG MouseAxisMovement; // esi
  LONG v37; // edi
  __int64 v38; // rdi
  bool v41; // al
  double v52; // st7
  TESPackage *editorPackage; // ecx
  int v58; // eax
  char v67; // al
  int v68; // ecx
  UInt8 v69; // al
  NiAVObjectVtbl *vtbl; // eax
  float v71; // edx
  void (__thiscall **p_DumpAttributes)(NiObject *, void *); // esi
  float v73; // eax
  TESForm::FormFlags flags; // ecx
  float v75; // edx
  int v76; // eax
  int v77; // esi
  int v81; // ecx
  int v82; // edi
  InputGlobal *v87; // edi
  double v88; // st7
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  MobileObject *v94; // esi
  __int16 v95; // ax
  PlayerCharacterVtbl *v104; // edx
  UInt8 (__thiscall *GetKnockedState)(TESObjectREFR *); // eax
  UInt32 unk57CState; // eax
  TESObjectBOOK *book; // eax
  MagicCasterVtbl *v119; // edi
  int CurrentMagicItem; // eax
  int v121; // eax
  ActorAnimData *v123; // eax
  __int16 AnimGroupFromField8Value; // ax
  bhkCharacterProxy *v125; // eax
  char v126; // zf
  char *v129; // ecx
  int v130; // eax
  char v131; // al
  bhkCharacterProxy *v132; // eax
  bhkCharacterProxy *v133; // eax
  TESObjectCELL *v134; // eax
  ActorAnimData *v136; // eax
  bhkCharacterProxy *v138; // esi
  _OWORD *v139; // esi
  void (__thiscall *Unk_73)(MobileObject *); // edx
  double v141; // st7
  char v143; // dl
  TESObjectREFR *v146; // esi
  _DWORD *v147; // eax
  TESObjectREFRVtbl *v148; // edi
  TESObjectREFR *v149; // eax
  void *v150; // ecx
  Creature *(__thiscall *GetMountedHorse)(Actor *); // edx
  TESObjectREFR *v152; // eax
  int *SafeFloatPointer; // eax
  void *v167; // ecx
  double v169; // st7
  PlayerCharacterVtbl *v170; // esi
  ActorAnimData *firstPersonAnimData; // ecx
  TESObjectCELL *v175; // eax
  void (__thiscall *Unk_6F)(MobileObject *, UInt32); // edx
  void (__thiscall *v179)(MobileObject *, UInt32); // edx
  LowProcess *v181; // ecx
  UInt8 (__thiscall *GetSitSleepState)(BaseProcess *__hidden); // edx
  void (__thiscall *v184)(MobileObject *, UInt32); // edx
  LowProcess *v186; // ecx
  UInt8 (__thiscall *v187)(BaseProcess *__hidden); // edx
  void (__thiscall *v189)(MobileObject *, UInt32); // edx
  int v193; // esi
  TESObjectCELL *ParentCell; // [esp+4Ch] [ebp-A8h]
  float v201; // [esp+4Ch] [ebp-A8h]
  float duration; // [esp+50h] [ebp-A4h]
  float durationa; // [esp+50h] [ebp-A4h]
  float durationb; // [esp+50h] [ebp-A4h]
  float durationc; // [esp+50h] [ebp-A4h]
  float durationd; // [esp+50h] [ebp-A4h]
  float duratione; // [esp+50h] [ebp-A4h]
  float durationf; // [esp+50h] [ebp-A4h]
  float durationg; // [esp+50h] [ebp-A4h]
  float durationh; // [esp+50h] [ebp-A4h]
  int durationi; // [esp+50h] [ebp-A4h]
  float durationj; // [esp+50h] [ebp-A4h]
  float durationk; // [esp+50h] [ebp-A4h]
  float durationl; // [esp+50h] [ebp-A4h]
  float durationm; // [esp+50h] [ebp-A4h]
  float durationn; // [esp+50h] [ebp-A4h]
  float durationo; // [esp+50h] [ebp-A4h]
  float durationp; // [esp+50h] [ebp-A4h]
  float durationq; // [esp+50h] [ebp-A4h]
  float durationr; // [esp+50h] [ebp-A4h]
  float durations; // [esp+50h] [ebp-A4h]
  float durationt; // [esp+50h] [ebp-A4h]
  int durationu; // [esp+50h] [ebp-A4h]
  float durationv; // [esp+50h] [ebp-A4h]
  float durationw; // [esp+50h] [ebp-A4h]
  float durationx; // [esp+50h] [ebp-A4h]
  float durationy; // [esp+50h] [ebp-A4h]
  float durationz; // [esp+50h] [ebp-A4h]
  int duration_4; // [esp+54h] [ebp-A0h]
  char v230; // [esp+67h] [ebp-8Dh]
  bool v231; // [esp+67h] [ebp-8Dh]
  int v232; // [esp+68h] [ebp-8Ch]
  __int16 v233; // [esp+68h] [ebp-8Ch]
  bool v234; // [esp+6Fh] [ebp-85h]
  bool v235; // [esp+6Fh] [ebp-85h]
  LONG v236; // [esp+70h] [ebp-84h]
  int v239; // [esp+70h] [ebp-84h]
  bool v243; // [esp+77h] [ebp-7Dh]
  char v244; // [esp+77h] [ebp-7Dh]
  InputGlobal *v245; // [esp+78h] [ebp-7Ch]
  SceneGraph *v246; // [esp+7Ch] [ebp-78h]
  LONG v247; // [esp+7Ch] [ebp-78h]
  LONG v248; // [esp+7Ch] [ebp-78h]
  unsigned int v249; // [esp+7Ch] [ebp-78h]
  int v250; // [esp+7Ch] [ebp-78h]
  int v261; // [esp+7Ch] [ebp-78h]
  int v265; // [esp+7Ch] [ebp-78h]
  int v266; // [esp+7Ch] [ebp-78h]
  LONG JoystickAxisMovement; // [esp+8Ch] [ebp-68h]
  LONG v269; // [esp+8Ch] [ebp-68h]
  int v273; // [esp+8Ch] [ebp-68h]
  float v274; // [esp+90h] [ebp-64h] BYREF
  float a2a; // [esp+94h] [ebp-60h]
  int v276; // [esp+98h] [ebp-5Ch]
  NiPoint3 v277; // [esp+9Ch] [ebp-58h] BYREF
  Actor *v278; // [esp+A8h] [ebp-4Ch]
  UInt8 isThirdPerson; // [esp+ADh] [ebp-47h]
  bool IsBlocking; // [esp+AEh] [ebp-46h]
  bool v281; // [esp+AFh] [ebp-45h]
  float v282; // [esp+B0h] [ebp-44h]
  float v283; // [esp+B4h] [ebp-40h]
  int v284; // [esp+B8h] [ebp-3Ch]
  __int64 v285; // [esp+BCh] [ebp-38h]
  float x; // [esp+C4h] [ebp-30h]
  float v287; // [esp+C8h] [ebp-2Ch]
  float v288; // [esp+CCh] [ebp-28h]
  float v289[9]; // [esp+D0h] [ebp-24h] BYREF
  int savedregs; // [esp+F4h] [ebp+0h] BYREF

  __asm { fldz }
  v10 = g_worldScenegraph;
  _EBX = this;
  input = OSGlobals->input;
  __asm { fst     dword ptr [ebx+7FCh] }
  *(float *)&_EBX->unk7FC = _ET1;
  __asm { fstp    dword ptr [ebx+800h] }
  _EBX->unk800 = _ET1;
  v245 = input;
  v15 = 0;
  v246 = v10;
  v278 = 0;
  v230 = 0;
  sub_667520((MobileObject *)_EBX);
  CharProxy = MobileObject_GetCharProxy((MobileObject *)_EBX);
  if ( CharProxy && (*((_DWORD *)CharProxy + 0x7D) & 0x20000) != 0 )
  {
    if ( !_EBX->unk115 )
    {
      sub_6768C0((int)&ActorProcessManager_ptr, a7, a8);
      _EBX->unk115 = 1;
    }
  }
  else
  {
    _EBX->unk115 = 0;
  }
  _EBX->super.super.super.process->Unk_12B(_EBX->super.super.super.process);
  __asm { fldz }
  __asm { fcom    st(1) }
  v17 = _EBX->super.super.super.process->__vftable;
  __asm
  {
    fnstsw  ax
    fstp    st(1)
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
  {
    __asm { fstp    [esp+0A4h+duration] }
    ((void (__stdcall *)(_DWORD))v17->SetUnk2ACCallD5)(LODWORD(duration));
  }
  else
  {
    __asm { fstp    st }
    ((void (*)(void))v17->Unk_12A)();
  }
  if ( LOBYTE(_EBX->unk738) )
  {
    _EBX->vtbl->super.super.Unk_76((MobileObject *)_EBX);
    __asm { fcomp   dword ptr ds:0A2FAA8h }
    __asm { fnstsw  ax }
    if ( __SETP__(HIBYTE(_AX) & 0x41, 0) )
    {
      _EBX->vtbl->super.super.Unk_77((MobileObject *)_EBX);
    }
    else
    {
      sub_6636B0();
      __asm { fld     dword ptr ds:0B378A8h }
      __asm { fstp    [esp+0A4h+duration] }
      ((void (__stdcall *)(_DWORD))_EBX->super.super.super.process->Unk_6F)(LODWORD(durationa));
    }
  }
  __asm
  {
    fldz
    fcomp   dword ptr [ebx+618h]
    fnstsw  ax
  }
  if ( (_AX & 0x100) != 0 )
  {
    __asm
    {
      fld     dword ptr [ebx+618h]
      fsub    dword ptr ds:0B33E9Ch
    }
  }
  else
  {
    sub_67A230(&ActorProcessManager_ptr);
    __asm { fld     dword ptr ds:0B36CE0h }
  }
  __asm { fstp    dword ptr [ebx+618h] }
  _EBX->unk618 = _ET1;
  v22 = dword_B37D30;
  InterfaceManager_GetSingleton(0, 1)->unk008[2] = v22;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  sub_5806D0((int)Singleton, a7, a8, a9);
  if ( _EBX->pad71E[1] )
  {
    _EBX->pad71E[1] = 0;
    sub_66FF10((int)_EBX, (char)&savedregs, st0_0, a3, a4, a5, a6, a7, a8, a9, COERCE_FLOAT(1));
  }
  ObjectToActivate = _EBX->ObjectToActivate;
  if ( ObjectToActivate )
  {
    ActivateRef(ObjectToActivate, a7, a8, a9, (TESObjectREFR *)_EBX, 0, 0, 1);
    _EBX->ObjectToActivate = 0;
    return;
  }
  if ( _EBX->isFlyCam )
    UpdateFlyCam((float *)_EBX);
  if ( _EBX->isThirdPerson )
    _EBX->super.super.super.process->Unk_24(_EBX->super.super.super.process, (UInt32)_EBX);
  if ( ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetSitSleepState)(_EBX->super.super.super.process) == 4
    && (v25 = (Actor *)_EBX->vtbl->super.GetMountedHorse((Actor *)_EBX), v15 = v25, (v278 = v25) != 0) )
  {
    process = v25->members.super.process;
  }
  else
  {
    process = _EBX->super.super.super.process;
  }
  v27 = process->GetMovementFlags(process);
  if ( Actor_IsSneaking(_EBX) && !v15 && sub_5E05B0(_EBX) )
  {
    if ( dword_B3B368 < 3 )
    {
      if ( LOBYTE(_EBX->unk5A8) )
      {
        __asm
        {
          fld1
          fcomp   dword ptr [ebx+5A4h]
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 5, 0) )
        {
          __asm
          {
            fld     dword ptr ds:0B33E9Ch
            fadd    dword ptr [ebx+5A4h]
            fstp    dword ptr [ebx+5A4h]
          }
          _EBX->unk5A4 = _ET1;
        }
        else
        {
          __asm { fldz }
          __asm { fstp    [esp+0A4h+duration] }
          ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))_EBX->vtbl->super.ModExperience)(
            _EBX,
            0x1F,
            0,
            LODWORD(durationb));
          __asm
          {
            fldz
            fstp    dword ptr [ebx+5A4h]
          }
          _EBX->unk5A4 = _ET1;
        }
      }
    }
  }
  else if ( Actor_IsSwimming(_EBX) && !v15 && sub_5E05B0(_EBX) )
  {
    __asm
    {
      fld1
      fcomp   dword ptr [ebx+5A0h]
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fld     dword ptr ds:0B33E9Ch
        fadd    dword ptr [ebx+5A0h]
        fstp    dword ptr [ebx+5A0h]
      }
      _EBX->unk5A0 = _ET1;
    }
    else
    {
      __asm { fldz }
      __asm { fstp    [esp+0A4h+duration] }
      ((void (__thiscall *)(PlayerCharacter *, int, int, _DWORD))_EBX->vtbl->super.ModExperience)(
        _EBX,
        0xD,
        1,
        LODWORD(durationc));
      __asm
      {
        fldz
        fstp    dword ptr [ebx+5A0h]
      }
      _EBX->unk5A0 = _ET1;
    }
  }
  else if ( (v27 & 0x200) != 0 && !v15 && sub_5E05B0(_EBX) )
  {
    __asm
    {
      fld1
      fcomp   dword ptr [ebx+59Ch]
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm
      {
        fld     dword ptr [ebx+59Ch]
        fadd    dword ptr ds:0B33E9Ch
      }
    }
    else
    {
      __asm { fldz }
      __asm { fstp    [esp+0A4h+duration] }
      ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))_EBX->vtbl->super.ModExperience)(
        _EBX,
        0xD,
        0,
        LODWORD(durationd));
      __asm { fldz }
    }
    __asm { fstp    dword ptr [ebx+59Ch] }
    _EBX->unk59C = _ET1;
  }
  v232 = v27 & 0xCC00;
  MouseAxisMovement = InputGlobals::GetMouseAxisMovement(v245, 1);
  v37 = InputGlobals::GetMouseAxisMovement(v245, 2);
  v236 = InputGlobals::GetMouseAxisMovement(v245, 3);
  JoystickAxisMovement = InputGlobals::GetJoystickAxisMovement(v245, 0, dword_B14EE0);
  __asm
  {
    fild    [esp+0A0h+var_68]
    fmul    dword ptr ds:0B14F08h
  }
  HIDWORD(v38) = Double_To_SInt32(a9) + MouseAxisMovement;
  v269 = InputGlobals::GetJoystickAxisMovement(v245, 0, dword_B14ED8);
  __asm
  {
    fild    [esp+0A0h+var_68]
    fmul    dword ptr ds:0B14F00h
  }
  LODWORD(v38) = Double_To_SInt32(a9) + v37;
  v126 = _EBX->isFlyCam == 0;
  v285 = v38;
  if ( !v126 )
  {
    v38 = 0;
    v285 = 0;
    v236 = 0;
  }
  if ( byte_B14F38 )
  {
    LODWORD(v38) = -(int)v38;
    LODWORD(v285) = v38;
  }
  __asm
  {
    fild    [esp+0A0h+var_84]
    fstp    [esp+0A0h+var_84]
    fldz
    fld     [esp+0A0h+var_84]
    fucom   st(1)
    fnstsw  ax
    fstp    st(1)
  }
  if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
  {
    if ( !VanityCamState )
    {
      v230 = 1;
      if ( !_EBX->isThirdPerson )
        goto LABEL_66;
    }
    __asm { fld     dword ptr ds:0B36B58h }
    __asm { fmulp   st(1), st }
    __asm
    {
      fsubr   dword ptr ds:0B3BB24h
      fstp    dword ptr ds:0B3BB24h
    }
    *((float *)&qword_B3BB20 + 1) = _ET1;
    v41 = _EBX->vtbl->super.super.super.IsDead((TESObjectREFR *)_EBX, 0);
    __asm { fld     dword ptr ds:0B3BB24h }
    if ( v41 )
    {
      __asm
      {
        fld     dword ptr ds:0B36B80h
        fcom    st(1)
        fnstsw  ax
        fstp    st(1)
      }
      if ( (_AX & 0x4100) != 0 )
      {
        __asm { fstp    st }
      }
      else
      {
        __asm { fstp    dword ptr ds:0B3BB24h }
        *((float *)&qword_B3BB20 + 1) = _ET1;
      }
    }
    else
    {
      __asm
      {
        fld     dword ptr ds:0B36B60h
        fcompp
        fnstsw  ax
      }
      if ( (_AX & 0x4100) == 0 )
      {
        if ( !VanityCamState )
          TogglePOV(_EBX, 1u);
        __asm
        {
          fld     dword ptr ds:0B36B60h
          fstp    dword ptr ds:0B3BB24h
        }
        *((float *)&qword_B3BB20 + 1) = _ET1;
      }
    }
    __asm
    {
      fld     dword ptr ds:0B3BB24h
      fld     dword ptr ds:0B36B68h
      fcom    st(1)
      fnstsw  ax
      fstp    st(1)
    }
    if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm { fstp    dword ptr ds:0B3BB24h }
      *((float *)&qword_B3BB20 + 1) = _ET1;
    }
    else
    {
LABEL_66:
      __asm { fstp    st }
    }
    if ( !_EBX->isThirdPerson )
    {
      __asm
      {
        fld     [esp+0A0h+var_84]
        fmul    dword ptr ds:0B36B58h
        fcomp   qword ptr ds:0A2FC68h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
      {
        TogglePOV(_EBX, 0);
        __asm
        {
          fld     dword ptr ds:0B3BB24h
          fcomp   qword ptr ds:0A3F3D0h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
        {
          __asm
          {
            fld     dword ptr ds:0A3D8F0h
            fstp    dword ptr ds:0B3BB24h
          }
          *((float *)&qword_B3BB20 + 1) = _ET1;
        }
      }
    }
  }
  else
  {
    __asm { fstp    st }
  }
  _EBX->vtbl->super.super.GetZRotation((MobileObject *)_EBX);
  __asm { fstp    dword ptr ds:0B3BAC8h }
  flt_B3BAC8 = _ET1;
  v52 = sub_4A9720((Actor *)_EBX);
  __asm { fstp    dword ptr ds:0B3BAC4h }
  flt_B3BAC4 = _ET1;
  if ( VanityCamState
    && !((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->Unk_11E)(_EBX->super.super.super.process) )
  {
    __asm
    {
      fild    dword ptr [esp+0A0h+var_38+4]
      fld     qword ptr ds:0A31C78h
      fmul    st(1), st
      fld     dword ptr ds:0B36B88h
      fmulp   st(2), st
      fld     [ebp+arg_0]
      fld     st
      fmulp   st(3), st
      fld     dword ptr ds:0B3BB28h
      faddp   st(3), st
      fxch    st(2)
      fstp    dword ptr ds:0B3BB28h
    }
    flt_B3BB28 = _ET1;
    __asm
    {
      fimul   dword ptr [esp+0A0h+var_38]
      fmul    dword ptr ds:0B36B90h
      fmulp   st(1), st
      fadd    dword ptr ds:0B3BB20h
      fstp    dword ptr ds:0B3BB20h
    }
    *(float *)&qword_B3BB20 = _ET1;
    goto LABEL_75;
  }
  if ( HIDWORD(v38) || v278 )
  {
    __asm
    {
      fild    dword ptr [esp+0A0h+var_38+4]
      fmul    dword ptr ds:0B14EE8h
      fstp    [esp+0A0h+var_84]
    }
    if ( HIDWORD(v38) )
    {
      __asm
      {
        fldz
        fcomp   [esp+0A0h+var_84]
        fnstsw  ax
      }
      if ( (_AX & 0x4100) != 0 )
        v232 |= 0x20u;
      else
        v232 |= 0x10u;
    }
    if ( !Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)_EBX)
      && Actor_GetCurrentAction(_EBX) != 8
      && !_EBX->isWakeUpPackage
      && !_EBX->isTravelPackage )
    {
      v58 = ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetSitSleepState)(_EBX->super.super.super.process);
      if ( v58 )
      {
        if ( v58 != 4 )
          goto LABEL_108;
        __asm
        {
          fld     dword ptr [ebx+61Ch]
          fadd    [esp+0A0h+var_84]
          fstp    [esp+0A0h+var_68]
          fld     [esp+0A0h+var_68]
          fst     dword ptr [ebx+61Ch]
        }
        _EBX->unk61C = _ET1;
        __asm
        {
          fcom    qword ptr ds:0A73DD0h
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 5, 0) )
        {
          __asm
          {
            fcomp   qword ptr ds:0A6E740h
            fnstsw  ax
          }
          if ( (_AX & 0x4100) != 0 )
            goto LABEL_102;
          __asm { fld     dword ptr ds:0A3F3E0h }
        }
        else
        {
          __asm
          {
            fstp    st
            fld     dword ptr ds:0A3721Ch
          }
        }
        __asm { fstp    dword ptr [ebx+61Ch] }
        _EBX->unk61C = _ET1;
LABEL_102:
        if ( v278 )
        {
          __asm
          {
            fld     dword ptr ds:0A35AA4h
            fstp    dword ptr ds:0B14E5Ch
          }
          flt_B14E5C = _ET1;
        }
        goto LABEL_108;
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14EE8);
      __asm
      {
        fld     [esp+0A0h+var_84]
        fld     st
        fabs
        fstp    [esp+0A0h+var_68]
        fld     [esp+0A0h+var_68]
        fld     dword ptr [eax]
        fmul    qword ptr ds:0A2F920h
        fdivp   st(1), st
        fstp    dword ptr ds:0B14E5Ch
      }
      flt_B14E5C = _ET1;
      __asm
      {
        fld     dword ptr ds:0A35AA4h
        fcom    dword ptr ds:0B14E5Ch
        fnstsw  ax
      }
      if ( __SETP__(BYTE1(_EAX) & 5, 0) )
      {
        __asm { fstp    st }
      }
      else
      {
        __asm { fstp    dword ptr ds:0B14E5Ch }
        flt_B14E5C = _ET1;
      }
      __asm { fstp    [esp+0A4h+duration]; float }
      sub_659B90((int *)_EBX, v52, duratione);
    }
  }
LABEL_108:
  if ( (_DWORD)v38 )
  {
    __asm { fild    dword ptr [esp+0A0h+var_38] }
    __asm
    {
      fmul    dword ptr ds:0B14EE8h
      fstp    [esp+0A4h+var_68]
      fld     [esp+0A4h+var_68]
      fstp    [esp+0A4h+duration]; float
    }
    sub_65ABC0((TESObjectREFR *)_EBX, durationf);
  }
  v52 = sub_633250((int)_EBX->super.super.super.process, (char)&savedregs, a7, v52, a8, (Actor *)_EBX);
  if ( v67 )
  {
    if ( _EBX->unk574 )
      sub_66A670((TESObjectREFR *)_EBX);
    sub_65E900((TESObjectREFR *)_EBX);
    __asm { fld     [ebp+arg_0] }
    __asm { fstp    [esp+0A4h+duration]; a2 }
    _EBX->isThirdPerson = _EBX->isThirdPerson == 0;
    sub_603CA0((Actor *)_EBX, a7, a8, v52, durationg);
    __asm { fld     [ebp+arg_0] }
    _EBX->isThirdPerson = _EBX->isThirdPerson == 0;
    __asm { fstp    [esp+0A4h+duration]; a2 }
    sub_603CA0((Actor *)_EBX, a7, a8, v52, durationh);
    sub_66B710(_EBX, v52, a7, 0);
    return;
  }
LABEL_75:
  if ( !_EBX->isWakeUpPackage
    && !_EBX->isTravelPackage
    && !_EBX->vtbl->super.super.super.IsDead((TESObjectREFR *)_EBX, 0) )
  {
    editorPackage = TESDataHandler_g_PlayerRef->super.super.super.process->editorPackage;
    if ( editorPackage )
    {
      editorPackage->__vftable->super.Destroy((TESForm *)editorPackage, 1);
      TESDataHandler_g_PlayerRef->super.super.super.process->editorPackage = 0;
    }
    if ( ((int (__thiscall *)(LowProcess *))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_5C)(TESDataHandler_g_PlayerRef->super.super.super.process) )
      TESDataHandler_g_PlayerRef->super.super.super.process->SetCurrentPackage(
        TESDataHandler_g_PlayerRef->super.super.super.process,
        0);
    if ( _EBX->bCanLevelUp && byte_B14E88 )
    {
      sub_5ACE20(a7, a8, v52);
      return;
    }
    sub_6606F0((int)_EBX);
    sub_65DA20(v68);
    if ( InputGlobals::QueryControlState(v245, 8, 1) )
    {
      if ( IsWeaponReady(_EBX) && !_EBX->unk5C0 && Actor_GetCurrentAction(_EBX) == 0xFFFFFFFF )
      {
        v69 = _EBX->super.super.super.process->GetCombatMode(_EBX->super.super.super.process);
        sub_5E6D70(_EBX, v69 == 0);
      }
    }
    if ( InputGlobals::QueryControlState(v245, 0xB, 1) )
      _EBX->AlwaysRun = _EBX->AlwaysRun == 0;
    if ( InputGlobals::QueryControlState(v245, 0xC, 1) )
      _EBX->AutoMove = _EBX->AutoMove == 0;
    if ( _EBX->AutoMove )
    {
      if ( InputGlobals::QueryControlState(v245, 0, 0)
        || InputGlobals::QueryControlState(v245, 1, 0)
        || (InputGlobals::QueryControlState(v245, 3, 0) || InputGlobals::QueryControlState(v245, 2, 0)) && !v278 )
      {
        _EBX->AutoMove = 0;
      }
      else
      {
        InputGlobals::SendControlPress(v245, 0);
      }
    }
    if ( !v278 )
    {
      if ( InputGlobals::QueryControlState(v245, 9, 1) )
      {
        if ( !_EBX->vtbl->super.super.super.HasFatigue((TESObjectREFR *)_EBX)
          && !_EBX->vtbl->super.super.super.IsDead((TESObjectREFR *)_EBX, 0)
          && !_EBX->vtbl->super.super.super.GetKnockedState((TESObjectREFR *)_EBX)
          && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)_EBX) != (struct Concurrency::details::ScheduleGroupBase *)5
          && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)_EBX) != (struct Concurrency::details::ScheduleGroupBase *)3 )
        {
          if ( (v232 & 0x400) != 0 )
            v232 &= 0xFBFFu;
          else
            v232 |= 0x400u;
        }
      }
    }
    if ( v246->super.children.end )
      vtbl = v246->super.children.data->vtbl;
    else
      vtbl = 0;
    __asm { fld1 }
    v71 = _EBX->super.super.super.super.pos[1];
    __asm { fstp    [esp+0A0h+var_64] }
    p_DumpAttributes = &vtbl->super.DumpAttributes;
    __asm { fldz }
    v73 = _EBX->super.super.super.super.pos[2];
    __asm { fst     [esp+0A0h+a2] }
    __asm { fst     [esp+0A0h+var_5C] }
    qmemcpy(v289, p_DumpAttributes, sizeof(v289));
    __asm { fld     [esp+0A0h+var_20] }
    v277.x = _EBX->super.super.super.super.pos[0];
    x = v277.x;
    v282 = v274;
    flags = _EBX->super.super.super.super.super.flags;
    __asm
    {
      fstp    [esp+0A0h+var_64]
      fld     [esp+0A0h+var_14]
    }
    v277.y = v71;
    v287 = v71;
    v75 = a2a;
    v277.z = v73;
    __asm { fstp    [esp+0A0h+a2] }
    v288 = v73;
    v76 = v276;
    __asm { fld     [esp+0A0h+var_8] }
    __asm { fstp    [esp+0A0h+var_5C] }
    v283 = v75;
    v284 = v76;
    if ( (flags & 0x10) != 0 )
    {
      __asm
      {
        fstp    st
        fld     [esp+0A0h+var_24]
        fstp    [esp+0A0h+var_44]
        fld     [esp+0A0h+var_18]
        fstp    [esp+0A0h+var_40]
        fld     [esp+0A0h+var_C]
        fstp    [esp+0A0h+var_3C]
      }
    }
    else
    {
      __asm { fstp    [esp+0A0h+var_5C] }
      v52 = sub_43F350(&v274);
      __asm { fstp    st }
    }
    v234 = 0;
    if ( _EBX->unk57CState == 2 )
    {
      __asm { fld     [ebp+arg_0] }
      __asm { fstp    [esp+0A4h+duration]; float }
      v234 = sub_66DFD0((TESObjectREFR *)_EBX, a7, a8, v52, durationi);
    }
    sub_663740((int *)_EBX);
    v247 = InputGlobals::GetJoystickAxisMovement(v245, 0, dword_B14ED0);
    __asm
    {
      fild    [esp+0A0h+var_78]
      fmul    dword ptr ds:0B14EF8h
    }
    v77 = Double_To_SInt32(v52);
    v248 = InputGlobals::GetJoystickAxisMovement(v245, 0, dword_B14EC8);
    __asm
    {
      fild    [esp+0A0h+var_78]
      fmul    dword ptr ds:0B14EF0h
    }
    v273 = Double_To_SInt32(v52);
    if ( v77 )
    {
      if ( v77 <= 0 )
        InputGlobals::SendControlPress(v245, 2);
      else
        InputGlobals::SendControlPress(v245, 3);
      v249 = abs32(v77);
      __asm
      {
        fild    [esp+0A0h+var_78]
        fmul    qword ptr ds:0A73E80h
        fstp    dword ptr ds:0B14E5Ch
      }
      flt_B14E5C = _ET1;
      __asm
      {
        fld     dword ptr ds:0A35AA4h
        fcom    dword ptr ds:0B14E5Ch
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) )
      {
        __asm { fstp    st }
      }
      else
      {
        __asm { fstp    dword ptr ds:0B14E5Ch }
        flt_B14E5C = _ET1;
      }
    }
    v81 = abs32(v273);
    v82 = abs32(v77);
    v239 = v81;
    v250 = v82;
    if ( v81 >= v82 )
    {
      if ( v273 )
      {
        if ( v273 >= 0 )
          InputGlobals::SendControlPress(v245, 1);
        else
          InputGlobals::SendControlPress(v245, 0);
        v81 = v239;
        __asm
        {
          fild    [esp+0A0h+var_84]
          fmul    qword ptr ds:0A73E80h
          fstp    dword ptr ds:0B14E58h
        }
        flt_B14E58 = _ET1;
      }
    }
    else
    {
      __asm
      {
        fild    [esp+0A0h+var_78]
        fmul    qword ptr ds:0A73E80h
        fstp    dword ptr ds:0B14E58h
      }
      flt_B14E58 = _ET1;
      if ( v77 >= 0 )
        v232 |= 8u;
      else
        v232 |= 4u;
    }
    __asm
    {
      fld1
      fcom    dword ptr ds:0B14E58h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm { fstp    st }
    }
    else
    {
      __asm { fstp    dword ptr ds:0B14E58h }
      flt_B14E58 = _ET1;
    }
    if ( v82 > 0x62 || v81 > 0x62 )
      InputGlobals::SendControlPress(v245, 0xA);
    if ( _EBX->AlwaysRun )
    {
      v87 = v245;
      if ( !InputGlobals::QueryControlState(v245, 0xA, 1) && !InputGlobals::QueryControlState(v245, 0xA, 0) )
      {
        InputGlobals::SendControlPress(v245, 0xA);
        v232 |= 0x200u;
LABEL_179:
        v88 = sub_5E65B0((TESObjectREFR *)_EBX);
        __asm { fstp    [esp+0A0h+var_78] }
        v126 = _EBX->isFlyCam == 0;
        __asm
        {
          fld     dword ptr ds:0B14E58h
          fmul    [esp+0A0h+var_78]
          fstp    [esp+0A0h+var_78]
          fld     [esp+0A0h+var_78]
          fst     [esp+0A0h+var_78]
          fld     [esp+0A0h+var_78]
          fld     st
          fmul    [esp+0A0h+var_44]
          fstp    [esp+0A0h+var_44]
          fld     [esp+0A0h+var_40]
          fmul    st, st(1)
          fstp    [esp+0A0h+var_40]
          fmul    [esp+0A0h+var_3C]
          fstp    [esp+0A0h+var_3C]
          fstp    [esp+0A0h+var_78]
          fld     [esp+0A0h+var_78]
          fld     st
          fmul    [esp+0A0h+var_64]
          fstp    [esp+0A0h+var_64]
          fld     [esp+0A0h+a2]
          fmul    st, st(1)
          fstp    [esp+0A0h+a2]
          fmul    [esp+0A0h+var_5C]
          fstp    [esp+0A0h+var_5C]
        }
        if ( !v126 )
          goto LABEL_200;
        if ( InputGlobals::QueryControlState(v87, 0, 1) || InputGlobals::QueryControlState(v87, 0, 0) )
        {
          __asm { fld     [esp+0A0h+var_58.x] }
          v89 = v232;
          __asm
          {
            fadd    [esp+0A0h+var_64]
            fstp    [esp+0A0h+var_58.x]
            fld     [esp+0A0h+var_58.y]
            fadd    [esp+0A0h+a2]
            fstp    [esp+0A0h+var_58.y]
            fld     [esp+0A0h+var_58.z]
            fadd    [esp+0A0h+var_5C]
            fstp    [esp+0A0h+var_58.z]
          }
          if ( (v232 & 0x200) == 0 )
            v89 = v232 | 0x100;
          v232 = v89 | 1;
        }
        if ( InputGlobals::QueryControlState(v87, 1, 1) || InputGlobals::QueryControlState(v87, 1, 0) )
        {
          __asm { fld     [esp+0A0h+var_58.x] }
          v90 = v232;
          __asm
          {
            fsub    [esp+0A0h+var_64]
            fstp    [esp+0A0h+var_58.x]
            fld     [esp+0A0h+var_58.y]
            fsub    [esp+0A0h+a2]
            fstp    [esp+0A0h+var_58.y]
            fld     [esp+0A0h+var_58.z]
            fsub    [esp+0A0h+var_5C]
            fstp    [esp+0A0h+var_58.z]
          }
          if ( (v232 & 0x200) == 0 )
            v90 = v232 | 0x100;
          v232 = v90 | 2;
        }
        if ( InputGlobals::QueryControlState(v87, 2, 1) || InputGlobals::QueryControlState(v87, 2, 0) )
        {
          __asm { fld     [esp+0A0h+var_58.x] }
          v91 = v232;
          __asm
          {
            fsub    [esp+0A0h+var_44]
            fstp    [esp+0A0h+var_58.x]
            fld     [esp+0A0h+var_58.y]
            fsub    [esp+0A0h+var_40]
            fstp    [esp+0A0h+var_58.y]
            fld     [esp+0A0h+var_58.z]
            fsub    [esp+0A0h+var_3C]
            fstp    [esp+0A0h+var_58.z]
          }
          if ( (v232 & 0x200) == 0 )
            v91 = v232 | 0x100;
          v232 = v91 | 4;
        }
        if ( InputGlobals::QueryControlState(v87, 3, 1) || InputGlobals::QueryControlState(v87, 3, 0) )
        {
          __asm { fld     [esp+0A0h+var_58.x] }
          v92 = v232;
          __asm
          {
            fadd    [esp+0A0h+var_44]
            fstp    [esp+0A0h+var_58.x]
            fld     [esp+0A0h+var_58.y]
            fadd    [esp+0A0h+var_40]
            fstp    [esp+0A0h+var_58.y]
            fld     [esp+0A0h+var_58.z]
            fadd    [esp+0A0h+var_3C]
            fstp    [esp+0A0h+var_58.z]
          }
          if ( (v232 & 0x200) == 0 )
            v92 = v232 | 0x100;
          v93 = v92 | 8;
          v232 = v93;
        }
        else
        {
LABEL_200:
          LOWORD(v93) = v232;
        }
        v94 = (MobileObject *)v278;
        if ( v278 )
        {
          v95 = v93 & 0xFFCF;
          v233 = v95;
          if ( (v95 & 4) != 0 )
          {
            __asm
            {
              fild    dword ptr ds:0B37520h
              fld     [ebp+arg_0]
              fld     st
              fmulp   st(2), st
              fld     dword ptr ds:0B3BCECh
              faddp   st(2), st
              fxch    st(1)
              fstp    dword ptr ds:0B3BCECh
            }
            flt_B3BCEC = _ET1;
            __asm
            {
              fild    dword ptr ds:0B37518h
              fstp    [esp+0A0h+var_84]
              fld     dword ptr ds:0B3BCECh
              fld     [esp+0A0h+var_84]
              fcom    st(1)
              fnstsw  ax
              fstp    st(1)
            }
            if ( __SETP__(HIBYTE(_AX) & 5, 0) )
            {
              __asm { fstp    st }
            }
            else
            {
              __asm { fstp    dword ptr ds:0B3BCECh }
              flt_B3BCEC = _ET1;
            }
            __asm { fld     dword ptr ds:0B3BCECh }
            __asm { fmul    qword ptr ds:0A73E78h }
            __asm
            {
              fmulp   st(1), st
              fmul    dword ptr ds:0B14E5Ch
              fstp    [esp+0A4h+var_78]
              fld     [esp+0A4h+var_78]
              fstp    [esp+0A4h+duration]; float
            }
            sub_659B90((int *)v94, v88, durationj);
            v233 |= 0x10u;
            LOBYTE(v95) = v233;
          }
          else
          {
            __asm
            {
              fldz
              fstp    dword ptr ds:0B3BCECh
            }
            flt_B3BCEC = _ET1;
          }
          if ( (v95 & 8) != 0 )
          {
            __asm
            {
              fild    dword ptr ds:0B37520h
              fld     [ebp+arg_0]
              fld     st
              fmulp   st(2), st
              fld     dword ptr ds:0B3BCE8h
              faddp   st(2), st
              fxch    st(1)
              fstp    dword ptr ds:0B3BCE8h
            }
            flt_B3BCE8 = _ET1;
            __asm
            {
              fild    dword ptr ds:0B37518h
              fstp    [esp+0A0h+var_84]
              fld     dword ptr ds:0B3BCE8h
              fld     [esp+0A0h+var_84]
              fcom    st(1)
              fnstsw  ax
              fstp    st(1)
            }
            if ( __SETP__(HIBYTE(_AX) & 5, 0) )
            {
              __asm { fstp    st }
            }
            else
            {
              __asm { fstp    dword ptr ds:0B3BCE8h }
              flt_B3BCE8 = _ET1;
            }
            __asm { fld     dword ptr ds:0B3BCE8h }
            __asm { fmul    qword ptr ds:0A31C78h }
            __asm
            {
              fmulp   st(1), st
              fmul    dword ptr ds:0B14E5Ch
              fstp    [esp+0A4h+var_78]
              fld     [esp+0A4h+var_78]
              fstp    [esp+0A4h+duration]; float
            }
            sub_659B90((int *)v94, v88, durationk);
            v233 |= 0x20u;
          }
          else
          {
            __asm
            {
              fldz
              fstp    dword ptr ds:0B3BCE8h
            }
            flt_B3BCE8 = _ET1;
          }
          v232 = v233 & 0xFFF3;
          ((void (__thiscall *)(LowProcess *, int))v94->process->Unk_B1)(v94->process, v232);
          if ( (v232 & 1) != 0 && (v232 & 0x3E) == 0 )
          {
            if ( InputGlobals::QueryControlState(v87, 0xD, 1) )
            {
              if ( !((unsigned __int8 (__thiscall *)(PlayerCharacter *))_EBX->vtbl->super.Unk_97)(_EBX) )
              {
                if ( (*((_DWORD *)MobileObject_GetCharProxy(v94) + 0x7D) & 0x400) != 0 )
                  v94->vtbl->Jump(v94);
                v230 = 1;
              }
            }
          }
          v88 = sub_4A9720((Actor *)_EBX);
          __asm { fstp    [esp+0A4h+duration]; float }
          sub_65A650((TESObjectREFR *)v94, durationl);
        }
        else
        {
          ((void (__thiscall *)(LowProcess *, int))_EBX->super.super.super.process->Unk_B1)(
            _EBX->super.super.super.process,
            v232);
        }
        sub_66C650((Concurrency::details::SchedulerBase *)_EBX);
        v104 = _EBX->vtbl;
        isThirdPerson = _EBX->isThirdPerson;
        GetKnockedState = v104->super.super.super.GetKnockedState;
        _EBX->isThirdPerson = 1;
        if ( GetKnockedState((TESObjectREFR *)_EBX)
          || _EBX->unk5C0
          || _EBX->vtbl->super.super.super.HasFatigue((TESObjectREFR *)_EBX)
          || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)_EBX)
          || Actor_GetCurrentAction(_EBX) == 8
          || ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetSitSleepState)(_EBX->super.super.super.process) )
        {
          ((void (__thiscall *)(LowProcess *, int, _DWORD))_EBX->super.super.super.process->Unk_B0)(
            _EBX->super.super.super.process,
            0x33F,
            0);
          if ( ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetSitSleepState)(_EBX->super.super.super.process) != 4 )
          {
            if ( byte_B3B43D )
              sub_5C1000(a8);
LABEL_309:
            if ( InputGlobals::QueryControlState(v87, 0x10, 1) && !_EBX->unk5C0 )
            {
              if ( _EBX->JailedState )
              {
                ShowUIMessageBox(
                  (char *)sOk,
                  (char)&savedregs,
                  a7,
                  a8,
                  v88,
                  (const char *)dword_B38AD0,
                  0,
                  1,
                  (const char *)sOk,
                  0);
                goto LABEL_330;
              }
              if ( PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)_EBX, 0) )
              {
                __asm { fld     dword ptr ds:0A379B4h }
                __asm { fstp    [esp+0A4h+duration]; duration }
                GameUI_QueueMessage((const char *)dword_B38AE0, 0, 1u, durationp);
                goto LABEL_330;
              }
              if ( _EBX->vtbl->super.IsTresspassing((Actor *)_EBX) )
              {
                ShowUIMessageBox(
                  (char *)sOk,
                  (char)&savedregs,
                  a7,
                  a8,
                  v88,
                  (const char *)dword_B38AE8,
                  0,
                  1,
                  (const char *)sOk,
                  0);
                goto LABEL_330;
              }
              if ( sub_65D9E0(_EBX) )
              {
                v129 = (char *)dword_B38AD8;
LABEL_329:
                ShowUIMessageBox(v129, (char)&savedregs, a7, a8, v88, v129, 0, 1, (const char *)sOk, 0);
                goto LABEL_330;
              }
              __asm { fld     dword ptr ds:0A6E688h }
              __asm { fstp    [esp+0A4h+duration]; float }
              ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)_EBX);
              v130 = (int)_EBX->vtbl->super.super.super.GetPos((TESObjectREFR *)_EBX);
              if ( Actor_IsUnderwater__(_EBX, v130, (ExtraDataList *)ParentCell, durationq) )
              {
                ShowUIMessageBox(
                  (char *)sOk,
                  (char)&savedregs,
                  a7,
                  a8,
                  v88,
                  (const char *)dword_B38AF0,
                  0,
                  1,
                  (const char *)sOk,
                  0);
                goto LABEL_330;
              }
              v131 = sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef);
              if ( ActorProcessManager::AreHostilesNEarby(
                     (int)&ActorProcessManager_ptr,
                     (signed int)v87,
                     v131,
                     *(float *)&duration_4) )
              {
                __asm { fld     dword ptr ds:0A379B4h }
                __asm { fstp    [esp+0A4h+duration]; duration }
                GameUI_QueueMessage((const char *)dword_B38AF8, 0, 1u, durationr);
                goto LABEL_330;
              }
              v132 = MobileObject_GetCharProxy((MobileObject *)TESDataHandler_g_PlayerRef);
              if ( sub_88D370((_DWORD *)v132 + 0x78) == 1
                || (v133 = MobileObject_GetCharProxy((MobileObject *)TESDataHandler_g_PlayerRef),
                    sub_88D370((_DWORD *)v133 + 0x78) == 2) )
              {
                v129 = (char *)dword_B38B00;
                goto LABEL_329;
              }
              v134 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
              if ( sub_4CA6A0((int)v134) )
              {
                ShowUIMessageBox(
                  (char *)sOk,
                  (char)&savedregs,
                  a7,
                  a8,
                  v88,
                  (const char *)dword_B38B08,
                  0,
                  1,
                  (const char *)sOk,
                  0);
              }
              else
              {
                sub_676EE0((int)&ActorProcessManager_ptr);
                ShowSleepWaitMenu(0);
              }
            }
LABEL_330:
            if ( _EBX->vtbl->super.super.super.GetSleepState((TESObjectREFR *)_EBX) == kSitSleep_Sitting )
            {
              if ( v94 )
              {
                _ESI = (int)_EBX->vtbl->super.super.super.GetAnimData((TESObjectREFR *)_EBX);
                v136 = v278->vtbl->super.super.GetAnimData(v278);
                if ( v136 )
                {
                  if ( _ESI )
                  {
                    __asm
                    {
                      fld     dword ptr [esi+94h]
                      fstp    dword ptr [eax+94h]
                    }
                    v136->unk94 = _ET1;
                  }
                }
                __asm { fld     [ebp+arg_0] }
                __asm { fstp    [esp+0A4h+duration] }
                v88 = ((double (__stdcall *)(_DWORD))v278->vtbl->ProcessControl)(LODWORD(durations));
              }
            }
            _EBX->isThirdPerson = 1;
            __asm { fld     dword ptr ds:0B14E5Ch }
            __asm { fstp    [esp+0A8h+duration]; int }
            __asm
            {
              fld     dword ptr ds:0B14E58h
              fstp    [esp+0A8h+anonymous_0+4]; float
            }
            Actor_ProcessAction((Actor *)_EBX, a7, a8, v88, v201, durationt);
            v126 = _EBX->isSleeping == 0;
            _EBX->isThirdPerson = isThirdPerson;
            if ( !v126 )
              sub_65F770((MagicTarget *)_EBX, (int)_EBX, (int)v87, a7);
            if ( IsCollisionOn || byte_B14F40 )
            {
              if ( (_EBX->super.super.super.super.super.flags & 0x10) == 0 )
              {
                v138 = MobileObject_GetCharProxy((MobileObject *)_EBX);
                if ( v138 )
                {
                  sub_452A10(v138, &v277);
                  v139 = *((_OWORD **)v138 + 2);
                  if ( v139 )
                    sub_8AC0B0(v139, &stru_BA7A40);
                }
                sub_46A9C0(_EBX, 1);
              }
              __asm { fld     [esp+0A0h+var_58.z] }
              __asm { fld     [esp+0A0h+var_28] }
              Unk_73 = _EBX->vtbl->super.super.Unk_73;
              __asm { fld     st }
              __asm { fsubp   st(2), st }
              __asm { fxch    st(1) }
              __asm
              {
                fstp    [esp+0A4h+var_78]
                fld     [esp+0A4h+var_78]
                fmul    [ebp+arg_0]
                fstp    [esp+0A4h+var_70]
                fld     [esp+0A4h+var_30]
                fldz
                fadd    st(1), st
                fxch    st(1)
                fstp    [esp+0A4h+var_64]
                fadd    [esp+0A4h+var_2C]
                fstp    [esp+0A4h+a2]
                fadd    [esp+0A4h+var_70]
                fstp    [esp+0A4h+var_5C]
              }
              ((void (__thiscall *)(PlayerCharacter *, float *))Unk_73)(_EBX, &v274);
            }
            else
            {
              sub_46A9C0(_EBX, 0);
            }
            TESTexture::ClearComponentReferences(_EBX);
            v141 = ((double (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD, _DWORD, int))_EBX->super.super.super.process->Unk_B2)(
                     _EBX->super.super.super.process,
                     _EBX,
                     LODWORD(v282),
                     LODWORD(v283),
                     v284);
            sub_6714E0((int)_EBX, st0_0, a3, a4, a5, a6, a7, a8, v141);
            if ( v285 || (v232 & 0xF) != 0 )
              v230 = 1;
            if ( InputGlobals::QueryControlState(v87, 0x1A, 1) )
              sub_466AD0(
                (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)SaveLoad_CurrentSavegame,
                st0_0,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8);
            if ( InputGlobals::QueryControlState(v87, 0x1B, 1) )
              sub_466B00((char *)SaveLoad_CurrentSavegame, (char)&savedregs, st0_0, a3, a4, a5, a6, a7, a8);
            if ( InputGlobals::QueryControlState(v87, 0xE, 1) || InputGlobals::QueryControlState(v87, 0xE, 0) )
            {
              if ( !InterfaceManager_IsMenuMode() )
              {
                v230 = 1;
                _EAX = GameSetting_GetSafeFloatPointer((int *)&unk_B36B50);
                __asm
                {
                  fld     dword ptr ds:0B3BCE0h
                  fld     dword ptr [eax]
                  fcomp   st(1)
                  fnstsw  ax
                }
                if ( __SETP__(BYTE1(_EAX) & 0x41, 0) || VanityCamState )
                {
                  __asm { fadd    [ebp+arg_0] }
LABEL_369:
                  __asm { fstp    dword ptr ds:0B3BCE0h }
                  flt_B3BCE0 = _ET1;
                  goto LABEL_370;
                }
                __asm { fstp    st }
                VanityCamState = 1;
                byte_B14E4D = 1;
                ToggleBody(_EBX, 0);
              }
            }
            else if ( InputGlobals::QueryControlState(v87, 0xE, 2) || VanityCamState && !byte_B3BB05 )
            {
              _EAX = GameSetting_GetSafeFloatPointer((int *)&unk_B36B50);
              __asm
              {
                fld     dword ptr ds:0B3BCE0h
                fld     dword ptr [eax]
                fcompp
                fnstsw  ax
              }
              if ( (BYTE1(_EAX) & 0x41) != 0 )
              {
                if ( VanityCamState )
                {
                  byte_B14E4D = 1;
                  v143 = _EBX->isThirdPerson == 0;
                  VanityCamState = 0;
                  ToggleBody(_EBX, v143);
                }
                __asm { fldz }
                v230 = 1;
              }
              else
              {
                _EBX->isThirdPerson ^= 1u;
                byte_B14E4D = 1;
                ToggleBody(_EBX, _EBX->isThirdPerson == 0);
                __asm { fldz }
                v230 = 1;
              }
              goto LABEL_369;
            }
LABEL_370:
            if ( !InputGlobals::QueryControlState(v87, 5, 1)
              || InterfaceManager_IsMenuMode()
              || _EBX->unk5C0
              || _EBX->vtbl->super.super.super.HasFatigue((TESObjectREFR *)_EBX)
              || v234 )
            {
LABEL_397:
              if ( byte_B3BB05 )
              {
                if ( v230 )
                {
                  v126 = _EBX->isThirdPerson == 0;
                  __asm { fldz }
                  __asm { fstp    dword ptr ds:0B3BB08h }
                  flt_B3BB08 = _ET1;
                  byte_B3BB05 = 0;
                  VanityCamState = 0;
                  ToggleBody(_EBX, v126);
                }
                else
                {
                  _EAX = GameSetting_GetSafeFloatPointer((int *)&unk_B36BA0);
                  __asm
                  {
                    fld     dword ptr ds:0B3BB34h
                    fld     dword ptr [eax]
                  }
                  __asm
                  {
                    fmul    qword ptr ds:0A31C78h
                    fmul    [ebp+arg_0]
                    fsubp   st(1), st
                    fstp    dword ptr ds:0B3BB34h
                  }
                  flt_B3BB34 = _ET1;
                  _EAX = GameSetting_GetSafeFloatPointer((int *)&unk_B36BA8);
                  __asm { fld     dword ptr [eax] }
                  __asm
                  {
                    fmul    qword ptr ds:0A31C78h
                    fmul    [ebp+arg_0]
                    fadd    dword ptr ds:0B3BCDCh
                    fstp    dword ptr ds:0B3BCDCh
                  }
                  flt_B3BCDC = _ET1;
                  SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36BB0);
                  __asm { fld     dword ptr ds:0B3BCDCh }
                  _ESI = SafeFloatPointer;
                  v141 = _CIsin(v141);
                  __asm
                  {
                    fstp    [esp+0A0h+var_78]
                    fld     [esp+0A0h+var_78]
                    fmul    dword ptr [esi]
                    fmul    qword ptr ds:0A31C78h
                    fstp    dword ptr ds:0B3BB2Ch
                  }
                  *(float *)&qword_B3BB2C = _ET1;
                  __asm
                  {
                    fld     dword ptr ds:0B3BCDCh
                    fld     qword ptr ds:0A3D5B0h
                    fcom    st(1)
                    fnstsw  ax
                  }
                  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
                  {
                    __asm
                    {
                      fstp    st(1)
                      fstp    st
                    }
                  }
                  else
                  {
                    __asm
                    {
                      fsubp   st(1), st
                      fstp    dword ptr ds:0B3BCDCh
                    }
                    flt_B3BCDC = _ET1;
                  }
                }
              }
              else if ( !VanityCamState )
              {
                if ( v230 )
                {
                  __asm { fldz }
                }
                else
                {
                  __asm
                  {
                    fld     dword ptr ds:0B3BB08h
                    fadd    [ebp+arg_0]
                  }
                }
                __asm { fstp    dword ptr ds:0B3BB08h }
                flt_B3BB08 = _ET1;
                _EAX = GameSetting_GetSafeFloatPointer((int *)&unk_B36B98);
                __asm
                {
                  fld     dword ptr ds:0B3BB08h
                  fld     dword ptr [eax]
                  fcompp
                  fnstsw  ax
                }
                if ( !__SETP__(BYTE1(_EAX) & 5, 0) )
                {
                  __asm
                  {
                    fldz
                    fst     dword ptr ds:0B3BB34h
                  }
                  flt_B3BB34 = _ET1;
                  if ( _EBX->isThirdPerson )
                  {
                    __asm { fstp    st }
                    v141 = sub_4A9720((Actor *)_EBX);
                  }
                  __asm { fstp    dword ptr ds:0B3BB2Ch }
                  *(float *)&qword_B3BB2C = _ET1;
                  byte_B14E4D = 1;
                  v126 = _EBX->isThirdPerson == 0;
                  byte_B3BB05 = 1;
                  VanityCamState = 1;
                  if ( v126 )
                    ToggleBody(_EBX, 0);
                }
              }
              __asm { fld     [ebp+arg_0] }
              __asm { fstp    [esp+0A4h+duration]; float }
              sub_671170((int *)_EBX, a7, a8, v141, durationu);
              v167 = (void *)dword_B3BB1C;
              if ( dword_B3BB1C )
              {
                if ( (unsigned int)dword_B3BCD8++ < 0x14 )
                {
                  __asm
                  {
                    fld     [esp+0A0h+var_58.z]
                    fadd    qword ptr ds:0A3F428h
                  }
                  v274 = v277.x;
                  a2a = v277.y;
                  __asm
                  {
                    fstp    [esp+0A0h+var_5C]
                    fld     [esp+0A0h+a2]
                  }
                  __asm { fld     qword ptr ds:0A4D910h }
                  __asm
                  {
                    fadd    st(1), st
                    fxch    st(1)
                    fstp    [esp+0A4h+a2]
                    fadd    [esp+0A4h+var_64]
                    fstp    [esp+0A4h+var_64]
                  }
                  sub_4D69A0(v167, &v274);
                  sub_4D9960((int *)dword_B3BB1C, &Vector3_InitValue_);
                }
              }
              if ( VanityCamState || _EBX->isThirdPerson || byte_B3BB05 || InterfaceManager_IsMenuMode() )
                v169 = sub_578CF0((char)&savedregs, a7, a8, v141, a6, 0);
              else
                v169 = sub_578CF0((char)&savedregs, a7, a8, v141, a6, 1);
              if ( !_EBX->vtbl->super.super.super.IsDead((TESObjectREFR *)_EBX, 0)
                && !_EBX->vtbl->super.super.IsDead((MobileObject *)_EBX) )
              {
                v170 = _EBX->vtbl;
                v169 = sub_673B00();
                __asm { fstp    [esp+0A4h+duration] }
                ((void (__thiscall *)(PlayerCharacter *, _DWORD))v170->super.Unk_DA)(_EBX, LODWORD(durationv));
              }
              _EAX = TESObjectREFR_GetAnimData((Actor *)_EBX);
              __asm { fld     dword ptr [eax+0BCh] }
              firstPersonAnimData = _EBX->firstPersonAnimData;
              __asm { fstp    dword ptr [ecx+0BCh] }
              firstPersonAnimData->unkBC = _ET1;
              __asm
              {
                fld     dword ptr [eax+0C0h]
                fstp    dword ptr [ecx+0C0h]
              }
              firstPersonAnimData->unkC0 = _ET1;
              __asm
              {
                fld     [ebp+arg_0]
                fstp    [esp+0A4h+duration]; a2
              }
              SetAimingZoom(_EBX, durationw);
              __asm { fld     [ebp+arg_0] }
              _EBX->isThirdPerson = _EBX->isThirdPerson == 0;
              __asm { fstp    [esp+0A4h+duration]; a2 }
              sub_603CA0((Actor *)_EBX, a7, a8, v169, durationx);
              __asm { fld     [ebp+arg_0] }
              __asm { fstp    [esp+0A4h+duration]; a2 }
              _EBX->isThirdPerson = _EBX->isThirdPerson == 0;
              sub_603CA0((Actor *)_EBX, a7, a8, v169, durationy);
              if ( !_EBX->isFlyCam )
                sub_66B710(_EBX, v169, a7, 0);
              if ( ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetKnockedState)(_EBX->super.super.super.process)
                || _EBX->vtbl->super.super.super.HasFatigue((TESObjectREFR *)_EBX) )
              {
                if ( _EBX->isThirdPerson )
                {
LABEL_433:
                  sub_4D5370();
                  if ( !dword_B3BCD4
                    || (TESObjectCELL *)dword_B3BCD4 != TESObjectREFR_GetParentCell((TESObjectREFR *)_EBX) )
                  {
                    dword_B3BCD4 = (int)TESObjectREFR_GetParentCell((TESObjectREFR *)_EBX);
                    v175 = TESObjectREFR_GetParentCell((TESObjectREFR *)_EBX);
                    if ( sub_43E000(ModelLoaderPtr, v175) )
                    {
                      LoadingAreaMessage((char)&savedregs, a6, a7, a8, v169, st0_0, a3, a5, a4);
                      sub_43DF10(ModelLoaderPtr);
                      sub_434020(ioManager, a7, a8, v169, 1);
                    }
                  }
                  return;
                }
                RestoreCamera(_EBX);
              }
              if ( !_EBX->isThirdPerson && _EBX->vtbl->super.super.super.IsDead((TESObjectREFR *)_EBX, 0) )
                TogglePOV(_EBX, 0);
              goto LABEL_433;
            }
            v146 = (TESObjectREFR *)sub_579540();
            if ( _EBX->vtbl->super.GetActorValue((Actor *)_EBX, kActorVal_Invisibility) > 0 )
              sub_6A24B0((int)&_EBX->super.super.magicTarget, (int)v146, 0x49564E49, 0);
            v235 = 0;
            if ( !v146 )
              goto LABEL_385;
            if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *))v146->vtbl->Unk_3A)(v146) )
            {
              v147 = OblivionDynamicCast(
                       v146,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                       &ArrowProjectile `RTTI Type Descriptor',
                       0);
              if ( v147 )
                v235 = v147[0x18] == 0;
            }
            if ( !v146->vtbl->IsActor(v146)
              || (v148 = v146[1].vtbl,
                  (*((int (__thiscall **)(TESObjectREFRVtbl *))v148->super.super.InitializeComponent + 0x11F))(v148) != 5)
              && (*((int (__thiscall **)(TESObjectREFRVtbl *))v148->super.super.InitializeComponent + 0x11F))(v148) != 6 )
            {
              if ( !v235 )
              {
LABEL_385:
                sub_5A4980(a7, a8, v141, 0, 0, 0);
                if ( v146 )
                {
                  if ( ActivateRef(v146, a7, a8, v141, (TESObjectREFR *)_EBX, 0, 0, 1) )
                    goto LABEL_396;
                  if ( _EBX->vtbl->super.GetMountedHorse((Actor *)_EBX) )
                  {
                    if ( GetTeleportExtraData(v146) || v146->vtbl->GetBaseForm(v146)->member.type == kFormType_Activator )
                    {
                      v149 = (TESObjectREFR *)_EBX->vtbl->super.GetMountedHorse((Actor *)_EBX);
                      ActivateRef(v149, a7, a8, v141, (TESObjectREFR *)_EBX, 0, 0, 1);
                    }
                  }
                }
                if ( _EBX->super.super.super.process->GetFurniture(_EBX->super.super.super.process) )
                {
                  v150 = _EBX->super.super.super.process;
                  GetMountedHorse = *(Creature *(__thiscall **)(Actor *))(*(_DWORD *)v150 + 0x378);
LABEL_395:
                  v152 = (TESObjectREFR *)((int (__fastcall *)(void *))GetMountedHorse)(v150);
                  ActivateRef(v152, a7, a8, v141, (TESObjectREFR *)_EBX, 0, 0, 1);
                  goto LABEL_396;
                }
                if ( _EBX->vtbl->super.GetMountedHorse((Actor *)_EBX) )
                {
                  GetMountedHorse = _EBX->vtbl->super.GetMountedHorse;
                  v150 = _EBX;
                  goto LABEL_395;
                }
              }
            }
LABEL_396:
            v230 = 1;
            goto LABEL_397;
          }
LABEL_306:
          sub_5C1F70((int)&savedregs, st0_0, a3, a4, a5, a6, a7, a8, v88);
          goto LABEL_309;
        }
        unk57CState = _EBX->unk57CState;
        if ( unk57CState == 2 || unk57CState == 3 )
        {
          __asm { fldz }
          dword_B3BAF4 = 0;
          __asm { fstp    dword ptr ds:0B3BAF8h }
          flt_B3BAF8 = _ET1;
          goto LABEL_271;
        }
        if ( ((unsigned __int8 (__thiscall *)(LowProcess *))_EBX->super.super.super.process->Unk_B6)(_EBX->super.super.super.process)
          && (!VanityCamState || byte_B3BB05) )
        {
          if ( Actor_ProcessControlAttack((Actor *)_EBX, a7, a8, v88) )
            v230 = 1;
        }
        else
        {
          __asm { fldz }
          dword_B3BAF4 = 0;
          __asm { fstp    dword ptr ds:0B3BAF8h }
          flt_B3BAF8 = _ET1;
        }
        if ( (InputGlobals::QueryControlState(v87, 6, 1) || InputGlobals::QueryControlState(v87, 6, 0))
          && ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetCurrentAction)(_EBX->super.super.super.process) != 6 )
        {
          if ( byte_B1501C && Actor_GetCurrentAction(_EBX) == 5 )
          {
            LOBYTE(byte_B3BAEA.vtbl) = 1;
            __asm { fld     dword ptr [ebx+598h] }
            __asm { fstp    qword ptr [esp+0A0h+var_78] }
            byte_B1501C = 0;
            _EAX = GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV);
            __asm
            {
              fld     dword ptr [eax]
              fcomp   qword ptr [esp+0A0h+var_78]
              fnstsw  ax
            }
            if ( (BYTE1(_EAX) & 0x41) != 0 )
            {
              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B370B0);
              __asm
              {
                fld     dword ptr ds:0B3BAFCh
                fld     dword ptr [eax]
                fcompp
                fnstsw  ax
              }
              if ( !__SETP__(BYTE1(_EAX) & 5, 0) )
              {
                _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B370B0);
                __asm
                {
                  fld     dword ptr [eax]
                  fstp    dword ptr ds:0B3BAFCh
                }
                flt_B3BAFC.vtbl = _ET1;
              }
            }
            else
            {
              _EAX = GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV);
              __asm { fld     dword ptr [eax] }
              __asm { fstp    qword ptr [esp+0A0h+var_78] }
              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B370A0);
              __asm
              {
                fld     dword ptr [eax]
                fsubr   qword ptr [esp+0A0h+var_78]
              }
              __asm
              {
                fstp    [esp+0A0h+var_78]
                fld     [esp+0A0h+var_78]
                fabs
                fstp    [esp+0A0h+var_78]
                fld     [esp+0A0h+var_78]
                fstp    [esp+0A0h+var_78]
              }
              _EAX = GameSetting_GetSafeFloatPointer((int *)&g_DefaulFOV);
              __asm { fld     dword ptr [eax] }
              __asm
              {
                fsub    dword ptr [ebx+598h]
                fdiv    [esp+0A0h+var_78]
                fstp    qword ptr [esp+0A0h+var_78]
              }
              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B370A8);
              __asm
              {
                fld     dword ptr [eax]
                fmul    qword ptr [esp+0A0h+var_78]
              }
              __asm { fstp    qword ptr [esp+0A0h+var_78] }
              _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B370B0);
              __asm
              {
                fld     dword ptr [eax]
                fadd    qword ptr [esp+0A0h+var_78]
                fstp    dword ptr ds:0B3BAFCh
              }
              flt_B3BAFC.vtbl = _ET1;
            }
            goto LABEL_255;
          }
          v126 = LOBYTE(byte_B3BAEA.vtbl) == 0;
          byte_B1501C = 1;
          if ( !v126 || VanityCamState && !byte_B3BB05 )
            goto LABEL_255;
          sub_5F4AE0((Actor *)_EBX, a7, a8, v88, 1);
        }
        else
        {
          if ( !InputGlobals::QueryControlState(v87, 6, 2) && InputGlobals::QueryControlState(v87, 6, 0) )
            goto LABEL_255;
          LOBYTE(byte_B3BAEA.vtbl) = 0;
          if ( ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetCurrentAction)(_EBX->super.super.super.process) != 6 )
            goto LABEL_255;
          sub_5F4AE0((Actor *)_EBX, a7, a8, v88, 0);
        }
        v230 = 1;
LABEL_255:
        if ( Player_GetCurrentMagicItem(_EBX) )
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))_EBX->super.super.super.process->Unk_B6)(_EBX->super.super.super.process) )
          {
            if ( !InputGlobals::QueryControlState(v87, 7, 1) && !InputGlobals::QueryControlState(v87, 7, 0)
              || Actor_GetCurrentAction(_EBX) == 2
              || Actor_GetCurrentAction(_EBX) == 4
              || Actor_GetCurrentAction(_EBX) == 5
              || Actor_GetCurrentAction(_EBX) == 3 )
            {
              byte_B3BCE4 = 0;
            }
            else
            {
              book = _EBX->book;
              if ( book )
              {
                ((void (__thiscall *)(PlayerCharacter *, TESObjectBOOK *, _DWORD))_EBX->vtbl->super.Unk_B4)(
                  _EBX,
                  book,
                  0);
                v94 = (MobileObject *)v278;
                v230 = 1;
              }
              else
              {
                if ( !byte_B3BCE4 )
                {
                  v119 = _EBX->super.super.magicCaster.vtbl;
                  CurrentMagicItem = Player_GetCurrentMagicItem(_EBX);
                  v243 = v119->IsMagicItemUsable(&_EBX->super.super.magicCaster, (MagicItem *)CurrentMagicItem, 0, 0, 0);
                  v121 = Player_GetCurrentMagicItem(_EBX);
                  MagicCaster_CastMagicItem(&_EBX->super.super.magicCaster.vtbl, v121, 0, 0);
                  v87 = v245;
                  if ( !v243 )
                    byte_B3BCE4 = 1;
                }
                v94 = (MobileObject *)v278;
                v230 = 1;
              }
            }
          }
        }
LABEL_271:
        if ( v94 )
          goto LABEL_306;
        if ( !InputGlobals::QueryControlState(v87, 0xD, 1) )
          goto LABEL_306;
        if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *))_EBX->vtbl->super.Unk_97)(_EBX) )
          goto LABEL_306;
        v123 = _EBX->vtbl->super.super.super.GetAnimData((TESObjectREFR *)_EBX);
        AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v123, 3);
        if ( sub_51ACC0(AnimGroupFromField8Value)
          || Actor_GetCurrentAction(_EBX) == 9
          || sub_5E5640(_EBX) && Actor_GetSkillMasteryLevel((int *)_EBX, (int)_EBX, (int)v87, 0x1A) <= 0 )
        {
          goto LABEL_306;
        }
        if ( sub_5EC180((MobileObject *)_EBX) || (v244 = 1, Actor_IsSwimming(_EBX)) )
          v244 = 0;
        v231 = 0;
        v281 = InputGlobals::QueryControlState(v87, 6, 0) != 0;
        IsBlocking = Actor_IsBlocking(_EBX);
        if ( v281 )
        {
          if ( !sub_579540() && Actor_GetSkillMasteryLevel((int *)_EBX, (int)_EBX, (int)v87, 0x1A) >= 2 )
          {
            v125 = MobileObject_GetCharProxy((MobileObject *)_EBX);
            if ( sub_88D370((_DWORD *)v125 + 0x78) )
              goto LABEL_292;
            v126 = sub_5F5050((Actor *)_EBX, v232) == 0xFF;
            goto LABEL_291;
          }
          if ( IsBlocking || (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)_EBX) + 0x7D) & 0x400) == 0 )
          {
LABEL_292:
            sub_66A670((TESObjectREFR *)_EBX);
            if ( v244 )
            {
              if ( !v231 )
              {
LABEL_303:
                v230 = 1;
                goto LABEL_306;
              }
              if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)_EBX) + 0x7D) & 0x400) != 0 )
              {
                __asm { fldz }
                __asm { fstp    [esp+0A4h+duration] }
                ((void (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))_EBX->vtbl->super.ModExperience)(
                  _EBX,
                  0x1A,
                  0,
                  LODWORD(durationm));
              }
            }
            if ( v231 )
            {
              v261 = _EBX->vtbl->super.GetActorValue((Actor *)_EBX, kActorVal_Encumbrance);
              __asm { fild    [esp+0A0h+var_78] }
              __asm { fstp    qword ptr [esp+0A0h+var_78] }
              Actor_GetBaseEncumberance((int)_EBX, v88);
              __asm { fdivr   qword ptr [esp+0A0h+var_78] }
              __asm
              {
                fstp    [esp+0A4h+var_78]
                fld     [esp+0A4h+var_78]
                fstp    [esp+0A4h+duration]; float
              }
              v88 = Calc_FatigueJumpMultiplier_(durationn);
              __asm { fstp    [esp+0A4h+var_84] }
              if ( Actor_GetSkillMasteryLevel((int *)_EBX, (int)_EBX, (int)v87, 0x1A) >= 3 )
              {
                _EAX = GameSetting_GetSafeFloatPointer((int *)&fPerkJumpFatigueExpertMult);
                __asm
                {
                  fld     [esp+0A0h+var_84]
                  fmul    dword ptr [eax]
                  fstp    [esp+0A0h+var_84]
                }
              }
              if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)_EBX) + 0x7D) & 0x400) != 0 )
              {
                __asm
                {
                  fldz
                  fld     [esp+0A0h+var_84]
                  fcom    st(1)
                  fnstsw  ax
                  fstp    st(1)
                }
                if ( (_AX & 0x4100) == 0 )
                {
                  __asm { fchs }
                  __asm { fstp    [esp+0A4h+duration]; float }
                  Actor_ModFatigue_(_EBX, durationo);
                  v230 = 1;
                  sub_5C1F70((int)&savedregs, st0_0, a3, a4, a5, a6, a7, a8, v88);
                  goto LABEL_309;
                }
                __asm { fstp    st }
              }
            }
            goto LABEL_303;
          }
        }
        else if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)_EBX) + 0x7D) & 0x400) == 0 )
        {
          goto LABEL_292;
        }
        v126 = ((int (__thiscall *)(PlayerCharacter *))_EBX->vtbl->super.super.Jump)(_EBX) == 0;
LABEL_291:
        v231 = !v126;
        goto LABEL_292;
      }
    }
    else if ( InputGlobals::QueryControlState(v245, 0xA, 1) || InputGlobals::QueryControlState(v245, 0xA, 0) )
    {
      v232 |= 0x200u;
      v87 = v245;
      goto LABEL_179;
    }
    v87 = v245;
    goto LABEL_179;
  }
  __asm
  {
    fld     dword ptr ds:0A31C80h
    fld     dword ptr ds:0B3BAE0h
    fcom    st(1)
    fnstsw  ax
    fstp    st(1)
  }
  if ( (_AX & 0x4100) == 0 )
  {
    __asm { fstp    st }
    if ( _EBX->isWakeUpPackage
      && ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetSitSleepState)(_EBX->super.super.super.process) == 4 )
    {
      v126 = _EBX->isTravelPackage == 0;
      Unk_6F = _EBX->vtbl->super.super.Unk_6F;
      _EBX->isWakeUpPackage = 0;
      if ( v126 )
        ((void (__stdcall *)(int))Unk_6F)(1);
      else
        ((void (__stdcall *)(_DWORD))Unk_6F)(0);
      _EBX->super.super.super.process->SetCurrentPackage(_EBX->super.super.super.process, 0);
      __asm
      {
        fldz
        fstp    dword ptr ds:0B3BAE0h
      }
      flt_B3BAE0 = _ET1;
    }
    else
    {
      if ( _EBX->vtbl->super.super.super.IsDead((TESObjectREFR *)_EBX, 0)
        || !((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetSitSleepState)(_EBX->super.super.super.process) )
      {
        sub_5EAE70((Actor *)_EBX, (int)_EBX, v38, duration_4);
        v126 = _EBX->isWakeUpPackage == 0;
        v179 = _EBX->vtbl->super.super.Unk_6F;
        _EBX->isTravelPackage = 0;
        if ( v126 )
          ((void (__stdcall *)(int))v179)(1);
        else
          ((void (__stdcall *)(_DWORD))v179)(0);
        _EBX->super.super.super.process->SetSleepState(_EBX->super.super.super.process, (Actor *)_EBX, 0, 0, 0x7F);
      }
      __asm
      {
        fldz
        fstp    dword ptr ds:0B3BAE0h
      }
      flt_B3BAE0 = _ET1;
    }
    return;
  }
  if ( _EBX->isTravelPackage )
  {
    v181 = _EBX->super.super.super.process;
    __asm { fadd    dword ptr ds:0B33E9Ch }
    GetSitSleepState = v181->GetSitSleepState;
    __asm { fstp    dword ptr ds:0B3BAE0h }
    flt_B3BAE0 = _ET1;
    if ( ((int (__thiscall *)(LowProcess *))GetSitSleepState)(v181) == 4
      || ((int (__thiscall *)(LowProcess *))_EBX->super.super.super.process->GetSitSleepState)(_EBX->super.super.super.process) == 9
      || !_EBX->super.super.super.process->GetCurrentPackage(_EBX->super.super.super.process) )
    {
      v126 = _EBX->isWakeUpPackage == 0;
      v184 = _EBX->vtbl->super.super.Unk_6F;
      _EBX->isTravelPackage = 0;
      if ( v126 )
        ((void (__stdcall *)(int))v184)(1);
      else
        ((void (__stdcall *)(_DWORD))v184)(0);
      _EBX->super.super.super.process->SetCurrentPackage(_EBX->super.super.super.process, 0);
      __asm
      {
        fldz
        fstp    dword ptr ds:0B3BAE0h
      }
      flt_B3BAE0 = _ET1;
      return;
    }
  }
  else if ( _EBX->isWakeUpPackage )
  {
    v186 = _EBX->super.super.super.process;
    __asm { fadd    dword ptr ds:0B33E9Ch }
    v187 = v186->GetSitSleepState;
    __asm { fstp    dword ptr ds:0B3BAE0h }
    flt_B3BAE0 = _ET1;
    if ( !((int (__thiscall *)(LowProcess *))v187)(v186) )
    {
      v126 = _EBX->isTravelPackage == 0;
      _EBX->isWakeUpPackage = 0;
      v189 = _EBX->vtbl->super.super.Unk_6F;
      if ( v126 )
        ((void (__stdcall *)(int))v189)(1);
      else
        ((void (__stdcall *)(_DWORD))v189)(0);
      _EBX->super.super.super.process->SetCurrentPackage(_EBX->super.super.super.process, 0);
      __asm
      {
        fldz
        fstp    dword ptr ds:0B3BAE0h
      }
      flt_B3BAE0 = _ET1;
    }
  }
  else
  {
    __asm { fstp    st }
  }
  __asm { fld     [ebp+arg_0] }
  __asm { fstp    [esp+0A4h+duration]; float }
  sub_605770((Actor *)_EBX, durationz);
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD, _DWORD, _DWORD))_EBX->super.super.super.process->Unk_B2)(
    _EBX->super.super.super.process,
    _EBX,
    LODWORD(Vector3_InitValue_),
    *((_DWORD *)&Vector3_InitValue_ + 1),
    LODWORD(dword_B3F9B0));
  __asm
  {
    fldz
    fcomp   dword ptr ds:0B36C90h
  }
  __asm { fnstsw  ax }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
  {
    if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)_EBX) == (struct Concurrency::details::ScheduleGroupBase *)2
      && !byte_B3BB07 )
    {
      _EBX->vtbl->super.super.Unk_72((MobileObject *)_EBX);
      if ( SaveLoad_CurrentSavegame[5].unk030[0] )
        ShowUIMessageBox(
          (char *)dword_B38C08,
          (char)&savedregs,
          a7,
          a8,
          v52,
          (const char *)dword_B38C08,
          (int)sub_663270,
          1,
          (const char *)dword_B38C10,
          dword_B38C18);
      else
        OSGlobals->exitToMainMenu = 1;
      byte_B3BB07 = 1;
    }
  }
  else if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)_EBX) == (struct Concurrency::details::ScheduleGroupBase *)2
         || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)_EBX) == (struct Concurrency::details::ScheduleGroupBase *)1 )
  {
    __asm { fldz }
    v193 = Seed;
    __asm
    {
      fcomp   dword ptr ds:0B15018h
      fnstsw  ax
    }
    if ( (_AX & 0x4100) == 0 )
    {
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B36C90);
      v265 = v193;
      __asm { fild    [esp+0A0h+var_78] }
      if ( v193 < 0 )
        __asm { fadd    dword ptr ds:0A2FC78h }
      __asm
      {
        fdiv    qword ptr ds:0A2FC70h
        fadd    dword ptr [eax]
        fstp    dword ptr ds:0B15018h
      }
      flt_B15018 = _ET1;
    }
    v266 = v193;
    __asm { fild    [esp+0A0h+var_78] }
    if ( v193 < 0 )
      __asm { fadd    dword ptr ds:0A2FC78h }
    __asm
    {
      fdiv    qword ptr ds:0A2FC70h
      fld     dword ptr ds:0B15018h
      fcompp
      fnstsw  ax
    }
    if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm { fld     dword ptr ds:0A30634h }
      v126 = SaveLoad_CurrentSavegame[5].unk030[0] == 0;
      __asm { fstp    dword ptr ds:0B15018h }
      flt_B15018 = _ET1;
      if ( v126 )
      {
        OSGlobals->exitToMainMenu = 1;
      }
      else
      {
        sub_5BDA90((char)&savedregs, a7, a8, v52);
        sub_5AEA60(st0_0, a3, a4, a5, a6, a7, a8, v52, 0);
      }
    }
  }
  else
  {
    __asm
    {
      fld     dword ptr ds:0A30634h
      fstp    dword ptr ds:0B15018h
    }
    flt_B15018 = _ET1;
  }
  sub_66B710(_EBX, v52, a7, 0);
  if ( InputGlobals::QueryControlState(v245, 0x1B, 1) )
  {
    if ( sub_466B00((char *)SaveLoad_CurrentSavegame, (char)&savedregs, st0_0, a3, a4, a5, a6, a7, a8) )
    {
      __asm
      {
        fld     dword ptr ds:0A30634h
        fstp    dword ptr ds:0B15018h
      }
      flt_B15018 = _ET1;
    }
  }
}
