NiTListBase<DFALL<unsigned int>,unsigned int> *__thiscall NiTListBase<DFALL<unsigned int>,unsigned int>::NiTListBase<DFALL<unsigned int>,unsigned int>(
        NiTListBase<DFALL<unsigned int>,unsigned int> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<unsigned int>,unsigned int>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
