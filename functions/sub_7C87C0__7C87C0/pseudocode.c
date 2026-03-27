void __stdcall sub_7C87C0(int a1, int a2, int a3)
{
  float v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+14h] [ebp+4h]

  if ( a1 )
  {
    if ( (unsigned int)(a3 - 0x160) <= 2 )
    {
      if ( *(_BYTE *)(a1 + 0xE4) )
      {
        v3 = *(float *)(a2 + 0x44);
        flt_B44EDC = *(float *)(a2 + 0x40) * dbl_A90628;
        if ( a3 == 0x162 )
          flt_B44EE0 = GetTimer(0, 1) / dbl_A2F938 * dbl_A56E20 * v3 * dbl_A3DDD8;
      }
      else
      {
        flt_B44EDC = sub_7C8480((float *)a1);
        if ( a3 == 0x162 )
        {
          v4 = *(_DWORD *)(a1 + 0xEC);
          flt_B44EE0 = GetTimer(0, 1) / dbl_A2F938 * dbl_A56E20 * (double)v4;
        }
      }
    }
  }
}
