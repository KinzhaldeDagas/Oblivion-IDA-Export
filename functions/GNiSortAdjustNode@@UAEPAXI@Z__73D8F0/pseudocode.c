NiSortAdjustNode *__thiscall NiSortAdjustNode::`scalar deleting destructor'(NiSortAdjustNode *this, char a2)
{
  *(_DWORD *)this = &NiSortAdjustNode::`vftable';
  NiBSPNode::~NiBSPNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
