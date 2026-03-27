TESTopic *__thiscall sub_669690(PlayerCharacter *a1, TESTopic *a5, char a6, char a7)
{
  TESTopic *result; // eax
  tListTopic *p_unk5E4; // edi
  char *m_data; // eax
  char *v7; // esi
  BSStringT string; // [esp+14h] [ebp-14h] BYREF
  unsigned int v9; // [esp+24h] [ebp-4h]

  if ( a5 )
  {
    p_unk5E4 = (tListTopic *)&a1->unk5E4;
    result = (TESTopic *)&a1->unk5E4;
    if ( a1 != (PlayerCharacter *)0xFFFFFA1C )
    {
      do
      {
        if ( !result->vtbl )
          break;
        if ( (TESTopic *)result->vtbl == a5 )
          goto LABEL_2;
        result = *(TESTopic **)&result->super.type;
      }
      while ( result );
    }
    BSSimpleList_PushFront(p_unk5E4, (int)a5);
    if ( a7 )
    {
      result = (TESTopic *)sub_578FE0();
      if ( result != (TESTopic *)0x3F1 )
      {
        string.m_data = 0;
        string.m_dataLen = 0;
        string.m_bufLen = 0;
        m_data = a5->fullname.name.m_data;
        v9 = 0;
        if ( !m_data )
          m_data = EmptyString;
        BSStringT_Static_Format(&string, "%s: %s", *(const char **)sTopicAddedText, m_data);
        v7 = string.m_data;
        GameUI_QueueMessage(string.m_data, 0, 1u, flt_A31C80);
        v9 = 0xFFFFFFFF;
        FormHeapFree((unsigned int)v7);
      }
    }
    if ( a6 )
      result = (TESTopic *)sub_52F6D0(p_unk5E4);
    LOBYTE(result) = 1;
  }
  else
  {
LABEL_2:
    LOBYTE(result) = 0;
  }
  return result;
}
