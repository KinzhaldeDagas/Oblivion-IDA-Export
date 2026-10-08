char __thiscall sub_59FEC0(int *this, int a2)
{
  EffectItem_SetRange(a2, *(this + 0x23)); /*0x59fed1*/
  *(_DWORD *)(a2 + 0x14) = *(this + 0x24); /*0x59fedc*/
  EffectItem_SetDuration(a2, *(this + 0x22)); /*0x59fee8*/
  EffectItem_SetMagnitude(a2, *(this + 0x21)); /*0x59fef6*/
  return EffectItem_SetArea(a2, *(this + 0x20)); /*0x59ff09*/
}
