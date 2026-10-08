// Pure doubly-linked-list move-before operation; no allocation, free, refcount, or count change.
MEF_RefListNode32 *__thiscall NiTPointerList_MoveNodeBefore(
        MEF_RefList32 *self,
        MEF_RefListNode32 *node,
        MEF_RefListNode32 *before)
{
  MEF_RefListNode32 *result; // eax
  struct MEF_RefListNode32 *previous; // ecx
  struct MEF_RefListNode32 *v5; // ecx

  result = node; /*0x7c58f0*/
  if ( node != before ) /*0x7c58fa*/
  {
    if ( self->head == node ) /*0x7c5900*/
      self->head = node->next; /*0x7c5904*/
    if ( self->head == before ) /*0x7c590a*/
      self->head = node; /*0x7c590c*/
    if ( self->tail == node ) /*0x7c5912*/
      self->tail = node->previous; /*0x7c5917*/
    if ( node->next ) /*0x7c591a*/
      node->next->previous = node->previous; /*0x7c5923*/
    previous = node->previous; /*0x7c5926*/
    if ( previous ) /*0x7c592b*/
      previous->next = node->next; /*0x7c592f*/
    v5 = before->previous; /*0x7c5931*/
    node->previous = v5; /*0x7c5936*/
    node->next = before; /*0x7c5939*/
    if ( v5 ) /*0x7c593c*/
      v5->next = node; /*0x7c593e*/
    before->previous = node; /*0x7c5940*/
  }
  return result; /*0x7c5943*/
}
