LONG __thiscall sub_782910(NiGeometryGroup *this, NiGeometryBufferData *a2)
{
  LONG result; // eax

  result = InterlockedIncrement((volatile LONG *)&this->m_uiRefCount);
  a2->GeometryGroup = this;
  return result;
}
