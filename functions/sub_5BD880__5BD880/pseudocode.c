void __userpurge sub_5BD880(
        double a1@<st2>,
        double a2@<st1>,
        double started@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        int a8,
        int a9)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax

  switch ( a8 ) /*0x5bd887*/
  {
    case 2: /*0x5bd887*/
      sub_5BD830(a1, a4, a5, a6, a7); /*0x5bd889*/
      sub_5BDA20(); /*0x5bd88e*/
      break;
    case 5: /*0x5bd887*/
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F7); /*0x5bd8a0*/
      if ( OpenMenuTile ) /*0x5bd8aa*/
      {
        ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x5bd8ae*/
        if ( ParentMenu ) /*0x5bd8b5*/
          started = Menu::StartFadeOut(ParentMenu, a4, a5, a6, a7, a1, started); /*0x5bd8b9*/
      }
      sub_5A3540(a2, started); /*0x5bd8be*/
      break;
    case 6: /*0x5bd887*/
      v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3F7); /*0x5bd8d0*/
      if ( v12 ) /*0x5bd8da*/
      {
        v13 = (_DWORD *)Tile_GetParentMenu(v12); /*0x5bd8de*/
        if ( v13 ) /*0x5bd8e5*/
          started = Menu::StartFadeOut(v13, a4, a5, a6, a7, a1, started); /*0x5bd8e9*/
      }
      sub_5DEB80(a1, a2, started); /*0x5bd8ee*/
      break;
    case 7: /*0x5bd887*/
      v14 = (_DWORD *)Menu_GetOpenMenuTile(0x3F7); /*0x5bd900*/
      if ( v14 ) /*0x5bd90a*/
      {
        v15 = (_DWORD *)Tile_GetParentMenu(v14); /*0x5bd90e*/
        if ( v15 ) /*0x5bd915*/
          started = Menu::StartFadeOut(v15, a4, a5, a6, a7, a1, started); /*0x5bd919*/
      }
      sub_595380(a1, a2, started); /*0x5bd91e*/
      break;
    case 8: /*0x5bd887*/
      v16 = (_DWORD *)Menu_GetOpenMenuTile(0x3F7); /*0x5bd930*/
      if ( v16 ) /*0x5bd93a*/
      {
        v17 = (_DWORD *)Tile_GetParentMenu(v16); /*0x5bd93e*/
        if ( v17 ) /*0x5bd945*/
          started = Menu::StartFadeOut(v17, a4, a5, a6, a7, a1, started); /*0x5bd949*/
      }
      ControlsMenu_Open(a1, a2, started); /*0x5bd94e*/
      break;
  }
}
