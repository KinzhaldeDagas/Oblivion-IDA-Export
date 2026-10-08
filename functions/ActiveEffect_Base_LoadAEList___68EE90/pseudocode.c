// Verified active-effect list load lifecycle: destroys current effects and clears old list nodes, reads the UInt16 effect count (and optional BLOK header), loads each record through ActiveEffect_Base_Load, then inserts valid effects sorted by MagicTarget_ActiveEffectComparisonFunc. The loop also retains save-buffer boundary checks and handles the Vampirism-effect special case.
int __cdecl ActiveEffect_Base_LoadAEList(
        int *a1,
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
  int *i; // edi
  int v19; // esi
  int v21; // [esp-8h] [ebp-2Ch]
  size_t v22; // [esp-4h] [ebp-28h]
  size_t v23; // [esp-4h] [ebp-28h]
  int v24; // [esp-4h] [ebp-28h]
  int v25; // [esp+14h] [ebp-10h] BYREF
  UInt32 v26; // [esp+18h] [ebp-Ch]
  float v27; // [esp+1Ch] [ebp-8h]
  int Dst; // [esp+20h] [ebp-4h] BYREF

  v25 = 0; /*0x68ee9f*/
  v26 = 0; /*0x68eea3*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v22) = 4; /*0x68eeba*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v22); /*0x68eec1*/
    if ( Dst != 0x4B4F4C42 )
    {
      v11 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x68eed5*/
      if ( v11 )
      {
        v12 = TESForm_LookupByFormID(*v11); /*0x68eee2*/
        v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)( /*0x68eefd*/
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
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v14 = g_TESSaveLoadGame; /*0x68ef38*/
    LODWORD(v23) = 2; /*0x68ef41*/
    v26 = g_TESSaveLoadGame->unk000[5]; /*0x68ef48*/
    SaveLoad_LoadData((int)v14, &v25, v23); /*0x68ef4c*/
  }
  v27 = 0.0; /*0x68ef5a*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x68ef6a*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x68ef74*/
  v17 = OblivionDynamicCast( /*0x68ef88*/
          ParentMenu,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &HUDMainMenu `RTTI Type Descriptor',
          0);
  for ( i = a1; i; i = (int *)i[1] ) /*0x68ef8c*/
  {
    if ( !i[1] && !*i ) /*0x68ef96*/
      break; /*0x68ef99*/
    v19 = *i; /*0x68ef9b*/
    if ( OblivionDynamicCast( /*0x68efac*/
           (void *)*i,
           0,
           (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
           &VampirismEffect `RTTI Type Descriptor',
           0) )
    {
      v27 = *(float *)(v19 + 0x18); /*0x68efbb*/
    }
    if ( a2 == reference ) /*0x68efc9*/
    {
      if ( v17 ) /*0x68efcd*/
        HUDMainMenu_UpdateActiveEffects(v17, v19, COERCE_FLOAT(1)); /*0x68efd4*/
    }
    if ( v19 ) /*0x68efdb*/
      (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x68efe5*/
  }
  return ActiveEffect_Base_LoadAEList__::ClearActiveEffectList( /*0x68ef83*/
           a1,
           (int)a1,
           (int)a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
