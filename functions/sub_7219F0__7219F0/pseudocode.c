int __thiscall sub_7219F0(float *this, float a2)
{
  *(this + 0x38) = a2; /*0x7219f8*/
  sub_70A190((int)this, a2); /*0x721a01*/
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this); /*0x721a10*/
}
