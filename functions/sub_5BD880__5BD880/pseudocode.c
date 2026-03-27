void __userpurge sub_5BD880(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5, int a6)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax

  switch ( a5 )
  {
    case 2:
      sub_5BD830(a2, a3);
      sub_5BDA20(a1, a2, a3);
      break;
    case 5:
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F7);
      if ( OpenMenuTile )
      {
        ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
        if ( ParentMenu )
          sub_584740(ParentMenu, a2, a3);
      }
      sub_5A3540(a2, a3, a4);
      break;
    case 6:
      v10 = (_DWORD *)Menu_GetOpenMenuTile(0x3F7);
      if ( v10 )
      {
        v11 = (_DWORD *)Tile_GetParentMenu(v10);
        if ( v11 )
          sub_584740(v11, a2, a3);
      }
      sub_5DEB80(a1, a2, a3);
      break;
    case 7:
      v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3F7);
      if ( v12 )
      {
        v13 = (_DWORD *)Tile_GetParentMenu(v12);
        if ( v13 )
          sub_584740(v13, a2, a3);
      }
      sub_595380(a2, a3, a4);
      break;
    case 8:
      v14 = (_DWORD *)Menu_GetOpenMenuTile(0x3F7);
      if ( v14 )
      {
        v15 = (_DWORD *)Tile_GetParentMenu(v14);
        if ( v15 )
          sub_584740(v15, a2, a3);
      }
      sub_59BA40(a2, a3, a4);
      break;
  }
}
