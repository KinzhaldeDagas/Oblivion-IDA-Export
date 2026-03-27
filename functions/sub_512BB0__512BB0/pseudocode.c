void __cdecl sub_512BB0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *a6,
        int a7,
        UInt32 *a8)
{
  TESForm *ActorBaseForm; // eax
  TESForm *v9; // eax
  Actor *v10; // [esp+18h] [ebp-20Ch]
  char v11[512]; // [esp+20h] [ebp-204h] BYREF

  v10 = (Actor *)OblivionDynamicCast(
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, a6, v11) )
  {
    if ( v10 )
    {
      ActorBaseForm = Actor_GetActorBaseForm(v10, 0);
      BSStringT_Set((BSStringT *)&ActorBaseForm[6].member.modlist.next, v11, 0);
      v9 = Actor_GetActorBaseForm(v10, 0);
      TESForm_MarkAsModified(v9, 0x80);
    }
  }
}
