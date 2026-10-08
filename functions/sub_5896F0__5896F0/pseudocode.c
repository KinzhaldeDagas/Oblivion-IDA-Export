int __thiscall sub_5896F0(_DWORD *this, float *a2)
{
  int result; // eax
  double v4; // st7
  int v5; // ecx

  result = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x5896f8*/
  v4 = *a2; /*0x5896fe*/
  *(_DWORD *)(result + 4) = 0; /*0x589700*/
  *(float *)(result + 8) = v4; /*0x589707*/
  *(_DWORD *)result = *(this + 1); /*0x58970d*/
  v5 = *(this + 1); /*0x58970f*/
  if ( v5 ) /*0x589714*/
  {
    *(_DWORD *)(v5 + 4) = result; /*0x589716*/
    ++*(this + 3); /*0x589719*/
  }
  else
  {
    ++*(this + 3); /*0x589724*/
    *(this + 2) = result; /*0x589728*/
  }
  *(this + 1) = result; /*0x58971d*/
  return result; /*0x589720*/
}
