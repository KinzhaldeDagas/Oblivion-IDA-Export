bool __thiscall sub_759330(float *this, int a2)
{
  return sub_75E890((NiTriBasedGeomData *)this, a2) /*0x75935a*/
      && *(_BYTE *)(a2 + 0x30) == *((_BYTE *)this + 0x30)
      && !NiPoint3__NotEqual((const NiPoint3 *)(a2 + 0x34), (const NiPoint3 *)(this + 0xD));
}
