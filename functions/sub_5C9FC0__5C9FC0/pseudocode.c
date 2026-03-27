void __usercall sub_5C9FC0(double st5_0@<st2>, double a2@<st1>, double st7_0@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    if ( OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &RaceSexMenu `RTTI Type Descriptor',
           0) )
    {
      if ( sub_578D70() == 2 )
        sub_5C9CD0(st5_0, a2, st7_0);
      else
        byte_B3B4C8 = 0;
    }
  }
}
