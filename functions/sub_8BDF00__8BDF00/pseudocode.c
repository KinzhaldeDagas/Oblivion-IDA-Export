int __thiscall sub_8BDF00(_DWORD *this, _BYTE *a2)
{
  float *v3; // eax
  float *v4; // eax
  bool v5; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = (float *)FormHeapAlloc(0x30u);
    if ( v3 )
      v4 = sub_8BDE80(v3);
    else
      v4 = 0;
    v5 = *(this + 2) == 0;
    *(this + 3) = v4;
    if ( !v5 )
      sub_8BDC60(this, v4);
    *a2 = 1;
    return *(this + 3);
  }
}
