void sub_57C0A0()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v5; // eax
  InterfaceManager *v6; // eax
  InterfaceManager *v7; // eax
  InterfaceManager *v8; // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_57CDE0(Singleton, 1);
      v5 = InterfaceManager_GetSingleton(0, 1);
      sub_57CE20(v5, 1);
      v6 = InterfaceManager_GetSingleton(0, 1);
      sub_57CE60(v6, 1);
      v7 = InterfaceManager_GetSingleton(0, 1);
      sub_57CEA0(v7, 4);
      v8 = InterfaceManager_GetSingleton(0, 1);
      sub_57D530(v8, 0x3EB);
    }
  }
  byte_B14500 = 1;
}
