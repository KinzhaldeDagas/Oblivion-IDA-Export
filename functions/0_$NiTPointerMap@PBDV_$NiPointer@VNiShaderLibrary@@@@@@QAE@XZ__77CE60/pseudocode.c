NiTPointerMap<char const *,NiPointer<NiShaderLibrary>> *__thiscall NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>::NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>(
        NiTPointerMap<char const *,NiPointer<NiShaderLibrary>> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiPointer<NiShaderLibrary>>::`vftable'; /*0x77ce63*/
  NiTMap_Clear(this); /*0x77ce69*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiShaderLibrary>>::`vftable'; /*0x77ce70*/
  NiTMap_Clear(this); /*0x77ce76*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x77ce7f*/
  if ( (a2 & 1) != 0 ) /*0x77ce8c*/
    FormHeapFree((unsigned int)this); /*0x77ce8f*/
  return this; /*0x77ce99*/
}
