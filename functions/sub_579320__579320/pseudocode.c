void __cdecl sub_579320(float a1, float a2)
{
  float *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
      sub_57F490(Singleton, a1, a2);
    }
  }
}
