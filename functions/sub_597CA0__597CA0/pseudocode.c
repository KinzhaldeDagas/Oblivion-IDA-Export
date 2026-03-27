void __cdecl sub_597CA0(signed int a1)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v3; // esi
  char *v4; // eax
  float v5; // [esp+0h] [ebp-8h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v3 = ParentMenu;
    if ( ParentMenu )
    {
      v4 = (char *)OblivionDynamicCast(
                     *(void **)(ParentMenu + 0x44),
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
      if ( *(_BYTE *)(v3 + 0x61) )
      {
        if ( v4 )
        {
          v5 = (float)a1;
          sub_422D20((ExtraDataList *)(v4 + 0x44), (BSExtraDataVtbl *)LODWORD(v5));
        }
      }
    }
  }
}
