void __cdecl sub_579320(float a1, float a2)
{
  float *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579324*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57933c*/
    {
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x579358*/
      sub_57F490(Singleton, a1, a2); /*0x579362*/
    }
  }
}
