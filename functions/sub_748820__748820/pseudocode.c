_DWORD *__thiscall sub_748820(_DWORD *this, int a2, int a3)
{
  NiBinaryStream_constr(this);
  *(this + 3) = a2;
  *(this + 5) = a3;
  *this = &NiMemStream::`vftable';
  *(this + 4) = 0;
  *(this + 6) = 0;
  *((_BYTE *)this + 0x1D) = 0;
  sub_748CF0(this, 0);
  return this;
}
