// Verified 2026-10-04: BaseProcess load role from Oblivion process vtable slot +0x3F8, parent call chain and matching serialization/reset behavior. ECX receiver and RET12 establish stack arity; owner is MobileObject (dispatch 65A835 for Revert). Probable: currentFlags semantic name follows matching Fallout and forwarded extra load word; broader policy unverified.
// Verified package lifecycle: reads encoded package FormID; created package with mask20000+10000 is held as raw FormID for later init, otherwise may load package body. Noncreated references resolve to TESPackage. Package lookup failure sets procedure=-1; InitLoad/FinishInit later resolve or select package. Unknown internal helper463EC0 complete factory policy.
// Verified continuation: CreatePackage463EC0 factory now typed TESPackage*, requested FormID, opaque combatContext, TESPackageType; handles collision retirement and concrete subclass allocation. Vtable DC/E0/E4/E8 now properly typed; original casts into TESForm components were artifacts.
void __thiscall BaseProcess_LoadGame(
        BaseProcess *self,
        ProcessSaveChangeMask changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  int v4; // ebx
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  bool v10; // al
  TESPackage *editorPackage; // ecx
  UInt32 v12; // eax
  bool v13; // zf
  MobileObject *v14; // ebx
  void *v15; // esi
  TESPackage *Package; // esi
  TESForm *v17; // eax
  TESPackage *v18; // eax
  eProcedure *p_editorPackProcedure; // esi
  UInt32 refID; // eax
  MobileObjectVtbl *vtbl; // edx
  const char *v22; // eax
  const char *v23; // eax
  TESSaveLoadGame_SerializationView *v24; // ecx
  UInt32 *v25; // edi
  unsigned __int8 *v26; // esi
  TESForm *v27; // ecx
  unsigned __int8 *v28; // eax
  const char *v29; // eax
  const char *v30; // eax
  unsigned __int8 *v31; // edx
  int v32; // [esp-10h] [ebp-2Ch]
  int v33; // [esp-Ch] [ebp-28h]
  int v34; // [esp-Ch] [ebp-28h]
  int v35; // [esp-Ch] [ebp-28h]
  int v36; // [esp-Ch] [ebp-28h]
  int v37; // [esp-8h] [ebp-24h]
  int v38; // [esp-8h] [ebp-24h]
  int v39; // [esp-8h] [ebp-24h]
  int v40; // [esp-4h] [ebp-20h]
  int v41; // [esp-4h] [ebp-20h]
  char a1_2; // [esp+Ah] [ebp-12h]
  unsigned int formID; // [esp+Ch] [ebp-10h]
  UInt32 v44; // [esp+10h] [ebp-Ch] BYREF
  int destination; // [esp+14h] [ebp-8h] BYREF
  int Dst; // [esp+18h] [ebp-4h] BYREF

  bufferCursor = 0; /*0x60d3ce*/
  destination = 0; /*0x60d3d0*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x60d3ee*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x60d402*/
      if ( currentlyLoadingFormHeader )
      {
        v8 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x60d40f*/
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)( /*0x60d42a*/
                             v8,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\BaseProcess.cpp",
          0x12D,
          *currentlyLoadingFormHeader,
          v9,
          v37,
          v40);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\BaseProcess.cpp",
          0x12D,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x60d46b*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x60d475*/
  }
  v10 = SaveLoad_LoadFormID(g_TESSaveLoadGame, &v44, 4u); /*0x60d487*/
  editorPackage = self->editorPackage; /*0x60d48c*/
  HIBYTE(formID) = v10; /*0x60d491*/
  if ( editorPackage ) /*0x60d495*/
  {
    if ( TESPackage_IsRuntimePackage(editorPackage) ) /*0x60d497*/
      TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, (TESForm *)self->editorPackage); /*0x60d4aa*/
  }
  v12 = v44; /*0x60d4af*/
  v13 = v44 == 0; /*0x60d4b3*/
  v41 = v4; /*0x60d4b5*/
  v14 = owner; /*0x60d4b6*/
  self->editorPackage = 0; /*0x60d4ba*/
  BYTE2(formID) = 0; /*0x60d4c1*/
  if ( !v13 ) /*0x60d4c6*/
  {
    if ( (changeMask & 0x20000) != 0 ) /*0x60d4d6*/
    {
      if ( TESDataHandler_IsFormIDCreated_(v12) ) /*0x60d4e3*/
      {
        SaveLoad_LoadData(g_TESSaveLoadGame, &owner, 1u); /*0x60d4fd*/
        if ( (changeMask & 0x10000) != 0 ) /*0x60d508*/
        {
          self->editorPackage = (TESPackage *)v44; /*0x60d573*/
        }
        else
        {
          v15 = OblivionDynamicCast( /*0x60d51e*/
                  v14,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
          if ( !v15 ) /*0x60d525*/
            (*(void (__thiscall **)(_DWORD, const char *, int))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x60d537*/
              *(_DWORD *)&MEMORY[0xB33E90][0xF00],
              "Package being created on non-actor!",
              v41);
          Package = TESSaveLoadGame_CreatePackage(g_TESSaveLoadGame, formID, v15, (TESPackageType)currentFlags); /*0x60d54f*/
          Package->__vftable->LoadGame(Package); /*0x60d55b*/
          self->editorPackage = Package; /*0x60d55d*/
          if ( Package->members.procedureArrayIndex == 0xFFFFFFFF ) /*0x60d564*/
            sub_5672A0(Package); /*0x60d568*/
        }
        goto LABEL_23; /*0x60d56d*/
      }
      v12 = v44; /*0x60d578*/
    }
    v17 = TESForm_LookupByFormID(v12); /*0x60d58b*/
    v18 = (TESPackage *)OblivionDynamicCast( /*0x60d594*/
                          v17,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESPackage `RTTI Type Descriptor',
                          0);
    self->editorPackage = v18; /*0x60d59e*/
    if ( v18 ) /*0x60d5a1*/
      sub_5672A0(v18); /*0x60d5a5*/
    else
      BYTE2(formID) = 1; /*0x60d5ac*/
LABEL_23:
    p_editorPackProcedure = &self->editorPackProcedure; /*0x60d5b1*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &self->editorPackProcedure, 4u); /*0x60d5bd*/
    if ( !a1_2 ) /*0x60d5c7*/
      goto LABEL_30; /*0x60d5c7*/
    goto LABEL_24; /*0x60d5c7*/
  }
  if ( !HIBYTE(formID) ) /*0x60d5f7*/
    goto LABEL_30; /*0x60d5f7*/
  SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, 4); /*0x60d601*/
  p_editorPackProcedure = &self->editorPackProcedure; /*0x60d606*/
  self->editorPackProcedure = kProcedure_TRAVEL; /*0x60d609*/
LABEL_24:
  refID = v14->super.super.refID; /*0x60d5c9*/
  vtbl = v14->vtbl; /*0x60d5d2*/
  if ( formID ) /*0x60d5d4*/
  {
    v22 = (const char *)((int (__thiscall *)(MobileObject *, UInt32))vtbl->super.super.GetEditorName)(v14, refID); /*0x60d5e0*/
    PrintError("%s %08X couldn't find package %08X while loading and will try to choose a new one.", v22, v32, v33); /*0x60d5e8*/
  }
  else
  {
    v23 = (const char *)((int (__thiscall *)(MobileObject *, UInt32))vtbl->super.super.GetEditorName)(v14, refID); /*0x60d61a*/
    PrintError("%s %08X couldn't find a plugin package while loading and will try to choose a new one.", v23, v34); /*0x60d622*/
  }
  *p_editorPackProcedure = 0xFFFFFFFF; /*0x60d62a*/
LABEL_30:
  SaveLoad_LoadData(g_TESSaveLoadGame, self + 1, 4u); /*0x60d630*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)self + 0x10, 4u); /*0x60d64d*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x60d658*/
  {
    v24 = g_TESSaveLoadGame; /*0x60d666*/
    v25 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x60d66c*/
    v26 = g_TESSaveLoadGame->bufferCursor; /*0x60d674*/
    if ( v25 ) /*0x60d677*/
    {
      v27 = TESForm_LookupByFormID(*v25); /*0x60d685*/
      v28 = &bufferCursor[(unsigned __int16)v44]; /*0x60d68c*/
      if ( v26 <= v28 ) /*0x60d693*/
      {
        if ( v26 < v28 ) /*0x60d6d6*/
        {
          v30 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v27->vtbl->GetEditorName)( /*0x60d6ed*/
                                v27,
                                *((unsigned __int8 *)v25 + 9),
                                *(UInt32 *)((char *)v25 + 5));
          PrintError( /*0x60d70c*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[(unsigned __int16)v44 - (_DWORD)v26],
            ".\\AI\\BaseProcess.cpp",
            0x17B,
            *v25,
            v30,
            v36,
            v39);
        }
      }
      else
      {
        v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v27->vtbl->GetEditorName)( /*0x60d6a6*/
                              v27,
                              *((unsigned __int8 *)v25 + 9),
                              *(UInt32 *)((char *)v25 + 5));
        PrintError( /*0x60d6c5*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v26[-(unsigned __int16)v44] - bufferCursor,
          ".\\AI\\BaseProcess.cpp",
          0x17B,
          *v25,
          v29,
          v35,
          v38);
      }
    }
    else
    {
      v31 = &bufferCursor[(unsigned __int16)v44]; /*0x60d722*/
      if ( v26 <= v31 ) /*0x60d727*/
      {
        if ( v26 < v31 ) /*0x60d753*/
          PrintError( /*0x60d76e*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[(unsigned __int16)v44 - (_DWORD)v26],
            ".\\AI\\BaseProcess.cpp",
            0x17B,
            v24->currentVersion);
      }
      else
      {
        PrintError( /*0x60d742*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v26[-(unsigned __int16)v44] - bufferCursor,
          ".\\AI\\BaseProcess.cpp",
          0x17B,
          v24->currentVersion);
      }
    }
  }
}
