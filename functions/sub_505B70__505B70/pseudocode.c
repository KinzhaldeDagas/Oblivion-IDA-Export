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
  Actor *v9; // eax
  Actor *v10; // esi
  UInt16 v11[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x505b9a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x505ba2*/
  if ( result ) /*0x505bac*/
  {
    if ( a4 ) /*0x505bb3*/
    {
      v9 = (Actor *)OblivionDynamicCast( /*0x505bc4*/
                      a4,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      v10 = v9; /*0x505bc9*/
      if ( v9 ) /*0x505bd0*/
      {
        if ( *(_DWORD *)v11 ) /*0x505bd9*/
        {
          sub_5E8E60(v9, 1); /*0x505bdd*/
          sub_5E02B0(v10); /*0x505be4*/
          return 1; /*0x505bed*/
        }
        sub_5E8E60(v9, 0); /*0x505bf0*/
      }
    }
    return 1; /*0x505bf5*/
  }
  return result; /*0x505bb0*/
}
