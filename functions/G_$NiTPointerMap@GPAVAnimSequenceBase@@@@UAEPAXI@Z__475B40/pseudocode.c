unsigned int *__thiscall NiTPointerMap<unsigned short,AnimSequenceBase *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned short,AnimSequenceBase *>::~NiTPointerMap<unsigned short,AnimSequenceBase *>(this); /*0x475b43*/
  if ( (a2 & 1) != 0 ) /*0x475b4d*/
    FormHeapFree((unsigned int)this); /*0x475b50*/
  return this; /*0x475b5a*/
}
