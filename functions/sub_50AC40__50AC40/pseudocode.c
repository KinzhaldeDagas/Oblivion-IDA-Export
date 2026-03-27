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

  *(_DWORD *)v13 = 0;
  v14 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13, &v14);
  if ( result )
  {
    *a7 = 0.0;
    v9 = (Actor *)OblivionDynamicCast(
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    v10 = v9;
    if ( v9 )
    {
      ActorBaseForm = Actor_GetActorBaseForm(v9, 1);
      if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID )
        ActorBaseForm = Actor_GetActorBaseForm(v10, 0);
      if ( ActorBaseForm )
      {
        if ( *(_DWORD *)v13 )
        {
          LOBYTE(v12) = v10 == (Actor *)TESDataHandler_g_PlayerRef;
          TESActorBaseData_ModFactionRank((char *)&ActorBaseForm[1].member.refID, *(int *)v13, v14, v12);
        }
      }
    }
    return 1;
  }
  return result;
}
