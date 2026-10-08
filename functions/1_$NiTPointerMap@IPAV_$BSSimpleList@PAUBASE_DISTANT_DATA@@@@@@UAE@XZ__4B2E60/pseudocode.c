void __thiscall NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::~NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable'; /*0x4b2e88*/
  NiTMap_Clear(this); /*0x4b2e96*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable'; /*0x4b2ea5*/
  NiTMap_Clear(this); /*0x4b2eab*/
  FormHeapFree(*(this + 2)); /*0x4b2eb4*/
}
