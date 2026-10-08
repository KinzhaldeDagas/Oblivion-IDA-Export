unsigned int *__thiscall NiTPointerMap<unsigned int,TESFile *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESFile *>::~NiTPointerMap<unsigned int,TESFile *>(this); /*0x450ac3*/
  if ( (a2 & 1) != 0 ) /*0x450acd*/
    FormHeapFree((unsigned int)this); /*0x450ad0*/
  return this; /*0x450ada*/
}
