void __cdecl sub_508A20(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  Data *v8; // eax
  UInt16 v9[2]; // [esp+14h] [ebp-204h] BYREF

  LOBYTE(v9[0]) = 0; /*0x508a7d*/
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v9) )
  {
    if ( LOBYTE(v9[0]) )
    {
      v8 = (Data *)sub_447C50((int *)g_TESDataHandler, (char *)v9); /*0x508abd*/
      if ( v8 )
      {
        g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] = 1; /*0x508acc*/
        TESFile_Close(v8); /*0x508ad5*/
        g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] = 0; /*0x508ae0*/
        if ( MEMORY[0xB361AC] ) /*0x508ae7*/
          Interface_ConsolePrint("Closed file '%s'.", (const char *)v9); /*0x508afa*/
      }
      else if ( MEMORY[0xB361AC] )
      {
        Interface_ConsolePrint("ERR: Could not find file '%s'.", (const char *)v9);
      }
    }
    else if ( MEMORY[0xB361AC] )
    {
      Interface_ConsolePrint("ERR: No Filename.");
    }
  }
}
