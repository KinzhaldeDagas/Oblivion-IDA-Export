void __thiscall sub_585940(void **this)
{
  void *v2; // edi

  v2 = *this; /*0x585969*/
  if ( *this ) /*0x585969*/
  {
    Shared_NoOpVirtual_60D0A0(v2); /*0x585979*/
    FormHeapFree((unsigned int)v2); /*0x58597f*/
  }
  NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>((NiTPointerList__BSImageSpaceShader *)(this + 5)); /*0x58598f*/
  NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>((NiTPointerList__BSImageSpaceShader *)(this + 1)); /*0x58599f*/
}
