bool __usercall sub_50B700@<al>(
        char bp0@<bpl>,
        double a2@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a6,
        TESObjectREFR *a4,
        TESObjectREFR *a8,
        Script *a9,
        ScriptEventList *l,
        int a11,
        UInt32 *a3)
{
  bool result; // al
  PlayerCharacter *v13; // eax
  UInt32 v14; // ecx
  UInt16 v15[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0;
  result = Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v15);
  if ( result )
  {
    v13 = TESDataHandler_g_PlayerRef;
    if ( TESDataHandler_g_PlayerRef->isSleeping )
    {
      v14 = *(_DWORD *)v15;
      if ( *(int *)v15 < 0 )
      {
        v14 = 0;
        *(_DWORD *)v15 = 0;
      }
      v13->HoursToSleep = v14;
      v13->isSleeping = 1;
      if ( !*(_DWORD *)v15 )
        sub_57B4C0(bp0, a2, st6_0, st7_0);
    }
    return 1;
  }
  return result;
}
