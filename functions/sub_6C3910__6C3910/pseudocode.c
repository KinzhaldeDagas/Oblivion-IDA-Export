char __thiscall sub_6C3910(float *this, float a2)
{
  int v3; // eax
  _DWORD *v4; // ecx

  v3 = _isnan(a2); /*0x6c391d*/
  if ( !v3 ) /*0x6c3927*/
  {
    v3 = _finite(a2); /*0x6c3933*/
    if ( v3 ) /*0x6c393d*/
      *(this + 0xA) = a2; /*0x6c3943*/
  }
  v4 = *((_DWORD **)this + 0xB); /*0x6c3946*/
  if ( v4 ) /*0x6c394c*/
    LOBYTE(v3) = NiTransformData_SetScaleKeys(v4, 0, 0, 0); /*0x6c3954*/
  return v3; /*0x6c3959*/
}
