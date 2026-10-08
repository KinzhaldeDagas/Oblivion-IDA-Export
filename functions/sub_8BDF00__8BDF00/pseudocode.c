int __thiscall sub_8BDF00(_DWORD *this, _BYTE *a2)
{
  float *v3; // eax
  float *v4; // eax
  bool v5; // zf

  if ( *(this + 3) ) /*0x8bdf03*/
  {
    *a2 = 0; /*0x8bdf45*/
    return *(this + 3); /*0x8bdf48*/
  }
  else
  {
    v3 = (float *)FormHeapAlloc(0x30u); /*0x8bdf0b*/
    if ( v3 ) /*0x8bdf15*/
      v4 = sub_8BDE80(v3); /*0x8bdf19*/
    else
      v4 = 0; /*0x8bdf20*/
    v5 = *(this + 2) == 0; /*0x8bdf22*/
    *(this + 3) = v4; /*0x8bdf26*/
    if ( !v5 ) /*0x8bdf29*/
      sub_8BDC60(this, v4); /*0x8bdf2e*/
    *a2 = 1; /*0x8bdf37*/
    return *(this + 3); /*0x8bdf3a*/
  }
}
