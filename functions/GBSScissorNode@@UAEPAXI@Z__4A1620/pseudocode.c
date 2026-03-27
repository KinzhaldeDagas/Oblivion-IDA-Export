BSScissorNode *__thiscall BSScissorNode::`scalar deleting destructor'(BSScissorNode *this, char a2)
{
  *(_DWORD *)this = &BSScissorNode::`vftable';
  NiBSPNode::~NiBSPNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
