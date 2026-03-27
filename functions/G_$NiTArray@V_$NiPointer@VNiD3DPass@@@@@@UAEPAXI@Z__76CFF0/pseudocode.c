_DWORD *__thiscall NiTArray<NiPointer<NiD3DPass>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
