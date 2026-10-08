_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,AudioManager::SoundMessage *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,AudioManager::SoundMessage *>::`vftable'; /*0x6a9088*/
  if ( (a2 & 1) != 0 ) /*0x6a908e*/
    FormHeapFree((unsigned int)this); /*0x6a9091*/
  return this; /*0x6a909b*/
}
