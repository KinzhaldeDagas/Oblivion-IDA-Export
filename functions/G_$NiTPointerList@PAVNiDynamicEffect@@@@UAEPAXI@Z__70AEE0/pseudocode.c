NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiDynamicEffect *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiDynamicEffect *>::~NiTPointerList<NiDynamicEffect *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
