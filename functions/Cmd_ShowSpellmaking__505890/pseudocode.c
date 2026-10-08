char __usercall Cmd_ShowSpellmaking@<al>(
        char a1@<bl>,
        char a2@<dil>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  if ( reference ) /*0x505890*/
    SpellMakingMenu_Show(a1, a2, a3, a4, a5); /*0x505899*/
  return 1; /*0x5058a0*/
}
