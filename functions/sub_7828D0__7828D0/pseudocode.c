NiGeometryGroup *__thiscall sub_7828D0(NiGeometryGroup *this)
{
  this->vtbl = (NiGeometryGroupVtbl *)&NiGeometryGroup::`vftable'; /*0x7828d9*/
  InterlockedExchange((volatile LONG *)&this->m_uiRefCount, 0); /*0x7828df*/
  this->device = 0; /*0x7828e5*/
  return this; /*0x7828ee*/
}
