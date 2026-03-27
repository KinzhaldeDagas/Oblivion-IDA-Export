char sub_579B20()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v1; // esi

  Singleton = InterfaceManager_GetSingleton(0, 1);
  if ( Singleton )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    if ( Singleton->cursor )
    {
      v1 = InterfaceManager_GetSingleton(0, 1);
      nullsub_returnTrue_0arg();
      (*(void (__thiscall **)(Tile *))(*(_DWORD *)v1->menuRoot + 0x18))(v1->menuRoot);
      nullsub_returnTrue_0arg();
      LOBYTE(Singleton) = sub_43FC20(TES, 1);
    }
  }
  return (char)Singleton;
}
