// BSTPersistentList tail append. Reuses a local free node or acquires one, stores the caller's payload pointer verbatim at node+0x08, links at tail, and increments count. For accumulator RenderPass buckets this creates a non-owning pointer borrow; it does not copy, retain, or destroy the RenderPass.
BSTPersistentListPointerNode *__thiscall BSTPersistentList_AppendTailReusingFreeNode(
        BSTPersistentListPointer *this,
        void *const *payloadAddress)
{
  BSTPersistentListPointerNode *result; // eax
  BSTPersistentListPointerNode *tail; // ecx

  result = this->freeHead; /*0x7abde3*/
  if ( result ) /*0x7abde8*/
    this->freeHead = result->next; /*0x7abdf6*/
  else
    result = NiTListNodePool_Acquire(); /*0x7abded*/
  result->payload = *payloadAddress;            // Accumulator tail append stores the existing RenderPass pointer verbatim at node+0x08. No copy, ownership transfer, or reference count occurs. /*0x7abdff*/
  result->next = 0; /*0x7abe02*/
  result->previous = this->tail; /*0x7abe0b*/
  tail = this->tail; /*0x7abe0e*/
  if ( tail ) /*0x7abe13*/
  {
    tail->next = result; /*0x7abe15*/
    ++this->count; /*0x7abe17*/
  }
  else
  {
    ++this->count; /*0x7abe22*/
    this->head = result; /*0x7abe26*/
  }
  this->tail = result; /*0x7abe1b*/
  return result; /*0x7abe1e*/
}
