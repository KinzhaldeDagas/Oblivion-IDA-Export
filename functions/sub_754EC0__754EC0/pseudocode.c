void __thiscall sub_754EC0(int this, float applicationTime)
{
  *(_WORD *)(this + 8) &= 0xFFF9u; /*0x754ec3*/
  if ( *(_DWORD *)(this + 0x30) ) /*0x754ec9*/
  {
    if ( !NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime) ) /*0x754ed7*/
    {
      if ( -flt_A7DEB4 == *(float *)(this + 0x3C) ) /*0x754ef2*/
        *(float *)(this + 0x3C) = *(float *)(this + 0x28); /*0x754ef7*/
      if ( *(float *)(this + 0x28) < (double)*(float *)(this + 0x3C) ) /*0x754f07*/
        *(_BYTE *)(*(_DWORD *)(this + 0x30) + 0xEC) = 1; /*0x754f0c*/
      *(float *)(this + 0x3C) = *(float *)(this + 0x28); /*0x754f16*/
    }
  }
}
