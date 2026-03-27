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
  Data *v11; // eax
  UInt16 v12[2]; // [esp+14h] [ebp-204h] BYREF

  LOBYTE(v12[0]) = 0;
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v12) )
  {
    if ( LOBYTE(v12[0]) )
    {
      v11 = (Data *)sub_447C50((int *)TESDataHandler, (char *)v12);
      if ( v11 )
      {
        *(_BYTE *)(TESDataHandler + 0xCD4) = 1;
        TESFile_Close(v11);
        *(_BYTE *)(TESDataHandler + 0xCD4) = 0;
        if ( IsConsoleMode )
          Interface_ConsolePrint("Closed file '%s'.", (const char *)v12);
      }
      else if ( IsConsoleMode )
      {
        Interface_ConsolePrint("ERR: Could not find file '%s'.", (const char *)v12);
      }
    }
    else if ( IsConsoleMode )
    {
      Interface_ConsolePrint("ERR: No Filename.");
    }
  }
}
