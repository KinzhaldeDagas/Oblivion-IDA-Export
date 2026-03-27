void __cdecl sub_500E60(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  UInt16 v8[2]; // [esp+14h] [ebp-204h] BYREF

  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v8) )
    sub_444740((const char *)v8);
}
