_DWORD *__thiscall sub_748860(_DWORD *this)
{
  NiBinaryStream_constr(this);
  *this = &NiMemStream::`vftable';
  *(this + 6) = 0x400;
  *(this + 3) = FormHeapAlloc(0x400u);
  *(this + 5) = 0;
  *(this + 4) = 0;
  *((_BYTE *)this + 0x1D) = 0;
  sub_748CF0(this, 0);
  return this;
}
