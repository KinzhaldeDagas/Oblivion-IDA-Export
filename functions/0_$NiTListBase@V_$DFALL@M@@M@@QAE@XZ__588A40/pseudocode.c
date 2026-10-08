NiTListBase<DFALL<float>,float> *__thiscall NiTListBase<DFALL<float>,float>::NiTListBase<DFALL<float>,float>(
        NiTListBase<DFALL<float>,float> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<float>,float>::`vftable'; /*0x588a48*/
  if ( (a2 & 1) != 0 ) /*0x588a4e*/
    FormHeapFree((unsigned int)this); /*0x588a51*/
  return this; /*0x588a5b*/
}
