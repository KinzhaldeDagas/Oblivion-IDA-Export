// TES4 authoritative parser exception used by MessageBox and EssentialDeathReload. Handles message-style variable argument bytecode, not needed for fixed-param OBSE movement commands.
char __usercall Cmd_MessageBox_ParseVarArgs@<al>(double a1@<st2>, double a2@<st1>, int a3, int a4, int a5, char *a6)
{
  return sub_4FEF80(a1, a2, a3, a4, a5, a6, 1); /*0x50014e*/
}
