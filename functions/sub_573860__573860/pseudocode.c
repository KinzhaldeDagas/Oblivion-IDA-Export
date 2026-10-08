_DWORD *__thiscall sub_573860(_DWORD *this, char a2)
{
  *this = &NiTListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'; /*0x573868*/
  if ( (a2 & 1) != 0 ) /*0x57386e*/
    FormHeapFree((unsigned int)this); /*0x573871*/
  return this; /*0x57387b*/
}
