NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *> *__thiscall NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>(
        NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
