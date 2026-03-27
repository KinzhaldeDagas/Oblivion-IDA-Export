char __userpurge sub_5AC390@<al>(
        char a1@<bpl>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10,
        float a11)
{
  Tile *altActiveTile; // eax

  if ( !InterfaceManager_MenuModeHasFocus(0x3EA) )
    return 0;
  if ( a10 != 0xF )
  {
    switch ( a10 )
    {
      case 0xD:
        if ( a11 >= 1.0 )
        {
          sub_5A5E80(a7, a8, a1, 1.0);
          return 1;
        }
        break;
      case 0xE:
        if ( a11 >= 1.0 )
        {
          sub_5A5F60(a7, a8, a1, 1.0);
          return 1;
        }
        break;
      case 0xC:
        sub_5C1F70(a1, a2, a3, a4, a5, a6, a7, a8, a9);
        return 1;
    }
    return 0;
  }
  if ( sub_6DA150(0xF) != 2 )
    return 0;
  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile;
  if ( altActiveTile )
    sub_5AB980(a1, a2, a3, a4, a5, a6, a7, a8, a9, altActiveTile);
  return 1;
}
