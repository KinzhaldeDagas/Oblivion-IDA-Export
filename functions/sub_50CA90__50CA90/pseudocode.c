bool __cdecl sub_50CA90(
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
  PlayerCharacter *v9; // eax
  SInt32 v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    v9 = TESDataHandler_g_PlayerRef;
    v9->unk6F8 += *(_DWORD *)v11;
    v9->unk6FC = 0;
    if ( IsConsoleMode )
    {
      v10 = TESDataHandler_g_PlayerRef->vtbl->super.GetInfamy((Actor *)TESDataHandler_g_PlayerRef);
      Interface_ConsolePrint("Player infamy is %d ", v10);
    }
    return 1;
  }
  return result;
}
