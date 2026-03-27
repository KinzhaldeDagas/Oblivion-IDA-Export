bool __cdecl sub_505B70(
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
  _DWORD *v9; // eax
  _DWORD **v10; // esi
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11);
  if ( result )
  {
    if ( a4 )
    {
      v9 = OblivionDynamicCast(
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0);
      v10 = (_DWORD **)v9;
      if ( v9 )
      {
        if ( *(_DWORD *)v11 )
        {
          sub_5E8E60(v9, 1);
          sub_5E02B0(v10);
          return 1;
        }
        sub_5E8E60(v9, 0);
      }
    }
    return 1;
  }
  return result;
}
