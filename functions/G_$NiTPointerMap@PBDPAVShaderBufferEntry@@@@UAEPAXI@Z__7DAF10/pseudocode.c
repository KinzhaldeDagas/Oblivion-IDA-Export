unsigned int *__thiscall NiTPointerMap<char const *,ShaderBufferEntry *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,ShaderBufferEntry *>::~NiTPointerMap<char const *,ShaderBufferEntry *>(this); /*0x7daf13*/
  if ( (a2 & 1) != 0 ) /*0x7daf1d*/
    FormHeapFree((unsigned int)this); /*0x7daf20*/
  return this; /*0x7daf2a*/
}
