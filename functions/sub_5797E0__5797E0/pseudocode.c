void __cdecl sub_5797E0(char a1)
{
  InterfaceManager *Singleton; // eax
  int v2; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x5797e4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x5797fc*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57980e*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579818*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57983a*/
        {
          v2 = *((_DWORD *)InterfaceManager_GetSingleton(0, 1)->menuRoot + 9); /*0x579848*/
          if ( a1 ) /*0x579853*/
            *(_WORD *)(v2 + 0x18) &= ~1u; /*0x57985b*/
          else
            *(_WORD *)(v2 + 0x18) |= 1u; /*0x579855*/
        }
      }
    }
  }
}
