bool __cdecl sub_500F70(
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
  bool v9; // zf
  const char *v10; // eax
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  byte_B3BD9A = byte_B3BD9A == 0;
  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    v9 = IsConsoleMode == 0;
    dword_B3BD9C = *(_DWORD *)v11;
    if ( !v9 )
    {
      v10 = (const char *)&aOn_0;
      if ( !byte_B3BD9A )
        v10 = (const char *)&aOff;
      Interface_ConsolePrint("AI Detection stats printing is  %s", v10);
    }
    return 1;
  }
  return result;
}
