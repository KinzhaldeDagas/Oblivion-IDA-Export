bool __cdecl CMd_RemoveSpell(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  bool result; // al
  TESObjectREFR *v9; // esi
  int v10; // ecx
  const char *v11; // edi
  char *Name; // eax
  const char *v13; // edi
  char *v14; // eax
  UInt16 v15[2]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v15);
  if ( result )
  {
    if ( a4 )
    {
      v9 = (TESObjectREFR *)OblivionDynamicCast(
                              a4,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                              &Actor `RTTI Type Descriptor',
                              0);
      if ( v9 )
      {
        if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl[1].Unk_4E)(v9, *(_DWORD *)v15) )
        {
          v10 = *(_DWORD *)v15;
          *a7 = 1.0;
          v11 = *(const char **)(v10 + 0x1C);
          if ( !v11 )
            v11 = EmptyString;
          Name = TESObjectREFR_GetName(v9);
          Interface_ConsolePrint("Spell '%s' removed from %s", v11, Name);
          return 1;
        }
        v13 = *(const char **)(*(_DWORD *)v15 + 0x1C);
        if ( !v13 )
          v13 = EmptyString;
        v14 = TESObjectREFR_GetName(v9);
        Interface_ConsolePrint("Spell '%s' not found in %s", v13, v14);
      }
    }
    return 1;
  }
  return result;
}
