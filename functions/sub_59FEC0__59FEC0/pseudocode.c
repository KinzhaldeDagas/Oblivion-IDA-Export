char __thiscall sub_59FEC0(int *this, int a2)
{
  EffectItem_SetRange(a2, *(this + 0x23));
  *(_DWORD *)(a2 + 0x14) = *(this + 0x24);
  EffectItem_SetDuration(a2, *(this + 0x22));
  EffectItem_SetMagnitude(a2, *(this + 0x21));
  return EffectItem_SetArea(a2, *(this + 0x20));
}
