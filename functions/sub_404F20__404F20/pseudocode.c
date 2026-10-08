// CustomAnimSupport evidence: global loading/update gate checked by KF install/defer decisions; support condition for SpecialAnims install timing.
BOOL __thiscall sub_404F20(_BYTE *this)
{
  return *(this + 0x51) || *(this + 0x52); /*0x404f2e*/
}
