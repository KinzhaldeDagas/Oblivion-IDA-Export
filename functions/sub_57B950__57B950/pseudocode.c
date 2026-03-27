void __usercall sub_57B950(char a1@<bpl>, double a2@<st2>, double a3@<st1>, int ArgList, float a5)
{
  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
      sub_5ADEC0(a1, a3, a2, ArgList, a5);
  }
}
