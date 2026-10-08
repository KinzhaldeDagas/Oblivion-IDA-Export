NiTListBase<DFALL<long>,long> *__thiscall NiTListBase<DFALL<long>,long>::NiTListBase<DFALL<long>,long>(
        NiTListBase<DFALL<long>,long> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<long>,long>::`vftable'; /*0x7c2ad8*/
  if ( (a2 & 1) != 0 ) /*0x7c2ade*/
    FormHeapFree((unsigned int)this); /*0x7c2ae1*/
  return this; /*0x7c2aeb*/
}
