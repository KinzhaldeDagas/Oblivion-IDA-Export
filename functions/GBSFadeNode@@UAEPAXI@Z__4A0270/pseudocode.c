BSFadeNode *__thiscall BSFadeNode::`scalar deleting destructor'(BSFadeNode *this, char a2)
{
  *(_DWORD *)this = &BSFadeNode::`vftable'; /*0x4a0273*/
  NiBSPNode::~NiBSPNode(this); /*0x4a0279*/
  if ( (a2 & 1) != 0 ) /*0x4a0283*/
    FormHeapFree((unsigned int)this); /*0x4a0286*/
  return this; /*0x4a0290*/
}
