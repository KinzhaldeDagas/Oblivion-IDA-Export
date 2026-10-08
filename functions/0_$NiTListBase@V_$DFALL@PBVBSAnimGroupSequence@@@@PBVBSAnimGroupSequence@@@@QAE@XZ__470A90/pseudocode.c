NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *> *__thiscall NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>(
        NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'; /*0x470a98*/
  if ( (a2 & 1) != 0 ) /*0x470a9e*/
    FormHeapFree((unsigned int)this); /*0x470aa1*/
  return this; /*0x470aab*/
}
