void __thiscall ScriptEffect::~ScriptEffect(ActiveEffect *this)
{
  ScriptEventList *v2; // edi

  this->vtbl = (ActiveEffectVtbl *)&ScriptEffect::`vftable'; /*0x6a45a9*/
  v2 = *((ScriptEventList **)this + 0xF); /*0x6a45af*/
  if ( v2 ) /*0x6a45bc*/
  {
    ScriptEventList_destr__(v2); /*0x6a45c0*/
    FormHeapFree((unsigned int)v2); /*0x6a45c6*/
  }
  ActiveEffect::~ActiveEffect(this); /*0x6a45d8*/
}
