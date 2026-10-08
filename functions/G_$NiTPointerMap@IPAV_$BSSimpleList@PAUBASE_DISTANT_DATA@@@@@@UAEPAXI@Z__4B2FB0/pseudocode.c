unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::~NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>(this); /*0x4b2fb3*/
  if ( (a2 & 1) != 0 ) /*0x4b2fbd*/
    FormHeapFree((unsigned int)this); /*0x4b2fc0*/
  return this; /*0x4b2fca*/
}
