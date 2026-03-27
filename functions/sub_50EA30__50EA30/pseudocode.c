bool __cdecl sub_50EA30(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  int v8; // ecx
  bool result; // al
  const char *v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = v8;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    TESDataHandler_g_PlayerRef->isInSEWorld = *(_DWORD *)v11 != 0;
    if ( IsConsoleMode )
    {
      v10 = "is";
      if ( !TESDataHandler_g_PlayerRef->isInSEWorld )
        v10 = "is not";
      Interface_ConsolePrint("The player %s in the SE world", v10);
    }
    return 1;
  }
  return result;
}
