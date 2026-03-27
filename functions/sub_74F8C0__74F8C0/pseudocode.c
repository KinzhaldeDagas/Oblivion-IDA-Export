float *__stdcall sub_74F8C0(__int16 a1)
{
  float *v1; // eax
  float *v3; // eax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v3 = (float *)FormHeapAlloc(0x18u);
      if ( v3 )
        return sub_6E7FA0(v3, 0);
    }
  }
  else
  {
    v1 = (float *)FormHeapAlloc(0x18u);
    if ( v1 )
      return sub_6D29E0(v1, 0.0);
  }
  return 0;
}
