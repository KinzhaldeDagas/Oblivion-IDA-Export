void __thiscall sub_5314D0(Data *this, TESForm *a2)
{
  TESForm::ModReferenceList *next; // ebx
  Data *data; // ebp
  UInt32 *p_unk008; // edi
  TESForm *v5; // eax
  void *v6; // eax
  UInt32 *v7; // eax
  int v8; // ebp
  OblivionTopicInfo *v9; // edi
  TESTopic *TopicInfoParent; // ebx
  TESFormVtbl **OwnerQuest; // ebp
  UInt32 refID; // eax
  TESFormVtbl *vtbl; // edx
  UInt32 v14; // edi
  int v15; // eax
  const char *v16; // eax
  const char *v17; // ebx
  UInt32 *v18; // ecx
  Data *v19; // edi
  TESForm *v20; // eax
  void *v21; // eax
  Data *v22; // eax
  int v23; // ebp
  OblivionTopicInfo *v24; // edi
  TESTopic *v25; // ebx
  Data **v26; // ebp
  UInt32 v27; // eax
  TESFormVtbl *v28; // edx
  UInt32 v29; // edi
  int v30; // eax
  const char *v31; // eax
  const char *v32; // ebx
  Data *ghostFileParent; // ecx
  int v34; // [esp-Ch] [ebp-25Ch]
  int v35; // [esp-Ch] [ebp-25Ch]
  const char *v36; // [esp-8h] [ebp-258h]
  const char *v37; // [esp-8h] [ebp-258h]
  int v38; // [esp-4h] [ebp-254h]
  int v39; // [esp-4h] [ebp-254h]
  UInt32 *v40; // [esp+14h] [ebp-23Ch]
  Data *v41; // [esp+14h] [ebp-23Ch]
  const char *v42; // [esp+18h] [ebp-238h] BYREF
  __int16 v43; // [esp+1Ch] [ebp-234h]
  __int16 v44; // [esp+1Eh] [ebp-232h]
  TESForm a1; // [esp+20h] [ebp-230h] BYREF
  char v46[260]; // [esp+38h] [ebp-218h] BYREF
  char v47[260]; // [esp+13Ch] [ebp-114h] BYREF
  int v48; // [esp+24Ch] [ebp-4h]

  next = (TESForm::ModReferenceList *)a2; /*0x53150b*/
  data = this; /*0x531512*/
  p_unk008 = &this->unk008; /*0x531518*/
  a1.member.modlist.data = this; /*0x53151b*/
  a1.member.modlist.next = (TESForm::ModReferenceList *)a2; /*0x53151f*/
  *(_DWORD *)&a1.member.type = 0; /*0x531523*/
  v40 = &this->unk008; /*0x531527*/
  if ( a2 ) /*0x53152b*/
    a1.member.refID = (UInt32)TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x531536*/
  else
    a1.member.refID = 0; /*0x53153c*/
  if ( p_unk008 ) /*0x531542*/
  {
    while ( *p_unk008 ) /*0x531554*/
    {
      a1.member.flags = *p_unk008; /*0x53155e*/
      TESForm_ResolveFormID((UInt32 *)&a1.member.flags, (Data *)a1.member.refID); /*0x53156c*/
      v5 = TESForm_LookupByFormID(a1.member.flags); /*0x531585*/
      v6 = OblivionDynamicCast( /*0x53158e*/
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTopic `RTTI Type Descriptor',
             0);
      if ( v6 ) /*0x531598*/
      {
        v18 = (UInt32 *)p_unk008[1]; /*0x5316ac*/
        *p_unk008 = (UInt32)v6; /*0x5316af*/
        *(_DWORD *)&a1.member.type = p_unk008; /*0x5316b1*/
        v40 = v18; /*0x5316b5*/
      }
      else
      {
        v7 = (UInt32 *)p_unk008[1]; /*0x53159e*/
        if ( v7 ) /*0x5315a3*/
        {
          p_unk008[1] = v7[1]; /*0x5315c9*/
          *p_unk008 = *v7; /*0x5315cf*/
          FormHeapFree((unsigned int)v7); /*0x5315d1*/
        }
        else
        {
          v8 = *(_DWORD *)&a1.member.type; /*0x5315a5*/
          if ( *(_DWORD *)&a1.member.type ) /*0x5315ab*/
          {
            BSSimpleList_Remove(*(int **)&a1.member.type, a1.member.flags); /*0x5315b4*/
            v40 = *(UInt32 **)(v8 + 4); /*0x5315bc*/
          }
          else
          {
            *p_unk008 = 0; /*0x5315db*/
          }
        }
        v9 = (OblivionTopicInfo *)OblivionDynamicCast( /*0x5315ef*/
                                    next,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESTopicInfo `RTTI Type Descriptor',
                                    0);
        TopicInfoParent = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v9); /*0x5315fa*/
        OwnerQuest = (TESFormVtbl **)TESTopic::GetOwnerQuest(TopicInfoParent, v9); /*0x531604*/
        v42 = 0; /*0x531606*/
        v43 = 0; /*0x53160a*/
        v44 = 0; /*0x53160f*/
        v48 = 0; /*0x53161d*/
        TESTopicInfo::GetInfoDisplayText(&v9->super, (unsigned int *)&v42, 1); /*0x531624*/
        refID = TopicInfoParent->super.refID; /*0x531629*/
        vtbl = TopicInfoParent->vtbl; /*0x53162f*/
        v14 = v9->super.member.refID; /*0x531631*/
        a1.vtbl = OwnerQuest[3]; /*0x531634*/
        v15 = ((int (__thiscall *)(TESTopic *, UInt32))vtbl->GetEditorName)(TopicInfoParent, refID); /*0x531641*/
        v16 = (const char *)((int (__thiscall *)(TESFormVtbl **, TESFormVtbl *, int))(*OwnerQuest)->GetEditorName)( /*0x531654*/
                              OwnerQuest,
                              a1.vtbl,
                              v15);
        v17 = v42; /*0x531656*/
        _sprintf(v46, "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)", v14, v42, v16, v34, v36, v38); /*0x531667*/
        PrintError("Unable to find topic (%08X) for conversation data 'Link To' on %s", a1.member.flags, v46); /*0x53167b*/
        v48 = 0xFFFFFFFF; /*0x531681*/
        FormHeapFree((unsigned int)v17); /*0x53168c*/
        data = a1.member.modlist.data; /*0x531691*/
        next = a1.member.modlist.next; /*0x531695*/
        v42 = 0; /*0x53169c*/
        v44 = 0; /*0x5316a0*/
        v43 = 0; /*0x5316a5*/
      }
      if ( !v40 ) /*0x5316bd*/
        break; /*0x5316bd*/
      p_unk008 = v40; /*0x531550*/
    }
  }
  v19 = data; /*0x5316c5*/
  *(_DWORD *)&a1.member.type = 0; /*0x5316c7*/
  v41 = data; /*0x5316cb*/
  if ( data ) /*0x5316cf*/
  {
    while ( v19->errorState ) /*0x5316db*/
    {
      a1.vtbl = (TESFormVtbl *)v19->errorState; /*0x5316e9*/
      TESForm_ResolveFormID((UInt32 *)&a1, (Data *)a1.member.refID); /*0x5316f3*/
      v20 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x53170c*/
      v21 = OblivionDynamicCast( /*0x531715*/
              v20,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESTopic `RTTI Type Descriptor',
              0);
      if ( v21 ) /*0x53171f*/
      {
        ghostFileParent = v19->ghostFileParent; /*0x531839*/
        v19->errorState = (UInt32)v21; /*0x53183c*/
        *(_DWORD *)&a1.member.type = v19; /*0x53183e*/
        v41 = ghostFileParent; /*0x531842*/
      }
      else
      {
        v22 = v19->ghostFileParent; /*0x531725*/
        if ( v22 ) /*0x53172a*/
        {
          v19->ghostFileParent = v22->ghostFileParent; /*0x531750*/
          v19->errorState = v22->errorState; /*0x531756*/
          FormHeapFree((unsigned int)v22); /*0x531758*/
        }
        else
        {
          v23 = *(_DWORD *)&a1.member.type; /*0x53172c*/
          if ( *(_DWORD *)&a1.member.type ) /*0x531732*/
          {
            BSSimpleList_Remove(*(int **)&a1.member.type, (int)a1.vtbl); /*0x53173b*/
            v41 = *(Data **)(v23 + 4); /*0x531743*/
          }
          else
          {
            v19->errorState = 0; /*0x531762*/
          }
        }
        v24 = (OblivionTopicInfo *)OblivionDynamicCast( /*0x531776*/
                                     next,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESTopicInfo `RTTI Type Descriptor',
                                     0);
        v25 = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v24); /*0x531781*/
        v26 = (Data **)TESTopic::GetOwnerQuest(v25, v24); /*0x53178b*/
        v42 = 0; /*0x53178d*/
        v43 = 0; /*0x531791*/
        v44 = 0; /*0x531796*/
        v48 = 1; /*0x5317a4*/
        TESTopicInfo::GetInfoDisplayText(&v24->super, (unsigned int *)&v42, 1); /*0x5317af*/
        v27 = v25->super.refID; /*0x5317b4*/
        v28 = v25->vtbl; /*0x5317ba*/
        v29 = v24->super.member.refID; /*0x5317bc*/
        a1.member.modlist.data = v26[3]; /*0x5317bf*/
        v30 = ((int (__thiscall *)(TESTopic *, UInt32))v28->GetEditorName)(v25, v27); /*0x5317cc*/
        v31 = (const char *)(*(int (__thiscall **)(Data **, Data *, int))&(*v26)->name[0xB8])( /*0x5317df*/
                              v26,
                              a1.member.modlist.data,
                              v30);
        v32 = v42; /*0x5317e1*/
        _sprintf(v47, "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)", v29, v42, v31, v35, v37, v39); /*0x5317f5*/
        PrintError("Unable to find topic (%08X) for conversation data 'Link From' on %s", a1.vtbl, v47); /*0x53180c*/
        v48 = 0xFFFFFFFF; /*0x531812*/
        FormHeapFree((unsigned int)v32); /*0x53181d*/
        next = a1.member.modlist.next; /*0x531822*/
        v42 = 0; /*0x531829*/
        v44 = 0; /*0x53182d*/
        v43 = 0; /*0x531832*/
      }
      if ( !v41 ) /*0x53184a*/
        break; /*0x53184a*/
      v19 = v41; /*0x5316d7*/
    }
  }
}
