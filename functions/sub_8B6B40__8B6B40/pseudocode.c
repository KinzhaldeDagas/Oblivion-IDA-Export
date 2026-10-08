int __thiscall sub_8B6B40(__m128 **this, _BYTE *a2)
{
  float *v3; // eax
  __m128 *inited; // eax
  bool v5; // zf

  if ( *(this + 3) ) /*0x8b6b43*/
  {
    *a2 = 0; /*0x8b6b85*/
    return (int)*(this + 3); /*0x8b6b88*/
  }
  else
  {
    v3 = (float *)FormHeapAlloc(0x30u); /*0x8b6b4b*/
    if ( v3 ) /*0x8b6b55*/
      inited = (__m128 *)OB_bhkCapsuleShapeCinfo_InitDefaults_010201A0(v3); /*0x8b6b59*/
    else
      inited = 0; /*0x8b6b60*/
    v5 = *(this + 2) == 0; /*0x8b6b62*/
    *(this + 3) = inited; /*0x8b6b66*/
    if ( !v5 ) /*0x8b6b69*/
      sub_8B6730(this, (int)inited); /*0x8b6b6e*/
    *a2 = 1; /*0x8b6b77*/
    return (int)*(this + 3); /*0x8b6b7a*/
  }
}
