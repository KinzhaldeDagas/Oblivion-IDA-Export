void __usercall sub_579220(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  InterfaceManager *Singleton; // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579224*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57923c*/
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x579246*/
      InterfaceManager::UpdateMenuFades(Singleton, a1, a2, a3, a4); /*0x579250*/
    }
  }
}
