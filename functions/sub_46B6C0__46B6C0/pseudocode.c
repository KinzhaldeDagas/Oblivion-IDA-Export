void __thiscall sub_46B6C0(TESForm *this, Data *a2)
{
  Data *v2; // esi
  Data *v4; // eax
  TESForm::ModReferenceList *p_modlist; // edx
  TESForm::ModReferenceList *v6; // eax
  TESForm::ModReferenceList *v7; // ecx
  TESForm::ModReferenceList *v8; // eax
  TESForm::ModReferenceList *next; // eax
  TESForm::ModReferenceList *v10; // edi
  TESForm::ModReferenceList *v11; // eax
  TESForm::ModReferenceList *v12; // ecx

  v2 = a2;
  if ( !a2 )
    goto LABEL_5;
  v4 = sub_44FB90(a2);
  if ( v4 )
    v2 = v4;
  if ( !v2 )
  {
LABEL_5:
    p_modlist = &this->member.modlist;
    v6 = &this->member.modlist;
    v7 = 0;
    if ( this == (TESForm *)0xFFFFFFF0 )
      goto LABEL_13;
    do
    {
      if ( v6->data )
        v7 = v6;
      v6 = v6->next;
    }
    while ( v6 );
    if ( !v7 )
    {
LABEL_13:
      next = this->member.modlist.next;
      if ( next )
      {
        this->member.modlist.next = next->next;
        p_modlist->data = next->data;
        FormHeapFree((unsigned int)next);
      }
      else
      {
        p_modlist->data = 0;
      }
    }
    else
    {
      v8 = v7->next;
      if ( v8 )
      {
        v7->next = v8->next;
        v7->data = v8->data;
        FormHeapFree((unsigned int)v8);
      }
      else
      {
        v7->data = 0;
      }
    }
    return;
  }
  v10 = &this->member.modlist;
  if ( TESFile_GetIsMaster(v2) )
  {
    BSSimpleList_Clear(v10);
LABEL_18:
    BSSimpleList_PushFront(v10, (int)v2);
    return;
  }
  v11 = v10;
  v12 = 0;
  if ( !v10 )
    goto LABEL_18;
  while ( 1 )
  {
    if ( v11->data )
    {
      v12 = v11;
      if ( v11->data == v2 )
        break;
    }
    v11 = v11->next;
    if ( !v11 )
    {
      if ( !v12 )
        goto LABEL_18;
      BSSimpleList_PushBack(v12, (int)v2);
      return;
    }
  }
}
