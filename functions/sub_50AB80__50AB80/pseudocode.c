bool __cdecl sub_50AB80(
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
  int v12; // [esp+0h] [ebp-Ch]
  UInt16 v13[2]; // [esp+4h] [ebp-8h] BYREF
  int v14; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x50abb1*/
  v14 = 0; /*0x50abb9*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13, &v14); /*0x50abc1*/
  if ( result ) /*0x50abcb*/
  {
    *a7 = 0.0; /*0x50abda*/
    v9 = (Actor *)OblivionDynamicCast( /*0x50abe9*/
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    v10 = v9; /*0x50abee*/
    if ( v9 ) /*0x50abf5*/
    {
      ActorBaseForm = Actor_GetActorBaseForm(v9, 1); /*0x50abfb*/
      if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x50ac06*/
        ActorBaseForm = Actor_GetActorBaseForm(v10, 0); /*0x50ac10*/
      if ( ActorBaseForm ) /*0x50ac17*/
      {
        if ( *(_DWORD *)v13 ) /*0x50ac1f*/
          TESActorBaseData_SetFactionRank((char *)&ActorBaseForm[1].member.refID, *(int *)v13, v14, v12, v13[0]); /*0x50ac2a*/
      }
    }
    return 1; /*0x50ac2f*/
  }
  return result; /*0x50abcd*/
}
