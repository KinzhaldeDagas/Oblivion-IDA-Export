void __thiscall sub_8B0C60(int this)
{
  int v1; // esi
  int v2; // edi
  int v3; // edx
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v1 = *(_DWORD *)(this + 0x20); /*0x8b0c64*/
  if ( v1 ) /*0x8b0c69*/
  {
    v5 = flt_A32048; /*0x8b0c79*/
    v4 = flt_A3B888; /*0x8b0c83*/
    if ( *(int *)(this + 0x10) > 0 ) /*0x8b0c87*/
    {
      v2 = *(_DWORD *)(this + 0x10); /*0x8b0c8e*/
      do /*0x8b0ce2*/
      {
        if ( *(int *)(this + 0x14) > 0 ) /*0x8b0c93*/
        {
          v3 = *(_DWORD *)(this + 0x14); /*0x8b0c95*/
          do /*0x8b0cdd*/
          {
            v6 = *(float *)(v1 + 8); /*0x8b0ca3*/
            if ( v5 > (double)v6 ) /*0x8b0cb8*/
              v5 = v6; /*0x8b0cbc*/
            if ( v4 < (double)v6 ) /*0x8b0ccd*/
              v4 = v6; /*0x8b0ccf*/
            v1 += 0xC; /*0x8b0cd7*/
            --v3; /*0x8b0cda*/
          }
          while ( v3 ); /*0x8b0cdd*/
        }
        --v2; /*0x8b0cdf*/
      }
      while ( v2 ); /*0x8b0ce2*/
    }
    *(float *)(this + 0x1C) = v4; /*0x8b0cea*/
    *(float *)(this + 0x18) = v5; /*0x8b0cf1*/
  }
}
