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

  v2 = this; /*0x56ae62*/
  v33 = *(_BYTE *)(this + 0x14); /*0x56ae68*/
  v3 = (unsigned __int16 *)(this + 8); /*0x56ae69*/
  a1.member.refID = this; /*0x56ae6e*/
  sub_56B2E0(a2, (unsigned __int16 *)(this + 8), v33); /*0x56ae72*/
  result = *v3; /*0x56ae77*/
  if ( !*(_DWORD *)(0x28 * result + 0xB0C8E0) ) /*0x56ae82*/
  {
    type = a2->member.type; /*0x56ae8f*/
    if ( type == kFormType_DialogInfo ) /*0x56ae94*/
    {
      v6 = (TESForm *)OblivionDynamicCast( /*0x56aeac*/
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESTopicInfo `RTTI Type Descriptor',
                        0);
      TopicInfoParent = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v6); /*0x56aeb7*/
      a1.vtbl = (TESFormVtbl *)TESTopic::GetOwnerQuest(TopicInfoParent, (int)v6); /*0x56aec1*/
      a1.member.modlist.next = 0; /*0x56aec5*/
      v38 = 0; /*0x56aec9*/
      v39 = 0; /*0x56aece*/
      v42 = 0; /*0x56aedb*/
      TESTopicInfo::GetInfoDisplayText(v6, (unsigned int *)&a1.member.modlist.next, 0); /*0x56aee2*/
      refID = TopicInfoParent->super.refID; /*0x56aeee*/
      v9 = v6->member.refID; /*0x56aef5*/
      *(_DWORD *)&a1.member.type = a1.vtbl->super.CompareTo; /*0x56aef8*/
      vtbl = TopicInfoParent->vtbl; /*0x56aefc*/
      a1.member.modlist.data = (Data *)a1.member.modlist.next; /*0x56aefe*/
      v11 = ((int (__thiscall *)(TESTopic *, UInt32))vtbl->GetEditorName)(TopicInfoParent, refID); /*0x56af0b*/
      v12 = (const char *)(*((int (__thiscall **)(TESFormVtbl *, _DWORD, int))a1.vtbl->super.InitializeComponent + 0x35))( /*0x56af1f*/
                            a1.vtbl,
                            *(_DWORD *)&a1.member.type,
                            v11);
      _sprintf( /*0x56af32*/
        ArgList,
        "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)",
        v9,
        (const char *)a1.member.modlist.data,
        v12,
        v31,
        v32,
        v34);
      v42 = 0xFFFFFFFF; /*0x56af3c*/
      FormHeapFree((unsigned int)a1.member.modlist.next); /*0x56af47*/
      v2 = a1.member.refID; /*0x56af4c*/
    }
    else
    {
      v13 = *(const char **)(0xC * (unsigned __int8)type + 0xB05E04); /*0x56af60*/
      v14 = (const char *)((int (__thiscall *)(TESForm *, UInt32))a2->vtbl->GetEditorName)(a2, a2->member.refID); /*0x56af70*/
      _sprintf(ArgList, "Form %s %s (%08X)", v13, v14, v35); /*0x56af7e*/
    }
    v15 = *(unsigned __int16 *)(v2 + 8); /*0x56af86*/
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x56af8e*/
    result = PrintError( /*0x56afac*/
               "%s in file %s contains bad condition item data. Function \"%s\" is not a condition function.",
               ArgList,
               OverrideFile->name,
               *(const char **)(0x28 * v15 + 0xB0C8C0));
  }
  if ( (*(_BYTE *)v2 & 4) != 0 ) /*0x56afb7*/
  {
    result = *(_DWORD *)(v2 + 4); /*0x56afbd*/
    if ( result ) /*0x56afc2*/
    {
      a1.vtbl = *(TESFormVtbl **)(v2 + 4); /*0x56afcc*/
      v17 = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x56afd0*/
      TESForm_ResolveFormID((UInt32 *)&a1, v17); /*0x56afdb*/
      v18 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x56aff4*/
      result = (int)OblivionDynamicCast( /*0x56affd*/
                      v18,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESGlobal `RTTI Type Descriptor',
                      0);
      *(_DWORD *)(v2 + 4) = result; /*0x56b007*/
      if ( !result ) /*0x56b00a*/
      {
        v19 = a2->member.type; /*0x56b010*/
        if ( v19 == kFormType_DialogInfo ) /*0x56b015*/
        {
          v20 = (TESForm *)OblivionDynamicCast( /*0x56b02d*/
                             a2,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESTopicInfo `RTTI Type Descriptor',
                             0);
          v21 = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v20); /*0x56b038*/
          v22 = TESTopic::GetOwnerQuest(v21, (int)v20); /*0x56b042*/
          *(_DWORD *)&a1.member.type = 0; /*0x56b044*/
          a1.member.flags = 0; /*0x56b048*/
          v42 = 1; /*0x56b05a*/
          TESTopicInfo::GetInfoDisplayText(v20, (unsigned int *)&a1.member, 0); /*0x56b065*/
          v23 = (const char *)v20->member.refID; /*0x56b074*/
          v36 = v21->super.refID; /*0x56b077*/
          v24 = v21->vtbl; /*0x56b078*/
          a1.member.refID = v22->super.refID; /*0x56b07a*/
          a1.member.modlist.data = *(Data **)&a1.member.type; /*0x56b07e*/
          v25 = ((int (__thiscall *)(TESTopic *, UInt32))v24->GetEditorName)(v21, v36); /*0x56b08a*/
          v26 = ((int (__thiscall *)(TESQuest *, UInt32, int))v22->vtbl->GetEditorName)(v22, a1.member.refID, v25); /*0x56b09c*/
          HIDWORD(v29) = "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)"; /*0x56b0a5*/
          LODWORD(v29) = 0x410; /*0x56b0b1*/
          _snprintf(Dest, v29, v23, a1.member.modlist.data, v26); /*0x56b0b7*/
          v42 = 0xFFFFFFFF; /*0x56b0c1*/
          FormHeapFree(*(unsigned int *)&a1.member.type); /*0x56b0cc*/
          *(_DWORD *)&a1.member.type = 0; /*0x56b0d4*/
          a1.member.flags = 0; /*0x56b0dd*/
        }
        else
        {
          v27 = *(const char **)(0xC * (unsigned __int8)v19 + 0xB05E04); /*0x56b0ef*/
          v28 = ((int (__thiscall *)(TESForm *, UInt32))a2->vtbl->GetEditorName)(a2, a2->member.refID); /*0x56b0ff*/
          HIDWORD(v30) = "Form %s %s (%08X)"; /*0x56b103*/
          LODWORD(v30) = 0x410; /*0x56b10f*/
          _snprintf(Dest, v30, v27, v28); /*0x56b115*/
        }
        return PrintError( /*0x56b12f*/
                 "Unable to find Value TESGlobal (%08X) in TESConditionItem Init for form:\n\n%s.",
                 a1.vtbl,
                 Dest);
      }
    }
  }
  return result; /*0x56b137*/
}
