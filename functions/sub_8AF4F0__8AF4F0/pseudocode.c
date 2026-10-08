int __thiscall sub_8AF4F0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  bool v4; // zf

  if ( *(this + 3) ) /*0x8af4f3*/
  {
    *a2 = 0; /*0x8af53d*/
    return *(this + 3); /*0x8af540*/
  }
  else
  {
    v3 = FormHeapAlloc(8u); /*0x8af4fb*/
    if ( v3 ) /*0x8af505*/
    {
      *(_DWORD *)v3 = 0; /*0x8af507*/
      *(float *)(v3 + 4) = flt_B2EFC4; /*0x8af513*/
    }
    else
    {
      v3 = 0; /*0x8af518*/
    }
    v4 = *(this + 2) == 0; /*0x8af51a*/
    *(this + 3) = v3; /*0x8af51e*/
    if ( !v4 ) /*0x8af521*/
      sub_8AEA60(this, v3); /*0x8af526*/
    *a2 = 1; /*0x8af52f*/
    return *(this + 3); /*0x8af532*/
  }
}
