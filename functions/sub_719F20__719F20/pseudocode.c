int __thiscall sub_719F20(NiTriBasedGeomData *this)
{
  int v1; // esi

  v1 = 2
     * (*((unsigned __int16 *)this + 0x22)
      + (unsigned __int16)(this->members.m_usTriangles + 2 * *((_WORD *)this + 0x22)));
  return v1 + sub_7285E0(this);
}
