NiTListBase<DFALL<long>,long> *__thiscall NiTListBase<DFALL<long>,long>::NiTListBase<DFALL<long>,long>(
        NiTListBase<DFALL<long>,long> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<long>,long>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
