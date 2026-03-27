void __thiscall ScriptEffect::~ScriptEffect(ActiveEffect *this)
{
  ScriptEventList *v2; // edi

  this->vtbl = (ActiveEffectVtbl *)&ScriptEffect::`vftable';
  v2 = *((ScriptEventList **)this + 0xF);
  if ( v2 )
  {
    ScriptEventList_destr__(v2);
    FormHeapFree((unsigned int)v2);
  }
  ActiveEffect::~ActiveEffect(this);
}
