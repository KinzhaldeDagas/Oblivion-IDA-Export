void __thiscall NiTextureEffect::~NiTextureEffect(NiDynamicEffect *this)
{
  int v2; // esi

  this->vtbl = (NiAVObjectVtbl *)&NiTextureEffect::`vftable';
  sub_701480((int)this);
  v2 = *((_DWORD *)this + 0x4F);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiDynamicEffect::~NiDynamicEffect(this);
}
