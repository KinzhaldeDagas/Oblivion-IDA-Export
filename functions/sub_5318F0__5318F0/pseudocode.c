void __thiscall sub_5318F0(TESForm *this)
{
  int *v2; // esi
  int *v3; // ebp
  TESForm *v4; // eax
  TESFormVtbl *v5; // eax
  TESFormVtbl **v6; // eax
  TESTopic *TopicInfoParent; // esi
  TESQuest *OwnerQuest; // edi
  UInt32 refID; // edx
  TESFormVtbl *vtbl; // eax
  int v11; // eax
  const char *v12; // eax
  const char *v13; // esi
  Data *v14; // ecx
  int v15; // [esp-Ch] [ebp-150h]
  const char *v16; // [esp-8h] [ebp-14Ch]
  UInt32 v17; // [esp-4h] [ebp-148h]
  int v18; // [esp-4h] [ebp-148h]
  char ArgList[4]; // [esp+14h] [ebp-130h] BYREF
  const char *v20; // [esp+18h] [ebp-12Ch] BYREF
  int v21; // [esp+1Ch] [ebp-128h]
  int *v22; // [esp+20h] [ebp-124h]
  UInt32 v23; // [esp+24h] [ebp-120h]
  int a2; // [esp+28h] [ebp-11Ch]
  UInt32 v25; // [esp+2Ch] [ebp-118h]
  char v26[260]; // [esp+30h] [ebp-114h] BYREF
  unsigned int v27; // [esp+140h] [ebp-4h]

  if ( (this->member.flags & 8) == 0 ) /*0x531935*/
  {
    v2 = 0; /*0x531942*/
    v3 = (int *)((char *)this + 0x28); /*0x531944*/
    a2 = (int)TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x531949*/
    v22 = 0; /*0x53194d*/
    if ( this != (TESForm *)0xFFFFFFD8 ) /*0x531951*/
    {
      while ( *v3 ) /*0x531964*/
      {
        *(_DWORD *)ArgList = *v3; /*0x531979*/
        TESForm_ResolveFormID((UInt32 *)ArgList, (Data *)a2); /*0x53197d*/
        v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x531998*/
        v5 = (TESFormVtbl *)OblivionDynamicCast( /*0x5319a1*/
                              v4,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESTopic `RTTI Type Descriptor',
                              0);
        if ( v5 ) /*0x5319ab*/
        {
          *v3 = (int)v5; /*0x531ad4*/
          v22 = v3; /*0x531ad7*/
          v3 = (int *)v3[1]; /*0x531adb*/
        }
        else
        {
          v6 = (TESFormVtbl **)v3[1]; /*0x5319b1*/
          if ( v6 ) /*0x5319b6*/
          {
            v3[1] = (int)v6[1]; /*0x5319d4*/
            *v3 = (int)*v6; /*0x5319da*/
            FormHeapFree((unsigned int)v6); /*0x5319dd*/
          }
          else if ( v2 ) /*0x5319ba*/
          {
            BSSimpleList_Remove(v2, *(int *)ArgList); /*0x5319c3*/
            v3 = (int *)v2[1]; /*0x5319c8*/
          }
          else
          {
            *v3 = 0; /*0x5319e7*/
          }
          TopicInfoParent = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)this); /*0x5319f7*/
          OwnerQuest = TESTopic::GetOwnerQuest(TopicInfoParent, (OblivionTopicInfo *)this); /*0x531a01*/
          v20 = 0; /*0x531a05*/
          v21 = 0; /*0x531a09*/
          v27 = 0; /*0x531a1c*/
          TESTopicInfo::GetInfoDisplayText(this, (unsigned int *)&v20, 1); /*0x531a23*/
          if ( TopicInfoParent && OwnerQuest ) /*0x531a2e*/
          {
            refID = this->member.refID; /*0x531a36*/
            v17 = TopicInfoParent->super.refID; /*0x531a39*/
            vtbl = TopicInfoParent->vtbl; /*0x531a3a*/
            v23 = OwnerQuest->super.refID; /*0x531a3c*/
            v25 = refID; /*0x531a40*/
            v11 = ((int (__thiscall *)(TESTopic *, UInt32))vtbl->GetEditorName)(TopicInfoParent, v17); /*0x531a4c*/
            v12 = (const char *)((int (__thiscall *)(TESQuest *, UInt32, int))OwnerQuest->vtbl->GetEditorName)( /*0x531a5e*/
                                  OwnerQuest,
                                  v23,
                                  v11);
            v13 = v20; /*0x531a60*/
            _sprintf(v26, "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)", v25, v20, v12, v15, v16, v18); /*0x531a75*/
          }
          else
          {
            v13 = v20; /*0x531a82*/
            _sprintf(v26, "TopicInfo %08X \"%s\"", this->member.refID, v20); /*0x531a92*/
          }
          PrintError("Unable to find topic (%08X) for %s", *(_DWORD *)ArgList, v26); /*0x531aa9*/
          v27 = 0xFFFFFFFF; /*0x531aaf*/
          FormHeapFree((unsigned int)v13); /*0x531aba*/
          v20 = 0; /*0x531ac4*/
          v21 = 0; /*0x531acd*/
        }
        if ( !v3 ) /*0x531ae0*/
          break; /*0x531ae0*/
        v2 = v22; /*0x531960*/
      }
    }
    if ( this != (TESForm *)0xFFFFFFE8 ) /*0x531aeb*/
      sub_56A480((UInt32 *)this + 6, this); /*0x531aee*/
    v14 = *((Data **)this + 0xC); /*0x531af3*/
    if ( v14 ) /*0x531af8*/
      sub_5314D0(v14, this); /*0x531afb*/
    TESForm_SetIsLinked(this, 1); /*0x531b04*/
  }
}
