double __usercall EvaluatePackage@<st0>(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        int ebp0@<ebp>,
        int a4@<edi>,
        double result@<st0>,
        double a6@<st2>,
        double a7@<st1>)
{
  int v8; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v10; // eax
  char v11; // al
  TESObjectREFRVtbl *v12; // ecx
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // edi
  float *v14; // eax
  TESObjectCELL *ParentCell; // eax
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
  NiNode *v30; // ebx
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
  NiAVObject *v42; // eax
  float *v43; // [esp+24h] [ebp-28h]
  float *v44; // [esp+24h] [ebp-28h]
  float a3; // [esp+28h] [ebp-24h]
  float a3a; // [esp+28h] [ebp-24h]
  float *v47; // [esp+2Ch] [ebp-20h]
  float *v48; // [esp+2Ch] [ebp-20h]
  float a5; // [esp+30h] [ebp-1Ch]
  float a5a; // [esp+30h] [ebp-1Ch]
  int v51; // [esp+38h] [ebp-14h]
  int v53; // [esp+3Ch] [ebp-10h]
  char v54; // [esp+44h] [ebp-8h]
  char v55; // [esp+48h] [ebp-4h]
  float v56; // [esp+48h] [ebp-4h]
  bhkCharacterProxy *CharProxy; // [esp+54h] [ebp+8h]

  if ( (!a1[1].vtbl
     || (v8 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x61))(a1[1].vtbl)) == 0
     || *(_BYTE *)(v8 + 0x20) != 0x12)
    && !a1->vtbl->IsDead(a1, 1) )
  {
    vtbl = a1[1].vtbl;
    if ( !vtbl )
      goto LABEL_62;
    v10 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x61))(vtbl);
    if ( !v10
      || (v11 = *(_BYTE *)(v10 + 0x20), v11 != 0x17)
      && v11 != 0x1E
      && (v11 != 0x18 || !((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1)) )
    {
      v12 = a1[1].vtbl;
      CopyFromBase = 0;
      if ( v12->super.super.CopyFromBase )
      {
        (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, TESObjectREFR *, double@<st0>, double@<st1>, double@<st2>))v12->super.super.InitializeComponent
         + 0x2E))(
          v12,
          a1,
          result,
          a7,
          a6);
        CopyFromBase = a1[1].vtbl->super.super.CopyFromBase;
        if ( sub_565DC0(CopyFromBase) )
        {
          a5 = flt_A5B6C0;
          v14 = a1->vtbl->GetPos(a1);
          result = flt_A5B6C0;
          v47 = v14;
          a3 = flt_A5B6C0;
          v43 = a1->vtbl->GetPos(a1);
          ParentCell = TESObjectREFR_GetParentCell(a1);
          sub_446B90(
            ParentCell,
            v43,
            a3,
            v47,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0,
            (int)a1);
        }
        if ( sub_565DB0(CopyFromBase) )
        {
          a5a = flt_A5B6C0;
          v16 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetPos)(
                  a1,
                  result,
                  a7,
                  a6);
          result = flt_A5B6C0;
          v48 = (float *)v16;
          a3a = flt_A5B6C0;
          v44 = a1->vtbl->GetPos(a1);
          v17 = TESObjectREFR_GetParentCell(a1);
          sub_446B90(v17, v44, a3a, v48, a5a, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30, (int)a1);
        }
      }
      if ( (*((unsigned __int8 (__usercall **)@<al>(TESObjectREFRVtbl *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a1[1].vtbl->super.super.InitializeComponent
            + 0x92))(
             a1[1].vtbl,
             a4,
             result,
             a7,
             a6) )
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x33))(a1[1].vtbl) )
        {
          v18 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x33))(a1[1].vtbl);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 0x190))(v18) )
          {
            v19 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x33))(a1[1].vtbl);
            if ( v19 )
              sub_424D00((ExtraDataList *)(v19 + 0x44), (int)a1);
          }
        }
      }
      sub_5EAE70((Actor *)a1, a2, (int)CopyFromBase, a2);
      v20 = a1[1].vtbl;
      v21 = (int)v20->super.super.CopyFromBase;
      if ( v21 )
      {
        if ( !sub_5660B0((_DWORD *)v20->super.super.CopyFromBase) )
          a1[1].vtbl->super.super.CopyFromBase = 0;
      }
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent + 0xF0))(
        a1[1].vtbl,
        a1);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0xE5))(
        a1[1].vtbl,
        0);
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))a1[1].vtbl->super.super.InitializeComponent + 6))(
        a1[1].vtbl,
        a1,
        1);
      if ( a1[1].vtbl->super.super.CopyFromBase != CopyFromBase )
        result = Script_AddEventToExtraScript(CopyFromBase, &a1->member.baseExtraList, 0x800);
      if ( v21 )
      {
        if ( *(_BYTE *)(v21 + 0x20) == 4
          || (*(_DWORD *)(v21 + 0x1C) & 0x100000) != 0
          || (*(_DWORD *)(v21 + 0x1C) & 0x200000) != 0 )
        {
          v22 = a1->vtbl->GetBaseForm(a1);
          v23 = 0;
          v24 = 0;
          if ( v22->member.type == kFormType_NPC )
          {
            v23 = (BSExtraDataVtbl *)v22;
          }
          else if ( v22->member.type == kFormType_Creature )
          {
            v24 = (BSExtraDataVtbl *)v22;
          }
          v25 = a1[1].vtbl->super.super.CopyFromBase;
          v55 = 1;
          v54 = 1;
          if ( !v25 || (*((_DWORD *)v25 + 7) & 0x100000) != 0 )
            v55 = 0;
          if ( !v25 || (*((_DWORD *)v25 + 7) & 0x200000) != 0 )
            v54 = 0;
          if ( v23 )
          {
            sub_5227A0(v23, a6, a7, result, a1, v55, v54, 0, 1);
          }
          else if ( v24 )
          {
            sub_51E240(v24, v21, a6, a7, result, a1, v55, v54, 1);
          }
        }
      }
      if ( a1[1].vtbl )
        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent + 0x65))(
          a1[1].vtbl,
          a1);
      v26 = a1->vtbl->GetSleepState(a1);
      switch ( v26 )
      {
        case kSitSleep_None:
          goto LABEL_62;
        case kSitSleep_Sitting:
          if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) )
          {
            v34 = a1[1].vtbl->super.super.CopyFromBase;
            if ( !v34 || (*((_DWORD *)v34 + 7) & 0x800000) == 0 )
            {
              v35 = (void *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl[2].super.Unk_0C)(
                              a1,
                              result,
                              a7,
                              a6);
              result = sub_5E9A60(v35, result);
              if ( !v36 )
              {
                v37 = (Actor *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl[2].super.Unk_0C)(
                                 a1,
                                 result,
                                 a7,
                                 a6);
                sub_5F80D0(v37);
              }
              a1->vtbl[1].super.Unk_22((TESForm *)a1);
              goto LABEL_62;
            }
          }
          break;
        case kSitSleep_Sleeping:
          break;
        default:
          if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, int, double@<st0>, double@<st1>, double@<st2>))a1->vtbl[2].super.Unk_0C)(
                 a1,
                 v51,
                 v53,
                 result,
                 a7,
                 a6) )
          {
            v27 = ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[2].super.Unk_0C)(a1, ebp0);
            v28 = (ActorAnimData *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 0x164))(v27);
            v29 = v28;
            if ( v28 )
            {
              result = 0.0;
              sub_470FC0(v28, 5, 0.0);
              sub_475440(v29, 1, 0);
            }
            sub_5E13D0(a1, 0);
            v30 = a1->vtbl->GetNiNode(a1);
            CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
            v31 = sub_531D80();
            sub_5EA350(CharProxy, v31);
            sub_88D0E0(v30, v31, 1, 0);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 0x38C))(v27, 0);
            ((void (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl[2].super.Unk_0D)(a1, 0);
          }
          sub_65AC20(a1, 0);
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))a1[1].vtbl->super.super.InitializeComponent
           + 0xDC))(
            a1[1].vtbl,
            a1,
            0);
          HighPRocess_DoAction_____((PlayerCharacter *)a1, 0xFFFFFFFF, 0);
          v32 = a1->vtbl->GetAnimData(a1);
          v33 = v32;
          if ( v32 )
          {
            sub_470FC0(v32, 5, 0.0);
            sub_475440(v33, 1, 0);
          }
          goto LABEL_62;
      }
      a1->vtbl[1].Unk_5E(a1);
LABEL_62:
      if ( a1[1].vtbl )
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 2))(a1[1].vtbl) )
        {
          InitializeComponent = a1[1].vtbl->super.super.InitializeComponent;
          TimeGlobals_GetGameHour(&TimeGlobals);
          v56 = result - dbl_A2F928;
          result = v56;
          (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))InitializeComponent + 7))(a1[1].vtbl, LODWORD(v56));
        }
      }
      v39 = a1[1].vtbl->super.super.CopyFromBase;
      if ( v39 )
      {
        v40 = *((Atmosphere **)v39 + 0xA);
        if ( v40 )
        {
          v41 = a1[1].vtbl->super.super.InitializeComponent;
          v42 = sub_452A60(v40);
          (*((void (__thiscall **)(TESObjectREFRVtbl *, NiAVObject *))v41 + 0x40))(a1[1].vtbl, v42);
        }
      }
    }
  }
  return result;
}
