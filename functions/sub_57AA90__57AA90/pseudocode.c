void __usercall sub_57AA90(double a1@<st2>, double a2@<st1>, char a3@<bpl>, double a4@<st0>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
          sub_5982A0(a1, a2, a3, a4);
      }
    }
  }
}
