char __thiscall sub_6EA2F0(float *this, int a2)
{
  char result; // al

  result = sub_6CCD10((NiTriBasedGeomData *)this, a2); /*0x6ea2f9*/
  if ( result ) /*0x6ea300*/
    return !sub_6D5A40(this + 0xC, (float *)(a2 + 0x30)); /*0x6ea316*/
  return result; /*0x6ea302*/
}
