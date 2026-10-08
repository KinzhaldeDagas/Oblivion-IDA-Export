void __thiscall TESTopic::~TESTopic(TESTopic *this)
{
  NodeTopic *v2; // edi
  QuestInfoData *data; // esi
  unsigned int firstFreeEntry; // ebx
  OblivionTopicInfo **v5; // eax
  OblivionTopicInfo *v6; // ecx
  QuestInfoEntry *next; // eax
  BSSimpleList_VoidPtr *v8; // eax
  NodeTopic **p_next; // esi
  BSSimpleList_VoidPtr *v10; // ebx
  unsigned int v11; // [esp-4h] [ebp-2Ch]

  this->vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESTopic'}; /*0x53007d*/
  this->fullname.vtbl = (BaseFormComponentVtbl *)&TESTopic::`vftable'{for `TESFullName'}; /*0x530084*/
  v2 = 0; /*0x53008e*/
  if ( this != (TESTopic *)0xFFFFFFD8 ) /*0x53009a*/
  {
    while ( 1 ) /*0x5300a0*/
    {
      data = this->questInfoEntries.data; /*0x5300a0*/
      if ( !data ) /*0x5300a5*/
        break; /*0x5300a5*/
      firstFreeEntry = data->infoList.firstFreeEntry; /*0x5300ab*/
      if ( firstFreeEntry ) /*0x5300b0*/
      {
        do /*0x5300f6*/
        {
          if ( (unsigned int)v2 < data->infoList.firstFreeEntry ) /*0x5300b5*/
          {
            v5 = data->infoList.data; /*0x5300b7*/
            v6 = v5[(_DWORD)v2]; /*0x5300ba*/
            if ( v6 ) /*0x5300bf*/
            {
              if ( (unsigned int)v2 < data->infoList.firstFreeEntry ) /*0x5300c4*/
              {
                if ( v5[(_DWORD)v2] ) /*0x5300ce*/
                  --data->infoList.numObjs; /*0x5300d4*/
              }
              else
              {
                data->infoList.firstFreeEntry = (unsigned int)&v2->data + 1; /*0x5300c9*/
              }
              data->infoList.data[(_DWORD)v2] = 0; /*0x5300db*/
              v6->previousInfo = 0xFFFF; /*0x5300e2*/
              v6->super.vtbl->Destroy(&v6->super, 1); /*0x5300ef*/
            }
          }
          v2 = (NodeTopic *)((char *)v2 + 1); /*0x5300f1*/
        }
        while ( (unsigned int)v2 < firstFreeEntry ); /*0x5300f6*/
      }
      v11 = (unsigned int)data->infoList.data; /*0x5300fb*/
      data->infoList._vtbl = &NiTLargeArray<TESTopicInfo *>::`vftable'; /*0x5300fc*/
      FormHeapFree(v11); /*0x530103*/
      FormHeapFree((unsigned int)data); /*0x530109*/
      next = this->questInfoEntries.next; /*0x53010e*/
      if ( next ) /*0x530116*/
      {
        this->questInfoEntries = *next; /*0x53011b*/
        FormHeapFree((unsigned int)next); /*0x530124*/
      }
      else
      {
        this->questInfoEntries.data = 0; /*0x530133*/
      }
      v2 = 0; /*0x53012c*/
    }
  }
  v8 = g_dialogueRandomInfoCandidates; /*0x530141*/
  if ( g_dialogueRandomInfoCandidates ) /*0x530141*/
  {
    p_next = (NodeTopic **)&v8->firstNode.next; /*0x53014d*/
    v10 = g_dialogueRandomInfoCandidates; /*0x530150*/
    if ( v8->firstNode.next ) /*0x53014a*/
    {
      do /*0x530166*/
      {
        v2 = (*p_next)->next; /*0x530156*/
        FormHeapFree((unsigned int)*p_next); /*0x53015a*/
        *p_next = v2; /*0x530164*/
      }
      while ( v2 ); /*0x530166*/
    }
    v10->firstNode.data = v2; /*0x530168*/
    FormHeapFree((unsigned int)g_dialogueRandomInfoCandidates); /*0x530170*/
    g_dialogueRandomInfoCandidates = (BSSimpleList_VoidPtr *)v2; /*0x530178*/
  }
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x530180*/
  FormHeapFree((unsigned int)this->editorID.m_data); /*0x530189*/
  this->editorID.m_data = (char *)v2; /*0x53018e*/
  this->editorID.m_bufLen = (__int16)v2; /*0x530191*/
  this->editorID.m_dataLen = (__int16)v2; /*0x530195*/
  FormHeapFree((unsigned int)this->fullname.name.m_data); /*0x53019d*/
  this->fullname.name.m_data = (char *)v2; /*0x5301a7*/
  this->fullname.name.m_bufLen = (__int16)v2; /*0x5301aa*/
  this->fullname.name.m_dataLen = (__int16)v2; /*0x5301ae*/
  TESForm_destr((TESForm *)this); /*0x5301ba*/
}
