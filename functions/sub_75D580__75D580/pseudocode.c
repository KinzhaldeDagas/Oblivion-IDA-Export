unsigned int *__thiscall sub_75D580(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x75d586*/
  *this = (unsigned int)&NiTArray<NiTArray<NiPointer<NiAVObject>> *>::`vftable'; /*0x75d587*/
  FormHeapFree(v4); /*0x75d58d*/
  if ( (a2 & 1) != 0 ) /*0x75d59a*/
    FormHeapFree((unsigned int)this); /*0x75d59d*/
  return this; /*0x75d5a7*/
}
