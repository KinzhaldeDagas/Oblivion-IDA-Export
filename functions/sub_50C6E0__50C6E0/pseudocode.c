bool __cdecl sub_50C6E0(
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
  void *v9; // eax
  void *v10; // eax
  TESNPC *v11; // eax
  UInt16 v12[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0; /*0x50c70a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12); /*0x50c712*/
  if ( result ) /*0x50c71c*/
  {
    if ( a4 ) /*0x50c723*/
    {
      v9 = OblivionDynamicCast( /*0x50c734*/
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0);
      if ( v9 ) /*0x50c73e*/
      {
        if ( *(_DWORD *)v12 ) /*0x50c745*/
        {
          v10 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 0x170))(v9); /*0x50c75f*/
          v11 = (TESNPC *)OblivionDynamicCast( /*0x50c762*/
                            v10,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESNPC `RTTI Type Descriptor',
                            0);
          if ( v11 ) /*0x50c76c*/
          {
            v11->member.npcClass = *(TESClass **)v12; /*0x50c772*/
            TESNPC_RecalculateAutoStats(v11, 0); /*0x50c77c*/
          }
        }
      }
    }
    return 1; /*0x50c781*/
  }
  return result; /*0x50c720*/
}
