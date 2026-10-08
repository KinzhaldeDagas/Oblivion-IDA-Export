// Destroys the UInt16-to-AnimSequenceBase map contents, then frees its bucket array. Does not free the map object itself.
void __thiscall sub_471340(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned short,AnimSequenceBase *>::`vftable'; /*0x471343*/
  NiTMap_Clear(this); /*0x471349*/
  FormHeapFree(*(this + 2)); /*0x471352*/
}
