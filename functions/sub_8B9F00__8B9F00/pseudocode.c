int __thiscall sub_8B9F00(int *this, _BYTE *a2)
{
  float *v3; // eax
  float *v4; // edi
  int v5; // eax
  int v6; // ecx

  if ( *(this + 3) ) /*0x8b9f03*/
  {
    *a2 = 0; /*0x8b9f4a*/
    return *(this + 3); /*0x8b9f4d*/
  }
  else
  {
    v3 = (float *)FormHeapAlloc(0x70u); /*0x8b9f0c*/
    v4 = v3; /*0x8b9f11*/
    if ( v3 ) /*0x8b9f18*/
    {
      sub_890B00(v3); /*0x8b9f1c*/
      v5 = (int)v4; /*0x8b9f21*/
    }
    else
    {
      v5 = 0; /*0x8b9f25*/
    }
    v6 = *(this + 2); /*0x8b9f27*/
    *(this + 3) = v5; /*0x8b9f2c*/
    if ( v6 ) /*0x8b9f30*/
      sub_8AC0F0(v6, v5); /*0x8b9f33*/
    *a2 = 1; /*0x8b9f3c*/
    return *(this + 3); /*0x8b9f3f*/
  }
}
