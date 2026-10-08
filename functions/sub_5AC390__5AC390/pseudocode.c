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

  if ( !InterfaceManager_MenuModeHasFocus(0x3EA) ) /*0x5ac395*/
    return 0; /*0x5ac395*/
  if ( a10 != 0xF ) /*0x5ac3ac*/
  {
    switch ( a10 ) /*0x5ac3e9*/
    {
      case 0xD: /*0x5ac3e9*/
        if ( a11 >= 1.0 ) /*0x5ac3f6*/
        {
          sub_5A5E80(a7, a8, a1, 1.0); /*0x5ac3f8*/
          return 1; /*0x5ac3ff*/
        }
        break;
      case 0xE: /*0x5ac3e9*/
        if ( a11 >= 1.0 ) /*0x5ac412*/
        {
          sub_5A5F60(a7, a8, a1, 1.0); /*0x5ac414*/
          return 1; /*0x5ac41b*/
        }
        break;
      case 0xC: /*0x5ac3e9*/
        Input_ProcessQuickSlotHotkeys(a1, a2, a3, a4, a5, a6, a7, a8, a9); /*0x5ac423*/
        return 1; /*0x5ac42a*/
    }
    return 0; /*0x5ac3f6*/
  }
  if ( sub_6DA150(0xF) != 2 ) /*0x5ac3c0*/
    return 0; /*0x5ac42d*/
  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile; /*0x5ac3cb*/
  if ( altActiveTile ) /*0x5ac3d6*/
    sub_5AB980(a1, a2, a3, a4, a5, a6, a7, a8, a9, altActiveTile); /*0x5ac3d9*/
  return 1; /*0x5ac3e3*/
}
