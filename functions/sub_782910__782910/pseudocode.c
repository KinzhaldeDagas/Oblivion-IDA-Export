// Pass225: Links NiGeometryBufferData to owning geometry group; increments group refcount and writes buffer+0x04.
LONG __thiscall sub_782910(NiGeometryGroup *this, NiGeometryBufferData *a2)
{
  LONG result; // eax

  result = InterlockedIncrement((volatile LONG *)&this->m_uiRefCount); /*0x782917*/
  a2->GeometryGroup = this; /*0x782921*/
  return result; /*0x782924*/
}
