// Verified script callback for registered TogglePathGrid (name and TPG alias in the table row at B0B768). Calls TESPathGrid_ToggleDebugRendering and returns success.
char __usercall ScriptCommand_TogglePathGrid@<al>(NiNode *a1@<eax>)
{
  TESPathGrid_ToggleDebugRendering(a1); /*0x501650*/
  return 1; /*0x501657*/
}
