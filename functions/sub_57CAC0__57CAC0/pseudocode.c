double __usercall sub_57CAC0@<st0>(char a1@<bpl>, double a2@<st1>, double result@<st0>, double a4@<st2>)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v5; // edi
  int v6; // esi
  InterfaceManager *v7; // eax

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
          Tile_GetFloat((_DWORD *)v5->menuRoot, 0x1771);
          v6 = Double_To_SInt32(result);
          if ( !v6 )
          {
            v7 = InterfaceManager_GetSingleton(0, 1);
            sub_57E150((int)v7, a1, a2, result, a4);
            v6 = 0x3EB;
          }
          sub_57DE50(0x10);
          switch ( v6 )
          {
            case 0x3EA:
              sub_57C7C0(a2, a4, a1, result, 1, 0);
              break;
            case 0x3EB:
              sub_57A480(a4, a2, a1, result, 1, 0);
              break;
            case 0x3FE:
              sub_57C5F0(a4, a2, a1, result, 1, 0);
              break;
            case 0x3FF:
              sub_57C420(a4, a2, a1, result, 1, 0);
              break;
            default:
              break;
          }
          HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a4, a2, result, 0, 0);
          sub_57D5B0((int)v5, a1, a4, a2);
        }
      }
    }
  }
  return result;
}
