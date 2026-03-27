NiDynamicEffectState *__thiscall NiDynamicEffectState::`scalar deleting destructor'(
        NiDynamicEffectState *this,
        char a2)
{
  NiDynamicEffectState::~NiDynamicEffectState(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
