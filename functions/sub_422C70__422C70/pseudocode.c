// Create the actor-owned ExtraInfoGeneralTopic (extra type 0x59) or replace its raw MenuTopic pointer. The extra-data destructor owns and frees the stored 0x28-byte MenuTopic object.
ExtraInfoGeneralTopic *__thiscall ExtraDataList::SetInfoGeneralTopic(ExtraDataList *this, MenuTopicView *menuTopic)
{
  ExtraInfoGeneralTopic *result; // eax
  ExtraInfoGeneralTopic *v4; // eax
  ExtraInfoGeneralTopic *v5; // eax

  result = (ExtraInfoGeneralTopic *)BaseExtraList_GetExtraData(this, kExtraData_InfoGeneralTopic); /*0x422c96*/
  if ( result ) /*0x422c9d*/
  {
    result->menuTopic = (#9841 *)menuTopic;     // On an existing ExtraInfoGeneralTopic, Oblivion replaces the cached MenuTopic pointer without destroying the prior object. Fallout's analogous setter (x4y6:0x82276370) performs the same raw pointer assignment; this is a shared pattern, not a version-specific behavior change. /*0x422cf0*/
  }
  else
  {
    v4 = (ExtraInfoGeneralTopic *)FormHeapAlloc(0x10u); /*0x422ca1*/
    if ( v4 ) /*0x422cb7*/
      v5 = ExtraInfoGeneralTopic::Constructor(v4, (UnkBohDialogueTopicBoh *)menuTopic); /*0x422cc0*/
    else
      v5 = 0; /*0x422cc7*/
    return (ExtraInfoGeneralTopic *)BaseExtraList_AddExtra(this, &v5->super); /*0x422cd4*/
  }
  return result; /*0x422cd9*/
}
