char __usercall sub_50B620@<al>(
        int a1@<ebx>,
        int a2@<ebp>,
        int ***a3@<edi>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double a11@<st0>,
        int a12,
        int a13,
        void *a14)
{
  PlayerCharacter *v15; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _BYTE *v18; // eax

  if ( !a14 )
    return 0;
  v15 = (PlayerCharacter *)OblivionDynamicCast(
                             a14,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( v15 )
  {
    if ( v15 == TESDataHandler_g_PlayerRef )
    {
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1);
      if ( OpenMenuTile )
      {
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
        v18 = OblivionDynamicCast(
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &DialogMenu `RTTI Type Descriptor',
                0);
        if ( v18 )
          v18[0x95] = 1;
      }
      Player_GoToJail_((int)TESDataHandler_g_PlayerRef, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0);
    }
  }
  return 1;
}
