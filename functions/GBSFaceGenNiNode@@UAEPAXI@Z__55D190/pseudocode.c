BSFaceGenNiNode *__thiscall BSFaceGenNiNode::`scalar deleting destructor'(BSFaceGenNiNode *this, char a2)
{
  BSFaceGenNiNode::~BSFaceGenNiNode(this); /*0x55d193*/
  if ( (a2 & 1) != 0 ) /*0x55d19d*/
    FormHeapFree((unsigned int)this); /*0x55d1a0*/
  return this; /*0x55d1aa*/
}
