float *__thiscall sub_4A6A20(float *this, float *a2)
{
  float *result; // eax

  result = a2; /*0x4a6a20*/
  if ( !a2 ) /*0x4a6a29*/
  {
    result = (float *)FormHeapAlloc(8u); /*0x4a6a2d*/
    if ( result ) /*0x4a6a37*/
    {
      *result = 0.0; /*0x4a6a3b*/
      result[1] = 0.0; /*0x4a6a3d*/
      *result = *this; /*0x4a6a42*/
      result[1] = *(this + 1); /*0x4a6a47*/
      return result; /*0x4a6a4b*/
    }
    result = 0; /*0x4a6a4e*/
  }
  *result = *this; /*0x4a6a52*/
  result[1] = *(this + 1); /*0x4a6a58*/
  return result; /*0x4a6a4a*/
}
