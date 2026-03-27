void __userpurge sub_5DDB70(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3FB);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      if ( OblivionDynamicCast(
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &VideoDisplayMenu `RTTI Type Descriptor',
             0) )
      {
        if ( a5 == 3 )
        {
          sub_5DDA50(a2, a3);
          a4 = sub_5DDCA0(a1, a2, a3);
        }
        switch ( a5 )
        {
          case 4:
            sub_5DDAA0(a1, a2, a3, a4, 0x320, 0x258);
            return;
          case 5:
            sub_5DDAA0(a1, a2, a3, a4, 0x438, 0x25F);
            return;
          case 6:
            sub_5DDAA0(a1, a2, a3, a4, 0x400, 0x300);
            return;
          case 7:
            sub_5DDAA0(a1, a2, a3, a4, 0x500, 0x25F);
            return;
          case 8:
            sub_5DDAA0(a1, a2, a3, a4, 0x500, 0x2D0);
            def_5DDBD3(a5, a6);
            return;
          default:
            break;
        }
      }
    }
  }
  JUMPOUT(0x5DDC3F);
}
