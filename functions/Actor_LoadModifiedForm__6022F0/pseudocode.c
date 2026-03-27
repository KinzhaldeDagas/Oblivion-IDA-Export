void __userpurge Actor_LoadModifiedForm(
        PlayerCharacter *ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6)
{
  int v7; // eax
  BSExtraDataVtbl *v8; // edi
  BSExtraDataVtbl *v9; // ebx
  LowProcess *process; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  int v15; // edi
  UInt32 DeadState; // ebp
  char v17; // bl
  TESSaveLoad *v18; // ecx
  UInt32 *v19; // edi
  TESForm *v20; // eax
  const char *v21; // eax
  TESSaveLoad *v22; // ecx
  TESForm::ModReferenceList *v23; // eax
  char refID; // al
  int v25; // eax
  TESSaveLoad *v26; // ecx
  int v27; // ebp
  int v28; // eax
  int v29; // edi
  DispositionModifier **v30; // eax
  bool v31; // cf
  TESForm::ModReferenceList *next; // ebp
  TESForm::ModReferenceList *v33; // eax
  bool v34; // zf
  LowProcess *v35; // ecx
  TESSaveLoad *v36; // ecx
  int v37; // ebx
  int v38; // edi
  PowerListEntry *v39; // eax
  TESForm *v40; // eax
  TESSaveLoad *v41; // ecx
  UInt32 *v42; // edi
  UInt32 v43; // esi
  TESForm *v44; // ecx
  unsigned int v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  unsigned int v48; // edi
  int v49; // [esp-14h] [ebp-68h]
  int v50; // [esp-14h] [ebp-68h]
  size_t v51; // [esp-10h] [ebp-64h]
  size_t v52; // [esp-10h] [ebp-64h]
  size_t v53; // [esp-10h] [ebp-64h]
  size_t v54; // [esp-10h] [ebp-64h]
  size_t v55; // [esp-10h] [ebp-64h]
  int v56; // [esp-10h] [ebp-64h]
  int v57; // [esp-10h] [ebp-64h]
  size_t v58; // [esp-8h] [ebp-5Ch]
  size_t v59; // [esp+0h] [ebp-54h]
  size_t v60; // [esp+0h] [ebp-54h]
  size_t v61; // [esp+8h] [ebp-4Ch]
  size_t v62; // [esp+10h] [ebp-44h]
  size_t v63; // [esp+10h] [ebp-44h]
  _BYTE v64[12]; // [esp+18h] [ebp-3Ch]
  size_t v65; // [esp+1Ch] [ebp-38h]
  size_t Dst; // [esp+24h] [ebp-30h] BYREF
  size_t a1; // [esp+2Ch] [ebp-28h] BYREF
  TESForm v68; // [esp+34h] [ebp-20h] BYREF
  int v69; // [esp+4Ch] [ebp-8h] BYREF
  int v70; // [esp+50h] [ebp-4h] BYREF

  if ( (a6 & 0x28000000) != 0 && (a5 & 0x28000000) == 0 )
  {
    v7 = (int)ecx0->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)ecx0);
    v8 = 0;
    v9 = 0;
    if ( *(_BYTE *)(v7 + 4) == 0x23 )
    {
      v8 = (BSExtraDataVtbl *)v7;
    }
    else if ( *(_BYTE *)(v7 + 4) == 0x24 )
    {
      v9 = (BSExtraDataVtbl *)v7;
    }
    process = ecx0->super.super.super.process;
    LOBYTE(v68.member.refID) = 1;
    LOBYTE(v68.member.modlist.data) = 1;
    if ( process )
    {
      v11 = (int)process->GetCurrentPackage(process);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 0x1C);
        LOBYTE(v68.member.refID) = (v12 & 0x100000) == 0;
        LOBYTE(v68.member.modlist.data) = (v12 & 0x200000) == 0;
      }
    }
    if ( v8 )
    {
      sub_5227A0(v8, a2, a3, a4, (TESObjectREFR *)ecx0, v68.member.refID, (char)v68.member.modlist.data, 0, 1);
    }
    else if ( v9 )
    {
      sub_51E240(v9, (int)v9, a2, a3, a4, (TESObjectREFR *)ecx0, v68.member.refID, (char)v68.member.modlist.data, 1);
    }
  }
  v69 = a5 & 0x40;
  if ( (a5 & 0x40) == 0 && (a6 & 0x40) != 0 )
  {
    v13 = 0;
    v14 = (int)ecx0->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)ecx0);
    if ( v14 )
    {
      if ( ecx0->vtbl->super.super.super.IsActor((TESObjectREFR *)ecx0) )
        v13 = v14;
    }
    v34 = (*(_DWORD *)(v13 + 8) & 0x80000) == 0;
    LODWORD(a1) = 0;
    if ( v34 )
    {
      Actor_HandleDeathSTate____((Actor *)ecx0, a1);
      LOBYTE(ecx0->super.super.unk0B4[3]) = 0;
      sub_5F87F0((TESObjectREFR *)ecx0);
    }
    else
    {
      sub_4DE100(ecx0, (BSExtraDataVtbl *)a1);
    }
  }
  v15 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  DeadState = ecx0->super.super.DeadState;
  v17 = ecx0->super.super.unk0B4[3];
  LODWORD(a1) = a6;
  HIDWORD(Dst) = a5;
  *(_BYTE *)(v15 + 0x184) = 1;
  MobileObject_LoadModifiedForm(HIDWORD(Dst), a1);
  *(_BYTE *)(v15 + 0x184) = 0;
  v68.member.modlist.data = 0;
  v68.member.modlist.next = 0;
  if ( sub_45A170() )
  {
    v18 = SaveLoad_CurrentSavegame;
    LODWORD(a1) = 4;
    SaveLoad_LoadData((int)v18, &v70, a1);
    if ( v70 != 0x4B4F4C42 )
    {
      v19 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v19 )
      {
        v20 = TESForm_LookupByFormID(*v19);
        v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v20->vtbl->GetEditorName)(
                              v20,
                              *((unsigned __int8 *)v19 + 9),
                              *(UInt32 *)((char *)v19 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\Actor.cpp",
          0x4403,
          *v19,
          v21,
          HIDWORD(Dst),
          (_DWORD)a1);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\Actor.cpp",
          0x4403,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v22 = SaveLoad_CurrentSavegame;
    v23 = (TESForm::ModReferenceList *)SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(a1) = 2;
    v68.member.modlist.next = v23;
    SaveLoad_LoadData((int)v22, &v68.member.modlist, a1);
  }
  LODWORD(a1) = 4;
  HIDWORD(Dst) = &ecx0->super.super.unk0B4[2];
  ecx0->super.super.DeadState = DeadState;
  LOBYTE(ecx0->super.super.unk0B4[3]) = v17;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)HIDWORD(Dst), a1);
  LODWORD(a1) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk0B4[5], a1);
  LODWORD(a1) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&ecx0->super.super.unk0B4[5] + 1), a1);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x25u )
  {
    LODWORD(a1) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk070[2], a1);
  }
  if ( v69 )
  {
    LODWORD(a1) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v68.member.refID, a1);
    refID = v68.member.refID;
    if ( ecx0->super.super.DeadState != LOBYTE(v68.member.refID) )
    {
      ecx0->super.super.DeadState = LOBYTE(v68.member.refID);
      if ( refID != 2 && refID != 1 && refID != 6 && (DeadState == 2 || DeadState == 1 || DeadState == 6) )
      {
        sub_5F87F0((TESObjectREFR *)ecx0);
        LOBYTE(ecx0->super.super.unk0B4[3]) = 0;
      }
    }
  }
  if ( ecx0->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)ecx0)->member.type == kFormType_Creature )
  {
    v25 = (int)ecx0->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)ecx0);
    if ( v25 )
    {
      if ( *(_BYTE *)(v25 + 0x104) == 4 )
      {
        LODWORD(a1) = 1;
        v69 = 0;
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v68.member.refID, a1);
        if ( LOBYTE(v68.member.refID) )
        {
          LODWORD(a1) = 4;
          TESForm_LoadFormIDFromCurrentSaveGame(
            (TESForm *)&v69,
            a1,
            (int)v68.vtbl,
            *(int *)&v68.member.type,
            v68.member.flags);
        }
        ecx0->super.super.horseOrRider = (Actor *)v68.member.modlist.data;
      }
    }
  }
  if ( (v70 & 0x8000) != 0 )
  {
    v26 = SaveLoad_CurrentSavegame;
    LODWORD(Dst) = 2;
    SaveLoad_LoadData((int)v26, &v68.member, Dst);
    v27 = 0;
    if ( *(_WORD *)&v68.member.type )
    {
      do
      {
        v28 = FormHeapAlloc(8u);
        LODWORD(Dst) = 4;
        v29 = v28;
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v68.member.modlist, Dst, a1, SHIDWORD(a1), (int)v68.vtbl);
        LODWORD(v65) = 4;
        *(_DWORD *)(v29 + 4) = v68.member.flags;
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)v29, v65);
        if ( ecx0->super.super.dispositionModifier )
        {
          v30 = (DispositionModifier **)FormHeapAlloc(8u);
          if ( v30 )
          {
            *v30 = ecx0->super.super.dispositionModifier;
            v30[1] = 0;
          }
          else
          {
            v30 = 0;
          }
          v30[1] = (DispositionModifier *)ecx0->super.super.unk0A8;
          ecx0->super.super.unk0A8 = (UInt32)v30;
        }
        v31 = ++v27 < (unsigned int)WORD2(a1);
        ecx0->super.super.dispositionModifier = (DispositionModifier *)v29;
      }
      while ( v31 );
    }
  }
  next = v68.member.modlist.next;
  if ( ((int)v68.member.modlist.next & 0x20000000) != 0 )
  {
    *(_DWORD *)&v64[4] = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v68.member.modlist.next, *(size_t *)&v64[4]);
    v33 = (TESForm::ModReferenceList *)sub_453A00(SaveLoad_CurrentSavegame, (int)ecx0);
    v34 = v68.member.modlist.next == v33;
  }
  else
  {
    v34 = (v69 & 0x20000000) == 0;
  }
  if ( !v34 )
  {
    v35 = ecx0->super.super.super.process;
    if ( v35 )
    {
      *(_DWORD *)&v64[4] = 1;
      v35->SetUnk16C(v35);
    }
  }
  v36 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x14u )
  {
    *(_DWORD *)v64 = 2;
    SaveLoad_LoadData((int)v36, &v68.member.modlist, *(size_t *)v64);
    v37 = 0;
    if ( LOWORD(v68.member.modlist.data) )
    {
      do
      {
        v38 = FormHeapAlloc(8u);
        *(_DWORD *)v64 = 4;
        TESForm_LoadFormIDFromCurrentSaveGame(
          (TESForm *)&v68.member.modlist.next,
          *(size_t *)v64,
          *(int *)&v64[8],
          Dst,
          SHIDWORD(Dst));
        LODWORD(v63) = 4;
        *(_DWORD *)v38 = v68.member.refID;
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)(v38 + 4), v63);
        if ( ecx0->super.super.greaterPowerList.data )
        {
          v39 = (PowerListEntry *)FormHeapAlloc(8u);
          if ( v39 )
          {
            v39->data = ecx0->super.super.greaterPowerList.data;
            v39->next = 0;
          }
          else
          {
            v39 = 0;
          }
          v39->next = ecx0->super.super.greaterPowerList.next;
          ecx0->super.super.greaterPowerList.next = v39;
        }
        v31 = ++v37 < (unsigned int)LOWORD(v68.member.flags);
        ecx0->super.super.greaterPowerList.data = (PowerListData *)v38;
      }
      while ( v31 );
    }
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x32u )
  {
    LODWORD(v62) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame(
      (TESForm *)&v68.member.flags,
      v62,
      *(int *)v64,
      *(int *)&v64[4],
      *(int *)&v64[8]);
    ecx0->super.super.unk07C = (Actor *)v68.vtbl;
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x3Cu )
  {
    LODWORD(v61) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame(&v68, v61, v62, SHIDWORD(v62), *(int *)v64);
    if ( (_DWORD)a1 )
    {
      v40 = TESForm_LookupByFormID(a1);
      ecx0->super.super.templateForm = (TESForm *)OblivionDynamicCast(
                                                    v40,
                                                    0,
                                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                    &TESActorBase `RTTI Type Descriptor',
                                                    0);
    }
    else
    {
      ecx0->super.super.templateForm = 0;
    }
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( ecx0 == TESDataHandler_g_PlayerRef )
    byte_B3B77D = 0;
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x44u && ((unsigned int)next & 0x200000) != 0 )
  {
    AVCollection_Load(&ecx0->super.super.avModifiers.avList.entry);
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x45u )
  {
    LODWORD(v59) = 1;
    SaveLoad_LoadData((int)v36, ecx0->super.super.unk080, v59);
    LODWORD(v60) = 4;
    SaveLoad_LoadFormID(&a1, v60, v61, SHIDWORD(v61), v62);
    ecx0->super.super.unk0CC = (TESObjectREFR *)Dst;
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x61u )
  {
    LODWORD(v58) = 4;
    SaveLoad_LoadFormID(&Dst, v58, v59, SHIDWORD(v59), v61);
    ecx0->super.super.unk0E4 = *(Actor **)&v64[4];
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x65u )
  {
    LODWORD(v51) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk080[1], v51);
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v51) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk0AC, v51);
    LODWORD(v52) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&ecx0->super.super.unk0B4[5] + 2), v52);
    LODWORD(v53) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0->super.super.unk0D8, v53);
    LODWORD(v54) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk0D8[1], v54);
    LODWORD(v55) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk0E8[6], v55);
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x73u )
  {
    LODWORD(v51) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk0E8[5], v51);
    v36 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v36[1].createdObjectList.next) >= 0x7Bu )
  {
    LODWORD(v51) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&ecx0->super.super.unk0B4[3], v51);
  }
  if ( sub_45A170() )
  {
    v41 = SaveLoad_CurrentSavegame;
    v42 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v43 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v42 )
    {
      v44 = TESForm_LookupByFormID(*v42);
      v45 = HIDWORD(v61) + (unsigned __int16)v61;
      if ( v43 <= v45 )
      {
        if ( v43 < v45 )
        {
          v47 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v44->vtbl->GetEditorName)(
                                v44,
                                *((unsigned __int8 *)v42 + 9),
                                *(UInt32 *)((char *)v42 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            HIDWORD(v61) + (unsigned __int16)v61 - v43,
            ".\\AI\\Actor.cpp",
            0x44B8,
            *v42,
            v47,
            v50,
            v57);
        }
      }
      else
      {
        v46 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v44->vtbl->GetEditorName)(
                              v44,
                              *((unsigned __int8 *)v42 + 9),
                              *(UInt32 *)((char *)v42 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v43 - (unsigned __int16)v61 - HIDWORD(v61),
          ".\\AI\\Actor.cpp",
          0x44B8,
          *v42,
          v46,
          v49,
          v56);
      }
    }
    else
    {
      v48 = (unsigned __int16)v61 + HIDWORD(v61);
      if ( v43 <= v48 )
      {
        if ( v43 < v48 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            HIDWORD(v61) + (unsigned __int16)v61 - v43,
            ".\\AI\\Actor.cpp",
            0x44B8,
            LOBYTE(v41[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v43 - (unsigned __int16)v61 - HIDWORD(v61),
          ".\\AI\\Actor.cpp",
          0x44B8,
          LOBYTE(v41[1].createdObjectList.next));
      }
    }
  }
}
