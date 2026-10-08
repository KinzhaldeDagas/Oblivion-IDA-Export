NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<BSRenderedTexture>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>(this); /*0x7c1923*/
  if ( (a2 & 1) != 0 ) /*0x7c192d*/
    FormHeapFree((unsigned int)this); /*0x7c1930*/
  return this; /*0x7c193a*/
}
