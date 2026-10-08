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

  if ( !a14 ) /*0x50b626*/
    return 0; /*0x50b628*/
  v15 = (PlayerCharacter *)OblivionDynamicCast( /*0x50b63a*/
                             a14,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( v15 ) /*0x50b644*/
  {
    if ( v15 == reference ) /*0x50b64c*/
    {
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1); /*0x50b653*/
      if ( OpenMenuTile ) /*0x50b65d*/
      {
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x50b66f*/
        v18 = OblivionDynamicCast( /*0x50b675*/
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &DialogMenu `RTTI Type Descriptor',
                0);
        if ( v18 ) /*0x50b67f*/
          v18[0x95] = 1; /*0x50b681*/
      }
      Player_GoToJail_((int)reference, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0); /*0x50b690*/
    }
  }
  return 1; /*0x50b62a*/
}
