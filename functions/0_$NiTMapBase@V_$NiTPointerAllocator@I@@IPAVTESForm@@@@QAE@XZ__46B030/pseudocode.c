NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESForm *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
