// Updates TESForm source-file provenance. Thread-safe clones normalize to their root parent; master files replace prior source entries, non-masters append once, and null removes the last source entry.
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

  v2 = a2; /*0x46b6c1*/
  if ( !a2 ) /*0x46b6ca*/
    goto LABEL_5; /*0x46b6ca*/
  v4 = TESFile_GetThreadSafeParent(a2); /*0x46b6ce*/
  if ( v4 ) /*0x46b6d5*/
    v2 = v4; /*0x46b6d7*/
  if ( !v2 ) /*0x46b6db*/
  {
LABEL_5:
    p_modlist = &this->member.modlist; /*0x46b6dd*/
    v6 = &this->member.modlist; /*0x46b6e0*/
    v7 = 0; /*0x46b6e2*/
    if ( this == (TESForm *)0xFFFFFFF0 ) /*0x46b6e6*/
      goto LABEL_13; /*0x46b6e6*/
    do /*0x46b6f4*/
    {
      if ( v6->data ) /*0x46b6e8*/
        v7 = v6; /*0x46b6ed*/
      v6 = v6->next; /*0x46b6ef*/
    }
    while ( v6 ); /*0x46b6f4*/
    if ( !v7 ) /*0x46b6f8*/
    {
LABEL_13:
      next = this->member.modlist.next; /*0x46b724*/
      if ( next ) /*0x46b729*/
      {
        this->member.modlist.next = next->next; /*0x46b72e*/
        p_modlist->data = next->data; /*0x46b734*/
        FormHeapFree((unsigned int)next); /*0x46b736*/
      }
      else
      {
        p_modlist->data = 0; /*0x46b744*/
      }
    }
    else
    {
      v8 = v7->next; /*0x46b6fa*/
      if ( v8 ) /*0x46b6ff*/
      {
        v7->next = v8->next; /*0x46b704*/
        v7->data = v8->data; /*0x46b70a*/
        FormHeapFree((unsigned int)v8); /*0x46b70c*/
      }
      else
      {
        v7->data = 0; /*0x46b71a*/
      }
    }
    return; /*0x46b716*/
  }
  v10 = &this->member.modlist; /*0x46b755*/
  if ( TESFile_GetIsMaster(v2) ) /*0x46b750*/
  {
    BSSimpleList_Clear(v10); /*0x46b75e*/
LABEL_18:
    BSSimpleList_PushFront(v10, (int)v2); /*0x46b763*/
    return; /*0x46b766*/
  }
  v11 = v10; /*0x46b770*/
  v12 = 0; /*0x46b772*/
  if ( !v10 ) /*0x46b776*/
    goto LABEL_18; /*0x46b776*/
  while ( 1 ) /*0x46b778*/
  {
    if ( v11->data ) /*0x46b778*/
    {
      v12 = v11; /*0x46b780*/
      if ( v11->data == v2 ) /*0x46b782*/
        break; /*0x46b782*/
    }
    v11 = v11->next; /*0x46b784*/
    if ( !v11 ) /*0x46b789*/
    {
      if ( !v12 ) /*0x46b78d*/
        goto LABEL_18; /*0x46b78d*/
      BSSimpleList_PushBack(v12, (int)v2); /*0x46b790*/
      return; /*0x46b790*/
    }
  }
}
