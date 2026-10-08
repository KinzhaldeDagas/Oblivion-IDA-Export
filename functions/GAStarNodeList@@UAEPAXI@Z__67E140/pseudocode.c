NiTPointerList__BSImageSpaceShader *__thiscall AStarNodeList::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  AStarNodeList_dtor((AStarNodeList *)this); /*0x67e143*/
  if ( (a2 & 1) != 0 ) /*0x67e14d*/
    FormHeapFree((unsigned int)this); /*0x67e150*/
  return this; /*0x67e15a*/
}
