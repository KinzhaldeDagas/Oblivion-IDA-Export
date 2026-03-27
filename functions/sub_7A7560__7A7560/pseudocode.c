float *__thiscall sub_7A7560(float *this)
{
  *(this + 1) = 0.0;
  *((_BYTE *)this + 0x10) = 1;
  *(this + 2) = 0.0;
  *(this + 3) = 0.0;
  *(_DWORD *)this = &Normal::`vftable';
  if ( dword_B42C9C )
  {
    *((_BYTE *)this + 0x10) = 0;
    *(this + 1) = flt_B42C98;
    *((_DWORD *)this + 2) = dword_B42A88;
    *((_DWORD *)this + 3) = dword_B42A8C;
  }
  else
  {
    sub_7A71D0(this, 1);
    flt_B42C98 = *(this + 1);
    dword_B42A88 = *((_DWORD *)this + 2);
    dword_B42A8C = *((_DWORD *)this + 3);
  }
  ++dword_B42C9C;
  return this;
}
