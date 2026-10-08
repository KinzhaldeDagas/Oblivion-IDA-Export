void __thiscall ExtraAnim::~ExtraAnim(ExtraAnim *this)
{
  ActorAnimData *v2; // edi

  *(_DWORD *)this = &ExtraAnim::`vftable'; /*0x429909*/
  v2 = *((ActorAnimData **)this + 3); /*0x42990f*/
  if ( v2 ) /*0x42991c*/
  {
    DisposeActorAnimData(v2); /*0x429920*/
    FormHeapFree((unsigned int)v2); /*0x429926*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42992e*/
}
