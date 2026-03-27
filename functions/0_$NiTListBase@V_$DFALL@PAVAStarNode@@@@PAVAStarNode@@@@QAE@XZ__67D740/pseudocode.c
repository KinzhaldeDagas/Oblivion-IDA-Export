NiTListBase<DFALL<AStarNode *>,AStarNode *> *__thiscall NiTListBase<DFALL<AStarNode *>,AStarNode *>::NiTListBase<DFALL<AStarNode *>,AStarNode *>(
        NiTListBase<DFALL<AStarNode *>,AStarNode *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<AStarNode *>,AStarNode *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
