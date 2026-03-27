bool __cdecl sub_50C290(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  _BYTE *v8; // esi
  bool result; // al
  int v10; // eax
  double v11; // [esp-4h] [ebp-10h]
  UInt16 v12[2]; // [esp+8h] [ebp-4h] BYREF

  v8 = OblivionDynamicCast(
         a4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( v8 )
  {
    *a7 = 1.0;
    *(_DWORD *)v12 = 0;
    result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12);
    if ( !result )
      return result;
    v10 = *(_DWORD *)v12;
    v8[0xC8] = *(_DWORD *)v12 != 0;
    if ( IsConsoleMode )
    {
      LODWORD(v11) = v10;
      Interface_ConsolePrint("SetForceRun >> %0.2f", v11);
    }
  }
  return 1;
}
