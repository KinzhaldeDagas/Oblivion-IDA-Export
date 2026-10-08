// Verified 2026-10-04: MiddleLowProcess load role from Oblivion process vtable slot +0x3F8, parent call chain and matching serialization/reset behavior. ECX receiver and RET12 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert). Probable: currentFlags semantic name follows matching Fallout and forwarded extra load word; broader policy unverified.
// Verified: matching derived load reads +0x90 and optional +0x94 collection under0x100000. RET12; removed bogus EBX parameter. Independent derived BLOK length validation retained.
void __thiscall MiddleLowProcess_LoadGame(
        MiddleLowProcess *self,
        ProcessSaveChangeMask changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  TESSaveLoadGame_SerializationView *v9; // ecx
  UInt32 *v10; // edi
  unsigned __int8 *v11; // esi
  TESForm *v12; // ecx
  unsigned __int8 *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  unsigned __int8 *v16; // edx
  int v17; // [esp-8h] [ebp-18h]
  int v18; // [esp-8h] [ebp-18h]
  int v19; // [esp-8h] [ebp-18h]
  int v20; // [esp-4h] [ebp-14h]
  int v21; // [esp-4h] [ebp-14h]
  int v22; // [esp-4h] [ebp-14h]

  LowProcess_LoadGame(self, changeMask, currentFlags, owner); /*0x658e07*/
  bufferCursor = 0; /*0x658e12*/
  owner = 0; /*0x658e14*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &currentFlags, 4u); /*0x658e32*/
    if ( currentFlags != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x658e46*/
      if ( currentlyLoadingFormHeader )
      {
        v7 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x658e53*/
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)( /*0x658e6e*/
                             v7,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\MiddleLowProcess.cpp",
          0x254,
          *currentlyLoadingFormHeader,
          v8,
          v17,
          v20);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\MiddleLowProcess.cpp",
          0x254,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x658eaf*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &owner, 2u); /*0x658eb9*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, &self->unk090, 4u); /*0x658ecd*/
  if ( (changeMask & 0x100000) != 0 ) /*0x658ed8*/
    AVCollection_Load(&self->maxAVModifiers); /*0x658ee0*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x658eeb*/
  {
    v9 = g_TESSaveLoadGame; /*0x658ef8*/
    v10 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x658efe*/
    v11 = g_TESSaveLoadGame->bufferCursor; /*0x658f06*/
    if ( v10 ) /*0x658f09*/
    {
      v12 = TESForm_LookupByFormID(*v10); /*0x658f17*/
      v13 = &bufferCursor[(unsigned __int16)owner]; /*0x658f1e*/
      if ( v11 <= v13 ) /*0x658f25*/
      {
        if ( v11 < v13 ) /*0x658f66*/
        {
          v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x658f7d*/
                                v12,
                                *((unsigned __int8 *)v10 + 9),
                                *(UInt32 *)((char *)v10 + 5));
          PrintError( /*0x658f9c*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[(unsigned __int16)owner - (_DWORD)v11],
            ".\\AI\\MiddleLowProcess.cpp",
            0x25D,
            *v10,
            v15,
            v19,
            v22);
        }
      }
      else
      {
        v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x658f38*/
                              v12,
                              *((unsigned __int8 *)v10 + 9),
                              *(UInt32 *)((char *)v10 + 5));
        PrintError( /*0x658f57*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v11[-(unsigned __int16)owner] - bufferCursor,
          ".\\AI\\MiddleLowProcess.cpp",
          0x25D,
          *v10,
          v14,
          v18,
          v21);
      }
    }
    else
    {
      v16 = &bufferCursor[(unsigned __int16)owner]; /*0x658fb0*/
      if ( v11 <= v16 ) /*0x658fb5*/
      {
        if ( v11 < v16 ) /*0x658fdf*/
          PrintError( /*0x658ffa*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[(unsigned __int16)owner - (_DWORD)v11],
            ".\\AI\\MiddleLowProcess.cpp",
            0x25D,
            v9->currentVersion);
      }
      else
      {
        PrintError( /*0x658fd0*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v11[-(unsigned __int16)owner] - bufferCursor,
          ".\\AI\\MiddleLowProcess.cpp",
          0x25D,
          v9->currentVersion);
      }
    }
  }
}
