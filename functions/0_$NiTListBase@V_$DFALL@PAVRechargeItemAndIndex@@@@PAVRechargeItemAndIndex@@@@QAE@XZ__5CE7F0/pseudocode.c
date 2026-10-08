NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *__thiscall NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>(
        NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'; /*0x5ce7f8*/
  if ( (a2 & 1) != 0 ) /*0x5ce7fe*/
    FormHeapFree((unsigned int)this); /*0x5ce801*/
  return this; /*0x5ce80b*/
}
