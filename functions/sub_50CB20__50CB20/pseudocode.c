bool __cdecl sub_50CB20(
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
  int v10; // ecx
  PlayerCharacter *v11; // eax
  SInt32 v12; // eax
  UInt16 v13[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13);
  if ( result )
  {
    v9 = TESDataHandler_g_PlayerRef->vtbl->super.GetInfamy((Actor *)TESDataHandler_g_PlayerRef);
    v10 = *(_DWORD *)v13 - v9;
    v11 = TESDataHandler_g_PlayerRef;
    v11->unk6F8 += v10;
    v11->unk6FC = 0;
    if ( IsConsoleMode )
    {
      v12 = TESDataHandler_g_PlayerRef->vtbl->super.GetInfamy((Actor *)TESDataHandler_g_PlayerRef);
      Interface_ConsolePrint("Player infamy is %d ", v12);
    }
    return 1;
  }
  return result;
}
