int __thiscall sub_7219F0(float *this, float a2)
{
  *(this + 0x38) = a2;
  sub_70A190((int)this, a2);
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this);
}
