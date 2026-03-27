NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *> *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>(
        NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*((_DWORD *)this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
