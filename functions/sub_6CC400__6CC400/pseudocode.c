float *__thiscall sub_6CC400(float *this, int a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x30u);
  v4 = v3;
  if ( v3 )
  {
    sub_6CC4E0(v3);
    *(_DWORD *)v4 = &NiBlendTransformInterpolator::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_6CD3D0(this, (int)v4, a2);
  return v4;
}
