char __thiscall sub_6EAD60(float *this, const NiPoint3 *a2)
{
  char result; // al

  result = sub_6CCD10((NiTriBasedGeomData *)this, (int)a2); /*0x6ead69*/
  if ( result ) /*0x6ead70*/
    return !NiPoint3__NotEqual((const NiPoint3 *)this + 4, a2 + 4); /*0x6ead86*/
  return result; /*0x6ead72*/
}
