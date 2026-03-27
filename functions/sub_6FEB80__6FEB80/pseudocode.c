float *__thiscall sub_6FEB80(_DWORD *this, int a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x68u);
  v4 = 0;
  if ( v3 )
    v4 = sub_6FE760(v3);
  sub_6FE860(this, (int)v4, a2);
  return v4;
}
