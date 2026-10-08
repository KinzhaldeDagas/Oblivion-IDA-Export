// Verified command-table callback for "TogglePathLine" (string A512EC, row at B0B790). Calls TogglePathLineState and returns success; immediate behavior is a boolean state flip. The consumer/update behavior of that state is not established by this callback alone.
char __cdecl ScriptCommand_TogglePathLine()
{
  TogglePathLineState(); /*0x501660*/
  return 1; /*0x501667*/
}
