char __thiscall sub_6CE770(float *this, int a2)
{
  char result; // al

  result = sub_6CCD10((NiTriBasedGeomData *)this, a2); /*0x6ce779*/
  if ( result ) /*0x6ce780*/
    return sub_6CE450(this + 0xC, (float *)(a2 + 0x30)); /*0x6ce796*/
  return result; /*0x6ce782*/
}
