void __usercall sub_57A3B0(double st6_0@<st1>, char a2)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5
  Tile *OpenMenuTile; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57a3b4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57a3cc*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57a3de*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a3e8*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57a3fa*/
        if ( Float == fConstant_2 ) /*0x57a40a*/
        {
          OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3EA); /*0x57a411*/
          if ( OpenMenuTile ) /*0x57a41b*/
          {
            if ( a2 || Tile::IsVisible(OpenMenuTile) ) /*0x57a426*/
              InventoryMenu_InitializeOrUpdate(Float, st6_0); /*0x57a42f*/
          }
        }
      }
    }
  }
}
