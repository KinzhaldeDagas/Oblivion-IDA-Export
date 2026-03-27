int __thiscall sub_77FDE0(_BYTE *this, int a2)
{
  if ( *(float *)(a2 + 0x30) < dbl_A88D40
    || flt_A88D38 < (double)*(float *)(a2 + 0x30)
    || *(this + 0xFF5)
    || *(this + 0xFF4) )
  {
    return (*(int (__thiscall **)(_BYTE *, int, int, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x8F, 1, 0);
  }
  else
  {
    return (*(int (__thiscall **)(_BYTE *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x8F, 0, 0);
  }
}
