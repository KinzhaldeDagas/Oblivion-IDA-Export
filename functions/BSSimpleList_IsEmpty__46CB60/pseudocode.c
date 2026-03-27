BOOL __thiscall BSSimpleList_IsEmpty(BSSimpleList_VoidPtr *this)
{
  return !this->firstNode.next && !this->firstNode.data;
}
