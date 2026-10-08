NiPSysModifierFloatCtlr *__thiscall NiPSysModifierFloatCtlr::`scalar deleting destructor'(
        NiPSysModifierFloatCtlr *this,
        char a2)
{
  NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(this); /*0x757e53*/
  if ( (a2 & 1) != 0 ) /*0x757e5d*/
    FormHeapFree((unsigned int)this); /*0x757e60*/
  return this; /*0x757e6a*/
}
