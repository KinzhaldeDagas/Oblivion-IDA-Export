void sub_57C0A0()
{
  InterfaceManager *Singleton; // eax
  InterfaceManager *v1; // eax
  InterfaceManager *v2; // eax
  InterfaceManager *v3; // eax
  InterfaceManager *v4; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57c0a4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57c0bc*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57c0c8*/
      sub_57CDE0(Singleton, 1); /*0x57c0d2*/
      v1 = InterfaceManager_GetSingleton(0, 1); /*0x57c0dd*/
      sub_57CE20(v1, 1); /*0x57c0e7*/
      v2 = InterfaceManager_GetSingleton(0, 1); /*0x57c0f2*/
      sub_57CE60(v2, 1); /*0x57c0fc*/
      v3 = InterfaceManager_GetSingleton(0, 1); /*0x57c107*/
      sub_57CEA0(v3, 4); /*0x57c111*/
      v4 = InterfaceManager_GetSingleton(0, 1); /*0x57c11f*/
      sub_57D530(v4, 0x3EB); /*0x57c129*/
    }
  }
  byte_B14500 = 1; /*0x57c12e*/
}
