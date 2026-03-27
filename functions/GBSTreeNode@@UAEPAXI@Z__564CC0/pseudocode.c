BSTreeNode *__thiscall BSTreeNode::`scalar deleting destructor'(BSTreeNode *this, char a2)
{
  BSTreeNode::~BSTreeNode(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
