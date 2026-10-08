NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiGeometry *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiGeometry *>::~NiTPointerList<NiGeometry *>(this); /*0x7334b3*/
  if ( (a2 & 1) != 0 ) /*0x7334bd*/
    FormHeapFree((unsigned int)this); /*0x7334c0*/
  return this; /*0x7334ca*/
}
