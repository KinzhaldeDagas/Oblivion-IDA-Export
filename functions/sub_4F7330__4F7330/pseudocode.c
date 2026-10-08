// GetGlobalValue_Eval (index 74 / opcode 0x104A): parameter must be TESGlobal (form type 0x04); returns its float value at +0x24, otherwise numeric 0.
char __cdecl GetGlobalValue_Eval(TESObjectREFR *subject, TESGlobal *global, TESForm *param2, double *value)
{
  *value = dbl_A3D360; /*0x4f7340*/
  if ( global ) /*0x4f7342*/
  {
    if ( global->super.type == kFormType_Global ) /*0x4f7348*/
      *value = global->data; /*0x4f734d*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f734f*/
    Interface_ConsolePrint("GetGlobalValue >> %0.2f", *value); /*0x4f7365*/
  return 1; /*0x4f736f*/
}
