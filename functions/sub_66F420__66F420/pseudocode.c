void __userpurge PlayerCharacter_FastTravelCore(
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
  int (__thiscall *v12)(int *); // eax
  int (__thiscall *v13)(int *); // eax
  int v14; // eax
  PlayerCharacter *v15; // ecx
  int v16; // edx
  TESForm *baseForm; // edi
  int (__thiscall *v18)(int *); // eax
  TESObjectREFR *v19; // eax
  int v20; // eax
  char v21; // al
  TESObjectREFR *v22; // ecx
  int v23; // ecx
  ActorAnimData *AnimData; // edi
  unsigned __int8 AnimGroupFromField8Value; // al
  ActorAnimData *v26; // edi
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
  int v44; // eax
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
  double TimeScale; // st7
  TESForm *v56; // ecx
  bool v57; // zf
  TESForm *SpatialContainerAtPosition; // ebp
  TESObjectCELL *DwordAtOffset40; // ebp
  TESObjectCELL **WorldSpace; // ebx
  float *v61; // eax
  Sky *GlobalObject; // eax
  LowProcess *process; // ebp
  TESWorldSpace *v64; // eax
  Sky *v65; // eax
  TESObjectREFR **v66; // eax
  int v67; // ecx
  TESForm *p_Unk_53; // edi
  int v69; // eax
  int v70; // eax
  TESObjectREFR *v71; // ecx
  TESForm *v72; // edi
  float i; // edi
  unsigned int v74; // edi
  TESObjectREFR *deltaTime; // [esp+8h] [ebp-68h]
  TESObjectCELL *deltaTimea; // [esp+8h] [ebp-68h]
  float deltaTimeb; // [esp+8h] [ebp-68h]
  TESObjectREFR duration; // [esp+Ch] [ebp-64h] BYREF
  unsigned int v79; // [esp+6Ch] [ebp-4h]
  float v80; // [esp+74h] [ebp+4h]
  float v81; // [esp+74h] [ebp+4h]
  float v82; // [esp+74h] [ebp+4h]
  TESChildCELL *v83; // [esp+74h] [ebp+4h]
  float v84; // [esp+74h] [ebp+4h]
  float v85; // [esp+74h] [ebp+4h]
  float v86; // [esp+74h] [ebp+4h]

  if ( !(*(unsigned __int8 (__usercall **)@<al>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*a1 + 0x25C))( /*0x66f451*/
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
    if ( byte_B13228 ) /*0x66f45b*/
      sub_466B70((int)g_TESSaveLoadGame, a3, a10, st2_0, a4, a5, a6, a7, a8); /*0x66f469*/
    reference->isMovingToNewSpace = 1;          // 3DTheft decode: fast-travel core marks PlayerCharacter+0x12C in-transition before travel simulation/relocation work. /*0x66f473*/
    v12 = *(int (__thiscall **)(int *))(*a1 + 0x380); /*0x66f47c*/
    HIBYTE(duration.member.childCell.GetChildCell) = 0; /*0x66f484*/
    if ( v12(a1) ) /*0x66f489*/
    {
      v13 = *(int (__thiscall **)(int *))(*a1 + 0x380); /*0x66f491*/
      HIBYTE(duration.member.childCell.GetChildCell) = 1; /*0x66f499*/
      v14 = v13(a1); /*0x66f49e*/
      v15 = reference; /*0x66f4a0*/
      v16 = *a1; /*0x66f4a6*/
      duration.vtbl = (TESObjectREFRVtbl *)1; /*0x66f4a8*/
      baseForm = (TESForm *)v14; /*0x66f4aa*/
      v18 = *(int (__thiscall **)(int *))(v16 + 0x380); /*0x66f4ac*/
      deltaTime = (TESObjectREFR *)v15; /*0x66f4b2*/
      duration.member.baseForm = baseForm; /*0x66f4b5*/
      v19 = (TESObjectREFR *)v18(a1); /*0x66f4b9*/
      if ( TESOBjectREFR_IsOwnedBy(v19, deltaTime, 1) ) /*0x66f4bd*/
        a1[0x78] = (*(int (__thiscall **)(int *))(*a1 + 0x380))(a1); /*0x66f4d2*/
    }
    else
    {
      v22 = (TESObjectREFR *)a1[0x78]; /*0x66f505*/
      if ( v22 ) /*0x66f50f*/
      {
        if ( TESObjectREFR_GetOwner(v22) ) /*0x66f511*/
        {
          if ( !TESOBjectREFR_IsOwnedBy((TESObjectREFR *)a1[0x78], (TESObjectREFR *)reference, 1) ) /*0x66f529*/
            a1[0x78] = 0; /*0x66f532*/
        }
      }
      duration.member.baseForm = (TESForm *)a1[0x78]; /*0x66f53e*/
      baseForm = duration.member.baseForm; /*0x66f542*/
    }
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0x16] + 0x184))(a1[0x16]); /*0x66f4e5*/
    if ( v20 ) /*0x66f4e9*/
    {
      if ( baseForm ) /*0x66f4ed*/
      {
        v21 = *(_BYTE *)(v20 + 0x20); /*0x66f4ef*/
        if ( v21 == 0x16 ) /*0x66f4f4*/
        {
          duration.vtbl = (TESObjectREFRVtbl *)baseForm; /*0x66f4f6*/
          sub_602050((Actor *)a1, 0, (int)baseForm, a6, duration); /*0x66f4f9*/
          HIBYTE(duration.member.childCell.GetChildCell) = 1; /*0x66f4fe*/
        }
        else if ( v21 == 0x17 ) /*0x66f548*/
        {
          sub_5F0410((TESObjectREFR *)a1, a2); /*0x66f54c*/
        }
      }
    }
    v23 = a1[0x78]; /*0x66f551*/
    if ( v23 ) /*0x66f559*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0x198))(v23, 0) /*0x66f582*/
        || (*(_DWORD *)(a1[0x78] + 8) & 0x800) != 0
        || (*(_DWORD *)(a1[0x78] + 8) & 0x20) != 0 )
      {
        a1[0x78] = 0; /*0x66f584*/
      }
    }
    if ( (*(int (__thiscall **)(int *))(a1[0x17] + 0x30))(a1 + 0x17) ) /*0x66f595*/
    {
      MagicCaster_InitializeCasting___((char *)a1 + 0x5C); /*0x66f5a1*/
      AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)a1); /*0x66f5ad*/
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(AnimData, 1); /*0x66f5b3*/
      if ( (unsigned int)(AnimKey_GetGroupID(AnimGroupFromField8Value) - 0x22) <= 5 ) /*0x66f5c7*/
      {
        ActorAnimData_ClearSlot(AnimData, 1, 0.0); /*0x66f5d3*/
        ActorAnimData_Update(AnimData, (Actor *)a1, 0.0, kTerrainLODQuadRayDirectionZ); /*0x66f5ed*/
        ActorAnimData_ApplyToActor(AnimData, (TESObjectREFR *)a1); /*0x66f5f5*/
      }
      v26 = (ActorAnimData *)a1[0x173]; /*0x66f5fa*/
      v27 = ActorAnimData_GetAnimGroupFromField8Value(v26, 1); /*0x66f604*/
      if ( (unsigned int)(AnimKey_GetGroupID(v27) - 0x22) <= 5 ) /*0x66f618*/
      {
        ActorAnimData_ClearSlot(v26, 1, 0.0); /*0x66f624*/
        ActorAnimData_Update(v26, (Actor *)a1, 0.0, kTerrainLODQuadRayDirectionZ); /*0x66f63e*/
        ActorAnimData_ApplyToActor(v26, (TESObjectREFR *)a1); /*0x66f646*/
      }
    }
    sub_5E05F0((Actor *)a1, 0x800); /*0x66f652*/
    *((_DWORD *)MobileObject_GetCharProxy((MobileObject *)a1) + 0xA8) = 0; /*0x66f65e*/
    if ( (*(int (__thiscall **)(int *))(*a1 + 0x380))(a1) ) /*0x66f66e*/
    {
      v28 = (Actor *)(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1); /*0x66f683*/
      sub_5E05F0(v28, 0x800); /*0x66f687*/
      v29 = (MobileObject *)(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1); /*0x66f696*/
      *((_DWORD *)MobileObject_GetCharProxy(v29) + 0xA8) = 0; /*0x66f69f*/
    }
    sub_5E4140((TESObjectREFR *)a1); /*0x66f6a7*/
    v30 = reference; /*0x66f6ae*/
    duration.member.rot.x = 0.0; /*0x66f6b4*/
    v31 = v30->vtbl->super.super.super.GetPos((TESObjectREFR *)v30); /*0x66f6c0*/
    v32 = reference; /*0x66f6c4*/
    duration.member.rot.z = *v31; /*0x66f6ca*/
    v33 = (int)v32->vtbl->super.super.super.GetPos((TESObjectREFR *)v32); /*0x66f6d6*/
    v34 = reference; /*0x66f6db*/
    duration.member.pos[0] = *(float *)(v33 + 4); /*0x66f6e1*/
    v35 = (int)v34->vtbl->super.super.super.GetPos((TESObjectREFR *)v34); /*0x66f6ed*/
    v36 = *(float *)(v35 + 8); /*0x66f6ef*/
    duration.member.pos[1] = *(float *)(v35 + 8); /*0x66f6f6*/
    sub_5F0810( /*0x66f71b*/
      (PlayerCharacter *)a1,
      v36,
      a6,
      a7,
      (int)a11,
      (int)&duration.member.rot,
      SLODWORD(duration.member.rot.z),
      SLODWORD(duration.member.pos[0]),
      SLODWORD(duration.member.pos[1]));        // Selected destination ref argument is loaded into EDI here; EDI survives through the primary relocation call setup at 0x66FABD..0x66FAFA.
    sub_68A9F0((float *)&duration.member.baseExtraList); /*0x66f724*/
    v79 = 0; /*0x66f72b*/
    duration.vtbl = (TESObjectREFRVtbl *)TESObjectREFR_GetWorldSpace(a11); /*0x66f734*/
    deltaTimea = (TESObjectCELL *)Shared_GetDwordAtOffset40(a11); /*0x66f73c*/
    v38 = a11->vtbl->GetPos(a11); /*0x66f747*/
    TravelPath_BuildToDestination( /*0x66f754*/
      (char *)&duration.member.baseExtraList,
      (TESObjectCELL **)reference,
      v38,
      deltaTimea,
      (TESObjectCELL *)duration.vtbl);          // Fast-travel duration path build uses player current ref plus destination pos/cell/worldspace. It computes travel time, not the later relocation target.
    if ( v39 )                                  // If TravelPath_BuildToDestination succeeds, vanilla computes path distance; otherwise var_44 remains the fallback/zero distance before duration calculation. /*0x66f75b*/
      duration.member.rot.x = TravelPath_ComputeDistance((char *)&duration.member.baseExtraList, (int)reference);// After TravelPath_ComputeDistance returns, vanilla stores total route distance to [esp+0x1C] (var_44). FPU is empty before 0x66F771. This is a low-risk point for a handler to decide an encounter and replace var_44 with distance-to-encounter while allowing vanilla TimeScale/time-loop code to run normally. /*0x66f76d*/
    v40 = TESForm_LookupByFormID(0x3Au);        // Candidate pre-time-advance encounter hook point. Concrete runtime state before the push: ESI=player, EDI=destination ref, EBX=0, [esp+0x1C]=var_44 total route distance, [esp+0x40]=TravelPath local/list, [esp+0x5C]=SEH state var_4. Vanilla has not looked up TimeScale or advanced travel time. /*0x66f773*/
    v41 = (TESObjectREFR *)reference;           // Duration calculation reads route distance from [esp+0x20] here only because push 0x3A shifted the stack by 4; that is the same local var_44 normally at [esp+0x1C] before 0x66F771. A pre-hook should write [esp+0x1C] before resuming. /*0x66f77c*/
    *(double *)&duration.member.rot.z = duration.member.rot.x; /*0x66f782*/
    v42 = v40; /*0x66f789*/
    v43 = Actor_CalcFastTravelSpeed(v41);       // Player travel speed source: sub_5E3750 returns current actor movement speed used for fast-travel duration. /*0x66f78b*/
    v80 = *(double *)&duration.member.rot.z / v43;// Duration seed here is distance / playerTravelSpeed, then divided by 3600.0 and multiplied by TimeScale. /*0x66f799*/
    v81 = v80 / dbl_A2F938; /*0x66f7a7*/
    duration.member.rot.y = *(float *)&v42[1].member.refID; /*0x66f7ae*/
    v82 = duration.member.rot.y * v81; /*0x66f7ba*/
    if ( HIBYTE(duration.member.childCell.GetChildCell) ) /*0x66f7be*/
      v82 = v82 * dbl_A2FAA0;                   // Mounted/horse path halves the computed duration multiplier (constant 0.5). /*0x66f7ca*/
    duration.vtbl = (TESObjectREFRVtbl *)a11; /*0x66f7d7*/
    a1[0x164] = Double_To_SInt32(v82);          // Fast-travel duration is rounded to an integer and stored at PlayerCharacter+0x590 before relocation. If nonzero, vanilla advances time/processes in a loop before the 0x66FAFA move. /*0x66f7d9*/
    *((_BYTE *)a1 + 0x594) = 0; /*0x66f7df*/
    sub_440AF0((int)MEMORY[0xB333A0], a6, a7, (char)v42, 1, 0, (signed int)duration.vtbl); /*0x66f7ee*/
    v44 = a1[0x164]; /*0x66f7f3*/
    if ( v44 ) /*0x66f7fb*/
    {
      duration.member.pos[2] = flt_A3D9A4; /*0x66f80b*/
      duration.vtbl = (TESObjectREFRVtbl *)&duration.member.pos[2]; /*0x66f80f*/
      v83 = (TESChildCELL *)v44; /*0x66f816*/
      duration.member.scale = kFaceEarNormalMatchRadius; /*0x66f81a*/
      *(float *)&duration.member.niNode = flt_A41724; /*0x66f824*/
      v45 = 0.0; /*0x66f828*/
      *(float *)&duration.member.parentCell = 0.0; /*0x66f82a*/
      sub_578E90(&duration.member.pos[2]); /*0x66f82e*/
      if ( a1[0x164] > 0 ) /*0x66f83c*/
      {
        duration.member.rot.y = (float)(int)v83; /*0x66f846*/
        do /*0x66f973*/
        {
          v47 = fCostant_100;                   // Fast-travel time/process loop. Each iteration advances UI/progress, TimeGlobals, ActorProcessManager lists, and player effects before relocation. This means a 0x66FAFA encounter hook occurs after vanilla travel time has already elapsed. /*0x66f850*/
          duration.vtbl = v46; /*0x66f856*/
          a7 = (double)a1[0x164] * v47 / duration.member.rot.y; /*0x66f85f*/
          v84 = v47 - a7; /*0x66f865*/
          sub_57B950((char)v42, a6, a7, 0, v84); /*0x66f871*/
          v85 = dbl_A2F938 / TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]); /*0x66f88e*/
          duration.member.rot.z = sub_673B00() + v85; /*0x66f8a1*/
          sub_673B10(duration.member.rot.z); /*0x66f8ac*/
          TimeGlobals_AdvanceGameTime(&MEMORY[0xB332E0], v85);// TimeGlobals::AdvanceGameTime-style call during fast-travel loop. a2 is a fraction of the computed travel duration, converted using TimeScale/GameHour. /*0x66f8be*/
          sub_677EC0((int)&qword_B3BB2C[0x75], *(float *)&a11, flt_A71E4C, a7, flt_A71E4C, COERCE_FLOAT(1)); /*0x66f8d4*/
          sub_674200((ActorList *)&qword_B3BB2C[0x75], *(float *)&a11, flt_A71E4C, COERCE_FLOAT(1)); /*0x66f8ea*/
          sub_673E90(COERCE_FLOAT(&qword_B3BB2C[0x75]), *(float *)&a11, flt_A71E4C, COERCE_FLOAT(1)); /*0x66f900*/
          v48 = flt_A71E4C; /*0x66f905*/
          sub_673C10((ActorList *)&qword_B3BB2C[0x75], flt_A71E4C, 1); /*0x66f916*/
          sub_674A20((int)&qword_B3BB2C[0x75], a6, a7, v48, a5, a4, st2_0, a10); /*0x66f920*/
          v49 = fConstant_2; /*0x66f925*/
          --a1[0x164]; /*0x66f92b*/
          duration.vtbl = v50; /*0x66f932*/
          v51 = reference; /*0x66f933*/
          *(float *)&duration.vtbl = v49; /*0x66f939*/
          sub_5F2530(v51, 0, (int)a11, (int)duration.vtbl); /*0x66f93c*/
          v52 = fConstant_2; /*0x66f941*/
          duration.vtbl = (TESObjectREFRVtbl *)1; /*0x66f947*/
          deltaTimeb = v52; /*0x66f950*/
          sub_5F25F0(reference, 0, (int)a11, deltaTimeb, COERCE_FLOAT(1)); /*0x66f953*/
          v45 = fConstant_2; /*0x66f958*/
          duration.vtbl = v53; /*0x66f95e*/
          v54 = reference; /*0x66f95f*/
          *(float *)&duration.vtbl = v45; /*0x66f965*/
          sub_5F2720(v54, 0, (int)a11, *(float *)&duration.vtbl); /*0x66f968*/
        }
        while ( a1[0x164] > 0 ); /*0x66f973*/
      }
    }
    else
    {
      *(double *)&duration.member.rot.z = v82 * dbl_A2F938; /*0x66f98a*/
      TimeScale = TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]); /*0x66f98e*/
      v86 = *(double *)&duration.member.rot.z / TimeScale; /*0x66f99c*/
      duration.member.rot.z = sub_673B00() + v86; /*0x66f9af*/
      sub_673B10(duration.member.rot.z); /*0x66f9ba*/
      v45 = v86; /*0x66f9bf*/
      TimeGlobals_AdvanceGameTime(&MEMORY[0xB332E0], v86);// Zero/small-duration path still advances TimeGlobals once before relocation. /*0x66f9cc*/
    }
    duration.vtbl = (TESObjectREFRVtbl *)a11;   // After all time/process updates are complete, the core moves into horse prepositioning and final destination relocation setup. /*0x66f9d1*/
    a1[0x164] = 0xA; /*0x66f9d7*/
    sub_676940((int)a11, a6, a7, v45, (int)duration.vtbl); /*0x66f9e1*/
    v56 = duration.member.baseForm;             // Travel-horse branch: var_48 is the horse/owned travel ref (PlayerCharacter+0x1E0), not the player. This prepositions the horse when it shares the destination world/cell path. /*0x66f9e6*/
    v57 = duration.member.baseForm == 0; /*0x66f9ea*/
    a1[0x164] = 0; /*0x66f9ec*/
    if ( !v57 ) /*0x66f9f2*/
    {
      SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition((TESObjectREFR *)v56); /*0x66f9ff*/
      if ( TESObjectREFR_GetSpatialContainerAtPosition(a11) == SpatialContainerAtPosition /*0x66fa14*/
        && !(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1) )
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a11); /*0x66fa23*/
        WorldSpace = (TESObjectCELL **)TESObjectREFR_GetWorldSpace(a11); /*0x66fa2a*/
        v61 = a11->vtbl->GetPos(a11); /*0x66fa36*/
        TESObjectREFR_SetPosition((TESObjectREFR *)duration.member.baseForm, *v61, v61[1], v61[2]);// SetPosition here applies to var_48 travel horse/current mount ref after a non-null check at 0x66F9EA; player position is still original until final relocation. /*0x66fa51*/
        sub_4DD4B0( /*0x66fa5d*/
          (int)duration.member.baseForm,
          a6,
          a7,
          v45,
          (Actor *)duration.member.baseForm,
          DwordAtOffset40,
          WorldSpace);
        if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1) ) /*0x66fa6e*/
          ((void (__thiscall *)(TESForm *, _DWORD))duration.member.baseForm->vtbl[1].Unk_27)( /*0x66fa83*/
            duration.member.baseForm,
            0);
      }
    }
    if ( byte_B0525C ) /*0x66fa87*/
      sub_43F2D0(MEMORY[0xB333A0], 0); /*0x66fa97*/
    GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x66fa9e*/
    Sky_SetFastTravelFlag(GlobalObject, 1);     // 3DTheft decode: fast-travel core sets Sky fast-travel flag before final relocation; travel-time simulation has already run by this point. /*0x66faa5*/
    unk_B3A6D2 = 1; /*0x66faaa*/
    process = (LowProcess *)a11->vtbl->GetPos(a11); /*0x66fac0*/
    v64 = TESObjectREFR_GetWorldSpace(a11);     // 3DTheft decode: final fast-travel relocation arg setup begins here: selected ref pos/rot/worldspace are pushed for PlayerCharacter_RelocateToFastTravelTarget. /*0x66fac2*/
    PlayerCharacter_RelocateToFastTravelTarget( /*0x66fafa*/
      a4,
      a5,
      a6,
      a7,
      a10,
      v45,
      st2_0,
      (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))process->__vftable,
      (NiAVObject *(__thiscall *)(NiAVObject *, const char *))process->editorPackProcedure,
      (void *(__thiscall *)(NiAVObject *))process->editorPackage,
      LODWORD(a11->member.rot.x),
      LODWORD(a11->member.rot.y),
      LODWORD(a11->member.rot.z),
      v64,
      0);                                       // 3DTheft hook site: exact accepted fast-travel relocation. Plugin should record the event, chain to PlayerCharacter_RelocateToFastTravelTarget, and defer encounter spawn until post-relocation cleanup has settled.
    LOBYTE(duration.vtbl) = 0; /*0x66faff*/
    unk_B3A6D2 = 0;                             // 3DTheft decode: Sky fast-travel flag is cleared after relocation returns; this confirms the relocation hook fires before vanilla fast-travel cleanup is complete. /*0x66fb00*/
    v65 = Sky_CreateOrGetGlobalObject(); /*0x66fb07*/
    Sky_SetFastTravelFlag(v65, (char)duration.vtbl);// 3DTheft decode: Sky fast-travel flag is cleared after relocation returns; encounter spawn should be deferred until player control loop observes the completed move. /*0x66fb0e*/
    if ( byte_B0525C ) /*0x66fb13*/
      sub_43F2D0(MEMORY[0xB333A0], 1); /*0x66fb24*/
    sub_676A40((ActorProcessManager *)&qword_B3BB2C[0x75]); /*0x66fb2e*/
    sub_441610(MEMORY[0xB333A0]); /*0x66fb39*/
    sub_678750((int)&qword_B3BB2C[0x75], 0, (TESObjectREFR *)process, (MobileObject *)a11, (int)a1, a6, a7, v45); /*0x66fb43*/
    v66 = (TESObjectREFR **)ActorList_ReturnHead((ActorList *)&qword_B3BB2C[0x8F]); /*0x66fb4d*/
    sub_6745D0(v66); /*0x66fb58*/
    if ( !reference->isInSEWorld /*0x66fbc0*/
      && HIBYTE(duration.member.childCell.GetChildCell)
      && (v67 = a1[0x78]) != 0
      && (*(int (__thiscall **)(int))(*(_DWORD *)v67 + 0x154))(v67)
      && (p_Unk_53 = TESObjectREFR_GetSpatialContainerAtPosition(a11),
          p_Unk_53 == TESObjectREFR_GetSpatialContainerAtPosition((TESObjectREFR *)a1[0x78]))
      && !(*(int (__thiscall **)(int *))(*a1 + 0x380))(a1) )// Sky fast-travel flag clear happens after relocation. Relocation hook must return here normally so weather/time cleanup remains vanilla.
    {
      sub_5E6D70(reference, 0); /*0x66fbd1*/
      if ( reference->super.super.super.process->GetWeaponOut(reference->super.super.super.process) ) /*0x66fbe7*/
      {
        process = reference->super.super.super.process; /*0x66fbf3*/
        p_Unk_53 = (TESForm *)&process->Unk_53; /*0x66fc02*/
        v69 = ((int (__stdcall *)(PlayerCharacter *))reference->vtbl->super.super.super.GetAnimData)(reference); /*0x66fc08*/
        v70 = ((int (__thiscall *)(PlayerCharacter *, int))reference->vtbl->super.super.super.GetActiveSkinInfo)( /*0x66fc19*/
                reference,
                v69);
        ((void (__thiscall *)(LowProcess *, _DWORD, int))p_Unk_53->vtbl)(process, 0, v70); /*0x66fc21*/
      }
      ((void (__thiscall *)(PlayerCharacter *, int))reference->vtbl->super.Unk_E1)(reference, a1[0x78]); /*0x66fc38*/
      (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)a1[0x78] + 0x38C))(a1[0x78], reference); /*0x66fc4e*/
      duration.vtbl = (TESObjectREFRVtbl *)a1[0x78]; /*0x66fc56*/
      sub_602050((Actor *)a1, 0, (int)p_Unk_53, a6, duration); /*0x66fc59*/
    }
    else if ( !reference->isInSEWorld ) /*0x66fc66*/
    {
      v71 = (TESObjectREFR *)a1[0x78]; /*0x66fc6f*/
      if ( v71 ) /*0x66fc77*/
      {
        v72 = TESObjectREFR_GetSpatialContainerAtPosition(v71); /*0x66fc84*/
        if ( TESObjectREFR_GetSpatialContainerAtPosition((TESObjectREFR *)reference) != v72 ) /*0x66fc8d*/
        {
          v45 = kTerrainLODQuadRayDirectionZ; /*0x66fc8f*/
          GameUI_QueueMessage(MEMORY[0xB38B50].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x66fca3*/
        }
      }
    }
    for ( i = COERCE_FLOAT((*(int (__thiscall **)(int *))(a1[0x1A] + 8))(a1 + 0x1A)); /*0x66fcba*/
          i != 0.0;
          i = *(float *)(LODWORD(i) + 4) )
    {
      if ( !*(_DWORD *)(LODWORD(i) + 4) && !*(_DWORD *)LODWORD(i) ) /*0x66fcc5*/
        break; /*0x66fcc7*/
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)LODWORD(i) + 0xC) + 0x1C) + 0x98) == 0x47445553 ) /*0x66fcdb*/
        *((_BYTE *)OblivionDynamicCast( /*0x66fcf2*/
                     *(void **)LODWORD(i),
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                     &SunDamageEffect `RTTI Type Descriptor',
                     0)
        + 0x3D) = 1;
    }
    reference->isMovingToNewSpace = 0;          // 3DTheft decode: late fast-travel cleanup clears PlayerCharacter+0x12C after actor-process/world cleanup. Same-frame plugin spawn/package assignment should be avoided. /*0x66fd08*/
    sub_679A70( /*0x66fd0f*/
      (ActorProcessManager *)&qword_B3BB2C[0x75],
      a6,
      a7,
      v45,
      0,
      (TESObjectREFR *)process,
      (MobileObject *)LODWORD(i));              // 3DTheft decode: ActorProcessManager cleanup follows the fast-travel transition flag clear; delayed encounter spawn should wait for a later world-update pass.
    sub_677EC0((int)&qword_B3BB2C[0x75], i, 0.0, a7, 0.0, 0.0); /*0x66fd20*/
    (*(void (__thiscall **)(int *))(*a1 + 0x2EC))(a1); /*0x66fd2f*/
    v74 = a1[0x1D9]; /*0x66fd31*/
    if ( v74 ) /*0x66fd39*/
    {
      sub_6B73E0((_DWORD *)a1[0x1D9]); /*0x66fd3d*/
      FormHeapFree(v74); /*0x66fd43*/
      a1[0x1D9] = 0; /*0x66fd4b*/
      a1[0x1D8] = 0; /*0x66fd51*/
    }
    reference->unk114 = 0;                      // Normal cleanup immediately before epilogue: clears PlayerCharacter+0x114, destroys local TravelPath via sub_68AA10, then falls into epilogue at 0x66FD74. /*0x66fd60*/
    v79 = 0xFFFFFFFF; /*0x66fd67*/
    sub_68AA10((int *)&duration.member.baseExtraList);// Late cleanup uses [esp+0x40] as the TravelPath local/list address and calls sub_68AA10 to free path nodes before epilogue. /*0x66fd6f*/
  }
}
