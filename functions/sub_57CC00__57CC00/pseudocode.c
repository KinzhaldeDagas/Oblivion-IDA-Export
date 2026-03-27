void __usercall sub_57CC00(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v5; // esi

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 )
        {
          v5 = InterfaceManager_GetSingleton(0, 1);
          sub_57C420(a2, a3, a1, a4, 0, 1);
          sub_57C5F0(a2, a3, a1, a4, 0, 1);
          sub_57C7C0(a3, a2, a1, a4, 0, 1);
          sub_57A480(a2, a3, a1, a4, 0, 1);
          sub_57ECB0(v5, a2, a3);
          sub_57AA90(a2, a3, a1, a4);
          sub_57B600(a1, a2, a3, a4);
          HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a2, a3, a4, 0, 1);
        }
      }
    }
  }
}
