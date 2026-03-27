char __usercall sub_50B590@<al>(
        char a1@<bpl>,
        double a2@<st7>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        void *a10)
{
  PlayerCharacter *v11; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _BYTE *v14; // eax

  if ( !a10 )
    return 0;
  v11 = (PlayerCharacter *)OblivionDynamicCast(
                             a10,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( !v11 )
    return 1;
  if ( v11 != TESDataHandler_g_PlayerRef )
  {
    v11->vtbl->super.Unk_AD((Actor *)v11);
    return 1;
  }
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v14 = OblivionDynamicCast(
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &DialogMenu `RTTI Type Descriptor',
            0);
    if ( v14 )
      v14[0x94] = 1;
  }
  sub_670CA0((int)TESDataHandler_g_PlayerRef, a7, a4, a5, a6, a2, a3, a1, 0.0);
  return 1;
}
