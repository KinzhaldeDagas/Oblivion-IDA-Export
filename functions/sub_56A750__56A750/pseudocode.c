void __thiscall sub_56A750(BSSimpleList_VoidPtr *this)
{
  void *data; // edi
  unsigned int next; // eax

  if ( this )
  {
    while ( !BSSimpleList_IsEmpty(this) )
    {
      data = this->firstNode.data;
      if ( this->firstNode.data )
      {
        TESTexture::ClearComponentReferences(this->firstNode.data);
        FormHeapFree((unsigned int)data);
      }
      next = (unsigned int)this->firstNode.next;
      if ( next )
      {
        this->firstNode.next = *(BSSimpleList_VoidPtr::NodeVoid **)(next + 4);
        this->firstNode.data = *(void **)next;
        FormHeapFree(next);
      }
      else
      {
        this->firstNode.data = 0;
      }
    }
  }
}
