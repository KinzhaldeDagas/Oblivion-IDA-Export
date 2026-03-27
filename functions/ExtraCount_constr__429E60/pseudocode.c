_BYTE *__thiscall ExtraCount_constr(_BYTE *this, __int16 a2)
{
  *(this + 4) = 0x2A;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraCount::`vftable';
  *((_WORD *)this + 6) = a2;
  return this;
}
