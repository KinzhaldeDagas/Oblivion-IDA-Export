void __cdecl sub_52A8A0(_DWORD *a1, TESForm *a2, char a3, char a4)
{
  tListVoid *p_knownQuestStageItems; // ebx
  _DWORD *data; // edi
  int v6; // esi
  _DWORD *v7; // eax
  _DWORD v8[2]; // [esp+10h] [ebp-8h] BYREF

  if ( a1 ) /*0x52a8b3*/
  {
    BSSimpleList_Clear(a1); /*0x52a8b9*/
    p_knownQuestStageItems = &reference->knownQuestStageItems; /*0x52a8c4*/
    v8[0] = 0; /*0x52a8cc*/
    v8[1] = 0; /*0x52a8d0*/
    while ( p_knownQuestStageItems ) /*0x52a8d4*/
    {
      data = p_knownQuestStageItems->node.data; /*0x52a8d6*/
      if ( !p_knownQuestStageItems->node.data ) /*0x52a8d6*/
        break; /*0x52a8da*/
      v6 = data[0x1A]; /*0x52a8dc*/
      p_knownQuestStageItems = (tListVoid *)p_knownQuestStageItems->node.next; /*0x52a8e1*/
      if ( v6 ) /*0x52a8e4*/
      {
        if ( a2 ) /*0x52a8eb*/
        {
          if ( (TESForm *)v6 == a2 ) /*0x52a8ef*/
          {
LABEL_13:
            if ( data[0x19] ) /*0x52a918*/
            {
              if ( QuestStageItem_GetLogText(data, (TESForm *)v6) ) /*0x52a921*/
              {
                if ( a4 ) /*0x52a932*/
                  BSSimpleList_PushBack(a1, (int)data); /*0x52a934*/
                else
                  BSSimpleList_PushFront(a1, (int)data); /*0x52a93b*/
              }
            }
          }
        }
        else if ( a3 == ((*(_BYTE *)(v6 + 0x3C) & 2) != 0) ) /*0x52a8fd*/
        {
          v7 = v8; /*0x52a8ff*/
          while ( *v7 != v6 ) /*0x52a905*/
          {
            v7 = (_DWORD *)v7[1]; /*0x52a907*/
            if ( !v7 ) /*0x52a90c*/
            {
              BSSimpleList_PushFront(v8, data[0x1A]); /*0x52a913*/
              goto LABEL_13; /*0x52a913*/
            }
          }
        }
      }
    }
    BSSimpleList_Clear(v8); /*0x52a948*/
  }
}
