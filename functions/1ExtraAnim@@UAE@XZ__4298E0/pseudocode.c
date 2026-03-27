void __thiscall ExtraAnim::~ExtraAnim(ExtraAnim *this)
{
  ActorAnimData *v2; // edi

  *(_DWORD *)this = &ExtraAnim::`vftable';
  v2 = *((ActorAnimData **)this + 3);
  if ( v2 )
  {
    DisposeActorAnimData(v2);
    FormHeapFree((unsigned int)v2);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
