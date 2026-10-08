void __usercall sub_579AE0(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x579ae4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x579afc*/
    {
      LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk0B8) = 1; /*0x579b0e*/
      sub_5903E0(a1, a3, a2); /*0x579b15*/
    }
  }
}
