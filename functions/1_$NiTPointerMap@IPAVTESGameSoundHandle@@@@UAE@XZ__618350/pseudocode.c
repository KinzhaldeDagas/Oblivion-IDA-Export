void __thiscall NiTPointerMap<unsigned int,TESGameSoundHandle *>::~NiTPointerMap<unsigned int,TESGameSoundHandle *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,TESGameSoundHandle *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGameSoundHandle *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
