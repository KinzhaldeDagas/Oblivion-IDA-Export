BSScissorNode *__thiscall BSScissorNode::`scalar deleting destructor'(BSScissorNode *this, char a2)
{
  *(_DWORD *)this = &BSScissorNode::`vftable'; /*0x4a1623*/
  NiBSPNode::~NiBSPNode(this); /*0x4a1629*/
  if ( (a2 & 1) != 0 ) /*0x4a1633*/
    FormHeapFree((unsigned int)this); /*0x4a1636*/
  return this; /*0x4a1640*/
}
