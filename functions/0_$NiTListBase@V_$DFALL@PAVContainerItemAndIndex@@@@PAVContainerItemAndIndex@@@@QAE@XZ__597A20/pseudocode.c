NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *> *__thiscall NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>(
        NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
