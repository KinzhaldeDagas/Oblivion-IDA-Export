unsigned __int16 __thiscall TESObjectREFR_GetModifiedSize(TESChildCELL *this, int a2)
{
  unsigned __int16 v5; // di
  unsigned __int16 v6; // bp
  int *ContainerChanges; // eax
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-1Ch]
  int v13; // [esp-8h] [ebp-18h]
  const char *v14; // [esp-4h] [ebp-14h]
  unsigned __int16 v15; // [esp+14h] [ebp+4h]

  v5 = TESForm_ModifiedFormSize(a2); /*0x4e2c09*/
  v15 = v5; /*0x4e2c0c*/
  v6 = v5; /*0x4e2c10*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e2c13*/
  {
    v15 = v5 + 6; /*0x4e2c1c*/
    v5 += 6; /*0x4e2c21*/
  }
  if ( (a2 & 0x8000000) != 0 ) /*0x4e2c2c*/
  {
    ContainerChanges = (int *)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x11)); /*0x4e2c31*/
    v5 += sub_488580(ContainerChanges); /*0x4e2c3d*/
    v15 = v5; /*0x4e2c40*/
  }
  if ( (a2 & 0x177577E0) != 0 || (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) ) /*0x4e2c57*/
  {
    v5 += ExtraDataList_GetSaveSize((_DWORD *)this + 0x11, a2, (TESObjectREFR *)this); /*0x4e2c67*/
    v15 = v5; /*0x4e2c6a*/
  }
  if ( (a2 & 0x2000000) != 0 && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) ) /*0x4e2c81*/
  {
    v5 += sub_4E0840(this) + 2; /*0x4e2c92*/
    v15 = v5; /*0x4e2c95*/
  }
  if ( (a2 & 8) != 0 ) /*0x4e2c9d*/
  {
    v5 += sub_4E0970(this, 0) + 2; /*0x4e2cac*/
    v15 = v5; /*0x4e2caf*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x43u && (a2 & 0x10) != 0 ) /*0x4e2cc2*/
    v5 = v15 + 4; /*0x4e2cc9*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4e2cd7*/
    if ( currentlySavingFormHeader )
    {
      v9 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4e2ce4*/
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)( /*0x4e2d04*/
                            v9,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x6E2,
                            "..\\TES Shared\\TESObjectREFR.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v5 - v6,
        *currentlySavingFormHeader,
        v10,
        v12,
        v13,
        v14);
      return v5; /*0x4e2d27*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v5 - v6, 0x6E2, "..\\TES Shared\\TESObjectREFR.cpp");
  }
  return v5; /*0x4e2d23*/
}
