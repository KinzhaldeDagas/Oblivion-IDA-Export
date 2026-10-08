void __thiscall ExtraFriendHitList::~ExtraFriendHitList(ExtraFriendHitList *this)
{
  unsigned int *v2; // esi
  _DWORD *v3; // esi
  int v4; // edi

  v2 = *((unsigned int **)this + 3); /*0x42aa04*/
  for ( *(_DWORD *)this = &ExtraFriendHitList::`vftable'; v2; v2 = (unsigned int *)v2[1] ) /*0x42aa0f*/
  {
    if ( !*v2 ) /*0x42aa11*/
      break; /*0x42aa15*/
    FormHeapFree(*v2); /*0x42aa18*/
  }
  v3 = *((_DWORD **)this + 3); /*0x42aa27*/
  if ( v3[1] ) /*0x42aa2a*/
  {
    do /*0x42aa45*/
    {
      v4 = *(_DWORD *)(v3[1] + 4); /*0x42aa34*/
      FormHeapFree(v3[1]); /*0x42aa38*/
      v3[1] = v4; /*0x42aa42*/
    }
    while ( v4 ); /*0x42aa45*/
  }
  *v3 = 0; /*0x42aa48*/
  FormHeapFree(*((_DWORD *)this + 3)); /*0x42aa52*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42aa5b*/
}
