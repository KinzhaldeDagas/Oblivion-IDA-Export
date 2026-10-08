void __cdecl RaceSexMenu_ResetFaceConfirmCallback()
{
  double v0; // st5
  double v1; // st6
  double v2; // st7
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C); /*0x5c9f75*/
  if ( OpenMenuTile ) /*0x5c9f7f*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5c9f91*/
    if ( OblivionDynamicCast( /*0x5c9f97*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &RaceSexMenu `RTTI Type Descriptor',
           0) )
    {
      if ( sub_578D70() == 2 ) /*0x5c9faa*/
        RaceSexMenu_ExecuteResetFace(v0, v1, v2); /*0x5c9fac*/
      else
        unk_B3B4C9 = 0; /*0x5c9fb1*/
    }
  }
}
