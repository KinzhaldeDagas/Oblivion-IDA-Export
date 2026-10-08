ExtraFriendHitList *__thiscall ExtraFriendHitList::`scalar deleting destructor'(ExtraFriendHitList *this, char a2)
{
  ExtraFriendHitList::~ExtraFriendHitList(this); /*0x42afa3*/
  if ( (a2 & 1) != 0 ) /*0x42afad*/
    FormHeapFree((unsigned int)this); /*0x42afb0*/
  return this; /*0x42afba*/
}
