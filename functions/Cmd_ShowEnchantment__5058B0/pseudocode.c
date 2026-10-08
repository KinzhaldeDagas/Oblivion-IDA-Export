char __usercall Cmd_ShowEnchantment@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  if ( reference ) /*0x5058b0*/
    EnchMenu_Create(a1, a2, a3); /*0x5058b9*/
  return 1; /*0x5058c0*/
}
