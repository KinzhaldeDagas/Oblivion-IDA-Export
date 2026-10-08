// Actor::EvaluatePackage. After current package changes, resets/evaluates actor AI state through sub_5EAE70 and process callbacks; plugin calls this after assigning runtime packages.
double __usercall EvaluatePackage@<st0>(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        int ebp0@<ebp>,
        int a4@<edi>,
        double result@<st0>,
        double a6@<st2>,
        double a7@<st1>)
{                                               // 3DTheft 2026-05-17: Actor::EvaluatePackage entry is gated while current package type is 0x12 Dialogue.
  int v8; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v10; // eax
  char v11; // al
  TESObjectREFRVtbl *v12; // ecx
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // edi
  float *v14; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  int v16; // eax
  TESObjectCELL *v17; // eax
  int v18; // eax
  int v19; // eax
  TESObjectREFRVtbl *v20; // ecx
  int v21; // ebx
  TESForm *v22; // eax
  BSExtraDataVtbl *v23; // ecx
  BSExtraDataVtbl *v24; // edi
  void (__thiscall *v25)(BaseFormComponent *, BaseFormComponent *); // eax
  SitSleep v26; // eax
  int v27; // edi
  ActorAnimData *v28; // eax
  ActorAnimData *v29; // ebp
  NiObjectNET *v30; // ebx
  signed int v31; // ebp
  ActorAnimData *v32; // eax
  ActorAnimData *v33; // edi
  void (__thiscall *v34)(BaseFormComponent *, BaseFormComponent *); // eax
  void *v35; // eax
  char v36; // al
  Actor *v37; // eax
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edi
  void (__thiscall *v39)(BaseFormComponent *, BaseFormComponent *); // eax
  Atmosphere *v40; // ecx
  void (__thiscall *v41)(BaseFormComponent *); // edi
  NiAVObject *PointerAtOffset08; // eax
  float *v43; // [esp+24h] [ebp-28h]
  float *v44; // [esp+24h] [ebp-28h]
  float a3; // [esp+28h] [ebp-24h]
  float a3a; // [esp+28h] [ebp-24h]
  float *v47; // [esp+2Ch] [ebp-20h]
  float *v48; // [esp+2Ch] [ebp-20h]
  float a5; // [esp+30h] [ebp-1Ch]
  float a5a; // [esp+30h] [ebp-1Ch]
  int v51; // [esp+38h] [ebp-14h]
  int easeOutTimea; // [esp+3Ch] [ebp-10h]
  char v54; // [esp+44h] [ebp-8h]
  char v55; // [esp+48h] [ebp-4h]
  float v56; // [esp+48h] [ebp-4h]
  bhkCharacterProxy *CharProxy; // [esp+54h] [ebp+8h]

  if ( (!a1[1].vtbl /*0x601bb3*/
     || (v8 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl)) == 0
     || *(_BYTE *)(v8 + 0x20) != 0x12)
    && !a1->vtbl->IsDead(a1, 1) )
  {
    vtbl = a1[1].vtbl; /*0x601bbd*/
    if ( !vtbl ) /*0x601bc3*/
      goto LABEL_62; /*0x601bc3*/
    v10 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x61))(vtbl); /*0x601bd1*/
    if ( !v10 /*0x601bf8*/
      || (v11 = *(_BYTE *)(v10 + 0x20), v11 != 0x17)
      && v11 != 0x1E
      && (v11 != 0x18 || !((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1)) )
    {
      v12 = a1[1].vtbl; /*0x601c02*/
      CopyFromBase = 0; /*0x601c05*/
      if ( v12->super.super.CopyFromBase ) /*0x601c07*/
      {
        (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, double@<st0>, double@<st1>, double@<st2>))v12->super.super.InitializeComponent /*0x601c19*/
         + 0x2E))(
          v12,
          a1,
          result,
          a7,
          a6);
        CopyFromBase = a1[1].vtbl->super.super.CopyFromBase; /*0x601c1e*/
        if ( sub_565DC0(CopyFromBase) ) /*0x601c23*/
        {
          a5 = flt_A5B6C0; /*0x601c43*/
          v14 = a1->vtbl->GetPos(a1); /*0x601c46*/
          result = flt_A5B6C0; /*0x601c48*/
          v47 = v14; /*0x601c50*/
          a3 = flt_A5B6C0; /*0x601c5a*/
          v43 = a1->vtbl->GetPos(a1); /*0x601c5f*/
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x601c62*/
          sub_446B90( /*0x601c6e*/
            DwordAtOffset40,
            v43,
            a3,
            v47,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor,
            (int)a1);
        }
        if ( sub_565DB0(CopyFromBase) ) /*0x601c75*/
        {
          a5a = flt_A5B6C0; /*0x601c95*/
          v16 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetPos)( /*0x601c98*/
                  a1,
                  result,
                  a7,
                  a6);
          result = flt_A5B6C0; /*0x601c9a*/
          v48 = (float *)v16; /*0x601ca2*/
          a3a = flt_A5B6C0; /*0x601cac*/
          v44 = a1->vtbl->GetPos(a1); /*0x601cb1*/
          v17 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x601cb4*/
          sub_446B90( /*0x601cc0*/
            v17,
            v44,
            a3a,
            v48,
            a5a,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
            (int)a1);
        }
      }
      if ( (*((unsigned __int8 (__usercall **)@<al>(TESObjectREFRVtbl *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a1[1].vtbl->super.super.InitializeComponent /*0x601cd0*/
            + 0x92))(
             a1[1].vtbl,
             a4,
             result,
             a7,
             a6) )
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x33))(a1[1].vtbl) ) /*0x601ce1*/
        {
          v18 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x33))(a1[1].vtbl); /*0x601cf2*/
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 0x190))(v18) ) /*0x601cfe*/
          {
            v19 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x33))(a1[1].vtbl); /*0x601d0f*/
            if ( v19 ) /*0x601d13*/
              sub_424D00((ExtraDataList *)(v19 + 0x44), (int)a1); /*0x601d19*/
          }
        }
      }
      sub_5EAE70((Actor *)a1, a2, (int)CopyFromBase, a2);// 3DTheft decode 2026-05-18: Actor::EvaluatePackage reaches package reset/cleanup sub_5EAE70. Do not use as a generic path-refresh when only Follow movement should continue. /*0x601d21*/
      v20 = a1[1].vtbl; /*0x601d26*/
      v21 = (int)v20->super.super.CopyFromBase; /*0x601d29*/
      if ( v21 ) /*0x601d2e*/
      {
        if ( !sub_5660B0((_DWORD *)v20->super.super.CopyFromBase) ) /*0x601d35*/
          a1[1].vtbl->super.super.CopyFromBase = 0; /*0x601d41*/
      }
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent + 0xF0))( /*0x601d54*/
        a1[1].vtbl,
        a1);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0xE5))( /*0x601d63*/
        a1[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))a1[1].vtbl->super.super.InitializeComponent + 6))( /*0x601d70*/
        a1[1].vtbl,
        a1,
        1);
      if ( a1[1].vtbl->super.super.CopyFromBase != CopyFromBase ) /*0x601d78*/
        result = Script_AddEventToExtraScript(CopyFromBase, &a1->member.baseExtraList, 0x800); /*0x601d84*/
      if ( v21 ) /*0x601d8e*/
      {
        if ( *(_BYTE *)(v21 + 0x20) == 4 /*0x601dac*/
          || (*(_DWORD *)(v21 + 0x1C) & 0x100000) != 0
          || (*(_DWORD *)(v21 + 0x1C) & 0x200000) != 0 )
        {
          v22 = a1->vtbl->GetBaseForm(a1); /*0x601dbc*/
          v23 = 0; /*0x601dc2*/
          v24 = 0; /*0x601dc4*/
          if ( v22->member.type == kFormType_NPC ) /*0x601dc9*/
          {
            v23 = (BSExtraDataVtbl *)v22; /*0x601dd4*/
          }
          else if ( v22->member.type == kFormType_Creature ) /*0x601dce*/
          {
            v24 = (BSExtraDataVtbl *)v22; /*0x601dd0*/
          }
          v25 = a1[1].vtbl->super.super.CopyFromBase; /*0x601dd9*/
          v55 = 1; /*0x601dde*/
          v54 = 1; /*0x601de3*/
          if ( !v25 || (*((_DWORD *)v25 + 7) & 0x100000) != 0 ) /*0x601df3*/
            v55 = 0; /*0x601df5*/
          if ( !v25 || (*((_DWORD *)v25 + 7) & 0x200000) != 0 ) /*0x601e06*/
            v54 = 0; /*0x601e08*/
          if ( v23 ) /*0x601e0f*/
          {
            sub_5227A0(v23, a6, a7, result, a1, v55, v54, 0, 1); /*0x601e20*/
          }
          else if ( v24 ) /*0x601e29*/
          {
            sub_51E240(v24, v21, a6, a7, result, a1, v55, v54, 1); /*0x601e3a*/
          }
        }
      }
      if ( a1[1].vtbl ) /*0x601e3f*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent + 0x65))( /*0x601e51*/
          a1[1].vtbl,
          a1);
      v26 = a1->vtbl->GetSleepState(a1); /*0x601e5d*/
      switch ( v26 ) /*0x601e61*/
      {
        case kSitSleep_None: /*0x601e61*/
          goto LABEL_62; /*0x601e61*/
        case kSitSleep_Sitting: /*0x601e61*/
          if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) ) /*0x601f8a*/
          {
            v34 = a1[1].vtbl->super.super.CopyFromBase; /*0x601f93*/
            if ( !v34 || (*((_DWORD *)v34 + 7) & 0x800000) == 0 ) /*0x601fa3*/
            {
              v35 = (void *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl[2].super.Unk_0C)( /*0x601faf*/
                              a1,
                              result,
                              a7,
                              a6);
              result = sub_5E9A60(v35, result); /*0x601fb3*/
              if ( !v36 ) /*0x601fba*/
              {
                v37 = (Actor *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl[2].super.Unk_0C)( /*0x601fc6*/
                                 a1,
                                 result,
                                 a7,
                                 a6);
                sub_5F80D0(v37); /*0x601fca*/
              }
              a1->vtbl[1].super.Unk_22((TESForm *)a1); /*0x601fd7*/
              goto LABEL_62; /*0x601fd7*/
            }
          }
          break;
        case kSitSleep_Sleeping: /*0x601e61*/
          break;
        default:
          if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, int, double@<st0>, double@<st1>, double@<st2>))a1->vtbl[2].super.Unk_0C)( /*0x601e83*/
                 a1,
                 v51,
                 easeOutTimea,
                 result,
                 a7,
                 a6) )
          {
            v27 = ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[2].super.Unk_0C)(a1, ebp0); /*0x601e9a*/
            v28 = (ActorAnimData *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 0x164))(v27); /*0x601ea6*/
            v29 = v28; /*0x601ea8*/
            if ( v28 ) /*0x601eac*/
            {
              result = 0.0; /*0x601eae*/
              ActorAnimData_ClearSlot(v28, 5, 0.0); /*0x601eb8*/
              ActorAnimData_CleanupOrPromoteQueuedIdles(v29, 1, 0); /*0x601ec3*/
            }
            sub_5E13D0(a1, 0); /*0x601ecc*/
            v30 = (NiObjectNET *)a1->vtbl->GetNiNode(a1); /*0x601edf*/
            CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x601ee6*/
            v31 = sub_531D80(); /*0x601ef3*/
            sub_5EA350(CharProxy, v31); /*0x601ef6*/
            sub_88D0E0(v30, v31, 1, 0); /*0x601f01*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 0x38C))(v27, 0); /*0x601f15*/
            ((void (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl[2].super.Unk_0D)(a1, 0); /*0x601f23*/
          }
          sub_65AC20((MobileObject *)a1, 0); /*0x601f2a*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))a1[1].vtbl->super.super.InitializeComponent /*0x601f41*/
           + 0xDC))(
            a1[1].vtbl,
            a1,
            0);
          Actor_SetCurrentActionWithBowVisualCleanup((Actor *)a1, kActorCurrentAction_None, 0); /*0x601f49*/
          v32 = a1->vtbl->GetAnimData(a1); /*0x601f58*/
          v33 = v32; /*0x601f5a*/
          if ( v32 ) /*0x601f5e*/
          {
            ActorAnimData_ClearSlot(v32, 5, 0.0); /*0x601f6e*/
            ActorAnimData_CleanupOrPromoteQueuedIdles(v33, 1, 0); /*0x601f79*/
          }
          goto LABEL_62; /*0x601f7e*/
      }
      a1->vtbl[1].Unk_5E(a1); /*0x601fe3*/
LABEL_62:
      if ( a1[1].vtbl ) /*0x601fe6*/
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 2))(a1[1].vtbl) ) /*0x601ff4*/
        {
          InitializeComponent = a1[1].vtbl->super.super.InitializeComponent; /*0x601ffd*/
          TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x602004*/
          v56 = result - dbl_A2F928; /*0x602016*/
          result = v56; /*0x60201a*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))InitializeComponent + 7))(a1[1].vtbl, LODWORD(v56)); /*0x602021*/
        }
      }
      v39 = a1[1].vtbl->super.super.CopyFromBase; /*0x602026*/
      if ( v39 ) /*0x60202b*/
      {
        v40 = *((Atmosphere **)v39 + 0xA); /*0x60202d*/
        if ( v40 ) /*0x602032*/
        {
          v41 = a1[1].vtbl->super.super.InitializeComponent; /*0x602037*/
          PointerAtOffset08 = Shared_GetPointerAtOffset08(v40); /*0x602039*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *, NiAVObject *))v41 + 0x40))(a1[1].vtbl, PointerAtOffset08); /*0x602048*/
        }
      }
    }
  }
  return result; /*0x60204b*/
}
