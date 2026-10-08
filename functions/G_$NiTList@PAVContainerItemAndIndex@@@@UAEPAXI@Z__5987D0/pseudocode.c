NiTPointerList__BSImageSpaceShader *__thiscall NiTList<ContainerItemAndIndex *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(this); /*0x5987d3*/
  if ( (a2 & 1) != 0 ) /*0x5987dd*/
    FormHeapFree((unsigned int)this); /*0x5987e0*/
  return this; /*0x5987ea*/
}
