void __thiscall NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>(unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<Actor *,PathingData *>::`vftable'; /*0x682e88*/
  NiTMap_Clear(this); /*0x682e96*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable'; /*0x682ea5*/
  NiTMap_Clear(this); /*0x682eab*/
  FormHeapFree(*(this + 2)); /*0x682eb4*/
}
