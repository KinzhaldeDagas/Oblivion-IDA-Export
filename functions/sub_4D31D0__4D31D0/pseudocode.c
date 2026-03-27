unsigned int __thiscall sub_4D31D0(unsigned __int16 *this, float *a2)
{
  unsigned int v3; // edi

  v3 = *(this + 5);
  if ( v3 >= *(this + 4) )
    sub_4CA040(this, v3 + *(this + 7));
  sub_4CA210((int)this, v3, a2);
  return v3;
}
