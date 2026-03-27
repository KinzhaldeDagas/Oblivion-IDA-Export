float *sub_537CC0()
{
  float *result; // eax
  float *v1; // eax

  result = (float *)dword_B3659C;
  if ( !dword_B3659C )
  {
    v1 = (float *)FormHeapAlloc(0x2Cu);
    if ( v1 )
    {
      result = sub_537830(v1);
      dword_B3659C = (int)result;
    }
    else
    {
      dword_B3659C = 0;
      return 0;
    }
  }
  return result;
}
