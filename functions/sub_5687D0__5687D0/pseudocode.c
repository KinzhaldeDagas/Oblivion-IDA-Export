char __userpurge sub_5687D0@<al>(TESPackage *a1@<ecx>, int a2@<ebx>, double a3@<st0>, TESObjectREFR *a4)
{
  TESObjectREFR *v4; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v6; // ebp
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // ebx
  double v9; // st7
  int v10; // ebp
  TESObjectREFRVtbl *v12; // ecx
  float *v13; // eax
  bool v15; // al
  TESObjectREFRVtbl *vtbl; // edx
  TESForm *v18; // eax
  double v19; // st7
  bool v21; // bl
  int v22; // eax
  TESObjectREFRVtbl *v23; // ecx
  __int128 v26; // [esp+0h] [ebp-180h]
  float v27; // [esp+4h] [ebp-17Ch]
  char v29; // [esp+1Fh] [ebp-161h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-160h]
  int v31; // [esp+20h] [ebp-160h]
  TESPackage *v32; // [esp+24h] [ebp-15Ch]
  NiPoint3 v33; // [esp+28h] [ebp-158h] BYREF
  float v34[3]; // [esp+34h] [ebp-14Ch] BYREF
  float v35; // [esp+40h] [ebp-140h]
  float v36[3]; // [esp+44h] [ebp-13Ch] BYREF
  CHAR OutputString[300]; // [esp+50h] [ebp-130h] BYREF

  v32 = a1; /*0x5687ee*/
  if ( !a4 || !sub_5EAE10(a4) ) /*0x5687fa*/
    return 0; /*0x568b96*/
  v4 = (TESObjectREFR *)sub_5EAE10(a4); /*0x568814*/
  v33 = *(NiPoint3 *)v4->vtbl->GetPos(v4); /*0x568824*/
  if ( TESObjectREFR_GetTeleportData(v4) ) /*0x568838*/
    v33 = *TESObjectREFR_GetLinkedTeleportMarkerPosition(v4); /*0x56884a*/
  WorldSpace = TESObjectREFR_GetWorldSpace(v4); /*0x568866*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v4); /*0x56886a*/
  v6 = DwordAtOffset40; /*0x56886f*/
  if ( DwordAtOffset40 ) /*0x568873*/
  {
    if ( !TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x568877*/
      v6 = 0; /*0x568880*/
  }
  v35 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace(a4)); /*0x56888c*/
  v7 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x568890*/
  v8 = v7; /*0x568895*/
  if ( v7 && TESObjectCELL_IsInterior(v7) ) /*0x56889d*/
  {
    if ( v8 == v6 ) /*0x568963*/
      goto LABEL_12; /*0x568963*/
    return 0; /*0x568983*/
  }
  if ( v6 || (TESWorldSpace *)LODWORD(v35) != WorldSpace ) /*0x5688ba*/
    return 0; /*0x5688ba*/
LABEL_12:
  v9 = sub_5677B0(v32, a3, a4, 2); /*0x5688c0*/
  v10 = Double_To_SInt32(v9); /*0x5688d3*/
  v31 = v10; /*0x5688dd*/
  v29 = 0; /*0x5688e1*/
  _EAX = ((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl->GetPos)(a4, a2); /*0x5688e6*/
  __asm /*0x5688e8*/
  {
    fld     [esp+170h+var_154]
    fsub    dword ptr [eax]
  }
  __asm
  {
    fstp    [esp+170h+var_148]
    fld     [esp+170h+var_150]
    fsub    dword ptr [eax+4]
    fstp    [esp+170h+var_144]
    fld     [esp+170h+var_14C]
    fsub    dword ptr [eax+8]
    fstp    [esp+170h+var_140]
  }
  if ( sub_4D74B0(v4) /*0x568922*/
    && (v12 = a4[1].vtbl) != 0
    && (*((int (__thiscall **)(TESObjectREFRVtbl *))v12->super.super.InitializeComponent + 0xE0))(v12) )
  {
    if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a4[1].vtbl->super.super.InitializeComponent + 2))(a4[1].vtbl) ) /*0x568930*/
    {
      v13 = (float *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a4[1].vtbl->super.super.InitializeComponent + 0xE0))(a4[1].vtbl); /*0x568941*/
      v33.y = *v13; /*0x568945*/
      v33.z = v13[1]; /*0x56894c*/
      v34[0] = v13[2]; /*0x568953*/
    }
    v10 = 0xA; /*0x568957*/
  }
  else
  {
    v15 = v4->vtbl->IsActor(v4); /*0x568990*/
    vtbl = v4->vtbl; /*0x568994*/
    if ( v15 ) /*0x568998*/
    {
      if ( vtbl->GetSleepState(v4) == kSitSleep_Sleeping ) /*0x5689a5*/
      {
        v10 = 0x5A; /*0x5689a7*/
      }
      else
      {
        if ( a4->vtbl->GetSleepState(a4) != kSitSleep_Sitting ) /*0x5689c0*/
        {
          __asm /*0x5689c9*/
          {
            fild    [esp+170h+var_15C]
            fcomp   dword ptr ds:0A2FAA8h
            fnstsw  ax
          }
          if ( !__SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x5689d8*/
          {
            v18 = v4->vtbl->GetBaseForm(v4); /*0x5689e4*/
            v19 = sub_46D5C0(v18); /*0x5689e7*/
            LODWORD(v33.x) = Double_To_SInt32(v19); /*0x5689f4*/
            __asm /*0x5689f8*/
            {
              fild    [esp+170h+var_158]
              fadd    qword ptr ds:0A46E48h
            }
            v10 = Double_To_SInt32(v19); /*0x568a07*/
          }
          goto LABEL_31; /*0x568a09*/
        }
        v10 = 0xC8; /*0x5689c2*/
      }
    }
    else
    {
      if ( vtbl->GetBaseForm(v4) != (TESForm *)MEMORY[0xB35EB0] && v4->vtbl->GetBaseForm(v4) != MEMORY[0xB35EAC] ) /*0x568a2d*/
        goto LABEL_31; /*0x568a2d*/
      v10 = 0x14; /*0x568a2f*/
    }
  }
  BYTE2(v31) = 1; /*0x568a34*/
LABEL_31:
  __asm /*0x568a3d*/
  {
    fld     [esp+170h+var_140]
    fabs
    fstp    [esp+170h+var_158]
    fld     [esp+170h+var_158]
    fld     dword ptr ds:0B3A470h
    fcompp
    fnstsw  ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x568a58*/
  {
    __asm /*0x568a5a*/
    {
      fldz
      fstp    [esp+170h+var_140]
    }
  }
  v21 = 0; /*0x568a6c*/
  if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].GetSleepState)(a4, 1) ) /*0x568a6e*/
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].IsMobileObject)(a4) ) /*0x568a7e*/
    {
      v22 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl[1].IsMobileObject)(a4); /*0x568a8e*/
      v21 = sub_6163A0(v22); /*0x568a97*/
    }
  }
  __asm { fild    [esp+174h+var_160] } /*0x568a9e*/
  __asm { fstp    [esp+17Ch+var_180+4]; float }
  if ( sub_684B30(a4, &v33.x, v27, 1) && !v21 ) /*0x568abe*/
    goto LABEL_44; /*0x568abe*/
  if ( sub_4D74B0(v4) ) /*0x568ac6*/
  {
    v23 = a4[1].vtbl; /*0x568acf*/
    if ( v23 ) /*0x568ad4*/
    {
      if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v23->super.super.InitializeComponent + 0xE0))(v23) ) /*0x568ade*/
      {
        _EAX = a4->vtbl->GetPos(a4); /*0x568aee*/
        __asm /*0x568af0*/
        {
          fld     [esp+174h+var_158]
          fsub    dword ptr [eax]
        }
        __asm
        {
          fstp    [esp+174h+var_13C]
          fld     [esp+174h+var_154]
          fsub    dword ptr [eax+4]
          fstp    [esp+174h+var_138]
          fld     [esp+174h+var_150]
          fsub    dword ptr [eax+8]
          fstp    [esp+174h+var_134]
        }
        NiPoint3_Length(v36); /*0x568b14*/
        __asm /*0x568b19*/
        {
          fcomp   qword ptr ds:0A309F0h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 5, 0) && a4->vtbl->GetSleepState(a4) == kSitSleep_Sitting ) /*0x568b35*/
          goto LABEL_44; /*0x568b35*/
        if ( a4->vtbl->GetSleepState(a4) == kSitSleep_Sleeping ) /*0x568b46*/
LABEL_44:
          v29 = 1; /*0x568b48*/
      }
    }
  }
  if ( sub_579440() == a4 ) /*0x568b54*/
  {
    NiPoint3_Length(v34); /*0x568b5a*/
    __asm { fstp    qword ptr [esp+17Ch+var_180+4] } /*0x568b62*/
    LODWORD(v26) = v10; /*0x568b65*/
    _sprintf((int)v4, (int)a4, OutputString, "radius %.02f distance %.02f", *(double *)&v26, *((double *)&v26 + 1)); /*0x568b70*/
    OutputDebugStringA(OutputString); /*0x568b7d*/
  }
  return v29; /*0x56896e*/
}
