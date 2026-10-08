int __thiscall BSTPersistentRenderPassList_StableMergeSort(
        BSTPersistentListPointer *self,
        int (__cdecl *compare)(RenderPass_DecodedLayout **left, RenderPass_DecodedLayout **right))
{
  BSTPersistentListPointer *v2; // esi
  int result; // eax
  BSTPersistentListPointerNode *head; // edi
  unsigned int v5; // edx
  BSTPersistentListPointerNode *v6; // ecx
  int v7; // ebx
  unsigned int v8; // eax
  BSTPersistentListPointerNode *i; // esi
  int v10; // ebp
  BSTPersistentListPointerNode *v11; // eax
  int v12; // eax
  BSTPersistentListPointerNode *v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]

  v2 = self; /*0x7aa554*/
  BSTPersistentList_ReleaseFreeNodesToGlobalPool(self); /*0x7aa55a*/
  result = 0; /*0x7aa55f*/
  if ( v2->head ) /*0x7aa561*/
  {
    v14 = 1; /*0x7aa56c*/
    while ( 1 ) /*0x7aa575*/
    {
      head = v2->head; /*0x7aa575*/
      v5 = v14; /*0x7aa578*/
      v6 = 0; /*0x7aa57c*/
      v2->head = 0; /*0x7aa580*/
      v13 = 0; /*0x7aa583*/
      v15 = 0; /*0x7aa587*/
      if ( !head ) /*0x7aa58b*/
        goto LABEL_24; /*0x7aa58b*/
      do /*0x7aa629*/
      {
        ++v15; /*0x7aa591*/
        v7 = 0; /*0x7aa596*/
        v8 = 0; /*0x7aa598*/
        for ( i = head; v8 < v5; ++v8 ) /*0x7aa59e*/
        {
          i = i->next; /*0x7aa5a0*/
          ++v7; /*0x7aa5a2*/
          if ( !i ) /*0x7aa5a7*/
            break; /*0x7aa5a7*/
        }
        v10 = v5; /*0x7aa5b0*/
        while ( 1 ) /*0x7aa5b2*/
        {
          if ( v7 > 0 ) /*0x7aa5b4*/
            goto LABEL_13; /*0x7aa5b4*/
          if ( v10 <= 0 || !i ) /*0x7aa5bc*/
            break; /*0x7aa5bc*/
          if ( !v7 ) /*0x7aa5c0*/
          {
            v11 = i; /*0x7aa5c2*/
            i = i->next; /*0x7aa5c4*/
            --v10; /*0x7aa5c6*/
            goto LABEL_18; /*0x7aa5c9*/
          }
LABEL_13:
          if ( v10 /*0x7aa5e8*/
            && i
            && (v12 = compare((RenderPass_DecodedLayout **)&head->payload, (RenderPass_DecodedLayout **)&i->payload),
                v6 = v13,
                v12 > 0) )
          {
            v11 = i; /*0x7aa5ea*/
            i = i->next; /*0x7aa5ec*/
            --v10; /*0x7aa5ee*/
          }
          else
          {
            v11 = head; /*0x7aa5f3*/
            head = head->next; /*0x7aa5f5*/
            --v7; /*0x7aa5f7*/
          }
LABEL_18:
          if ( v6 ) /*0x7aa5fc*/
          {
            v5 = v14; /*0x7aa5fe*/
            v6->next = v11; /*0x7aa602*/
            v11->previous = v6; /*0x7aa604*/
          }
          else
          {
            self->head = v11; /*0x7aa613*/
            v5 = v14; /*0x7aa616*/
            v11->previous = 0; /*0x7aa61a*/
          }
          v13 = v11; /*0x7aa607*/
          v6 = v11; /*0x7aa60b*/
        }
        head = i; /*0x7aa627*/
      }
      while ( i ); /*0x7aa629*/
      v2 = self; /*0x7aa62f*/
LABEL_24:
      result = 0; /*0x7aa633*/
      v6->next = 0; /*0x7aa63c*/
      v14 = 2 * v5; /*0x7aa63e*/
      if ( v15 == 1 ) /*0x7aa642*/
      {
        v2->tail = v6; /*0x7aa64a*/
        return result; /*0x7aa64a*/
      }
    }
  }
  return result; /*0x7aa64e*/
}
