void __cdecl sub_579370(_DWORD *a1, int a2)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579374*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57938c*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5793a0*/
      sub_57D840(Singleton, a1, a2); /*0x5793aa*/
    }
  }
}
