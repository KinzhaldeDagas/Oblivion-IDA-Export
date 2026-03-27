BSTempNode *__thiscall BSTempNode::`scalar deleting destructor'(BSTempNode *this, char a2)
{
  *(_DWORD *)this = &BSTempNode::`vftable';
  NiBSPNode::~NiBSPNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
