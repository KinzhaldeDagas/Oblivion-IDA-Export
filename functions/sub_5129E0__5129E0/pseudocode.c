bool __usercall sub_5129E0@<al>(
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
  void *v13; // esi
  void *v14; // eax
  const char *v15; // esi
  UInt16 v16[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v16 = 0;
  result = Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v16);
  if ( result )
  {
    if ( *(_DWORD *)v16 )
    {
      v13 = OblivionDynamicCast(
              *(void **)v16,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &SpellItem `RTTI Type Descriptor',
              0);
      v14 = OblivionDynamicCast(
              *(void **)v16,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectBOOK `RTTI Type Descriptor',
              0);
      if ( v14 )
      {
        sub_664850((int)TESDataHandler_g_PlayerRef, bp0, a2, st6_0, st7_0, (int)v14);
      }
      else if ( v13 )
      {
        PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, bp0, a2, st6_0, st7_0, (char *)v13 + 0x18);
      }
      else
      {
        PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, bp0, a2, st6_0, st7_0, 0);
      }
      if ( IsConsoleMode )
      {
        if ( !v13 )
        {
          Interface_ConsolePrint("Player Spell set to %s", "NONE");
          return 1;
        }
        v15 = *((const char **)v13 + 7);
        if ( !v15 )
          v15 = EmptyString;
        Interface_ConsolePrint("Player Spell set to %s", v15);
      }
    }
    return 1;
  }
  return result;
}
