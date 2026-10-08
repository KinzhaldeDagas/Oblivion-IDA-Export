NiTPointerMap<char const *,NiShader *> *__thiscall NiTPointerMap<char const *,NiShader *>::NiTPointerMap<char const *,NiShader *>(
        NiTPointerMap<char const *,NiShader *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTPointerMap<char const *,NiShader *>::`vftable'; /*0x77ce23*/
  NiTMap_Clear(this); /*0x77ce29*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiShader *>::`vftable'; /*0x77ce30*/
  NiTMap_Clear(this); /*0x77ce36*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x77ce3f*/
  if ( (a2 & 1) != 0 ) /*0x77ce4c*/
    FormHeapFree((unsigned int)this); /*0x77ce4f*/
  return this; /*0x77ce59*/
}
