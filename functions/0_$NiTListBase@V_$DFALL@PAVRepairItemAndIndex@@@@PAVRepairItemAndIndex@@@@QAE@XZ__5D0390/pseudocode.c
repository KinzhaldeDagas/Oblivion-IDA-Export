NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *> *__thiscall NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>(
        NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
