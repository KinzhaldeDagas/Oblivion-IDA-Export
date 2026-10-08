ExtraFriendHitList *__thiscall ExtraFriendHitList::ExtraFriendHitList(ExtraFriendHitList *this)
{
  _DWORD *v2; // eax

  *((_BYTE *)this + 4) = 0x4E; /*0x42a9a8*/
  *((_DWORD *)this + 2) = 0; /*0x42a9ac*/
  *(_DWORD *)this = &ExtraFriendHitList::`vftable'; /*0x42a9bd*/
  v2 = (_DWORD *)FormHeapAlloc(8u); /*0x42a9c3*/
  if ( v2 ) /*0x42a9cd*/
  {
    *v2 = 0; /*0x42a9cf*/
    v2[1] = 0; /*0x42a9d5*/
  }
  else
  {
    v2 = 0; /*0x42a9de*/
  }
  *((_DWORD *)this + 3) = v2; /*0x42a9e0*/
  return this; /*0x42a9e5*/
}
