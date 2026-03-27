char __usercall Cmd_ShowEnchantment@<al>(double a1@<st2>, double a2@<st1>)
{
  if ( TESDataHandler_g_PlayerRef )
    EnchMenu_Create(a1, a2);
  return 1;
}
