bool __cdecl sub_5129E0(
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
  void *v13; // esi
  void *v14; // eax
  const char *v15; // esi
  UInt16 v16[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v16 = 0; /*0x512a08*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v16); /*0x512a10*/
  if ( result ) /*0x512a1a*/
  {
    if ( *(_DWORD *)v16 ) /*0x512a23*/
    {
      v13 = OblivionDynamicCast( /*0x512a51*/
              *(void **)v16,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &SpellItem `RTTI Type Descriptor',
              0);
      v14 = OblivionDynamicCast( /*0x512a53*/
              *(void **)v16,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectBOOK `RTTI Type Descriptor',
              0);
      if ( v14 ) /*0x512a5d*/
      {
        sub_664850(reference, (int)v14); /*0x512a8b*/
      }
      else if ( v13 ) /*0x512a61*/
      {
        PlayerCharacter_SetCurrentMagicItem(reference, (char *)v13 + 0x18); /*0x512a6d*/
      }
      else
      {
        PlayerCharacter_SetCurrentMagicItem(reference, 0); /*0x512a7d*/
      }
      if ( MEMORY[0xB361AC] ) /*0x512a90*/
      {
        if ( !v13 ) /*0x512a9b*/
        {
          Interface_ConsolePrint("Player Spell set to %s", "NONE"); /*0x512aa8*/
          return 1; /*0x512ab4*/
        }
        v15 = *((const char **)v13 + 7); /*0x512ab5*/
        if ( !v15 ) /*0x512aba*/
          v15 = EmptyString; /*0x512abc*/
        Interface_ConsolePrint("Player Spell set to %s", v15); /*0x512ac7*/
      }
    }
    return 1; /*0x512ad0*/
  }
  return result; /*0x512a1d*/
}
