char __usercall Cmd_ShowSpellmaking@<al>(char a1@<bl>, char a2@<bpl>, char a3@<dil>, double a4@<st2>, double a5@<st1>)
{
  if ( TESDataHandler_g_PlayerRef )
    SpellMakingMenu_Show(a1, a2, a3, a4, a5);
  return 1;
}
