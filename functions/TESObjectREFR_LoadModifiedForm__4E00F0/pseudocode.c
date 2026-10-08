// Verified ABI correction 2026-10-04: ECX complete reference receiver; RET4(save)/RET8(load). MobileObject caller supplies exactly these stack words. Removed fictitious FPU register arguments and by-value TESForm argument; internal reference serialization outside current process-focused pass.
void __thiscall TESObjectREFR_LoadModifiedForm(TESObjectREFR *self, unsigned int changeMask, unsigned int currentFlags)
{
  double v3; // st5
  double v4; // st6
  double v5; // st7
  int v8; // ebp
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v10; // eax
  const char *v11; // eax
  BSExtraDataVtbl *EnableStateParent; // edi
  TESContainer *Container; // edi
  int ***ContainerExtraDataForRef; // eax
  int v15; // eax
  TESSaveLoadGame_SerializationView *v16; // ecx
  bool v17; // al
  ExtraDataList *p_baseExtraList; // ecx
  unsigned int v19; // eax
  ExtraDataList *v20; // ecx
  bool v21; // al
  ExtraDataList *v22; // ecx
  TESSaveLoadGame_SerializationView *v23; // ecx
  UInt32 *v24; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v26; // ecx
  unsigned int v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  unsigned int v30; // edx
  int v31; // [esp+4h] [ebp-20h]
  int v32; // [esp+4h] [ebp-20h]
  int v33; // [esp+4h] [ebp-20h]
  int v34; // [esp+8h] [ebp-1Ch]
  int v35; // [esp+8h] [ebp-1Ch]
  int v36; // [esp+8h] [ebp-1Ch]
  int destination; // [esp+1Ch] [ebp-8h] BYREF
  int Dst; // [esp+20h] [ebp-4h] BYREF
  unsigned __int8 *changeMaska; // [esp+28h] [ebp+4h]

  TESForm_LoadModifiedForm((TESForm *)self, changeMask, currentFlags); /*0x4e0103*/
  if ( !self->vtbl->IsActor(self) && (changeMask & 0x10000) != 0 ) /*0x4e011e*/
    sub_46AA00(self, 1); /*0x4e0124*/
  v8 = 0; /*0x4e012f*/
  destination = 0; /*0x4e0131*/
  changeMaska = 0; /*0x4e0135*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x4e0153*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x4e0167*/
      if ( currentlyLoadingFormHeader )
      {
        v10 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x4e0174*/
        v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v10->vtbl->GetEditorName)( /*0x4e018f*/
                              v10,
                              *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                              *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x722,
          *currentlyLoadingFormHeader,
          v11,
          v31,
          v34);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x722,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    changeMaska = g_TESSaveLoadGame->bufferCursor; /*0x4e01da*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x4e01de*/
    v8 = (int)changeMaska; /*0x4e01e3*/
  }
  if ( (g_TESSaveLoadGame->flags & 0x80) != 0 ) /*0x4e01f5*/
  {
    EnableStateParent = ExtraDataList_GetEnableStateParent(&self->member.baseExtraList); /*0x4e0201*/
    if ( EnableStateParent ) /*0x4e0205*/
    {
      if ( ExtraDataList_IsEnableStateInverse(&self->member.baseExtraList) ) /*0x4e0209*/
        TESForm_SetDisabledFlag((TESForm *)self, ((int)EnableStateParent[1].Destructor & 0x800) == 0); /*0x4e0223*/
      else
        TESForm_SetDisabledFlag((TESForm *)self, ((int)EnableStateParent[1].Destructor & 0x800) != 0); /*0x4e0231*/
    }
    v8 = (int)changeMaska; /*0x4e0236*/
  }
  if ( (changeMask & 1) != 0 && ((self->member.super.flags & 0x800) != 0 || (self->member.super.flags & 0x20) != 0) ) /*0x4e0251*/
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))self->vtbl->Set3D)(self, 0); /*0x4e025f*/
  if ( (changeMask & 0x8000000) != 0 ) /*0x4e0267*/
  {
    Container = TESObjectREFR_GetContainer(self); /*0x4e0270*/
    if ( Container ) /*0x4e0274*/
    {
      if ( self->vtbl->IsActor(self) && Actor_IsCreature((Actor *)self) ) /*0x4e0288*/
      {
        UnequipWeapon(self, changeMask, (int)Container, v3, v4, v5); /*0x4e0293*/
        v5 = sub_4DC8F0(self, v5, v3, v4, v8, 1); /*0x4e029c*/
        UnequipLight(self); /*0x4e02a3*/
        TESObjectREFR_ClearEquippedAmmo3D(self); /*0x4e02aa*/
      }
      ExtraDataList_RemoveContainerExtraData(&self->member.baseExtraList.vtbl); /*0x4e02b2*/
      if ( self->vtbl->IsActor(self) ) /*0x4e02c1*/
        sub_5E9690((int *)self); /*0x4e02c9*/
      ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(self); /*0x4e02d0*/
      ContainerExtraData_LoadModified(ContainerExtraDataForRef, v3, v4, v5); /*0x4e02da*/
    }
  }
  sub_425900(&self->member.baseExtraList, currentFlags | changeMask, self); /*0x4e02ec*/
  v15 = 0x177577E0; /*0x4e02fb*/
  if ( g_TESSaveLoadGame->currentVersion < 0x43u ) /*0x4e0300*/
    v15 = 0x177577F0; /*0x4e0302*/
  if ( (v15 & changeMask) != 0 || self->vtbl->IsActor(self) ) /*0x4e0315*/
    ExtraDataList_LoadModified(&self->member.baseExtraList, v3, v4, v5, changeMask, currentFlags, (TESChildCELL *)self); /*0x4e0324*/
  if ( (changeMask & 0x2000000) != 0 && !self->vtbl->IsActor(self) ) /*0x4e033b*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &currentFlags, 2u); /*0x4e034a*/
    if ( (_WORD)currentFlags ) /*0x4e0356*/
      SaveLoad_QueueAttachedAnimationBlob(g_TESSaveLoadGame, self, currentFlags); /*0x4e0360*/
  }
  if ( (changeMask & 0x808) != 0 ) /*0x4e036b*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &currentFlags, 2u); /*0x4e0376*/
    if ( (_WORD)currentFlags ) /*0x4e0382*/
    {
      v16 = g_TESSaveLoadGame; /*0x4e038a*/
      if ( (changeMask & 0x800) != 0 ) /*0x4e0390*/
        SaveLoad_AdvanceBufferOffset(v16, (unsigned __int16)currentFlags); /*0x4e039f*/
      else
        SaveLoad_QueueHavokBlob(v16, self, currentFlags); /*0x4e0394*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x43u && (changeMask & 0x10) != 0 ) /*0x4e03b3*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->member.scale, 4u); /*0x4e03bd*/
    sub_4DB520((MobileObject *)self, self->member.scale); /*0x4e03cb*/
    v8 = (int)changeMaska; /*0x4e03d0*/
  }
  if ( (changeMask & 0x40000) != 0 ) /*0x4e03da*/
  {
    v17 = ExtraDataList_TestActionFlagBits(&self->member.baseExtraList, 8u); /*0x4e03e0*/
    p_baseExtraList = &self->member.baseExtraList; /*0x4e03e9*/
    if ( v17 ) /*0x4e03eb*/
      ExtraDataList_ClearActionFlagBits(p_baseExtraList, 8u); /*0x4e03ed*/
    else
      ExtraDataList_SetActionFlagBits(p_baseExtraList, 8u); /*0x4e03f4*/
  }
  if ( (changeMask & 0x80000) != 0 ) /*0x4e03ff*/
  {
    ExtraDataList_RemoveLastFinishedSequence(&self->member.baseExtraList.vtbl); /*0x4e0403*/
    v19 = changeMask; /*0x4e040a*/
    if ( !changeMask ) /*0x4e040c*/
      v19 = sub_4533F0(g_TESSaveLoadGame, (int)self, 0); /*0x4e0416*/
    v20 = &self->member.baseExtraList; /*0x4e0422*/
    if ( (v19 & 0x40000) != 0 ) /*0x4e0424*/
      v21 = !ExtraDataList_TestActionFlagBits(v20, 8u); /*0x4e042d*/
    else
      v21 = ExtraDataList_TestActionFlagBits(v20, 8u); /*0x4e0432*/
    v22 = &self->member.baseExtraList; /*0x4e0439*/
    if ( v21 ) /*0x4e043b*/
      sub_424DE0(v22, v8, "Close"); /*0x4e0442*/
    else
      sub_424DE0(v22, v8, "Open"); /*0x4e0449*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e0454*/
  {
    v23 = g_TESSaveLoadGame; /*0x4e0461*/
    v24 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x4e0467*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x4e046f*/
    if ( v24 ) /*0x4e0472*/
    {
      v26 = TESForm_LookupByFormID(*v24); /*0x4e0480*/
      v27 = v8 + (unsigned __int16)destination; /*0x4e0487*/
      if ( (unsigned int)bufferCursor <= v27 ) /*0x4e048e*/
      {
        if ( (unsigned int)bufferCursor < v27 ) /*0x4e04d2*/
        {
          v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v26->vtbl->GetEditorName)( /*0x4e04e9*/
                                v26,
                                *((unsigned __int8 *)v24 + 9),
                                *(UInt32 *)((char *)v24 + 5));
          PrintError( /*0x4e0508*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v8 + (unsigned __int16)destination - (_DWORD)bufferCursor,
            "..\\TES Shared\\TESObjectREFR.cpp",
            0x79A,
            *v24,
            v29,
            v33,
            v36);
        }
      }
      else
      {
        v28 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v26->vtbl->GetEditorName)( /*0x4e04a1*/
                              v26,
                              *((unsigned __int8 *)v24 + 9),
                              *(UInt32 *)((char *)v24 + 5));
        PrintError( /*0x4e04c0*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &bufferCursor[-(unsigned __int16)destination - v8],
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x79A,
          *v24,
          v28,
          v32,
          v35);
      }
    }
    else
    {
      v30 = (unsigned __int16)destination + v8; /*0x4e051f*/
      if ( (unsigned int)bufferCursor <= v30 ) /*0x4e0524*/
      {
        if ( (unsigned int)bufferCursor < v30 ) /*0x4e0551*/
          PrintError( /*0x4e056c*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v8 + (unsigned __int16)destination - (_DWORD)bufferCursor,
            "..\\TES Shared\\TESObjectREFR.cpp",
            0x79A,
            v23->currentVersion);
      }
      else
      {
        PrintError( /*0x4e053f*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &bufferCursor[-(unsigned __int16)destination - v8],
          "..\\TES Shared\\TESObjectREFR.cpp",
          0x79A,
          v23->currentVersion);
      }
    }
  }
}
