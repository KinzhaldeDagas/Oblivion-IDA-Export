BOOL __thiscall sub_446C30(BSSimpleList_VoidPtr *this, void *a2)
{
  for ( ; this; this = (BSSimpleList_VoidPtr *)this->firstNode.next )
  {
    if ( this->firstNode.data == a2 )
      break;
  }
  return this != 0;
}
