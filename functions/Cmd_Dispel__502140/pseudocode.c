bool __cdecl Cmd_Dispel(
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
  UInt16 v9[2]; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0;
  v10 = 0;
  result = 0;
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9, &v10) )
  {
    if ( !a4 )
      return 1;
    if ( !OblivionDynamicCast(
            a4,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0) )
      return 1;
    MagicTarget_RemoveEffects();
    if ( !EffectItemList_HasScriptEffect((_DWORD *)(*(_DWORD *)v9 + 0xC), (int)a5) )
      return 1;
  }
  return result;
}
