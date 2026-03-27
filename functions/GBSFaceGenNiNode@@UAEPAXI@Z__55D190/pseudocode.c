BSFaceGenNiNode *__thiscall BSFaceGenNiNode::`scalar deleting destructor'(BSFaceGenNiNode *this, char a2)
{
  BSFaceGenNiNode::~BSFaceGenNiNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
