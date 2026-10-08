NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<DistantLODGroup *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<DistantLODGroup *>::~NiTPointerList<DistantLODGroup *>(this); /*0x7b29e3*/
  if ( (a2 & 1) != 0 ) /*0x7b29ed*/
    FormHeapFree((unsigned int)this); /*0x7b29f0*/
  return this; /*0x7b29fa*/
}
