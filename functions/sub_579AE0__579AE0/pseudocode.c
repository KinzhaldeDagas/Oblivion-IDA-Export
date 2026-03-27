void __usercall sub_579AE0(double a1@<st2>, char a2@<bpl>, double a3@<st1>, double a4@<st0>)
{
  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk0B8) = 1;
      sub_5903E0(a1, a2, a4, a3);
    }
  }
}
