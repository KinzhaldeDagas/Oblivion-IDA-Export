void __usercall TESObjectREFR_Move_(
        double a1@<st7>,
        double st3_0@<st4>,
        double a3@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        double a7@<st6>,
        double a8@<st5>,
        PlayerCharacter *a9,
        float a10,
        float a11,
        float a12)
{
  TESObjectCELL *DwordAtOffset40; // edi
  TESWorldSpace *WorldSpace; // eax
  float y; // ecx
  float z; // edx
  TESWorldSpace *v16; // ebx
  TESObjectREFRVtbl *p_super; // eax
  float *v18; // eax
  bool v19; // zf
  float v20; // ecx
  float v21; // edx
  float v22; // eax
  double v23; // st7
  int v24; // esi
  int v25; // ebx
  int GlobalScriptStateObj; // eax
  InterfaceManager *Singleton; // eax
  double v28; // st7
  bhkCharacterProxy *CharProxy; // eax
  TESObjectREFR *v30; // eax
  TESObjectREFR *v31; // esi
  TESObjectREFRVtbl *vtbl; // ecx
  double v33; // st7
  double v34; // st7
  float v35; // [esp+0h] [ebp-3Ch]
  NiPoint3 a2; // [esp+1Ch] [ebp-20h] BYREF
  float v37; // [esp+28h] [ebp-14h]
  float x; // [esp+2Ch] [ebp-10h]
  float radians; // [esp+30h] [ebp-Ch]
  int v40; // [esp+34h] [ebp-8h]
  TESWorldSpace *retaddr; // [esp+3Ch] [ebp+0h]

  if ( (a9 != reference || !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0)) && a9 ) /*0x51256b*/
  {
    if ( ((unsigned __int8 (__usercall *)@<al>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))a9->vtbl->super.super.super.IsActor)( /*0x512588*/
           a9,
           a6,
           a5,
           a4,
           a3,
           st3_0,
           a8,
           a7,
           a1) )
    {
      sub_675D50((ActorProcessManager *)&qword_B3BB2C[0x75], a9, 0); /*0x512596*/
    }
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a9); /*0x5125a4*/
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a9); /*0x5125a6*/
    y = a9->super.super.super.super.rot.y; /*0x5125ab*/
    z = a9->super.super.super.super.rot.z; /*0x5125ae*/
    v16 = WorldSpace; /*0x5125b1*/
    x = a9->super.super.super.super.rot.x; /*0x5125b6*/
    p_super = &a9->vtbl->super.super.super; /*0x5125ba*/
    radians = y; /*0x5125bc*/
    v40 = LODWORD(z); /*0x5125c0*/
    retaddr = v16; /*0x5125cc*/
    v18 = p_super->GetPos((TESObjectREFR *)a9); /*0x5125d0*/
    v19 = a9 == reference; /*0x5125d2*/
    v20 = *v18; /*0x5125d8*/
    v21 = v18[1]; /*0x5125da*/
    v22 = v18[2]; /*0x5125dd*/
    a2.y = v20 + a10; /*0x5125f4*/
    a2.z = v21 + a11; /*0x512600*/
    v23 = v22 + a12; /*0x512608*/
    v37 = v23; /*0x51260c*/
    if ( v19 ) /*0x512610*/
    {
      if ( unk_B35B90 ) /*0x512616*/
        sub_4BE5A0((_DWORD *)unk_B35B90); /*0x512620*/
      if ( g_DistantLODLoaderTasksByCell ) /*0x512625*/
        sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x51262f*/
      if ( DwordAtOffset40 ) /*0x512636*/
        goto LABEL_17; /*0x512636*/
      if ( v16 ) /*0x51263a*/
      {
        v24 = (int)a2.y >> 0xC; /*0x51264c*/
        v23 = a2.z; /*0x51264f*/
        LODWORD(a2.x) = (int)a2.z; /*0x512653*/
        v25 = SLODWORD(a2.x) >> 0xC; /*0x51265f*/
        DwordAtOffset40 = TESWorldSpace::GetCellAtCellCoord(retaddr, v24, SLODWORD(a2.x) >> 0xC); /*0x512669*/
        if ( !DwordAtOffset40 ) /*0x51266d*/
        {
          DwordAtOffset40 = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord(retaddr, a4, a5, v23, v24, v25); /*0x51267a*/
          if ( !DwordAtOffset40 ) /*0x51267e*/
            DwordAtOffset40 = (TESObjectCELL *)sub_4471D0(0, v24, v25, retaddr); /*0x512693*/
        }
        reference->unk117 = 1; /*0x51269d*/
        if ( DwordAtOffset40 ) /*0x5126a4*/
        {
LABEL_17:
          GlobalScriptStateObj = GetGlobalScriptStateObj__(1); /*0x5126ac*/
          if ( *(char *)(GlobalScriptStateObj + 0x31) > 0 ) /*0x5126b8*/
          {
            sub_5859C0((int *)GlobalScriptStateObj, (char)a9, a4, a5, v23); /*0x5126bc*/
            Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5126c9*/
            sub_57CFE0((int)Singleton, a4, a5, v23, 3, 0); /*0x5126d3*/
          }
          x = 0.0; /*0x5126dd*/
          radians = 0.0; /*0x5126e5*/
          PlayerCharacter_ChangeCellAndPosition( /*0x51271d*/
            (TESObjectREFR *)reference,
            0.0,
            a3,
            a4,
            a5,
            a1,
            st3_0,
            a7,
            a8,
            (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(a2.y),
            (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(a2.z),
            (void *(__thiscall *)(NiAVObject *))LODWORD(v37),
            COERCE_INT(0.0),
            COERCE_INT(0.0),
            v40,
            DwordAtOffset40,
            1);
          v28 = ((double (__thiscall *)(PlayerCharacter *, _DWORD))a9->vtbl->super.super.super.Unk_5E)(a9, 0); /*0x51272f*/
          reference->unk117 = 1; /*0x512736*/
          sub_665260((TESObjectREFR *)reference, v28, a9); /*0x512744*/
          return; /*0x512750*/
        }
      }
LABEL_33:
      sub_665260((TESObjectREFR *)reference, v23, a9); /*0x512853*/
      return; /*0x51285a*/
    }
    TESObjectREFR_SetPosition((TESObjectREFR *)a9, a2.y, a2.z, v37); /*0x51276c*/
    ((void (__thiscall *)(PlayerCharacter *, _DWORD))a9->vtbl->super.super.super.Unk_5E)(a9, 0); /*0x51277e*/
    if ( a9->vtbl->super.super.super.IsMobileObject((TESObjectREFR *)a9) ) /*0x51278b*/
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a9); /*0x512793*/
      if ( CharProxy ) /*0x51279a*/
        sub_452A10(CharProxy, &a2); /*0x5127a3*/
    }
    if ( DwordAtOffset40 && TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x5127b5*/
    {
      TESObjectREFR_SetRotationZ((TESObjectREFR *)a9, radians); /*0x5127c8*/
      v23 = 0.0; /*0x5127cd*/
    }
    else
    {
      if ( a9 == reference ) /*0x5127d7*/
        goto LABEL_29; /*0x5127d7*/
      v23 = flt_A32048; /*0x5127d9*/
    }
    v35 = v23; /*0x5127e2*/
    TESObjectREFR_SetRotationX((TESObjectREFR *)a9, v35); /*0x5127e5*/
LABEL_29:
    sub_4DD4B0((int)v16, a4, a5, v23, (Actor *)a9, DwordAtOffset40, (TESObjectCELL **)v16); /*0x5127ea*/
    v30 = (TESObjectREFR *)OblivionDynamicCast( /*0x512801*/
                             a9,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    v31 = v30; /*0x512806*/
    if ( v30 ) /*0x51280d*/
    {
      vtbl = v30[1].vtbl; /*0x51280f*/
      if ( vtbl ) /*0x512814*/
      {
        v33 = ((double (__thiscall *)(TESObjectREFRVtbl *))*((_DWORD *)vtbl->super.super.InitializeComponent + 8))(vtbl); /*0x51281b*/
        EvaluatePackage(v31, (int)v16, (int)a9, (int)DwordAtOffset40, v33, a4, a5); /*0x51281f*/
        v34 = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *))*((_DWORD *)v31[1].vtbl->super.super.InitializeComponent /*0x512830*/
                                                                            + 0x2E))(
                v31[1].vtbl,
                v31);
        sub_665260((TESObjectREFR *)reference, v34, a9); /*0x512839*/
        return; /*0x512845*/
      }
      PrintError("Actor being moved is Disabled he has no process"); /*0x51284b*/
    }
    goto LABEL_33; /*0x51284b*/
  }
}
