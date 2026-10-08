bool __thiscall sub_740F40(float *this, int a2)
{
  return sub_6D7E00((NiTriBasedGeomData *)this, a2) /*0x740f86*/
      && ((*(_BYTE *)(a2 + 0x18) ^ *((_BYTE *)this + 0x18)) & 1) == 0
      && *(float *)(a2 + 0x1C) == *(this + 7)
      && ((*(_BYTE *)(a2 + 0x18) ^ *((_BYTE *)this + 0x18)) & 6) == 0
      && !NiPoint3__NotEqual((const NiPoint3 *)(this + 8), (const NiPoint3 *)(a2 + 0x20));
}
