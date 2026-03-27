void __cdecl sub_579370(int a1, int a2)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57D840(Singleton, a1, a2);
    }
  }
}
