int __thiscall TESTopicInfo::GetFormDetailedString(TESForm *this, BSStringT *a2)
{
  int *TopicInfoParent; // eax
  TESTopic *v4; // esi
  const char *v5; // eax
  TESQuest *OwnerQuest; // eax
  const char *v7; // eax
  TESResponse *first; // ecx
  const char *Text; // eax
  int v11; // [esp-4h] [ebp-320h]
  int v12; // [esp-4h] [ebp-320h]
  char v13[260]; // [esp+Ch] [ebp-310h] BYREF
  char v14[260]; // [esp+110h] [ebp-20Ch] BYREF
  char v15[260]; // [esp+214h] [ebp-108h] BYREF

  v13[0] = 0; /*0x530eb1*/
  TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this); /*0x530eb6*/
  v4 = (TESTopic *)TopicInfoParent; /*0x530ebb*/
  if ( TopicInfoParent ) /*0x530ec2*/
  {
    v5 = (const char *)(*(int (__thiscall **)(int *, int))(*TopicInfoParent + 0xD4))( /*0x530ed2*/
                         TopicInfoParent,
                         TopicInfoParent[3]);
    _sprintf(v13, ", Topic '%s' (%08X)", v5, v11); /*0x530edf*/
  }
  v15[0] = 0; /*0x530ee9*/
  if ( v4 ) /*0x530ef1*/
  {
    OwnerQuest = TESTopic::GetOwnerQuest(v4, (OblivionTopicInfo *)this); /*0x530ef6*/
    if ( OwnerQuest ) /*0x530efd*/
    {
      v7 = (const char *)((int (__thiscall *)(TESQuest *, UInt32))OwnerQuest->vtbl->GetEditorName)( /*0x530f0d*/
                           OwnerQuest,
                           OwnerQuest->super.refID);
      _sprintf(v15, "Quest '%s' (%08X)", v7, v12); /*0x530f1d*/
    }
  }
  v14[0] = 0; /*0x530f27*/
  first = TESTopicInfo::GetResponseList((OblivionTopicInfo *)this)->first; /*0x530f34*/
  if ( first )
  {
    Text = TESResponse::GetText(first); /*0x530f3a*/
    _sprintf(v14, ", Text: \"%s\"", Text);
  }
  return BSStringT_Static_Format(
           a2,
           "%s Form '%s' (%08X): %s%s%s",
           *(const char **)(0xC * (unsigned __int8)this->member.type + 0xB05E04),
           EmptyString,
           this->member.refID,
           v15,
           v13,
           v14);
}
