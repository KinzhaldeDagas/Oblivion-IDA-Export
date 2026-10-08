// Verified ABI correction 2026-10-04: ECX complete reference receiver; RET4(save)/RET8(load). MobileObject caller supplies exactly these stack words. Removed fictitious FPU register arguments and by-value TESForm argument; internal reference serialization outside current process-focused pass.
void __thiscall TESObjectREFR_SaveModifiedForm(TESObjectREFR *self, unsigned int changeMask)
{
  double v2; // st7
  unsigned int v3; // ebx
  TESSaveLoadGame_SerializationView *v5; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v7; // ecx
  int *ContainerChanges; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v10; // esi
  TESForm *v11; // eax
  const char *v12; // eax
  unsigned __int8 *v13; // esi
  int v14; // [esp-Ch] [ebp-38h]
  int v15; // [esp-8h] [ebp-34h]
  TESForm v16; // [esp-4h] [ebp-30h]
  const char *v17; // [esp-4h] [ebp-30h]
  int source; // [esp+14h] [ebp-18h] BYREF
  char v19[2]; // [esp+18h] [ebp-14h] BYREF
  __int16 v20; // [esp+1Ah] [ebp-12h]
  int v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+20h] [ebp-Ch]
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]

  v3 = changeMask; /*0x4e2d64*/
  TESForm_SaveModifiedForm((TESForm *)self, changeMask); /*0x4e2d6e*/
  v5 = g_TESSaveLoadGame; /*0x4e2d73*/
  source = 0; /*0x4e2d7b*/
  bufferCursor = v5->bufferCursor; /*0x4e2d7f*/
  v16.member.modlist.next = 0; /*0x4e2d82*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e2d86*/
  {
    v7 = g_TESSaveLoadGame; /*0x4e2d8f*/
    changeMask = 0x4B4F4C42; /*0x4e2d9c*/
    SaveLoad_SaveData(v7, &changeMask, 4u); /*0x4e2da4*/
    v16.member.modlist.next = (TESForm::ModReferenceList *)g_TESSaveLoadGame->bufferCursor; /*0x4e2db9*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x4e2dbd*/
  }
  if ( (v3 & 0x8000000) != 0 ) /*0x4e2dc8*/
  {
    ContainerChanges = (int *)ExtraDataList_GetContainerChanges(&self->member.baseExtraList); /*0x4e2dcd*/
    sub_488650(ContainerChanges, v2); /*0x4e2dd4*/
  }
  if ( (v3 & 0x177577E0) != 0 || self->vtbl->IsActor(self) ) /*0x4e2deb*/
    ExtraDataList_SaveGame(&self->member.baseExtraList, v2, v3, self); /*0x4e2df6*/
  if ( (v3 & 0x2000000) != 0 && !self->vtbl->IsActor(self) ) /*0x4e2e0d*/
  {
    changeMask = (unsigned __int16)sub_4E0840(self); /*0x4e2e23*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &changeMask, 2u); /*0x4e2e2a*/
    if ( (_WORD)changeMask ) /*0x4e2e34*/
      sub_4E08D0(self); /*0x4e2e38*/
  }
  if ( (v3 & 8) != 0 ) /*0x4e2e40*/
  {
    v19[0] = 0; /*0x4e2e49*/
    v20 = 0; /*0x4e2e4e*/
    LOWORD(v21) = 0; /*0x4e2e53*/
    v22 = 0; /*0x4e2e58*/
    v23 = 0; /*0x4e2e5c*/
    v24 = 0; /*0x4e2e60*/
    changeMask = (unsigned __int16)sub_4E0970(self, v19); /*0x4e2e72*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &changeMask, 2u); /*0x4e2e79*/
    if ( (_WORD)changeMask ) /*0x4e2e83*/
    {
      v16.vtbl = (TESFormVtbl *)v19; /*0x4e2e89*/
      sub_4E0A40((TESForm *)self, v16); /*0x4e2e8c*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x43u && (v3 & 0x10) != 0 ) /*0x4e2ea0*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->member.scale, 4u); /*0x4e2eaa*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4e2ebd*/
    v10 = g_TESSaveLoadGame->bufferCursor; /*0x4e2ec5*/
    if ( currentlySavingFormHeader )
    {
      v11 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4e2ecd*/
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)( /*0x4e2eed*/
                            v11,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x713,
                            "..\\TES Shared\\TESObjectREFR.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v10 - bufferCursor,
        *currentlySavingFormHeader,
        v12,
        v14,
        v15,
        v17);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v10 - bufferCursor,
        0x713,
        "..\\TES Shared\\TESObjectREFR.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e2f25*/
  {
    v13 = g_TESSaveLoadGame->bufferCursor; /*0x4e2f38*/
    if ( v13 > (unsigned __int8 *)&v16.member.modlist.next[0x1FFF].next + 3 ) /*0x4e2f43*/
      PrintError( /*0x4e2f54*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESObjectREFR.cpp",
        0x713);
    LOWORD(v16.member.modlist.next->data) = (_WORD)v13 - LOWORD(v16.member.modlist.next); /*0x4e2f5e*/
  }
}
