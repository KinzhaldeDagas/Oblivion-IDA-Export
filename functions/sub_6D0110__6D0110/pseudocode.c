int *__thiscall sub_6D0110(int *this, char a2)
{
  if ( (a2 & 2) != 0 ) /*0x6d011b*/
  {
    _LN21( /*0x6d012d*/
      (char *)this,
      0x30u,
      *(this + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiBlendBoolInterpolator::~NiBlendBoolInterpolator);
    if ( (a2 & 1) != 0 ) /*0x6d0135*/
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF)); /*0x6d0138*/
    return this + 0xFFFFFFFF; /*0x6d0140*/
  }
  else
  {
    NiBlendBoolInterpolator::~NiBlendBoolInterpolator((NiBlendBoolInterpolator *)this); /*0x6d0148*/
    if ( (a2 & 1) != 0 ) /*0x6d0150*/
      FormHeapFree((unsigned int)this); /*0x6d0153*/
    return this; /*0x6d015b*/
  }
}
