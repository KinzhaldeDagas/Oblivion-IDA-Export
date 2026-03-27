bool __cdecl sub_501760(
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
  MobileObject *v9; // eax
  bhkCharacterProxy *CharProxy; // eax
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(float *)v11 = 0.0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    v9 = (MobileObject *)OblivionDynamicCast(
                           a4,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
    if ( v9 )
    {
      CharProxy = MobileObject_GetCharProxy(v9);
      if ( CharProxy )
        sub_894BD0((int)CharProxy, *(float *)v11);
    }
    return 1;
  }
  return result;
}
