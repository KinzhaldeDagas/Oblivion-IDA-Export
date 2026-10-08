NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *> *__thiscall NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>(
        NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable'; /*0x5b1528*/
  if ( (a2 & 1) != 0 ) /*0x5b152e*/
    FormHeapFree((unsigned int)this); /*0x5b1531*/
  return this; /*0x5b153b*/
}
