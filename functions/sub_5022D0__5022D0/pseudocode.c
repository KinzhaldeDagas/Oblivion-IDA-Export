// GameMode begin-block callback: returns true when InterfaceManager_IsMenuMode() is false.
char __cdecl ScriptEvent_GameMode_Eval(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  *a7 = (double)(InterfaceManager_IsMenuMode() == 0); /*0x5022e7*/
  return 1; /*0x5022ec*/
}
