unsigned int *__thiscall NiTMap<LowProcess *,LP_LOCK_DATA>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  sub_64AC60(this); /*0x64acf3*/
  if ( (a2 & 1) != 0 ) /*0x64acfd*/
    FormHeapFree((unsigned int)this); /*0x64ad00*/
  return this; /*0x64ad0a*/
}
