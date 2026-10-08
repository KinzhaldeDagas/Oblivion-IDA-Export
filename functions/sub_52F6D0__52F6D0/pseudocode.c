// Case-insensitive bubble sort of a TESTopic list by TESFullName display text. A null argument sorts DataHandler's master topic list; player additions pass the known-topic list explicitly.
void __cdecl SortTopicListByDisplayName(tListTopic *topics)
{
  tListTopic *v1; // ebp
  int v2; // ecx
  tListTopic *i; // eax
  tListTopic *j; // esi
  TESTopic *data; // ebx
  NodeTopic *next; // eax
  TESTopic *v7; // edi
  const unsigned __int8 *m_data; // ecx
  const unsigned __int8 *v9; // eax
  NodeTopic *v10; // eax
  tListTopic *topicsa; // [esp+8h] [ebp+4h]

  v1 = topics; /*0x52f6d7*/
  if ( !topics ) /*0x52f6d9*/
    v1 = (tListTopic *)(g_TESDataHandler + 0x7C); /*0x52f6e1*/
  v2 = 0; /*0x52f6e4*/
  for ( i = v1; i; i = (tListTopic *)i->node.next ) /*0x52f6ea*/
  {
    if ( i->node.data ) /*0x52f6f0*/
      ++v2; /*0x52f6f5*/
  }
  if ( v2 - 1 > 0 ) /*0x52f704*/
  {
    topicsa = (tListTopic *)(v2 - 1); /*0x52f708*/
    do /*0x52f764*/
    {
      for ( j = v1; j; j = (tListTopic *)j->node.next ) /*0x52f714*/
      {
        data = j->node.data; /*0x52f716*/
        if ( !j->node.data ) /*0x52f716*/
          break; /*0x52f71a*/
        next = j->node.next; /*0x52f71c*/
        if ( next ) /*0x52f721*/
        {
          v7 = next->data; /*0x52f723*/
          if ( next->data ) /*0x52f723*/
          {
            m_data = (const unsigned __int8 *)v7->fullname.name.m_data; /*0x52f72e*/
            if ( !m_data ) /*0x52f730*/
              m_data = (const unsigned __int8 *)EmptyString; /*0x52f732*/
            v9 = (const unsigned __int8 *)data->fullname.name.m_data; /*0x52f737*/
            if ( !v9 ) /*0x52f73c*/
              v9 = (const unsigned __int8 *)EmptyString; /*0x52f73e*/
            if ( _mbsicmp(v9, m_data) > 0 ) /*0x52f74f*/
            {
              v10 = j->node.next; /*0x52f751*/
              j->node.data = v7; /*0x52f754*/
              v10->data = data; /*0x52f756*/
            }
          }
        }
      }
      topicsa = (tListTopic *)((char *)topicsa + 0xFFFFFFFF); /*0x52f75f*/
    }
    while ( topicsa ); /*0x52f764*/
  }
}
