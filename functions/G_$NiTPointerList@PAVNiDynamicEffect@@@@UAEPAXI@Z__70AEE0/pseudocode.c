NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiDynamicEffect *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiDynamicEffect *>::~NiTPointerList<NiDynamicEffect *>(this); /*0x70aee3*/
  if ( (a2 & 1) != 0 ) /*0x70aeed*/
    FormHeapFree((unsigned int)this); /*0x70aef0*/
  return this; /*0x70aefa*/
}
