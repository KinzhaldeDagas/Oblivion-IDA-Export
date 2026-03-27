NiLODNode *__thiscall NiLODNode::`scalar deleting destructor'(NiLODNode *this, char a2)
{
  NiLODNode::~NiLODNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
