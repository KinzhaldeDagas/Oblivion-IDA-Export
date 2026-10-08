// Verified enable-state activation: this branch runs when the reference's 0x800 disabled bit is set, performs activation/processing work, then clears the bit through TESForm_SetDisabledFlag. It recursively propagates state through ExtraEnableStateChildren.
void __usercall sub_4DD850(
        int a1@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  TESObjectREFR *v7; // edi
  LowProcess *v8; // eax
  LowProcess *v9; // eax
  int v10; // eax
  signed int v11; // eax
  BSExtraDataVtbl *Light; // eax
  void (__thiscall *Destructor)(BSExtraData *); // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  double v16; // st7
  double v17; // st7
  BSExtraData *i; // esi
  int v19; // edi
  void (__thiscall *v20)(BSExtraData *); // [esp+2Ch] [ebp-20h]

  if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 ) /*0x4dd87d*/
  {
    (*(void (__usercall **)(int@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x90))( /*0x4dd88d*/
      a1,
      1,
      a6,
      a5,
      a4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x40))(a1, 0x40000000); /*0x4dd89b*/
    TESForm_SetDisabledFlag((TESForm *)a1, 0); /*0x4dd8a1*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4dd8b0*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x184))(a1, 1); /*0x4dd8c2*/
    v7 = 0; /*0x4dd8ce*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x188))(a1) ) /*0x4dd8d0*/
    {
      v7 = (TESObjectREFR *)a1; /*0x4dd8da*/
      if ( !*(_DWORD *)(a1 + 0x58) ) /*0x4dd8d6*/
      {
        v8 = (LowProcess *)FormHeapAlloc(0x90u); /*0x4dd8e3*/
        if ( v8 ) /*0x4dd8f9*/
          v9 = LowProcess::LowProcess(v8); /*0x4dd8fd*/
        else
          v9 = 0; /*0x4dd904*/
        *(_DWORD *)(a1 + 0x58) = v9; /*0x4dd91c*/
        ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], (MobileObject *)a1, 3, 0, 0, 0); /*0x4dd91f*/
      }
    }
    v10 = *(_DWORD *)(a1 + 0x40); /*0x4dd924*/
    if ( v10 ) /*0x4dd929*/
    {
      if ( *(_BYTE *)(v10 + 0x26) == 6 /*0x4dd954*/
        && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1)
        && !sub_4354F0(MEMORY[0xB33A1C], a1) )
      {
        if ( v7 ) /*0x4dd963*/
        {
          if ( v7->vtbl->IsActor(v7) ) /*0x4dd96f*/
            v7->vtbl->MoveToHigh(v7); /*0x4dd97f*/
        }
        sub_4D9310((char *)a1, 1); /*0x4dd985*/
        if ( (*(_DWORD *)(a1 + 8) & 0x20) == 0 ) /*0x4dd993*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) ) /*0x4dd99f*/
          {
            if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x1A /*0x4dd9cb*/
              || *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x12
              || !sub_4364E0((int *)a1) )
            {
              v11 = sub_440C80(MEMORY[0xB333A0], *(TESObjectCELL **)(a1 + 0x40), 0); /*0x4dd9e0*/
              sub_438060((_DWORD **)MEMORY[0xB33A1C], (TESObjectREFR *)a1, v11); /*0x4dd9ed*/
            }
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1) ) /*0x4dd9fc*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) ) /*0x4dda0c*/
          {
            if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x1A ) /*0x4dda22*/
            {
              Light = ExtraDataList_GetLight((ExtraDataList *)(a1 + 0x44)); /*0x4dda27*/
              if ( Light ) /*0x4dda2e*/
              {
                Destructor = Light->Destructor; /*0x4dda30*/
                if ( Destructor ) /*0x4dda34*/
                {
                  v20 = Destructor; /*0x4dda36*/
                  ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4dda39*/
                  ShadowSceneNode_UpdateOrClearSourceLight(ShadowSceneNode, v20); /*0x4dda43*/
                }
              }
            }
          }
        }
      }
    }
    if ( v7 ) /*0x4dda4a*/
    {
      ((void (__thiscall *)(TESObjectREFR *))v7->vtbl[1].super.LoadForm)(v7); /*0x4dda56*/
      if ( v7->vtbl->IsActor(v7) ) /*0x4dda62*/
      {
        vtbl = v7[1].vtbl; /*0x4dda68*/
        if ( vtbl ) /*0x4dda6d*/
        {
          v16 = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *, int))*((_DWORD *)vtbl->super.super.InitializeComponent /*0x4dda77*/
                                                                                   + 5))(
                  vtbl,
                  v7,
                  1);
          a6 = EvaluatePackage(v7, a2, a3, (int)v7, v16, a4, a5); /*0x4dda7b*/
          if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v7[1].vtbl->super.super.InitializeComponent + 2))(v7[1].vtbl) ) /*0x4dda88*/
            a6 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))v7->vtbl[1].super.Unk_06)(v7, 0.0); /*0x4dda9e*/
        }
      }
    }
    v17 = sub_665260((TESObjectREFR *)reference, a6, (PlayerCharacter *)a1); /*0x4ddaa7*/
    for ( i = ExtraDataList_GetEnableStateChildren((ExtraDataList *)(a1 + 0x44)); i; i = *(BSExtraData **)&i->members.type ) /*0x4ddab8*/
    {
      if ( !*(_DWORD *)&i->members.type && !i->vtbl ) /*0x4ddac6*/
        break; /*0x4ddac9*/
      v19 = (int)i->vtbl; /*0x4ddacb*/
      if ( ExtraDataList_IsEnableStateInverse((ExtraDataList *)&i->vtbl[8].CompareTo) ) /*0x4ddad0*/
        sub_4E4690(v19, a2, a3, (int)i, a4, a5, v17); /*0x4ddadb*/
      else
        sub_4DD850(v19, a2, a3, a4, a5, v17); /*0x4ddae2*/
    }
  }
}
