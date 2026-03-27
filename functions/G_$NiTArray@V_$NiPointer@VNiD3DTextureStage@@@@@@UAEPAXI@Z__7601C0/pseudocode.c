_DWORD *__thiscall NiTArray<NiPointer<NiD3DTextureStage>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTArray<NiPointer<NiD3DTextureStage>>::~NiTArray<NiPointer<NiD3DTextureStage>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
