NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable'; /*0x4b2623*/
  NiTMap_Clear(this); /*0x4b2629*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x4b2632*/
  if ( (a2 & 1) != 0 ) /*0x4b263f*/
    FormHeapFree((unsigned int)this); /*0x4b2642*/
  return this; /*0x4b264c*/
}
