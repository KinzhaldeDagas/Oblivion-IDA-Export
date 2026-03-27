_DWORD *__thiscall sub_573860(_DWORD *this, char a2)
{
  *this = &NiTListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
