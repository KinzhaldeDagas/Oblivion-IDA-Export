void __stdcall sub_7C87C0(int a1, int a2, int a3)
{
  float v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+14h] [ebp+4h]

  if ( a1 ) /*0x7c87ca*/
  {
    if ( (unsigned int)(a3 - 0x160) <= 2 ) /*0x7c87de*/
    {
      if ( *(_BYTE *)(a1 + 0xE4) ) /*0x7c87e4*/
      {
        v3 = *(float *)(a2 + 0x44); /*0x7c880e*/
        unk_B44EDC = *(float *)(a2 + 0x40) * dbl_A90628; /*0x7c8816*/
        if ( a3 == 0x162 ) /*0x7c881c*/
          unk_B44EE0 = GetTimer(0, 1) / dbl_A2F938 * dbl_A56E20 * v3 * dbl_A3DDD8; /*0x7c8842*/
      }
      else
      {
        unk_B44EDC = sub_7C8480((float *)a1); /*0x7c8855*/
        if ( a3 == 0x162 ) /*0x7c8861*/
        {
          v4 = *(_DWORD *)(a1 + 0xEC); /*0x7c886d*/
          unk_B44EE0 = GetTimer(0, 1) / dbl_A2F938 * dbl_A56E20 * (double)v4; /*0x7c8889*/
        }
      }
    }
  }
}
