DNameNode *__thiscall DNameNode::DNameNode(DNameNode *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  return this;
}
