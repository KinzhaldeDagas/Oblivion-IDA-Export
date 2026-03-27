void __thiscall sub_5318F0(TESForm *this)
{
  TESForm *v2; // esi
  TESForm *v3; // ebp
  TESForm *v4; // eax
  TESFormVtbl *v5; // eax
  TESFormVtbl **v6; // eax
  TESTopic *TopicInfoParent; // esi
  TESQuest *v8; // edi
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
  TESForm *v22; // [esp+20h] [ebp-124h]
  UInt32 v23; // [esp+24h] [ebp-120h]
  int a2; // [esp+28h] [ebp-11Ch]
  UInt32 v25; // [esp+2Ch] [ebp-118h]
  char v26[260]; // [esp+30h] [ebp-114h] BYREF
  unsigned int v27; // [esp+140h] [ebp-4h]

  if ( (this->member.flags & 8) == 0 )
  {
    v2 = 0;
    v3 = (TESForm *)((char *)this + 0x28);
    a2 = (int)TESForm_GetOverrideFile(this, 0xFFFFFFFF);
    v22 = 0;
    if ( this != (TESForm *)0xFFFFFFD8 )
    {
      while ( v3->vtbl )
      {
        *(_DWORD *)ArgList = v3->vtbl;
        TESForm_ResolveFormID((UInt32 *)ArgList, (Data *)a2);
        v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v5 = (TESFormVtbl *)OblivionDynamicCast(
                              v4,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESTopic `RTTI Type Descriptor',
                              0);
        if ( v5 )
        {
          v3->vtbl = v5;
          v22 = v3;
          v3 = *(TESForm **)&v3->member.type;
        }
        else
        {
          v6 = *(TESFormVtbl ***)&v3->member.type;
          if ( v6 )
          {
            *(_DWORD *)&v3->member.type = v6[1];
            v3->vtbl = *v6;
            FormHeapFree((unsigned int)v6);
          }
          else if ( v2 )
          {
            BSSimpleList_Remove(v2, *(int *)ArgList);
            v3 = *(TESForm **)&v2->member.type;
          }
          else
          {
            v3->vtbl = 0;
          }
          TopicInfoParent = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)this);
          v8 = sub_52F570(TopicInfoParent, (int)this);
          v20 = 0;
          v21 = 0;
          v27 = 0;
          sub_531200(this, (unsigned int *)&v20, 1);
          if ( TopicInfoParent && v8 )
          {
            refID = this->member.refID;
            v17 = TopicInfoParent->super.refID;
            vtbl = TopicInfoParent->vtbl;
            v23 = v8->super.refID;
            v25 = refID;
            v11 = ((int (__thiscall *)(TESTopic *, UInt32))vtbl->GetEditorName)(TopicInfoParent, v17);
            v12 = (const char *)((int (__thiscall *)(TESQuest *, UInt32, int))v8->vtbl->GetEditorName)(v8, v23, v11);
            v13 = v20;
            _sprintf(v26, "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)", v25, v20, v12, v15, v16, v18);
          }
          else
          {
            v13 = v20;
            _sprintf(v26, "TopicInfo %08X \"%s\"", this->member.refID, v20);
          }
          PrintError("Unable to find topic (%08X) for %s", *(_DWORD *)ArgList, v26);
          v27 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)v13);
          v20 = 0;
          v21 = 0;
        }
        if ( !v3 )
          break;
        v2 = v22;
      }
    }
    if ( this != (TESForm *)0xFFFFFFE8 )
      sub_56A480((UInt32 *)this + 6, this);
    v14 = *((Data **)this + 0xC);
    if ( v14 )
      sub_5314D0(v14, this);
    TESForm_SetIsLinked(this, 1);
  }
}
