unsigned int *__thiscall NiTPointerMap<unsigned int,TESGameSoundHandle *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESGameSoundHandle *>::~NiTPointerMap<unsigned int,TESGameSoundHandle *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
