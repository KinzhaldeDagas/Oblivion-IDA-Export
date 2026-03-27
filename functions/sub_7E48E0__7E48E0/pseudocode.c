int sub_7E48E0()
{
  int result; // eax
  unsigned int v1; // esi
  int v2; // ecx
  int v3; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]

  result = dword_B46044;
  if ( !dword_B46044 )
  {
    v1 = sub_7E2D60();
    result = FormHeapAlloc((unsigned __int64)(4 * v1) >> 0x1E != 0 ? 0xFFFFFFFF : 0x10 * v1);
    v2 = 0;
    dword_B46044 = result;
    if ( v1 )
    {
      v3 = result + 8;
      do
      {
        v4 = (double)v2;
        if ( v2 < 0 )
          v4 = v4 + flt_A2FC78;
        v5 = v4;
        ++v2;
        v3 += 0x10;
        *(float *)(v3 - 0x18) = v5;
        *(float *)(v3 - 0x14) = v5;
        *(float *)(v3 - 0x10) = v5;
        *(float *)(v3 - 0xC) = v5;
      }
      while ( v2 < v1 );
      return dword_B46044;
    }
  }
  return result;
}
