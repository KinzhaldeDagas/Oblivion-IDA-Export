void __usercall sub_5C2BA0(
        int a1@<ebx>,
        unsigned __int16 *a2@<ebp>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>)
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
        sub_5C28F0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }
  }
}
