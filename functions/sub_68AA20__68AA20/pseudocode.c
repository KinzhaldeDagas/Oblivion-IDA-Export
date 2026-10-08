void __thiscall sub_68AA20(TravelPath *this, int a2)
{
  int *v2; // ebx
  int *p_nodes; // esi
  TravelPathNode *v4; // eax
  int *v5; // edi
  int *v6; // eax

  TravelPath_ClearNodes(this); /*0x68aa49*/
  if ( a2 )
  {
    v2 = (int *)(a2 + 4); /*0x68aa5c*/
    p_nodes = 0; /*0x68aa5f*/
    if ( a2 != 0xFFFFFFFC )
    {
      do
      {
        if ( !v2[1] && !*v2 ) /*0x68aa75*/
          break; /*0x68aa77*/
        v4 = (TravelPathNode *)FormHeapAlloc(8u); /*0x68aa7f*/
        v5 = v4 ? (int *)TravelPathNode_Init(v4) : 0;
        sub_68B240(v5, *v2); /*0x68aaad*/
        if ( p_nodes ) /*0x68aab4*/
        {
          BSSimpleList_PushBack(p_nodes, (int)v5); /*0x68aab9*/
          p_nodes = (int *)p_nodes[1]; /*0x68aabe*/
        }
        else
        {
          p_nodes = (int *)&this->nodes; /*0x68aac7*/
          if ( v5 ) /*0x68aacc*/
          {
            if ( *p_nodes ) /*0x68aace*/
            {
              v6 = (int *)FormHeapAlloc(8u); /*0x68aad4*/
              if ( v6 ) /*0x68aade*/
              {
                *v6 = *p_nodes; /*0x68aae2*/
                v6[1] = 0; /*0x68aae4*/
              }
              else
              {
                v6 = 0; /*0x68aae9*/
              }
              v6[1] = (int)this->nodes.firstNode.next; /*0x68aaee*/
              this->nodes.firstNode.next = (BSSimpleList_VoidPtr::NodeVoid *)v6; /*0x68aaf1*/
            }
            *p_nodes = (int)v5; /*0x68aaf4*/
          }
        }
        v2 = (int *)v2[1]; /*0x68aaf6*/
      }
      while ( v2 );
    }
  }
}
