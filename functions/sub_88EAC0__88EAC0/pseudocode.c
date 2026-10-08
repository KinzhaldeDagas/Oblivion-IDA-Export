bool __thiscall sub_88EAC0(float *this, int a2)
{
  bool v3; // cl
  bool v4; // cl

  v3 = sub_89E950(a2); /*0x88eace*/
  if ( v3 ) /*0x88ead2*/
  {
    v4 = *(this + 6) == *(float *)(a2 + 0x18) && v3; /*0x88eaef*/
    if ( *(this + 5) == *(float *)(a2 + 0x14) ) /*0x88eafb*/
      return v4; /*0x88eb08*/
    return 0; /*0x88eb0d*/
  }
  return v3; /*0x88eb04*/
}
