BSShaderProperty *__thiscall sub_7EFA80(
        BSShaderProperty *this,
        int a2,
        float a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  BSShaderProperty::BSShaderProperty(this); /*0x7efa83*/
  *((float *)this + 0x1D) = a3; /*0x7efa90*/
  *((_DWORD *)this + 0x1B) = a2; /*0x7efa93*/
  this->vtbl = &PrecipitationShaderProperty::`vftable'; /*0x7efa9a*/
  *((_DWORD *)this + 0x1E) = *a5; /*0x7efaa2*/
  *((_DWORD *)this + 0x1F) = a5[1]; /*0x7efaa8*/
  *((_DWORD *)this + 0x20) = a5[2]; /*0x7efaae*/
  *((_DWORD *)this + 0x21) = *a6; /*0x7efaba*/
  *((_DWORD *)this + 0x22) = a6[1]; /*0x7efac3*/
  *((_DWORD *)this + 0x23) = a6[2]; /*0x7efacc*/
  *((_DWORD *)this + 0x24) = *a4; /*0x7efad8*/
  *((_DWORD *)this + 0x25) = a4[1]; /*0x7efae5*/
  *((_DWORD *)this + 0x26) = a4[2]; /*0x7efaf4*/
  *((_DWORD *)this + 0x27) = 0; /*0x7efafd*/
  *((_DWORD *)this + 0x28) = 3; /*0x7efb07*/
  *((_DWORD *)this + 0x2A) = a7; /*0x7efb11*/
  *((_DWORD *)this + 0x29) = a8 != 0; /*0x7efb19*/
  return this; /*0x7efb1f*/
}
