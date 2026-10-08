bool __cdecl sub_505AC0(
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

  *(_DWORD *)v11 = 0; /*0x505aea*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x505af2*/
  if ( result ) /*0x505afc*/
  {
    if ( a4 ) /*0x505b03*/
    {
      v9 = (Actor *)OblivionDynamicCast( /*0x505b14*/
                      a4,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      v10 = v9; /*0x505b19*/
      if ( v9 ) /*0x505b20*/
      {
        if ( *(_DWORD *)v11 ) /*0x505b29*/
        {
          sub_5E8E30(v9, 1); /*0x505b2d*/
          sub_5E02B0(v10); /*0x505b34*/
          return 1; /*0x505b3d*/
        }
        sub_5E8E30(v9, 0); /*0x505b40*/
      }
    }
    return 1; /*0x505b45*/
  }
  return result; /*0x505b00*/
}
