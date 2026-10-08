bool __thiscall sub_709830(float *this, float *a2)
{
  return sub_6D7E00((NiTriBasedGeomData *)this, (int)a2) /*0x7098a0*/
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 7), (const NiPoint3 *)(a2 + 7))
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0xA), (const NiPoint3 *)(a2 + 0xA))
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0xD), (const NiPoint3 *)(a2 + 0xD))
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 0x10), (const NiPoint3 *)(a2 + 0x10))
      && a2[0x13] == *(this + 0x13)
      && a2[0x14] == *(this + 0x14);
}
