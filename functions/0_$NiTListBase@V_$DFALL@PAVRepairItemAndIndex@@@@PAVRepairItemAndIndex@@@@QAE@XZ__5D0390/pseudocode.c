NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *> *__thiscall NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>(
        NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable'; /*0x5d0398*/
  if ( (a2 & 1) != 0 ) /*0x5d039e*/
    FormHeapFree((unsigned int)this); /*0x5d03a1*/
  return this; /*0x5d03ab*/
}
