double __usercall sub_57CAC0@<st0>(char a1@<bpl>, double a2@<st1>, double result@<st0>, double a4@<st2>)
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v5; // edi
  int v6; // esi
  InterfaceManager *v7; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57cac4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57cae0*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57caf6*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57cb04*/
        if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) == fConstant_2 ) /*0x57cb26*/
        {
          v5 = InterfaceManager_GetSingleton(0, 1); /*0x57cb3a*/
          Tile_GetFloat((_DWORD *)v5->menuRoot, 0x1771); /*0x57cb44*/
          v6 = Double_To_SInt32(result); /*0x57cb4e*/
          if ( !v6 ) /*0x57cb52*/
          {
            v7 = InterfaceManager_GetSingleton(0, 1); /*0x57cb57*/
            sub_57E150((int)v7, a1, result, a4); /*0x57cb61*/
            v6 = 0x3EB; /*0x57cb66*/
          }
          sub_57DE50(0x10); /*0x57cb6d*/
          switch ( v6 ) /*0x57cb87*/
          {
            case 0x3EA: /*0x57cb87*/
              sub_57C7C0(a2, a4, a1, result, 1, 0); /*0x57cba8*/
              break; /*0x57cbad*/
            case 0x3EB: /*0x57cb87*/
              sub_57A480(a4, a2, a1, result, 1, 0); /*0x57cbb3*/
              break; /*0x57cbb3*/
            case 0x3FE: /*0x57cb87*/
              sub_57C5F0(a4, a2, a1, result, 1, 0); /*0x57cb9d*/
              break; /*0x57cba2*/
            case 0x3FF: /*0x57cb87*/
              sub_57C420(a4, a2, a1, result, 1, 0); /*0x57cb92*/
              break; /*0x57cb97*/
            default:
              break;
          }
          HideEquipment((TESObjectREFR *)reference, a4, a2, result, 0, 0); /*0x57cbbb*/
          sub_57D5B0((int)v5, a1, a4, a2); /*0x57cbce*/
        }
      }
    }
  }
  return result; /*0x57cbd3*/
}
