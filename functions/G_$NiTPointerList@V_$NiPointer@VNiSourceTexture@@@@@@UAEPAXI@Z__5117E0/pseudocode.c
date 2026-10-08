NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<NiSourceTexture>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<NiSourceTexture>>::~NiTPointerList<NiPointer<NiSourceTexture>>(this); /*0x5117e3*/
  if ( (a2 & 1) != 0 ) /*0x5117ed*/
    FormHeapFree((unsigned int)this); /*0x5117f0*/
  return this; /*0x5117fa*/
}
