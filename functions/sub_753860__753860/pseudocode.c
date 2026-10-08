bool __thiscall sub_753860(float *this, const NiPoint3 *a2)
{
  bool result; // al

  result = sub_75E890((NiTriBasedGeomData *)this, (int)a2); /*0x753869*/
  if ( result ) /*0x753870*/
    return !NiPoint3__NotEqual(a2 + 4, (const NiPoint3 *)this + 4); /*0x753886*/
  return result; /*0x753872*/
}
