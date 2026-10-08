NiSortAdjustNode *__thiscall NiSortAdjustNode::`scalar deleting destructor'(NiSortAdjustNode *this, char a2)
{
  *(_DWORD *)this = &NiSortAdjustNode::`vftable'; /*0x73d8f3*/
  NiBSPNode::~NiBSPNode(this); /*0x73d8f9*/
  if ( (a2 & 1) != 0 ) /*0x73d903*/
    FormHeapFree((unsigned int)this); /*0x73d906*/
  return this; /*0x73d910*/
}
