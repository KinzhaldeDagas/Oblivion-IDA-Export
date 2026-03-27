void __thiscall TESTopic::~TESTopic(TESTopic *this)
{
  tListTopic *next; // edi
  QuestInfoData *firstEntry; // esi
  UInt32 firstFreeEntry; // ebx
  TESTopicInfo *data; // eax
  _WORD *v6; // ecx
  QuestInfoEntry *questInfoList; // eax
  tListTopic *v8; // eax
  NodeTopic **p_next; // esi
  tListTopic *v10; // ebx
  unsigned int v11; // [esp-4h] [ebp-2Ch]

  this->vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESTopic'};
  this->fullname.vtbl = (BaseFormComponentVtbl *)&TESTopic::`vftable'{for `TESFullName'};
  next = 0;
  if ( this != (TESTopic *)0xFFFFFFD8 )
  {
    while ( 1 )
    {
      firstEntry = this->firstEntry;
      if ( !firstEntry )
        break;
      firstFreeEntry = firstEntry->infoList.firstFreeEntry;
      if ( firstFreeEntry )
      {
        do
        {
          if ( (unsigned int)next < firstEntry->infoList.firstFreeEntry )
          {
            data = firstEntry->infoList.data;
            v6 = *((_WORD **)&data->conditions.data + (_DWORD)next);
            if ( v6 )
            {
              if ( (unsigned int)next < firstEntry->infoList.firstFreeEntry )
              {
                if ( *((_DWORD *)&data->conditions.data + (_DWORD)next) )
                  --firstEntry->infoList.numObjs;
              }
              else
              {
                firstEntry->infoList.firstFreeEntry = (UInt32)&next->node.data + 1;
              }
              *((_DWORD *)&firstEntry->infoList.data->conditions.data + (_DWORD)next) = 0;
              v6[0x10] = 0xFFFF;
              (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v6 + 0x10))(v6, 1);
            }
          }
          next = (tListTopic *)((char *)next + 1);
        }
        while ( (unsigned int)next < firstFreeEntry );
      }
      v11 = (unsigned int)firstEntry->infoList.data;
      firstEntry->infoList._vtbl = &NiTLargeArray<TESTopicInfo *>::`vftable';
      FormHeapFree(v11);
      FormHeapFree((unsigned int)firstEntry);
      questInfoList = this->questInfoList;
      if ( questInfoList )
      {
        this->questInfoList = questInfoList->next;
        this->firstEntry = questInfoList->data;
        FormHeapFree((unsigned int)questInfoList);
      }
      else
      {
        this->firstEntry = 0;
      }
      next = 0;
    }
  }
  v8 = dword_B36510;
  if ( dword_B36510 )
  {
    p_next = &v8->node.next;
    v10 = dword_B36510;
    if ( v8->node.next )
    {
      do
      {
        next = (tListTopic *)(*p_next)->next;
        FormHeapFree((unsigned int)*p_next);
        *p_next = &next->node;
      }
      while ( next );
    }
    v10->node.data = (TESTopic *)next;
    FormHeapFree((unsigned int)dword_B36510);
    dword_B36510 = next;
  }
  j_TESForm_ClearComponentReferences((TESForm *)this);
  FormHeapFree((unsigned int)this->editorID.m_data);
  this->editorID.m_data = (char *)next;
  this->editorID.m_bufLen = (__int16)next;
  this->editorID.m_dataLen = (__int16)next;
  FormHeapFree((unsigned int)this->fullname.name.m_data);
  this->fullname.name.m_data = (char *)next;
  this->fullname.name.m_bufLen = (__int16)next;
  this->fullname.name.m_dataLen = (__int16)next;
  TESForm_destr((TESForm *)this);
}
