char sub_5792B0()
{
  InterfaceManager *Singleton; // eax
  void *v5; // ecx

  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Singleton )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    if ( Singleton->cursor )
      LOBYTE(Singleton) = sub_40FDA0(v5);
  }
  return (char)Singleton;
}
