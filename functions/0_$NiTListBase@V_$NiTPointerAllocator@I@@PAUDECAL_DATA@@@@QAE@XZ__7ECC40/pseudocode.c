NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *> *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>::NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>(
        NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<NiTPointerAllocator<unsigned int>,DECAL_DATA *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
