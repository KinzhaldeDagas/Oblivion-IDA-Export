void __thiscall sub_5314D0(Data *this, TESForm *a2)
{
  TESForm::ModReferenceList *next; // ebx
  Data *data; // ebp
  UInt32 *p_unk008; // edi
  TESForm *v5; // eax
  void *v6; // eax
  UInt32 *v7; // eax
  int v8; // ebp
  TESForm *v9; // edi
  TESTopic *TopicInfoParent; // ebx
  TESFormVtbl **v11; // ebp
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
  TESForm *v24; // edi
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

  next = (TESForm::ModReferenceList *)a2;
  data = this;
  p_unk008 = &this->unk008;
  a1.member.modlist.data = this;
  a1.member.modlist.next = (TESForm::ModReferenceList *)a2;
  *(_DWORD *)&a1.member.type = 0;
  v40 = &this->unk008;
  if ( a2 )
    a1.member.refID = (UInt32)TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  else
    a1.member.refID = 0;
  if ( p_unk008 )
  {
    while ( *p_unk008 )
    {
      a1.member.flags = *p_unk008;
      TESForm_ResolveFormID((UInt32 *)&a1.member.flags, (Data *)a1.member.refID);
      v5 = TESForm_LookupByFormID(a1.member.flags);
      v6 = OblivionDynamicCast(
             v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTopic `RTTI Type Descriptor',
             0);
      if ( v6 )
      {
        v18 = (UInt32 *)p_unk008[1];
        *p_unk008 = (UInt32)v6;
        *(_DWORD *)&a1.member.type = p_unk008;
        v40 = v18;
      }
      else
      {
        v7 = (UInt32 *)p_unk008[1];
        if ( v7 )
        {
          p_unk008[1] = v7[1];
          *p_unk008 = *v7;
          FormHeapFree((unsigned int)v7);
        }
        else
        {
          v8 = *(_DWORD *)&a1.member.type;
          if ( *(_DWORD *)&a1.member.type )
          {
            BSSimpleList_Remove(*(_DWORD **)&a1.member.type, a1.member.flags);
            v40 = *(UInt32 **)(v8 + 4);
          }
          else
          {
            *p_unk008 = 0;
          }
        }
        v9 = (TESForm *)OblivionDynamicCast(
                          next,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESTopicInfo `RTTI Type Descriptor',
                          0);
        TopicInfoParent = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v9);
        v11 = (TESFormVtbl **)sub_52F570(TopicInfoParent, (int)v9);
        v42 = 0;
        v43 = 0;
        v44 = 0;
        v48 = 0;
        sub_531200(v9, (unsigned int *)&v42, 1);
        refID = TopicInfoParent->super.refID;
        vtbl = TopicInfoParent->vtbl;
        v14 = v9->member.refID;
        a1.vtbl = v11[3];
        v15 = ((int (__thiscall *)(TESTopic *, UInt32))vtbl->GetEditorName)(TopicInfoParent, refID);
        v16 = (const char *)((int (__thiscall *)(TESFormVtbl **, TESFormVtbl *, int))(*v11)->GetEditorName)(
                              v11,
                              a1.vtbl,
                              v15);
        v17 = v42;
        _sprintf(v46, "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)", v14, v42, v16, v34, v36, v38);
        PrintError("Unable to find topic (%08X) for conversation data 'Link To' on %s", a1.member.flags, v46);
        v48 = 0xFFFFFFFF;
        FormHeapFree((unsigned int)v17);
        data = a1.member.modlist.data;
        next = a1.member.modlist.next;
        v42 = 0;
        v44 = 0;
        v43 = 0;
      }
      if ( !v40 )
        break;
      p_unk008 = v40;
    }
  }
  v19 = data;
  *(_DWORD *)&a1.member.type = 0;
  v41 = data;
  if ( data )
  {
    while ( v19->errorState )
    {
      a1.vtbl = (TESFormVtbl *)v19->errorState;
      TESForm_ResolveFormID((UInt32 *)&a1, (Data *)a1.member.refID);
      v20 = TESForm_LookupByFormID((UInt32)a1.vtbl);
      v21 = OblivionDynamicCast(
              v20,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESTopic `RTTI Type Descriptor',
              0);
      if ( v21 )
      {
        ghostFileParent = v19->ghostFileParent;
        v19->errorState = (UInt32)v21;
        *(_DWORD *)&a1.member.type = v19;
        v41 = ghostFileParent;
      }
      else
      {
        v22 = v19->ghostFileParent;
        if ( v22 )
        {
          v19->ghostFileParent = v22->ghostFileParent;
          v19->errorState = v22->errorState;
          FormHeapFree((unsigned int)v22);
        }
        else
        {
          v23 = *(_DWORD *)&a1.member.type;
          if ( *(_DWORD *)&a1.member.type )
          {
            BSSimpleList_Remove(*(_DWORD **)&a1.member.type, (int)a1.vtbl);
            v41 = *(Data **)(v23 + 4);
          }
          else
          {
            v19->errorState = 0;
          }
        }
        v24 = (TESForm *)OblivionDynamicCast(
                           next,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESTopicInfo `RTTI Type Descriptor',
                           0);
        v25 = (TESTopic *)TESTopic_static_GetTopicInfoParent_((int)v24);
        v26 = (Data **)sub_52F570(v25, (int)v24);
        v42 = 0;
        v43 = 0;
        v44 = 0;
        v48 = 1;
        sub_531200(v24, (unsigned int *)&v42, 1);
        v27 = v25->super.refID;
        v28 = v25->vtbl;
        v29 = v24->member.refID;
        a1.member.modlist.data = v26[3];
        v30 = ((int (__thiscall *)(TESTopic *, UInt32))v28->GetEditorName)(v25, v27);
        v31 = (const char *)(*(int (__thiscall **)(Data **, Data *, int))&(*v26)->name[0xB8])(
                              v26,
                              a1.member.modlist.data,
                              v30);
        v32 = v42;
        _sprintf(v47, "TopicInfo %08X \"%s\" in Quest %s (%08x) Topic %s (%08x)", v29, v42, v31, v35, v37, v39);
        PrintError("Unable to find topic (%08X) for conversation data 'Link From' on %s", a1.vtbl, v47);
        v48 = 0xFFFFFFFF;
        FormHeapFree((unsigned int)v32);
        next = a1.member.modlist.next;
        v42 = 0;
        v44 = 0;
        v43 = 0;
      }
      if ( !v41 )
        break;
      v19 = v41;
    }
  }
}
