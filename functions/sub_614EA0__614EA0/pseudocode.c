unsigned int *__thiscall sub_614EA0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGameSoundHandle *>::`vftable'; /*0x614ea3*/
  NiTMap_Clear(this); /*0x614ea9*/
  FormHeapFree(*(this + 2)); /*0x614eb2*/
  if ( (a2 & 1) != 0 ) /*0x614ebf*/
    FormHeapFree((unsigned int)this); /*0x614ec2*/
  return this; /*0x614ecc*/
}
