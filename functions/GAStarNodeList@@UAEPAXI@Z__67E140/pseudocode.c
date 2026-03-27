NiTPointerList__BSImageSpaceShader *__thiscall AStarNodeList::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  AStarNodeList::~AStarNodeList(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
