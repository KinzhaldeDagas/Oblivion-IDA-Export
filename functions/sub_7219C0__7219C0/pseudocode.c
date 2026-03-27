int __thiscall sub_7219C0(float *this, float a2, int a3)
{
  *((_WORD *)this + 0x6E) |= 8u;
  *(this + 0x38) = a2;
  sub_70A0D0(this, a2, a3);
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this);
}
