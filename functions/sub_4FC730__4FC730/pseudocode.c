// Hot Reload OBSE decode: script ref-list cleanup. Clears executing-script cache if needed, frees each RefVariable name buffer and payload, removes extra list nodes.
void __thiscall sub_4FC730(Script *this)
{
  BSSimpleList_VoidPtr *p_refList; // edi
  unsigned int data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  if ( MEMORY[0xB361B0] == this ) /*0x4fc73a*/
    MEMORY[0xB361B0] = 0; /*0x4fc73c*/
  p_refList = (BSSimpleList_VoidPtr *)&this->refList; /*0x4fc742*/
  if ( this != (Script *)0xFFFFFFC0 ) /*0x4fc747*/
  {
    while ( !BSSimpleList_IsEmpty(p_refList) ) /*0x4fc759*/
    {
      data = (unsigned int)p_refList->firstNode.data; /*0x4fc75b*/
      if ( p_refList->firstNode.data ) /*0x4fc75b*/
      {
        FormHeapFree(*(_DWORD *)data); /*0x4fc764*/
        *(_DWORD *)data = 0; /*0x4fc76a*/
        *(_WORD *)(data + 6) = 0; /*0x4fc76c*/
        *(_WORD *)(data + 4) = 0; /*0x4fc770*/
        FormHeapFree(data); /*0x4fc774*/
      }
      next = p_refList->firstNode.next; /*0x4fc77c*/
      if ( next ) /*0x4fc781*/
      {
        p_refList->firstNode.next = next->next; /*0x4fc786*/
        p_refList->firstNode.data = next->data; /*0x4fc78c*/
        FormHeapFree((unsigned int)next); /*0x4fc78e*/
      }
      else
      {
        p_refList->firstNode.data = 0; /*0x4fc798*/
      }
    }
  }
}
