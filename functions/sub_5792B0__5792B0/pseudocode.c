char sub_5792B0()
{
  InterfaceManager *Singleton; // eax
  void *v1; // ecx

  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5792b4*/
  if ( Singleton ) /*0x5792be*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5792c4*/
    if ( Singleton->cursor ) /*0x5792cc*/
      LOBYTE(Singleton) = sub_40FDA0(v1); /*0x5792d2*/
  }
  return (char)Singleton; /*0x5792d7*/
}
