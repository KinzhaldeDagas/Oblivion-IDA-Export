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

  *(_DWORD *)v15 = 0; /*0x510bba*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v15); /*0x510bc2*/
  if ( result ) /*0x510bcc*/
  {
    if ( a4 ) /*0x510bd3*/
    {
      v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x510bed*/
                              a4,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                              &Actor `RTTI Type Descriptor',
                              0);
      if ( v9 ) /*0x510bf4*/
      {
        if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v9->vtbl[1].Unk_4E)(v9, *(_DWORD *)v15) ) /*0x510c06*/
        {
          v10 = *(_DWORD *)v15; /*0x510c12*/
          *a7 = 1.0; /*0x510c16*/
          v11 = *(const char **)(v10 + 0x1C); /*0x510c1d*/
          if ( !v11 ) /*0x510c1f*/
            v11 = EmptyString; /*0x510c21*/
          Name = TESObjectREFR_GetName(v9); /*0x510c28*/
          Interface_ConsolePrint("Spell '%s' removed from %s", v11, Name); /*0x510c34*/
          return 1; /*0x510c41*/
        }
        v13 = *(const char **)(*(_DWORD *)v15 + 0x1C); /*0x510c4b*/
        if ( !v13 ) /*0x510c4d*/
          v13 = EmptyString; /*0x510c4f*/
        v14 = TESObjectREFR_GetName(v9); /*0x510c56*/
        Interface_ConsolePrint("Spell '%s' not found in %s", v13, v14); /*0x510c62*/
      }
    }
    return 1; /*0x510c6b*/
  }
  return result; /*0x510bd0*/
}
