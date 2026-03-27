void __cdecl sub_5797E0(char a1)
{
  InterfaceManager *Singleton; // eax
  int v6; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          v6 = *((_DWORD *)InterfaceManager_GetSingleton(0, 1)->menuRoot + 9);
          if ( a1 )
            *(_WORD *)(v6 + 0x18) &= ~1u;
          else
            *(_WORD *)(v6 + 0x18) |= 1u;
        }
      }
    }
  }
}
