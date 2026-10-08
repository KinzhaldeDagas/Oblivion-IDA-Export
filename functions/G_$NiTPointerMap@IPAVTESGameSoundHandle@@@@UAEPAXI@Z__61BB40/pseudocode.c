unsigned int *__thiscall NiTPointerMap<unsigned int,TESGameSoundHandle *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESGameSoundHandle *>::~NiTPointerMap<unsigned int,TESGameSoundHandle *>(this); /*0x61bb43*/
  if ( (a2 & 1) != 0 ) /*0x61bb4d*/
    FormHeapFree((unsigned int)this); /*0x61bb50*/
  return this; /*0x61bb5a*/
}
