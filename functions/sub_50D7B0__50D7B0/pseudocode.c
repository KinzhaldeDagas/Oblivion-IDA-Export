bool __cdecl sub_50D7B0(
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
  char v11; // bl
  TESForm *ActorBaseForm; // eax
  ExtraDataList *p_baseExtraList; // ecx
  UInt16 v14[2]; // [esp+4h] [ebp-8h] BYREF
  int v15; // [esp+8h] [ebp-4h]

  *(_DWORD *)v14 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v14);
  if ( result )
  {
    v9 = (Actor *)OblivionDynamicCast(
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    v10 = v9;
    if ( v9 )
    {
      v11 = 0;
      LOBYTE(v15) = 0;
      if ( *(_DWORD *)v14 )
      {
        v11 = 1;
        LOBYTE(v15) = 1;
      }
      ActorBaseForm = Actor_GetActorBaseForm(v9, 0);
      p_baseExtraList = &v10->members.super.super.baseExtraList;
      if ( v11 == (((int)ActorBaseForm[1].member.modlist.data & 0x2000) != 0) )
      {
        sub_4209C0(p_baseExtraList);
        return 1;
      }
      sub_420920(p_baseExtraList, v15);
    }
    return 1;
  }
  return result;
}
