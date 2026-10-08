// CustomAnimSupport evidence: player node/control-state check used by install/defer and playback paths.
bool __cdecl sub_5790E0(int a1, int a2)
{
  InterfaceManager *Singleton; // eax
  _DWORD *OpenMenuTile; // eax
  _DWORD *v4; // esi

  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x5790e5*/
    return 0; /*0x5790e5*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579101*/
    return 0; /*0x579101*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x579117*/
    return 0; /*0x579117*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579121*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x579143*/
    return 0; /*0x579143*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(a1); /*0x57914a*/
  v4 = OpenMenuTile; /*0x57914f*/
  if ( !OpenMenuTile ) /*0x579156*/
    return 0; /*0x579198*/
  if ( !a2 || (a2 & *(_DWORD *)(Tile_GetParentMenu(OpenMenuTile) + 0x24)) != 0 ) /*0x57916b*/
    return Tile_GetFloat(v4, 0xFA1) != fConstant_1; /*0x579189*/
  return 0; /*0x579170*/
}
