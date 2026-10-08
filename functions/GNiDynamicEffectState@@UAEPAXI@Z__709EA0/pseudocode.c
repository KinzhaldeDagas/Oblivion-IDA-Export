NiDynamicEffectState *__thiscall NiDynamicEffectState::`scalar deleting destructor'(
        NiDynamicEffectState *this,
        char a2)
{
  NiDynamicEffectState::~NiDynamicEffectState(this); /*0x709ea3*/
  if ( (a2 & 1) != 0 ) /*0x709ead*/
    FormHeapFree((unsigned int)this); /*0x709eb0*/
  return this; /*0x709eba*/
}
