_DWORD *__thiscall NiTArray<NiPointer<NiD3DPass>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(this); /*0x76cff3*/
  if ( (a2 & 1) != 0 ) /*0x76cffd*/
    FormHeapFree((unsigned int)this); /*0x76d000*/
  return this; /*0x76d00a*/
}
