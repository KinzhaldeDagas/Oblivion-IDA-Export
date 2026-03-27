NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *__thiscall NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
        NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
