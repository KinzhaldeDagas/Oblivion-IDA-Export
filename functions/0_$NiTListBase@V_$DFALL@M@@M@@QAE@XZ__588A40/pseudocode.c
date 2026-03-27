NiTListBase<DFALL<float>,float> *__thiscall NiTListBase<DFALL<float>,float>::NiTListBase<DFALL<float>,float>(
        NiTListBase<DFALL<float>,float> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<float>,float>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
