char __stdcall sub_78F600(int a1, float a2)
{
  double v2; // st7
  char result; // al

  if ( !*(_DWORD *)(dword_B429B8 + 0x2C) )
  {
    if ( a1 )
      a2 = *(float *)(a1 + 4);
  }
  if ( *(float *)(dword_B429B8 + 0x24) >= (double)a2 )
    return 0;
  v2 = sub_78EA00(0.0, 1.0);
  result = 1;
  if ( *(float *)(dword_B429B8 + 0x28) < v2 )
    return 0;
  return result;
}
