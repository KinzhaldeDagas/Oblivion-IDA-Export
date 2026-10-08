void __userpurge sub_5DDB70(
        double a1@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        int a8,
        int a9)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FB); /*0x5ddb78*/
  if ( OpenMenuTile ) /*0x5ddb82*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5ddb8a*/
    if ( ParentMenu ) /*0x5ddb91*/
    {
      if ( OblivionDynamicCast( /*0x5ddba6*/
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &VideoDisplayMenu `RTTI Type Descriptor',
             0) )
      {
        if ( a8 == 3 ) /*0x5ddbbe*/
        {
          a3 = sub_5DDA50(a1, a4, a5, a6, a7, a3); /*0x5ddbc0*/
          sub_5DDCA0(); /*0x5ddbc5*/
        }
        switch ( a8 ) /*0x5ddbd3*/
        {
          case 4: /*0x5ddbd3*/
            sub_5DDAA0(a1, a2, a3, a4, a5, a6, a7, 0x320, 0x258); /*0x5ddbe6*/
            return; /*0x5ddbec*/
          case 5: /*0x5ddbd3*/
            sub_5DDAA0(a1, a2, a3, a4, a5, a6, a7, 0x438, 0x25F); /*0x5ddbfb*/
            return; /*0x5ddc01*/
          case 6: /*0x5ddbd3*/
            sub_5DDAA0(a1, a2, a3, a4, a5, a6, a7, 0x400, 0x300); /*0x5ddc10*/
            return; /*0x5ddc16*/
          case 7: /*0x5ddbd3*/
            sub_5DDAA0(a1, a2, a3, a4, a5, a6, a7, 0x500, 0x25F); /*0x5ddc25*/
            return; /*0x5ddc2b*/
          case 8: /*0x5ddbd3*/
            sub_5DDAA0(a1, a2, a3, a4, a5, a6, a7, 0x500, 0x2D0);// Only adjacent 1280x720 hardcoded pair found in Oblivion.exe; belongs to VideoDisplayMenu resolution selection, not Fallout Pip-Boy/terminal screen rendering. /*0x5ddc3a*/
            def_5DDBD3(a8, a9); /*0x5ddc3b*/
            return;
          default:
            break;
        }
      }
    }
  }
  JUMPOUT(0x5DDC3F); /*0x5ddc3f*/
}
