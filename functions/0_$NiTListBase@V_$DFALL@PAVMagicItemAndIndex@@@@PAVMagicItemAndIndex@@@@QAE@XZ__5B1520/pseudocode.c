NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *> *__thiscall NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>(
        NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<MagicItemAndIndex *>,MagicItemAndIndex *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
