void __userpurge sub_66F420(
        int *a1@<ecx>,
        int a2@<ebp>,
        double a3@<st7>,
        double a4@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        double st2_0@<st5>,
        double a10@<st6>,
        TESObjectREFR *a11)
{
  int (__thiscall *v12)(int); // eax
  int (__thiscall *v13)(int); // eax
  int v14; // eax
  PlayerCharacter *v15; // ecx
  int v16; // edx
  TESForm *baseForm; // edi
  int (__thiscall *v18)(int); // eax
  TESObjectREFR *v19; // eax
  int v20; // eax
  char v21; // al
  TESObjectREFR *v22; // ecx
  int v23; // ecx
  BSExtraDataVtbl *AnimData; // edi
  unsigned __int8 AnimGroupFromField8Value; // al
  AnimSequenceSingle *v26; // edi
  unsigned __int8 v27; // al
  Actor *v28; // eax
  MobileObject *v29; // eax
  PlayerCharacter *v30; // ecx
  float *v31; // eax
  PlayerCharacter *v32; // ecx
  int v33; // eax
  PlayerCharacter *v34; // ecx
  int v35; // eax
  double v36; // st7
  float *v38; // eax
  char v39; // al
  TESForm *v40; // eax
  TESObjectREFR *v41; // ecx
  TESForm *v42; // ebp
  double v43; // st7
  TESChildCELL *v44; // eax
  double v45; // st7
  TESObjectREFRVtbl *v46; // ecx
  double v47; // st7
  double v48; // st7
  double v49; // st7
  TESObjectREFRVtbl *v50; // ecx
  PlayerCharacter *v51; // ecx
  double v52; // st7
  TESObjectREFRVtbl *v53; // ecx
  PlayerCharacter *v54; // ecx
  double v55; // st7
  TESObjectCELL **v56; // ecx
  bool v57; // zf
  int v58; // eax
  int v59; // ebp
  int v60; // eax
  TESObjectCELL *v61; // ebp
  TESWorldSpace *WorldSpace; // ebx
  float *v63; // eax
  Sky *GlobalObject; // eax
  float *v65; // ebp
  TESWorldSpace *v66; // eax
  Sky *v67; // eax
  TESObjectREFR **v68; // eax
  int v69; // ecx
  void (__thiscall **v70)(LowProcess *, _DWORD, int); // eax
  void (__thiscall **p_Unk_53)(LowProcess *, _DWORD, int); // edi
  void (__thiscall **v72)(LowProcess *, _DWORD, int); // eax
  LowProcess *process; // ebp
  int v74; // eax
  int v75; // eax
  TESObjectCELL **v76; // ecx
  int v77; // eax
  int v78; // edi
  int v79; // eax
  float i; // edi
  unsigned int v81; // edi
  TESObjectREFR *v82; // [esp+8h] [ebp-68h]
  TESObjectCELL *ParentCell; // [esp+8h] [ebp-68h]
  float v84; // [esp+8h] [ebp-68h]
  TESObjectREFR duration; // [esp+Ch] [ebp-64h] BYREF
  unsigned int v86; // [esp+6Ch] [ebp-4h]
  float v87; // [esp+74h] [ebp+4h]
  float v88; // [esp+74h] [ebp+4h]
  float v89; // [esp+74h] [ebp+4h]
  TESChildCELL *v90; // [esp+74h] [ebp+4h]
  float v91; // [esp+74h] [ebp+4h]
  float v92; // [esp+74h] [ebp+4h]
  float v93; // [esp+74h] [ebp+4h]

  if ( !(*(unsigned __int8 (__usercall **)@<al>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*a1 + 0x25C))(
          a1,
          a8,
          a7,
          a6,
          a5,
          a4,
          st2_0,
          a10,
          a3) )
  {
    if ( byte_B13228 )
      sub_466B70((int)SaveLoad_CurrentSavegame, a3, a10, st2_0, a4, a5, a6, a7);
    TESDataHandler_g_PlayerRef->isMovingToNewSpace = 1;
    v12 = *(int (__thiscall **)(int))(*a1 + 0x380);
    HIBYTE(duration.member.childCell.GetChildCell) = 0;
    if ( v12((int)a1) )
    {
      v13 = *(int (__thiscall **)(int))(*a1 + 0x380);
      HIBYTE(duration.member.childCell.GetChildCell) = 1;
      v14 = v13((int)a1);
      v15 = TESDataHandler_g_PlayerRef;
      v16 = *a1;
      duration.vtbl = (TESObjectREFRVtbl *)1;
      baseForm = (TESForm *)v14;
      v18 = *(int (__thiscall **)(int))(v16 + 0x380);
      v82 = (TESObjectREFR *)v15;
      duration.member.baseForm = baseForm;
      v19 = (TESObjectREFR *)v18((int)a1);
      if ( TESOBjectREFR_IsOwnedBy(v19, v82, 1) )
        a1[0x78] = (*(int (__thiscall **)(int *))(*a1 + 0x380))(a1);
    }
    else
    {
      v22 = (TESObjectREFR *)a1[0x78];
      if ( v22 )
      {
        if ( TESObjectREFR_GetOwner(v22) )
        {
          if ( !TESOBjectREFR_IsOwnedBy((TESObjectREFR *)a1[0x78], (TESObjectREFR *)TESDataHandler_g_PlayerRef, 1) )
            a1[0x78] = 0;
        }
      }
      duration.member.baseForm = (TESForm *)a1[0x78];
      baseForm = duration.member.baseForm;
    }
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x184))(a1[0x16]);
    if ( v20 )
    {
      if ( baseForm )
      {
        v21 = *(_BYTE *)(v20 + 0x20);
        if ( v21 == 0x16 )
        {
          duration.vtbl = (TESObjectREFRVtbl *)baseForm;
          sub_602050((Actor *)a1, 0, (int)baseForm, a6, duration);
          HIBYTE(duration.member.childCell.GetChildCell) = 1;
        }
        else if ( v21 == 0x17 )
        {
          sub_5F0410((TESObjectREFR *)a1, a2);
        }
      }
    }
    v23 = a1[0x78];
    if ( v23 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0x198))(v23, 0)
        || (*(_DWORD *)(a1[0x78] + 8) & 0x800) != 0
        || (*(_DWORD *)(a1[0x78] + 8) & 0x20) != 0 )
      {
        a1[0x78] = 0;
      }
    }
    if ( (*(int (__thiscall **)(int *))(a1[0x17] + 0x30))(a1 + 0x17) )
    {
      MagicCaster_InitializeCasting___(a1 + 0x17);
      AnimData = TESObjectREFR_GetAnimData((Actor *)a1);
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(AnimData, 1);
      if ( (unsigned int)(sub_51AA00(AnimGroupFromField8Value) - 0x22) <= 5 )
      {
        sub_470FC0(AnimData, 1, 0.0);
        sub_476D10((AnimSequenceSingle *)AnimData, (int)AnimData, a6, a7, 0.0, (int)a1, 0.0, flt_A30634);
        sub_474510((ActorAnimData *)AnimData, (TESObjectREFR *)a1);
      }
      v26 = (AnimSequenceSingle *)a1[0x173];
      v27 = ActorAnimData_GetAnimGroupFromField8Value(v26, 1);
      if ( (unsigned int)(sub_51AA00(v27) - 0x22) <= 5 )
      {
        sub_470FC0(v26, 1, 0.0);
        sub_476D10(v26, (int)v26, a6, a7, 0.0, (int)a1, 0.0, flt_A30634);
        sub_474510((ActorAnimData *)v26, (TESObjectREFR *)a1);
      }
    }
    sub_5E05F0((Actor *)a1, 0x800);
    *((_DWORD *)MobileObject_GetCharProxy((MobileObject *)a1) + 0xA8) = 0;
    if ( (*(int (__thiscall **)(int *))(*a1 + 0x380))(a1) )
    {
      v28 = (Actor *)(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1);
      sub_5E05F0(v28, 0x800);
      v29 = (MobileObject *)(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1);
      *((_DWORD *)MobileObject_GetCharProxy(v29) + 0xA8) = 0;
    }
    sub_5E4140((TESObjectREFR *)a1);
    v30 = TESDataHandler_g_PlayerRef;
    duration.member.rot.x = 0.0;
    v31 = v30->vtbl->super.super.super.GetPos((TESObjectREFR *)v30);
    v32 = TESDataHandler_g_PlayerRef;
    duration.member.rot.z = *v31;
    v33 = (int)v32->vtbl->super.super.super.GetPos((TESObjectREFR *)v32);
    v34 = TESDataHandler_g_PlayerRef;
    duration.member.pos[0] = *(float *)(v33 + 4);
    v35 = (int)v34->vtbl->super.super.super.GetPos((TESObjectREFR *)v34);
    v36 = *(float *)(v35 + 8);
    duration.member.pos[1] = *(float *)(v35 + 8);
    sub_5F0810(
      (PlayerCharacter *)a1,
      v36,
      a6,
      a7,
      (int)a11,
      (int)&duration.member.rot,
      SLODWORD(duration.member.rot.z),
      SLODWORD(duration.member.pos[0]),
      SLODWORD(duration.member.pos[1]));
    sub_68A9F0(&duration.member.baseExtraList.vtbl);
    v86 = 0;
    duration.vtbl = (TESObjectREFRVtbl *)TESObjectREFR_GetWorldSpace(a11);
    ParentCell = TESObjectREFR_GetParentCell(a11);
    v38 = a11->vtbl->GetPos(a11);
    sub_68B030(
      (int *)&duration.member.baseExtraList,
      v36,
      TESDataHandler_g_PlayerRef,
      v38,
      ParentCell,
      &duration.vtbl->super.super.InitializeComponent);
    if ( v39 )
      duration.member.rot.x = sub_68A760((char *)&duration.member.baseExtraList, (int)TESDataHandler_g_PlayerRef);
    v40 = TESForm_LookupByFormID(0x3Au);
    v41 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    *(double *)&duration.member.rot.z = duration.member.rot.x;
    v42 = v40;
    v43 = sub_5E3750(v41);
    v87 = *(double *)&duration.member.rot.z / v43;
    v88 = v87 / dbl_A2F938;
    duration.member.rot.y = *(float *)&v42[1].member.refID;
    v89 = duration.member.rot.y * v88;
    if ( HIBYTE(duration.member.childCell.GetChildCell) )
      v89 = v89 * dbl_A2FAA0;
    duration.vtbl = (TESObjectREFRVtbl *)a11;
    a1[0x164] = Double_To_SInt32(v89);
    *((_BYTE *)a1 + 0x594) = 0;
    sub_440AF0((int)TES, a6, a7, (char)v42, 1, 0, (signed int)duration.vtbl);
    v44 = (TESChildCELL *)a1[0x164];
    if ( v44 )
    {
      duration.member.pos[2] = flt_A3D9A4;
      duration.vtbl = (TESObjectREFRVtbl *)&duration.member.pos[2];
      v90 = v44;
      duration.member.scale = flt_A2FAAC;
      *(float *)&duration.member.niNode = flt_A41724;
      v45 = 0.0;
      *(float *)&duration.member.parentCell = 0.0;
      sub_578E90(&duration.member.pos[2]);
      if ( a1[0x164] > 0 )
      {
        duration.member.rot.y = (float)(int)v90;
        do
        {
          v47 = fCostant_100;
          duration.vtbl = v46;
          a7 = (double)a1[0x164] * v47 / duration.member.rot.y;
          v91 = v47 - a7;
          sub_57B950((char)v42, a6, a7, 0, v91);
          v92 = dbl_A2F938 / sub_4029D0(&TimeGlobals);
          duration.member.rot.z = sub_673B00() + v92;
          sub_673B10(duration.member.rot.z);
          sub_4029E0(&TimeGlobals, v92);
          sub_677EC0((int)&ActorProcessManager_ptr, *(float *)&a11, a6, flt_A71E4C, flt_A71E4C, COERCE_FLOAT(1));
          sub_674200(&ActorProcessManager_ptr.middleHighActors, *(float *)&a11, flt_A71E4C, COERCE_FLOAT(1));
          sub_673E90(COERCE_FLOAT(&ActorProcessManager_ptr), *(float *)&a11, flt_A71E4C, COERCE_FLOAT(1));
          v48 = flt_A71E4C;
          sub_673C10(&ActorProcessManager_ptr.middleHighActors, flt_A71E4C, 1);
          sub_674A20((int)&ActorProcessManager_ptr, a6, a7, v48, a5);
          v49 = fConstant_2;
          --a1[0x164];
          duration.vtbl = v50;
          v51 = TESDataHandler_g_PlayerRef;
          *(float *)&duration.vtbl = v49;
          sub_5F2530(v51, 0, (int)a11, (int)duration.vtbl);
          v52 = fConstant_2;
          duration.vtbl = (TESObjectREFRVtbl *)1;
          v84 = v52;
          sub_5F25F0(TESDataHandler_g_PlayerRef, 0, (int)a11, v84, COERCE_FLOAT(1));
          v45 = fConstant_2;
          duration.vtbl = v53;
          v54 = TESDataHandler_g_PlayerRef;
          *(float *)&duration.vtbl = v45;
          sub_5F2720(v54, 0, (int)a11, *(float *)&duration.vtbl);
        }
        while ( a1[0x164] > 0 );
      }
    }
    else
    {
      *(double *)&duration.member.rot.z = v89 * dbl_A2F938;
      v55 = sub_4029D0(&TimeGlobals);
      v93 = *(double *)&duration.member.rot.z / v55;
      duration.member.rot.z = sub_673B00() + v93;
      sub_673B10(duration.member.rot.z);
      v45 = v93;
      sub_4029E0(&TimeGlobals, v93);
    }
    duration.vtbl = (TESObjectREFRVtbl *)a11;
    a1[0x164] = 0xA;
    sub_676940((int)a11, a6, a7, v45, (int)duration.vtbl);
    v56 = (TESObjectCELL **)duration.member.baseForm;
    v57 = duration.member.baseForm == 0;
    a1[0x164] = 0;
    if ( !v57 )
    {
      sub_4D8AF0(v56);
      v59 = v58;
      sub_4D8AF0((TESObjectCELL **)a11);
      if ( v60 == v59 && !(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1) )
      {
        v61 = TESObjectREFR_GetParentCell(a11);
        WorldSpace = TESObjectREFR_GetWorldSpace(a11);
        v63 = a11->vtbl->GetPos(a11);
        TESObjectREFR_SetPosition((TESObjectREFR *)duration.member.baseForm, *v63, v63[1], v63[2]);
        sub_4DD4B0((int)duration.member.baseForm, a6, a7, v45, (Actor *)duration.member.baseForm, v61, WorldSpace);
        if ( TESObjectCELL_IsProcessLevel_LowHigh(v61, 1) )
          ((void (__thiscall *)(TESForm *, _DWORD))duration.member.baseForm->vtbl[1].Unk_27)(
            duration.member.baseForm,
            0);
      }
    }
    if ( byte_B0525C )
      sub_43F2D0(TES, 0);
    GlobalObject = Sky_CreateOrGetGlobalObject();
    Sky::SetFasTravelFlag(GlobalObject, 1);
    byte_B3A6D2 = 1;
    v65 = a11->vtbl->GetPos(a11);
    v66 = TESObjectREFR_GetWorldSpace(a11);
    sub_66F370(
      a3,
      a4,
      a5,
      a6,
      a7,
      a10,
      v45,
      *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v65,
      *((NiAVObject *(__thiscall **)(NiAVObject *, const char *))v65 + 1),
      *((void *(__thiscall **)(NiAVObject *))v65 + 2),
      LODWORD(a11->member.rot.x),
      LODWORD(a11->member.rot.y),
      LODWORD(a11->member.rot.z),
      v66,
      0);
    LOBYTE(duration.vtbl) = 0;
    byte_B3A6D2 = 0;
    v67 = Sky_CreateOrGetGlobalObject();
    Sky::SetFasTravelFlag(v67, (char)duration.vtbl);
    if ( byte_B0525C )
      sub_43F2D0(TES, 1);
    sub_676A40();
    sub_441610(TES);
    sub_678750(&ActorProcessManager_ptr);
    v68 = (TESObjectREFR **)sub_7616D0((ActorList *)&ActorProcessManager_ptr.actor64);
    sub_6745D0(v68);
    if ( !TESDataHandler_g_PlayerRef->isInSEWorld
      && HIBYTE(duration.member.childCell.GetChildCell)
      && (v69 = a1[0x78]) != 0
      && (*(int (__thiscall **)(int))(*(_DWORD *)v69 + 0x154))(v69)
      && (sub_4D8AF0((TESObjectCELL **)a11), p_Unk_53 = v70, sub_4D8AF0((TESObjectCELL **)a1[0x78]), p_Unk_53 == v72)
      && !(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1) )
    {
      sub_5E6D70(TESDataHandler_g_PlayerRef, 0);
      if ( TESDataHandler_g_PlayerRef->super.super.super.process->GetWeaponOut(TESDataHandler_g_PlayerRef->super.super.super.process) )
      {
        process = TESDataHandler_g_PlayerRef->super.super.super.process;
        p_Unk_53 = (void (__thiscall **)(LowProcess *, _DWORD, int))&process->Unk_53;
        v74 = ((int (__stdcall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetAnimData)(TESDataHandler_g_PlayerRef);
        v75 = ((int (__thiscall *)(PlayerCharacter *, int))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Unk_5A)(
                TESDataHandler_g_PlayerRef,
                v74);
        (*p_Unk_53)(process, 0, v75);
      }
      ((void (__thiscall *)(PlayerCharacter *, int))TESDataHandler_g_PlayerRef->vtbl->super.Unk_E1)(
        TESDataHandler_g_PlayerRef,
        a1[0x78]);
      (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)a1[0x78] + 0x38C))(
        a1[0x78],
        TESDataHandler_g_PlayerRef);
      duration.vtbl = (TESObjectREFRVtbl *)a1[0x78];
      sub_602050((Actor *)a1, 0, (int)p_Unk_53, a6, duration);
    }
    else if ( !TESDataHandler_g_PlayerRef->isInSEWorld )
    {
      v76 = (TESObjectCELL **)a1[0x78];
      if ( v76 )
      {
        sub_4D8AF0(v76);
        v78 = v77;
        sub_4D8AF0((TESObjectCELL **)TESDataHandler_g_PlayerRef);
        if ( v79 != v78 )
        {
          v45 = flt_A30634;
          GameUI_QueueMessage((const char *)sFastTravelHorseatGate, 0, 1u, flt_A30634);
        }
      }
    }
    for ( i = COERCE_FLOAT((*(int (__thiscall **)(int *))(a1[0x1A] + 8))(a1 + 0x1A));
          i != 0.0;
          i = *(float *)(LODWORD(i) + 4) )
    {
      if ( !*(_DWORD *)(LODWORD(i) + 4) && !*(_DWORD *)LODWORD(i) )
        break;
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)LODWORD(i) + 0xC) + 0x1C) + 0x98) == 0x47445553 )
        *((_BYTE *)OblivionDynamicCast(
                     *(void **)LODWORD(i),
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                     &SunDamageEffect `RTTI Type Descriptor',
                     0)
        + 0x3D) = 1;
    }
    TESDataHandler_g_PlayerRef->isMovingToNewSpace = 0;
    sub_679A70((int)&ActorProcessManager_ptr, a6, a7, v45);
    sub_677EC0((int)&ActorProcessManager_ptr, i, a6, 0.0, 0.0, 0.0);
    (*(void (__thiscall **)(int *))(*a1 + 0x2EC))(a1);
    v81 = a1[0x1D9];
    if ( v81 )
    {
      sub_6B73E0((_DWORD *)a1[0x1D9]);
      FormHeapFree(v81);
      a1[0x1D9] = 0;
      a1[0x1D8] = 0;
    }
    TESDataHandler_g_PlayerRef->unk114 = 0;
    v86 = 0xFFFFFFFF;
    sub_68AA10((int *)&duration.member.baseExtraList);
  }
}
