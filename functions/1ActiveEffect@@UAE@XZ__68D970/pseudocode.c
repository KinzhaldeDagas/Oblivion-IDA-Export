void __thiscall ActiveEffect::~ActiveEffect(ActiveEffect *this)
{
  TESForm *hitEffect; // eax

  hitEffect = this->members.hitEffect;
  this->vtbl = (ActiveEffectVtbl *)&ActiveEffect::`vftable';
  if ( hitEffect )
    ActiveEffect::~ActiveEffect(this, 1);
  else
    ActiveEffect::~ActiveEffect((int)this);
}
