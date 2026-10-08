unsigned int *__thiscall NiTPointerMap<Actor *,PathingData *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<Actor *,PathingData *>::~NiTPointerMap<Actor *,PathingData *>(this); /*0x682ed3*/
  if ( (a2 & 1) != 0 ) /*0x682edd*/
    FormHeapFree((unsigned int)this); /*0x682ee0*/
  return this; /*0x682eea*/
}
