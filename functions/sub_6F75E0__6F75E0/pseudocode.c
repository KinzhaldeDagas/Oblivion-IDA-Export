_DWORD *__thiscall sub_6F75E0(unsigned int *this, _DWORD *a2)
{
  if ( *(this + 6) < 0x10 )
    sub_6F7240(a2, (unsigned int)(this + 1), this);
  else
    sub_6F7240(a2, *(this + 1), this);
  return a2;
}
