ExtraFriendHitList *__thiscall ExtraFriendHitList::ExtraFriendHitList(ExtraFriendHitList *this)
{
  _DWORD *v2; // eax

  *((_BYTE *)this + 4) = 0x4E;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraFriendHitList::`vftable';
  v2 = (_DWORD *)FormHeapAlloc(8u);
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
  }
  else
  {
    v2 = 0;
  }
  *((_DWORD *)this + 3) = v2;
  return this;
}
