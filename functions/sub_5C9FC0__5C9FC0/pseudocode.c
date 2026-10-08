void __cdecl RaceSexMenu_RandomizeFaceConfirmCallback()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C); /*0x5c9fc5*/
  if ( OpenMenuTile ) /*0x5c9fcf*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5c9fe1*/
    if ( OblivionDynamicCast( /*0x5c9fe7*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &RaceSexMenu `RTTI Type Descriptor',
           0) )
    {
      if ( sub_578D70() == 2 ) /*0x5c9ffa*/
        RaceSexMenu_ExecuteRandomizeFace();     // Native Randomize Face confirmation entry is a tail JMP (E9) to 0x5C9CD0, not a CALL. Earlier PF optional-hook validation incorrectly expected E8 and disabled all custom-XML safety hooks. PF 1.19.12 leaves this jump untouched. /*0x5c9ffc*/
      else
        unk_B3B4C8 = 0; /*0x5ca001*/
    }
  }
}
