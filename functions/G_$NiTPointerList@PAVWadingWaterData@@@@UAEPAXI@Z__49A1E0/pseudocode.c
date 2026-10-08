NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<WadingWaterData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<WadingWaterData *>::~NiTPointerList<WadingWaterData *>(this); /*0x49a1e3*/
  if ( (a2 & 1) != 0 ) /*0x49a1ed*/
    FormHeapFree((unsigned int)this); /*0x49a1f0*/
  return this; /*0x49a1fa*/
}
