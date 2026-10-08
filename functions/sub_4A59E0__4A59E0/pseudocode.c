// Verified: TESRegionGrassObject stores TESGrass at +4 and parent TESLandTexture at +8; loader resolves FormIDs and rejects non-Grass/non-LandTexture classes.
_DWORD *__thiscall sub_4A59E0(_DWORD *this, int *a2)
{
  TESRegionDataManager *regionDataManager; // ecx
  TESForm *v4; // eax
  Data *OverrideFile; // esi
  TESForm *v6; // edi
  TESForm *v7; // eax
  TESForm *v8; // ebx
  TESForm *v9; // eax
  int v10; // eax
  const char *v11; // esi
  int v12; // eax
  TESForm *v13; // eax
  int v14; // eax
  const char *v15; // esi
  int v16; // eax
  bool v17; // zf
  int a1; // [esp+10h] [ebp-4h] BYREF

  *this = &TESRegionGrassObject::`vftable'; /*0x4a59e5*/
  if ( g_TESDataHandler /*0x4a5a05*/
    && (regionDataManager = g_TESDataHandler->regionDataManager) != 0
    && ((int (__thiscall *)(TESRegionDataManager *))regionDataManager->vtable->unknown00)(regionDataManager) )
  {
    v4 = (TESForm *)((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager); /*0x4a5a1a*/
    a1 = *a2; /*0x4a5a22*/
    OverrideFile = TESForm_GetOverrideFile(v4, 0xFFFFFFFF); /*0x4a5a2f*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x4a5a37*/
    v6 = TESForm_LookupByFormID(a1); /*0x4a5a4f*/
    a1 = a2[1]; /*0x4a5a51*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x4a5a55*/
    v7 = TESForm_LookupByFormID(a1); /*0x4a5a5f*/
  }
  else
  {
    v6 = TESForm_LookupByFormID(*a2); /*0x4a5a79*/
    v7 = TESForm_LookupByFormID(a2[1]); /*0x4a5a7b*/
  }
  v8 = v7; /*0x4a5a85*/
  *(this + 1) = 0; /*0x4a5a87*/
  if ( v6 ) /*0x4a5a8e*/
  {
    if ( v6->member.type == kFormType_Grass ) /*0x4a5a98*/
    {
      *(this + 1) = v6; /*0x4a5a9a*/
    }
    else if ( ((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager) ) /*0x4a5ab1*/
    {
      v9 = (TESForm *)((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager); /*0x4a5ac7*/
      if ( TESForm::GetEditorNameLen(v9) ) /*0x4a5acb*/
      {
        v10 = ((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager); /*0x4a5ae4*/
        v11 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0xD4))(v10); /*0x4a5af2*/
      }
      else
      {
        v11 = EmptyString; /*0x4a5af6*/
      }
      v12 = ((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager); /*0x4a5b0b*/
      PrintError( /*0x4a5b17*/
        "Instantiating a Grass region object for region %s (%d) with a non-Grass object.",
        v11,
        *(_DWORD *)(v12 + 0xC));
    }
    else
    {
      PrintError("Instantiating a Grass region object with a non-Grass object."); /*0x4a5b29*/
    }
  }
  else if ( ((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager) ) /*0x4a5b3e*/
  {
    v13 = (TESForm *)((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager); /*0x4a5b53*/
    if ( TESForm::GetEditorNameLen(v13) ) /*0x4a5b57*/
    {
      v14 = ((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager); /*0x4a5b70*/
      v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0xD4))(v14); /*0x4a5b7e*/
    }
    else
    {
      v15 = EmptyString; /*0x4a5b82*/
    }
    v16 = ((int (__thiscall *)(TESRegionDataManager *))g_TESDataHandler->regionDataManager->vtable->unknown00)(g_TESDataHandler->regionDataManager); /*0x4a5b97*/
    PrintError("Instantiating a Grass region object for region %s (%d) without an object.", v15, *(_DWORD *)(v16 + 0xC)); /*0x4a5ba3*/
  }
  else
  {
    PrintError("Instantiating a Grass region object without an object."); /*0x4a5bb2*/
  }
  v17 = *(this + 1) == 0; /*0x4a5bba*/
  *(this + 2) = 0; /*0x4a5bbe*/
  if ( !v17 && v8 ) /*0x4a5bc9*/
  {
    if ( v8->member.type == kFormType_LandTexture ) /*0x4a5bcf*/
    {
      *(this + 2) = v8; /*0x4a5bd3*/
      return this; /*0x4a5bdb*/
    }
    PrintError("Instantiating a Grass region object with a parent that isn't a land texture."); /*0x4a5be3*/
  }
  return this; /*0x4a5bd1*/
}
