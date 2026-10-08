int __thiscall sub_7219C0(float *this, float a2, int a3)
{
  *((_WORD *)this + 0x6E) |= 8u; /*0x7219cb*/
  *(this + 0x38) = a2; /*0x7219d3*/
  NiNode_UpdateDownwardPass(this, a2, a3); /*0x7219de*/
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this); /*0x7219ed*/
}
