bool __usercall sub_5123A0@<al>(
        double st6_0@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  bool result; // al
  TESObjectREFR *v12; // eax
  TESObjectREFR *v13; // esi
  TESObjectREFRVtbl *vtbl; // eax
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  TESWorldSpace *WorldSpace; // eax
  TESObjectREFRVtbl *v17; // ecx
  TESObjectREFRVtbl *v18; // ebx
  void (__thiscall *v19)(BaseFormComponent *); // edi
  void (__thiscall *v20)(TESObjectREFRVtbl *, _DWORD); // edx
  double v21; // st7
  int v22; // eax
  int v23; // eax
  TESObjectCELL *ParentCell; // [esp+0h] [ebp-18h]
  _DWORD *v25; // [esp+4h] [ebp-14h]
  float z; // [esp+8h] [ebp-10h]
  UInt16 v27[2]; // [esp+10h] [ebp-8h] BYREF
  float v28; // [esp+14h] [ebp-4h]

  *(_DWORD *)v27 = 0; /*0x5123cc*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a6, a7, l, v27); /*0x5123d4*/
  if ( result ) /*0x5123de*/
  {
    v12 = (TESObjectREFR *)OblivionDynamicCast( /*0x5123f4*/
                             a4,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    v13 = v12; /*0x5123f9*/
    if ( v12 ) /*0x512400*/
    {
      if ( *(_DWORD *)v27 ) /*0x51240b*/
      {                                         // 3DTheft 2026-05-17: AddScriptPackage skips runtime package handoff if Actor_IsInDialoguePackage is true.
        if ( !Actor_IsInDialogueProcedure(v12) ) /*0x512413*/
        {
          vtbl = v13[1].vtbl; /*0x512420*/
          if ( vtbl ) /*0x512425*/
          {
            CopyFromBase = vtbl->super.super.CopyFromBase; /*0x51242b*/
            if ( CopyFromBase ) /*0x512430*/
              Script_AddEventToExtraScript(CopyFromBase, &v13->member.baseExtraList, 0x800);// 3DTheft decode: AddScriptPackage queues event mask 0x800 for the actor's previous editor package when present. /*0x51243c*/
            Script_AddEventToExtraScript(*(_DWORD *)v27, &v13->member.baseExtraList, 0x200);// 3DTheft decode: AddScriptPackage queues event mask 0x200 for the new script package before handoff. /*0x512452*/
            if ( *(_DWORD *)(*(_DWORD *)v27 + 0x18) == 0xFFFFFFFF ) /*0x512462*/
              sub_5672A0(*(TESPackage **)v27); /*0x512464*/
            z = v13->member.rot.z; /*0x512477*/
            v25 = (_DWORD *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))v13->vtbl->GetPos)( /*0x51247c*/
                              v13,
                              st7_0,
                              st6_0);
            ParentCell = Shared_GetDwordAtOffset40(v13); /*0x512484*/
            WorldSpace = TESObjectREFR_GetWorldSpace(v13); /*0x512487*/
            TESObjectREFR_SetStartLocation(v13, (BSExtraDataVtbl *)WorldSpace, (BSExtraDataVtbl *)ParentCell, v25, z);// 3DTheft decode: AddScriptPackage records ExtraStartingPosition for the actor via TESObjectREFR::RecordStartLocation before package handoff. /*0x51248f*/
            sub_5660C0(*(_DWORD **)v27, 1);     // 3DTheft decode: AddScriptPackage sets package flag 0x4000 through TESPackage_SetScriptPackageFlag before Actor_AddPackage_. /*0x51249a*/
            Actor_AddPackage_((Actor *)v13, *(TESPackage **)v27, 0, 0);// 3DTheft decode: AddScriptPackage hands off with Actor_AddPackage_(actor, package, setCurrent=0, markDynamic=0). Use this for external script-style runtime package assignment. /*0x5124aa*/
            v17 = v13[1].vtbl;                  // 3DTheft decode: after Actor_AddPackage_, AddScriptPackage only enters the time/process refresh block for non-high process levels; high process level 0 does not call Actor::EvaluatePackage here. /*0x5124af*/
            if ( v17 ) /*0x5124b4*/
            {
              if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v17->super.super.InitializeComponent + 2))(v17) ) /*0x5124bb*/
              {
                v18 = v13[1].vtbl; /*0x5124c2*/
                v19 = (void (__thiscall *)(BaseFormComponent *))((char *)v18->super.super.InitializeComponent + 0x1C); /*0x5124cd*/
                TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x5124d0*/
                v20 = *(void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))v19; /*0x5124db*/
                v28 = st7_0 - dbl_A2F928; /*0x5124de*/
                v21 = v28; /*0x5124e4*/
                v20(v18, LODWORD(v28)); /*0x5124eb*/
                if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v13[1].vtbl->super.super.InitializeComponent + 2))(v13[1].vtbl) == 1 ) /*0x5124fc*/
                {
                  v22 = (*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>))v13[1].vtbl->super.super.InitializeComponent /*0x512506*/
                         + 2))(
                          v13[1].vtbl,
                          v21,
                          st6_0);
                  sub_674550((int)v13, v22); /*0x51250f*/
                  v23 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v13[1].vtbl->super.super.InitializeComponent + 2))(v13[1].vtbl); /*0x512522*/
                  ActorProcessManager_AddMobileObject((int)v13, v23, 0, 0, 0); /*0x51252b*/
                }
              }
            }
          }
        }
      }
    }
    return 1; /*0x512530*/
  }
  return result; /*0x5123e0*/
}
