NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<AudioManager::SoundMessage *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<AudioManager::SoundMessage *>::~NiTPointerList<AudioManager::SoundMessage *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
