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

  *(_DWORD *)v9 = 0; /*0x502172*/
  v10 = 0; /*0x50217a*/
  result = 0; /*0x50218f*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9, &v10) ) /*0x502182*/
  {
    if ( !a4 ) /*0x502198*/
      return 1; /*0x502198*/
    if ( !OblivionDynamicCast( /*0x5021a9*/
            a4,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0) )
      return 1; /*0x5021a9*/
    MagicTarget_RemoveEffects(); /*0x5021c1*/
    if ( !EffectItemList_HasScriptEffect((_DWORD *)(*(_DWORD *)v9 + 0xC), (int)a5) ) /*0x5021ce*/
      return 1; /*0x50218c*/
  }
  return result; /*0x50218e*/
}
