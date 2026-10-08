NiTListBase<DFALL<AStarNode *>,AStarNode *> *__thiscall NiTListBase<DFALL<AStarNode *>,AStarNode *>::NiTListBase<DFALL<AStarNode *>,AStarNode *>(
        NiTListBase<DFALL<AStarNode *>,AStarNode *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'; /*0x67d748*/
  if ( (a2 & 1) != 0 ) /*0x67d74e*/
    FormHeapFree((unsigned int)this); /*0x67d751*/
  return this; /*0x67d75b*/
}
