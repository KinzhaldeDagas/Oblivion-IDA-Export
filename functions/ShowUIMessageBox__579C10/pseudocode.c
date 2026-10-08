bool ShowUIMessageBox(
        const char *message,
        void (__cdecl *callback)(),
        unsigned int baseButtonIndex,
        const char *firstButton,
        ...)
{
  va_list v4; // ecx
  double v5; // st5
  double v6; // st6
  double Float; // st7
  InterfaceManager *Singleton; // eax
  va_list v10; // [esp+0h] [ebp-4h] BYREF
  va_list va; // [esp+18h] [ebp+14h] BYREF

  va_start(va, firstButton);
  v10 = v4; /*0x579c10*/
  if ( !InterfaceManager_GetSingleton(0, 1) || !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579c31*/
    return 0; /*0x579ce3*/
  va_copy(v10, va); /*0x579c43*/
  if ( InterfaceManager_GetSingleton(0, 1) /*0x579c9d*/
    && InterfaceManager_GetSingleton(0, 1)->cursor
    && InterfaceManager_GetSingleton(0, 1)->menuRoot
    && (Singleton = InterfaceManager_GetSingleton(0, 1),
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE),
        Float == fConstant_2) )
  {
    return sub_5BC8B0(v5, v6, Float, (char *)message, (int)callback, baseButtonIndex, (char *)firstButton, &v10); /*0x579cb7*/
  }
  else
  {
    return sub_5BCC00(v5, v6, Float, (char *)message, (int)callback, baseButtonIndex, (char *)firstButton, &v10); /*0x579cd9*/
  }
}
