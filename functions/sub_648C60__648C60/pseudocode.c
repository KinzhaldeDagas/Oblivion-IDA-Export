void __thiscall sub_648C60(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable'; /*0x648c63*/
  NiTMap_Clear(this); /*0x648c69*/
  FormHeapFree(*(this + 2)); /*0x648c72*/
}
