_DWORD *__thiscall NiTArray<NiPointer<NiD3DTextureStage>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(this); /*0x7601c3*/
  if ( (a2 & 1) != 0 ) /*0x7601cd*/
    FormHeapFree((unsigned int)this); /*0x7601d0*/
  return this; /*0x7601da*/
}
