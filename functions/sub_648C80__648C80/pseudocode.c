unsigned int *__thiscall sub_648C80(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable'; /*0x648c83*/
  NiTMap_Clear(this); /*0x648c89*/
  FormHeapFree(*(this + 2)); /*0x648c92*/
  if ( (a2 & 1) != 0 ) /*0x648c9f*/
    FormHeapFree((unsigned int)this); /*0x648ca2*/
  return this; /*0x648cac*/
}
