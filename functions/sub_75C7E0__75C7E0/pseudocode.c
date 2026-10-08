bool __thiscall sub_75C7E0(float *this, int a2)
{
  bool result; // al

  result = sub_75E890((NiTriBasedGeomData *)this, a2); /*0x75c7e9*/
  if ( result ) /*0x75c7f0*/
    return !NiPoint3__NotEqual((const NiPoint3 *)(a2 + 0x40), (const NiPoint3 *)(this + 0x10)); /*0x75c806*/
  return result; /*0x75c7f2*/
}
