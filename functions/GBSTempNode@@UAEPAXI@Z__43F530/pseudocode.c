BSTempNode *__thiscall BSTempNode::`scalar deleting destructor'(BSTempNode *this, char a2)
{
  *(_DWORD *)this = &BSTempNode::`vftable'; /*0x43f533*/
  NiBSPNode::~NiBSPNode(this); /*0x43f539*/
  if ( (a2 & 1) != 0 ) /*0x43f543*/
    FormHeapFree((unsigned int)this); /*0x43f546*/
  return this; /*0x43f550*/
}
