void __cdecl sub_4B27F0(int a1)
{
  BSSimpleList_VoidPtr *v1; // edi
  char **data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  BSSimpleList_VoidPtr *v4; // [esp+4h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+8h] [ebp-108h] BYREF

  v4 = 0;
  if ( NiTMap_GetAt(&off_B08300, a1, &v4) )
  {
    v1 = v4;
    if ( v4 )
    {
      if ( !BSSimpleList_IsEmpty(v4) )
      {
        do
        {
          data = (char **)v1->firstNode.data;
          if ( *(_DWORD *)v1->firstNode.data )
          {
            if ( data[1] )
            {
              sub_46D540(Str, *(char **)v1->firstNode.data);
              QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)Str, 1, (int)data[1]);
            }
          }
          FormHeapFree((unsigned int)data);
          next = v1->firstNode.next;
          if ( next )
          {
            v1->firstNode.next = next->next;
            v1->firstNode.data = next->data;
            FormHeapFree((unsigned int)next);
          }
          else
          {
            v1->firstNode.data = 0;
          }
        }
        while ( !BSSimpleList_IsEmpty(v1) );
      }
      FormHeapFree((unsigned int)v1);
      NiTMap_RemoveAt(&off_B08300, a1);
    }
  }
}
