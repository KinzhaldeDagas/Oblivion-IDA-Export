void __thiscall NonActorMagicTarget::~NonActorMagicTarget(NonActorMagicTarget *this)
{
  _DWORD *v2; // ecx

  v2 = 0;
  if ( this )
    v2 = (_DWORD *)((char *)this + 0xC);
  MagicTarget_destr(v2);
  *(_DWORD *)this = &BSExtraData::`vftable';
}
