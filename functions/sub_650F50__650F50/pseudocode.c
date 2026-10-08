unsigned __int16 __thiscall sub_650F50(MiddleLowProcess *this, ProcessSaveChangeMask changeMask, MobileObject *owner)
{
  unsigned __int16 SaveSize; // di
  unsigned __int8 currentVersion; // al
  __int16 v9; // di
  __int16 AEListSaveSize; // ax
  unsigned __int8 v11; // dl
  char *v12; // eax
  __int16 v13; // cx
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  int v18; // [esp-Ch] [ebp-20h]
  int v19; // [esp-8h] [ebp-1Ch]
  const char *v20; // [esp-4h] [ebp-18h]
  void *v21; // [esp+10h] [ebp-4h]
  unsigned __int16 changeMaska; // [esp+18h] [ebp+4h]
  __int16 ownera; // [esp+1Ch] [ebp+8h]
  unsigned __int16 ownerb; // [esp+1Ch] [ebp+8h]

  v21 = OblivionDynamicCast( /*0x650f7a*/
          owner,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  SaveSize = MiddleLowProcess_GetSaveSize(this, changeMask, owner); /*0x650f89*/
  changeMaska = SaveSize; /*0x650f93*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x650f97*/
    SaveSize += 6; /*0x650fa0*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x650fa9*/
  v9 = SaveSize + 2; /*0x650fac*/
  if ( currentVersion >= 0x34u ) /*0x650fb1*/
    v9 += 5; /*0x650fb3*/
  if ( currentVersion >= 0x4Du ) /*0x650fb8*/
    v9 += 4; /*0x650fba*/
  if ( (changeMask & 0x80000) != 0 ) /*0x650fc3*/
  {
    v9 += 4; /*0x650fc5*/
    if ( *((_DWORD *)this + 0x30) ) /*0x650fc8*/
      v9 += (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x30) + 0xDC))(*((_DWORD *)this + 0x30)) + 5; /*0x650fee*/
  }
  ownera = v9 + 0x33; /*0x650ffb*/
  if ( (changeMask & 0x2000000) != 0 ) /*0x650fff*/
    ownera += Actor_GetAnimationSaveStateSize((int)owner, *((_DWORD **)this + 0x5F)); /*0x651011*/
  AEListSaveSize = ActiveEffect_Base_GetAEListSaveSize_(*((_DWORD **)this + 0x5D), (int)v21); /*0x651022*/
  v11 = g_TESSaveLoadGame->currentVersion; /*0x65102d*/
  ownerb = AEListSaveSize + 8 + ownera; /*0x651034*/
  if ( v11 >= 0x45u ) /*0x651044*/
    ++ownerb; /*0x651046*/
  if ( v11 >= 0x49u ) /*0x65104d*/
    ownerb += 2; /*0x65104f*/
  if ( v11 >= 0x65u ) /*0x651057*/
  {
    v12 = (char *)(this + 1); /*0x65105d*/
    v13 = 0; /*0x651066*/
    if ( this != (MiddleLowProcess *)0xFFFFFF58 ) /*0x65106a*/
    {
      do /*0x65107c*/
      {
        if ( *(_DWORD *)v12 ) /*0x651070*/
          ++v13; /*0x651075*/
        v12 = *((char **)v12 + 1); /*0x651077*/
      }
      while ( v12 ); /*0x65107c*/
    }
    ownerb += 0xA + 4 * v13; /*0x651081*/
  }
  if ( v11 >= 0x6Du ) /*0x651088*/
    ++ownerb; /*0x65108a*/
  if ( v11 >= 0x71u ) /*0x651091*/
    ownerb += 4; /*0x651093*/
  if ( !Global_DebugSaveBuffer ) /*0x651098*/
    return ownerb; /*0x651132*/
  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x6510a5*/
  if ( currentlySavingFormHeader )
  {
    v15 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x6510b2*/
    v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)( /*0x6510d2*/
                          v15,
                          *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                          0x19AB,
                          ".\\AI\\MiddleHighProcess.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      ownerb - changeMaska,
      *currentlySavingFormHeader,
      v16,
      v18,
      v19,
      v20);
  }
  else
  {
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      ownerb - changeMaska,
      0x19AB,
      ".\\AI\\MiddleHighProcess.cpp");
  }
  return ownerb; /*0x6510f5*/
}
