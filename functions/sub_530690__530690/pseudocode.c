void __thiscall sub_530690(BSSimpleList_VoidPtr *this)
{
  BSSimpleList_VoidPtr *v1; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = this + 5; /*0x530691*/
  if ( this != (BSSimpleList_VoidPtr *)0xFFFFFFD8 ) /*0x530696*/
  {
    while ( !BSSimpleList_IsEmpty(v1) ) /*0x5306a1*/
    {
      next = v1->firstNode.next; /*0x5306a3*/
      if ( next ) /*0x5306a8*/
      {
        v1->firstNode.next = next->next; /*0x5306ad*/
        v1->firstNode.data = next->data; /*0x5306b3*/
        FormHeapFree((unsigned int)next); /*0x5306b5*/
      }
      else
      {
        v1->firstNode.data = 0; /*0x5306bf*/
      }
    }
  }
}
