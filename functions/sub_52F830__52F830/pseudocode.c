int __usercall sub_52F830@<eax>(
        double a1@<st1>,
        double a2@<st0>,
        Actor *a3,
        TESObjectREFR *a4,
        BSSimpleList_VoidPtr *a5,
        TESTopic *a6)
{
  BSSimpleList_VoidPtr *v10; // ebp
  int result; // eax
  unsigned int *data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  Actor *v14; // esi
  TESTopic *v15; // ebx
  Unk1C *DialogueInfo; // edi
  TESForm *form; // ecx
  TESFormVtbl *vtbl; // esi
  void (__thiscall **p_CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // esi
  int v20; // ebp
  void (__thiscall **i)(BaseFormComponent *, BaseFormComponent *); // eax
  int v22; // edx
  int j; // ecx
  TESForm *v24; // ecx
  bool v25; // zf
  signed int v26; // eax
  TESObjectREFR *v27; // eax
  BSSimpleList_VoidPtr *v28; // eax
  int v29; // ebx
  Unk1C *v30; // esi
  UInt32 unk018; // edi
  _DWORD *v32; // eax
  const char *v33; // eax
  const char *v34; // eax
  const char *v35; // [esp-14h] [ebp-24h]
  TESObjectREFR *v36; // [esp+4h] [ebp-Ch]
  int v37; // [esp+8h] [ebp-8h]
  int v38; // [esp+Ch] [ebp-4h]
  BSSimpleList_VoidPtr *v39; // [esp+1Ch] [ebp+Ch]

  v10 = a5;
  if ( !a5 )
    return 0;
  while ( !BSSimpleList_IsEmpty(a5) )
  {
    data = (unsigned int *)a5->firstNode.data;
    if ( a5->firstNode.data )
    {
      sub_6B81D0((unsigned int *)a5->firstNode.data);
      FormHeapFree((unsigned int)data);
    }
    next = a5->firstNode.next;
    if ( next )
    {
      a5->firstNode.next = next->next;
      a5->firstNode.data = next->data;
      FormHeapFree((unsigned int)next);
    }
    else
    {
      a5->firstNode.data = 0;
    }
  }
  v14 = a3;
  if ( !a3 || !a4 )
    return 0;
  v15 = a6;
  v38 = (int)a3;
  v36 = a4;
  v37 = 0;
  if ( a6 || (v15 = (TESTopic *)sub_447440((void *)0xD2)) != 0 )
  {
    while ( (unsigned int)BSSimpleList_Count(v10) < 0x64 )
    {
      DialogueInfo = TESTopic::CreateDialogueInfo(v15, v14, v36, v37, v10);
      if ( !DialogueInfo )
      {
        DialogueInfo = TESTopic::CreateDialogueInfo(v15, v14, v36, v37, v10);
        if ( !DialogueInfo )
        {
          v15 = (TESTopic *)sub_447440((void *)0xD4);
          DialogueInfo = TESTopic::CreateDialogueInfo(v15, v14, v36, v37, v10);
          if ( !DialogueInfo )
            break;
        }
      }
      form = DialogueInfo->form;
      if ( form )
      {
        if ( (form[1].member.refID & 0x800) != 0 )
        {
          sub_531470(form, a1, a2, (int)a3);
          sub_5308D0((int)DialogueInfo->form);
        }
      }
      BSSimpleList_PushBack(v10, (int)DialogueInfo);
      vtbl = DialogueInfo->form[2].vtbl;
      v37 = (int)v15;
      v15 = 0;
      if ( !vtbl )
        break;
      p_CopyFromBase = &vtbl->super.CopyFromBase;
      v20 = 0;
      for ( i = p_CopyFromBase; i; i = (void (__thiscall **)(BaseFormComponent *, BaseFormComponent *))i[1] )
      {
        if ( *i )
          ++v20;
      }
      v22 = v20;
      if ( v20 )
        v22 = rand() % v20 + 1;
      for ( j = 0;
            j < v22;
            p_CopyFromBase = (void (__thiscall **)(BaseFormComponent *, BaseFormComponent *))p_CopyFromBase[1] )
      {
        if ( !p_CopyFromBase )
          break;
        if ( !p_CopyFromBase[1] && !*p_CopyFromBase )
          break;
        v15 = (TESTopic *)*p_CopyFromBase;
        ++j;
      }
      v24 = DialogueInfo->form;
      if ( !LOBYTE(v24[1].member.refID) )
        goto LABEL_39;
      if ( LOBYTE(v24[1].member.refID) == 2 )
      {
        v26 = rand() & 0x80000001;
        v25 = v26 == 0;
        if ( v26 < 0 )
          v25 = (((_BYTE)v26 - 1) | 0xFFFFFFFE) == 0xFFFFFFFF;
        if ( v25 )
        {
LABEL_39:
          v27 = (TESObjectREFR *)v38;
          v38 = (int)v36;
          v36 = v27;
        }
      }
      v10 = a5;
      if ( !v15 )
        break;
      v14 = (Actor *)v38;
    }
  }
  if ( byte_B36508 )
  {
    Interface_ConsolePrint("------NEW CONVERSATION CREATED---------------------");
    v28 = v10;
    v29 = 1;
    while ( 1 )
    {
      v30 = (Unk1C *)v28->firstNode.data;
      if ( !v28->firstNode.data )
        break;
      v39 = (BSSimpleList_VoidPtr *)v28->firstNode.next;
      if ( sub_6B7BA0(v30) )
      {
        unk018 = v30->unk018;
        v32 = (_DWORD *)sub_6B7C20(v30);
        v33 = (const char *)(*(int (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)unk018 + 0xD4))(
                              unk018,
                              *v32,
                              v32[1]);
        Interface_ConsolePrint("Item %d: %s says '%s'", v29, v33, v35);
      }
      else
      {
        v34 = (const char *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v30->unk018 + 0xD4))(v30->unk018);
        Interface_ConsolePrint("Item %d: %s has no response!", v29, v34);
      }
      ++v29;
      if ( !v39 )
        break;
      v28 = v39;
    }
  }
  result = 0;
  do
  {
    if ( v10->firstNode.data )
      ++result;
    v10 = (BSSimpleList_VoidPtr *)v10->firstNode.next;
  }
  while ( v10 );
  return result;
}
