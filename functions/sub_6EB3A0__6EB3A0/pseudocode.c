char __thiscall sub_6EB3A0(float *this, int a2)
{
  char result; // al

  result = sub_6CCD10((NiTriBasedGeomData *)this, a2); /*0x6eb3a9*/
  if ( result ) /*0x6eb3b0*/
    return !sub_632310(this + 0xC, (float *)(a2 + 0x30)); /*0x6eb3c6*/
  return result; /*0x6eb3b2*/
}
