void __thiscall sub_64AC60(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<LowProcess *,LP_LOCK_DATA>::`vftable'; /*0x64ac88*/
  NiTMap_Clear(this); /*0x64ac96*/
  *this = (unsigned int)&NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable'; /*0x64aca5*/
  NiTMap_Clear(this); /*0x64acab*/
  FormHeapFree(*(this + 2)); /*0x64acb4*/
}
