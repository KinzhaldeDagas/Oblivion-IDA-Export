float *__thiscall sub_7A7E50(void *this)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)FormHeapAlloc(0x4Cu);
  v3 = 0;
  if ( v2 )
    v3 = sub_7A7D80(v2);
  sub_7A7DD0(v3, (int)this);
  return v3;
}
