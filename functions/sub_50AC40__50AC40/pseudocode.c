bool __cdecl sub_50AC40(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  bool result; // al
  Actor *v9; // eax
  Actor *v10; // esi
  TESForm *ActorBaseForm; // eax
  int v12; // edx
  UInt16 v13[2]; // [esp+4h] [ebp-8h] BYREF
  int v14; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50ac71*/
  v14 = 0; /*0x50ac79*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13, &v14); /*0x50ac81*/
  if ( result ) /*0x50ac8b*/
  {
    *a7 = 0.0; /*0x50ac9a*/
    v9 = (Actor *)OblivionDynamicCast( /*0x50aca9*/
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    v10 = v9; /*0x50acae*/
    if ( v9 ) /*0x50acb5*/
    {
      ActorBaseForm = Actor_GetActorBaseForm(v9, 1); /*0x50acbb*/
      if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x50acc6*/
        ActorBaseForm = Actor_GetActorBaseForm(v10, 0); /*0x50acd0*/
      if ( ActorBaseForm ) /*0x50acd7*/
      {
        if ( *(_DWORD *)v13 ) /*0x50acdf*/
        {
          LOBYTE(v12) = v10 == (Actor *)reference; /*0x50ace7*/
          TESActorBaseData_ModFactionRank((char *)&ActorBaseForm[1].member.refID, *(int *)v13, v14, v12); /*0x50acf4*/
        }
      }
    }
    return 1; /*0x50acf9*/
  }
  return result; /*0x50ac8d*/
}
