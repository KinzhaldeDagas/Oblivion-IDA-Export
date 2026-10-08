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

  v10 = (Actor *)OblivionDynamicCast( /*0x512c21*/
                   a4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, a6, v11) ) /*0x512c35*/
  {
    if ( v10 ) /*0x512c47*/
    {
      ActorBaseForm = Actor_GetActorBaseForm(v10, 0); /*0x512c4d*/
      BSStringT_Set((BSStringT *)&ActorBaseForm[6].member.modlist.next, v11, 0); /*0x512c61*/
      v9 = Actor_GetActorBaseForm(v10, 0); /*0x512c6f*/
      TESForm_MarkAsModified(v9, 0x80); /*0x512c76*/
    }
  }
}
