ExtraFriendHitList *__thiscall ExtraFriendHitList::`scalar deleting destructor'(ExtraFriendHitList *this, char a2)
{
  ExtraFriendHitList::~ExtraFriendHitList(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
