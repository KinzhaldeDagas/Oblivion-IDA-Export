NiTPointerList__BSImageSpaceShader *__thiscall AStarWorldNodeList::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  AStarWorldNodeList::~AStarWorldNodeList(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
