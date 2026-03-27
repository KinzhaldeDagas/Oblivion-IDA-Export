char __thiscall sub_482090(float *this, int a2, int a3)
{
  if ( !sub_482050(this, a2, a3) )
    return 0;
  *(this + 5) = (float)(a2 << 0xC);
  *(this + 6) = (float)(a3 << 0xC);
  *(this + 7) = 0.0;
  sub_4CCCC0(this + 5);
  *((_BYTE *)this + 0x20) = 0;
  return 1;
}
