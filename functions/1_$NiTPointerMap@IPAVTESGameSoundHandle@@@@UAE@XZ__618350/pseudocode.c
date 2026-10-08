void __thiscall NiTPointerMap<unsigned int,TESGameSoundHandle *>::~NiTPointerMap<unsigned int,TESGameSoundHandle *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESGameSoundHandle *>::`vftable'; /*0x618378*/
  NiTMap_Clear(this); /*0x618386*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGameSoundHandle *>::`vftable'; /*0x618395*/
  NiTMap_Clear(this); /*0x61839b*/
  FormHeapFree(*(this + 2)); /*0x6183a4*/
}
