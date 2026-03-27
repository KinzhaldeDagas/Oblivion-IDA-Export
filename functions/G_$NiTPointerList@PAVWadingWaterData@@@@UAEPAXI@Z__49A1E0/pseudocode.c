NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<WadingWaterData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<WadingWaterData *>::~NiTPointerList<WadingWaterData *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
