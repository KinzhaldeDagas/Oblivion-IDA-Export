_DWORD *__thiscall NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable'; /*0x67f168*/
  if ( (a2 & 1) != 0 ) /*0x67f16e*/
    FormHeapFree((unsigned int)this); /*0x67f171*/
  return this; /*0x67f17b*/
}
