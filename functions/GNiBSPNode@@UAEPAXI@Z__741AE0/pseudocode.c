NiBSPNode *__thiscall NiBSPNode::`scalar deleting destructor'(NiBSPNode *this, char a2)
{
  NiBSPNode::~NiBSPNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
