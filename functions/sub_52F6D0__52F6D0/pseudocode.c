NodeTopic *__cdecl sub_52F6D0(tListTopic *a1)
{
  tListTopic *v1; // ebp
  int v2; // ecx
  tListTopic *i; // eax
  NodeTopic *result; // eax
  tListTopic *j; // esi
  TESTopic *data; // ebx
  TESTopic *v7; // edi
  const unsigned __int8 *m_data; // ecx
  const unsigned __int8 *v9; // eax
  tListTopic *v10; // [esp+8h] [ebp+4h]

  v1 = a1;
  if ( !a1 )
    v1 = (tListTopic *)(TESDataHandler + 0x7C);
  v2 = 0;
  for ( i = v1; i; i = (tListTopic *)i->node.next )
  {
    if ( i->node.data )
      ++v2;
  }
  result = (NodeTopic *)(v2 - 1);
  if ( v2 - 1 > 0 )
  {
    v10 = (tListTopic *)(v2 - 1);
    do
    {
      for ( j = v1; j; j = (tListTopic *)j->node.next )
      {
        data = j->node.data;
        if ( !j->node.data )
          break;
        result = j->node.next;
        if ( result )
        {
          v7 = result->data;
          if ( result->data )
          {
            m_data = (const unsigned __int8 *)v7->fullname.name.m_data;
            if ( !m_data )
              m_data = (const unsigned __int8 *)EmptyString;
            v9 = (const unsigned __int8 *)data->fullname.name.m_data;
            if ( !v9 )
              v9 = (const unsigned __int8 *)EmptyString;
            result = (NodeTopic *)_mbsicmp(v9, m_data);
            if ( (int)result > 0 )
            {
              result = j->node.next;
              j->node.data = v7;
              result->data = data;
            }
          }
        }
      }
      v10 = (tListTopic *)((char *)v10 + 0xFFFFFFFF);
    }
    while ( v10 );
  }
  return result;
}
