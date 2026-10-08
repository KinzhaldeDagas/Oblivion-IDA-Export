NiTPointerList__BSImageSpaceShader *__thiscall AStarWorldNodeList::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  AStarWorldNodeList::~AStarWorldNodeList(this); /*0x680033*/
  if ( (a2 & 1) != 0 ) /*0x68003d*/
    FormHeapFree((unsigned int)this); /*0x680040*/
  return this; /*0x68004a*/
}
