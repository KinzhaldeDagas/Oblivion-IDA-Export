int __cdecl ActiveEffect_Base_LoadAEList_(
        int a1,
        PlayerCharacter *a2,
        int a3,
        __int16 a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  UInt32 *v11; // esi
  TESForm *v12; // eax
  const char *v13; // eax
  TESSaveLoad *v14; // ecx
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v17; // ebp
  int i; // edi
  int v19; // esi
  int v21; // [esp-8h] [ebp-2Ch]
  size_t v22; // [esp-4h] [ebp-28h]
  size_t v23; // [esp-4h] [ebp-28h]
  int v24; // [esp-4h] [ebp-28h]
  int v25; // [esp+14h] [ebp-10h] BYREF
  UInt32 v26; // [esp+18h] [ebp-Ch]
  float v27; // [esp+1Ch] [ebp-8h]
  int Dst; // [esp+20h] [ebp-4h] BYREF

  v25 = 0;
  v26 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v22) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v22);
    if ( Dst != 0x4B4F4C42 )
    {
      v11 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v11 )
      {
        v12 = TESForm_LookupByFormID(*v11);
        v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)(
                              v12,
                              *((unsigned __int8 *)v11 + 9),
                              *(UInt32 *)((char *)v11 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\Magic\\ActiveEffect.cpp",
          0x373,
          *v11,
          v13,
          v21,
          v24);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Magic\\ActiveEffect.cpp",
          0x373,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v14 = SaveLoad_CurrentSavegame;
    LODWORD(v23) = 2;
    v26 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v14, &v25, v23);
  }
  v27 = 0.0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v17 = OblivionDynamicCast(
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &HUDMainMenu `RTTI Type Descriptor',
          0);
  for ( i = a1; i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
      break;
    v19 = *(_DWORD *)i;
    if ( OblivionDynamicCast(
           *(void **)i,
           0,
           (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
           &VampirismEffect `RTTI Type Descriptor',
           0) )
    {
      v27 = *(float *)(v19 + 0x18);
    }
    if ( a2 == TESDataHandler_g_PlayerRef )
    {
      if ( v17 )
        HUDMainMenu_UpdateActiveEffects(v17, v19, COERCE_FLOAT(1));
    }
    if ( v19 )
      (**(void (__thiscall ***)(int, int))v19)(v19, 1);
  }
  return ActiveEffect_Base_LoadAEList__::ClearActiveEffectList(a1, a1, (int)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
