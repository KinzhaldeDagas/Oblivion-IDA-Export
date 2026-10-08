// GetActorValue condition handler (index 14 / opcode 0x100E), used 34 times in core dialogue. Requires an actor subject; Actor flag 0x800 selects the base-form AV getter, otherwise the live actor value getter. The numeric result is then compared with the CTDA threshold; subject/target selection follows Oblivion's operatorAndFlags run-on handling.
void __usercall Cmd_GetAV_EvalOrConsole(double a1@<st1>, Actor *a2, int a3, int a4, double *a5)
{
  void (__stdcall *SaveGame)(int); // eax

  if ( a2 )
  {
    if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) )
    {
      if ( (a2->members.super.super.super.flags & 0x800) != 0 ) /*0x4f6084*/
        SaveGame = (void (__stdcall *)(int))Actor_GetActorBaseForm(a2, 0)->vtbl[1].SaveGame; /*0x4f609b*/
      else
        SaveGame = (void (__stdcall *)(int))a2->vtbl->GetAV_F; /*0x4f6088*/
      SaveGame(a3); /*0x4f60a6*/
      *a5 = a1; /*0x4f60ac*/
      if ( MEMORY[0xB361AC] )
        Interface_ConsolePrint("GetActorValue: %s >> %0.2f", *(const char **)(4 * a3 + 0xB0A1A8), *a5);
    }
  }
}
