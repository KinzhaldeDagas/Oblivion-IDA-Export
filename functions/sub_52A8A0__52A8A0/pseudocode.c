void __cdecl sub_52A8A0(_DWORD *a1, TESForm *a2, char a3, char a4)
{
  tListVoid *p_knownQuestStageItems; // ebx
  _DWORD *data; // edi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD v9[2]; // [esp+10h] [ebp-8h] BYREF

  if ( a1 )
  {
    BSSimpleList_Clear(a1);
    p_knownQuestStageItems = &TESDataHandler_g_PlayerRef->knownQuestStageItems;
    v9[0] = 0;
    v9[1] = 0;
    while ( p_knownQuestStageItems )
    {
      data = p_knownQuestStageItems->node.data;
      if ( !p_knownQuestStageItems->node.data )
        break;
      v7 = data[0x1A];
      p_knownQuestStageItems = (tListVoid *)p_knownQuestStageItems->node.next;
      if ( v7 )
      {
        if ( a2 )
        {
          if ( (TESForm *)v7 == a2 )
          {
LABEL_13:
            if ( data[0x19] )
            {
              if ( QuestStageItem_GetLogText(data, (TESForm *)v7) )
              {
                if ( a4 )
                  BSSimpleList_PushBack(a1, (int)data);
                else
                  BSSimpleList_PushFront(a1, (int)data);
              }
            }
          }
        }
        else if ( a3 == ((*(_BYTE *)(v7 + 0x3C) & 2) != 0) )
        {
          v8 = v9;
          while ( *v8 != v7 )
          {
            v8 = (_DWORD *)v8[1];
            if ( !v8 )
            {
              BSSimpleList_PushFront(v9, data[0x1A]);
              goto LABEL_13;
            }
          }
        }
      }
    }
    BSSimpleList_Clear(v9);
  }
}
