bool __cdecl sub_503BC0(
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
  _DWORD **v9; // eax
  int v10; // ecx
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    if ( a4 )
    {
      v9 = (_DWORD **)OblivionDynamicCast(
                        a4,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
      if ( v9 )
      {
        LOBYTE(v10) = *(_DWORD *)v11 > 0;
        Actor_SetAlerted(v9, v10);
      }
    }
    return 1;
  }
  return result;
}
