unsigned int *__thiscall sub_4BCC30(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'; /*0x4bcc33*/
  NiTMap_Clear(this); /*0x4bcc39*/
  FormHeapFree(*(this + 2)); /*0x4bcc42*/
  if ( (a2 & 1) != 0 ) /*0x4bcc4f*/
    FormHeapFree((unsigned int)this); /*0x4bcc52*/
  return this; /*0x4bcc5c*/
}
