// Deleting destructor for the UInt16-to-AnimSequenceBase map: clears entries, frees buckets, and conditionally frees the map object.
unsigned int *__thiscall sub_471360(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned short,AnimSequenceBase *>::`vftable'; /*0x471363*/
  NiTMap_Clear(this); /*0x471369*/
  FormHeapFree(*(this + 2)); /*0x471372*/
  if ( (a2 & 1) != 0 ) /*0x47137f*/
    FormHeapFree((unsigned int)this); /*0x471382*/
  return this; /*0x47138c*/
}
