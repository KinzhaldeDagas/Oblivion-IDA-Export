_DWORD *__thiscall NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
