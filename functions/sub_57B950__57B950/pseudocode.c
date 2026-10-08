// Fast-travel UI/progress update helper called once per simulated travel-time step before relocation.
void __usercall sub_57B950(char a1@<bpl>, double a2@<st1>, int ArgList, float a4)
{
  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b954*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b96c*/
      sub_5ADEC0(a1, a2, a4, ArgList, a4); /*0x57b97f*/
  }
}
