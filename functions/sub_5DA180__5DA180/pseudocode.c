double __usercall sub_5DA180@<st0>(
        double a1@<st7>,
        double a2@<st6>,
        double a3@<st5>,
        double a4@<st4>,
        double a5@<st2>,
        double result@<st0>)
{
  if ( InterfaceManager_MenuModeHasFocus(0x3EB) ) /*0x5da185*/
  {
    if ( unk_B3B43D ) /*0x5da191*/
      return sub_5C1000(a1, a2, a3, a4, a5, result); /*0x5da19a*/
  }
  return result; /*0x5da19f*/
}
