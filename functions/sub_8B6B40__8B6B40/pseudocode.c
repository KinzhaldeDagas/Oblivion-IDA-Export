int __thiscall sub_8B6B40(__m128 **this, _BYTE *a2)
{
  float *v3; // eax
  float *v4; // eax
  bool v5; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
    return (int)*(this + 3);
  }
  else
  {
    v3 = (float *)FormHeapAlloc(0x30u);
    if ( v3 )
      v4 = sub_564030(v3);
    else
      v4 = 0;
    v5 = *(this + 2) == 0;
    *(this + 3) = (__m128 *)v4;
    if ( !v5 )
      sub_8B6730(this, (int)v4);
    *a2 = 1;
    return (int)*(this + 3);
  }
}
