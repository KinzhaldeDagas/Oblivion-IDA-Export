int __thiscall sub_56AE20(UInt32 this, TESForm *a2)
{
  UInt32 v2; // edi
  unsigned __int16 *v3; // ebx
  int result; // eax
  TESForm::FormType type; // al
  TESForm *v6; // edi
  TESTopic *TopicInfoParent; // ebx
  UInt32 refID; // eax
  UInt32 v9; // edi
  TESFormVtbl *vtbl; // edx
  int v11; // eax
  const char *v12; // eax
  const char *v13; // ebx
  const char *v14; // eax
  int v15; // ebx
  Data *OverrideFile; // eax
  Data *v17; // eax
  TESForm *v18; // eax
  TESForm::FormType v19; // al
  TESForm *v20; // esi
  TESTopic *v21; // edi
  TESQuest *v22; // ebx
  const char *v23; // esi
  TESFormVtbl *v24; // eax
  int v25; // eax
  int v26; // eax
  const char *v27; // edi
  int v28; // eax
  size_t v29; // [esp-20h] [ebp-880h]
  size_t v30; // [esp-14h] [ebp-874h]
  int v31; // [esp-Ch] [ebp-86Ch]
  const char *v32; // [esp-8h] [ebp-868h]
  char v33; // [esp-4h] [ebp-864h]
  int v34; // [esp-4h] [ebp-864h]
  int v35; // [esp-4h] [ebp-864h]
  UInt32 v36; // [esp-4h] [ebp-864h]
  TESForm a1; // [esp+14h] [ebp-84Ch] BYREF
  __int16 v38; // [esp+2Ch] [ebp-834h]
  __int16 v39; // [esp+2Eh] [ebp-832h]
  char ArgList[1040]; // [esp+30h] [ebp-830h] BYREF
  char Dest[1040]; // [esp+440h] [ebp-420h] BYREF
  int v42; // [esp+85Ch] [ebp-4h]

  v2 = this;
  v33 = *(_BYTE *)(this + 0x14);
  v3 = (unsigned __int16 *)(this + 8);
  a1.member.refID = this;
  sub_56B2E0(a2, (unsigned __int16 *)(this + 8), v33);
  result = *v3;
  if ( !*(_DWORD *)(0x28 * result + 0xB0C8E0) )
  {
    type = a2->member.type;
    if ( type == kFormType_DialogInfo )
    {
      v6 = (TESForm *)OblivionDynamicCast(
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESTopicInfo `RTTI Type Descriptor',
                        0);
      TopicInfoParent = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v6);
      a1.vtbl = (TESFormVtbl *)sub_52F570(TopicInfoParent, (int)v6);
      a1.member.modlist.next = 0;
      v38 = 0;
      v39 = 0;
      v42 = 0;
      sub_531200(v6, (unsigned int *)&a1.member.modlist.next, 0);
      refID = TopicInfoParent->super.refID;
      v9 = v6->member.refID;
      *(_DWORD *)&a1.member.type = a1.vtbl->super.CompareTo;
      vtbl = TopicInfoParent->vtbl;
      a1.member.modlist.data = (Data *)a1.member.modlist.next;
      v11 = ((int (__thiscall *)(TESTopic *, UInt32))vtbl->GetEditorName)(TopicInfoParent, refID);
      v12 = (const char *)(*((int (__thiscall **)(TESFormVtbl *, _DWORD, int))a1.vtbl->super.InitializeComponent + 0x35))(
                            a1.vtbl,
                            *(_DWORD *)&a1.member.type,
                            v11);
      _sprintf(
        ArgList,
        "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)",
        v9,
        (const char *)a1.member.modlist.data,
        v12,
        v31,
        v32,
        v34);
      v42 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)a1.member.modlist.next);
      v2 = a1.member.refID;
    }
    else
    {
      v13 = *(const char **)(0xC * (unsigned __int8)type + 0xB05E04);
      v14 = (const char *)((int (__thiscall *)(TESForm *, UInt32))a2->vtbl->GetEditorName)(a2, a2->member.refID);
      _sprintf(ArgList, "Form %s %s (%08X)", v13, v14, v35);
    }
    v15 = *(unsigned __int16 *)(v2 + 8);
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
    result = PrintError(
               "%s in file %s contains bad condition item data. Function \"%s\" is not a condition function.",
               ArgList,
               OverrideFile->name,
               *(const char **)(0x28 * v15 + 0xB0C8C0));
  }
  if ( (*(_BYTE *)v2 & 4) != 0 )
  {
    result = *(_DWORD *)(v2 + 4);
    if ( result )
    {
      a1.vtbl = *(TESFormVtbl **)(v2 + 4);
      v17 = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)&a1, v17);
      v18 = TESForm_LookupByFormID((UInt32)a1.vtbl);
      result = (int)OblivionDynamicCast(
                      v18,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESGlobal `RTTI Type Descriptor',
                      0);
      *(_DWORD *)(v2 + 4) = result;
      if ( !result )
      {
        v19 = a2->member.type;
        if ( v19 == kFormType_DialogInfo )
        {
          v20 = (TESForm *)OblivionDynamicCast(
                             a2,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESTopicInfo `RTTI Type Descriptor',
                             0);
          v21 = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v20);
          v22 = sub_52F570(v21, (int)v20);
          *(_DWORD *)&a1.member.type = 0;
          a1.member.flags = 0;
          v42 = 1;
          sub_531200(v20, (unsigned int *)&a1.member, 0);
          v23 = (const char *)v20->member.refID;
          v36 = v21->super.refID;
          v24 = v21->vtbl;
          a1.member.refID = v22->super.refID;
          a1.member.modlist.data = *(Data **)&a1.member.type;
          v25 = ((int (__thiscall *)(TESTopic *, UInt32))v24->GetEditorName)(v21, v36);
          v26 = ((int (__thiscall *)(TESQuest *, UInt32, int))v22->vtbl->GetEditorName)(v22, a1.member.refID, v25);
          HIDWORD(v29) = "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)";
          LODWORD(v29) = 0x410;
          _snprintf(Dest, v29, v23, a1.member.modlist.data, v26);
          v42 = 0xFFFFFFFF;
          FormHeapFree(*(unsigned int *)&a1.member.type);
          *(_DWORD *)&a1.member.type = 0;
          a1.member.flags = 0;
        }
        else
        {
          v27 = *(const char **)(0xC * (unsigned __int8)v19 + 0xB05E04);
          v28 = ((int (__thiscall *)(TESForm *, UInt32))a2->vtbl->GetEditorName)(a2, a2->member.refID);
          HIDWORD(v30) = "Form %s %s (%08X)";
          LODWORD(v30) = 0x410;
          _snprintf(Dest, v30, v27, v28);
        }
        return PrintError(
                 "Unable to find Value TESGlobal (%08X) in TESConditionItem Init for form:\n\n%s.",
                 a1.vtbl,
                 Dest);
      }
    }
  }
  return result;
}
