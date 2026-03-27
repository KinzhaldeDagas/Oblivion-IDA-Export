void __thiscall sub_585940(void **this)
{
  void *v2; // edi

  v2 = *this;
  if ( *this )
  {
    TESTexture::ClearComponentReferences(v2);
    FormHeapFree((unsigned int)v2);
  }
  NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>((NiTPointerList__BSImageSpaceShader *)(this + 5));
  NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>((NiTPointerList__BSImageSpaceShader *)(this + 1));
}
