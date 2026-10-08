NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *> *__thiscall NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>(
        NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable'; /*0x597a28*/
  if ( (a2 & 1) != 0 ) /*0x597a2e*/
    FormHeapFree((unsigned int)this); /*0x597a31*/
  return this; /*0x597a3b*/
}
