BSFadeNode *__thiscall BSFadeNode::`scalar deleting destructor'(BSFadeNode *this, char a2)
{
  *(_DWORD *)this = &BSFadeNode::`vftable';
  NiBSPNode::~NiBSPNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
