bool __cdecl sub_50C980(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  SInt32 v9; // eax
  SInt32 v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    v9 = TESDataHandler_g_PlayerRef->vtbl->super.GetFame((Actor *)TESDataHandler_g_PlayerRef);
    TESDataHandler_g_PlayerRef->unk6F4 = *(_DWORD *)v11 + v9;
    if ( IsConsoleMode )
    {
      v10 = TESDataHandler_g_PlayerRef->vtbl->super.GetFame((Actor *)TESDataHandler_g_PlayerRef);
      Interface_ConsolePrint("Player Fame is %d ", v10);
    }
    return 1;
  }
  return result;
}
