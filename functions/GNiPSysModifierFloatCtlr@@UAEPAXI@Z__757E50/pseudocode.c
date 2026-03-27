NiPSysModifierFloatCtlr *__thiscall NiPSysModifierFloatCtlr::`scalar deleting destructor'(
        NiPSysModifierFloatCtlr *this,
        char a2)
{
  NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
