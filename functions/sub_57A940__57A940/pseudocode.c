BSStringT *__usercall sub_57A940@<eax>(int a1@<ebp>, double a2@<st1>, double a3@<st0>, Actor *a4)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5

  if ( InterfaceManager_GetSingleton(0, 1) /*0x57a99a*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1),
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE),
        Float == fConstant_2) )
  {
    return TrainingMenu_Open(a1, Float, a2, a3, a4);// Sidecar decode: TrainingMenu open dispatch tail-jump into TrainingMenu_Open (0x5DD4B0). Chain hooks must preserve the original stack/tail-jump shape. /*0x57a99c*/
  }
  else
  {
    return 0; /*0x57a9a1*/
  }
}
