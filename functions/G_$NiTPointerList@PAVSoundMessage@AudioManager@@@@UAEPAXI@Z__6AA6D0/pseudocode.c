NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<AudioManager::SoundMessage *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<AudioManager::SoundMessage *>::~NiTPointerList<AudioManager::SoundMessage *>(this); /*0x6aa6d3*/
  if ( (a2 & 1) != 0 ) /*0x6aa6dd*/
    FormHeapFree((unsigned int)this); /*0x6aa6e0*/
  return this; /*0x6aa6ea*/
}
