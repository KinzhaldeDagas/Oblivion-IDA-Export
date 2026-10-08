unsigned int *__thiscall NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::~NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(this); /*0x4bcde3*/
  if ( (a2 & 1) != 0 ) /*0x4bcded*/
    FormHeapFree((unsigned int)this); /*0x4bcdf0*/
  return this; /*0x4bcdfa*/
}
