NiGeometryGroup *__thiscall sub_7828D0(NiGeometryGroup *this)
{
  this->vtbl = (NiGeometryGroupVtbl *)&NiGeometryGroup::`vftable';
  InterlockedExchange((volatile LONG *)&this->m_uiRefCount, 0);
  this->device = 0;
  return this;
}
