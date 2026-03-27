void __usercall sub_579260(double a1@<st2>, double a2@<st1>, BSRenderedTexture *a3)
{
  void *v3; // ecx
  int *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( !sub_40FDA0(v3) )
      {
        Singleton = (int *)InterfaceManager_GetSingleton(0, 1);
        MiscPass(Singleton, a1, a2, a3);
      }
    }
  }
}
