// Advances GameHour by TimeScale * elapsedSeconds / 3600; rolls GameDay, GameMonth, GameYear, and DaysPassed after 24-hour boundaries.
void __thiscall TimeGlobals_AdvanceGameTime(_DWORD *this, float a2)
{
  double v3; // st7
  char v4; // al
  double v5; // st7
  unsigned __int16 v6; // bx
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st6
  float v11; // [esp+4h] [ebp-Ch]
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]
  float v16; // [esp+Ch] [ebp-4h]
  float v17; // [esp+14h] [ebp+4h]
  float v18; // [esp+14h] [ebp+4h]

  v13 = *(float *)(*(this + 5) + 0x24) * a2 / 3600.0 + *(float *)(*(this + 3) + 0x24); /*0x4029fc*/
  v3 = v13; /*0x402a0e*/
  if ( v13 > 24.0 ) /*0x402a13*/
  {
    v11 = *(float *)(*(this + 2) + 0x24); /*0x402a26*/
    v17 = *(float *)(*(this + 1) + 0x24); /*0x402a2e*/
    v15 = *(float *)(*this + 0x24); /*0x402a35*/
    v4 = Double_To_SInt32(v17); /*0x402a3d*/
    v5 = 1.0; /*0x402a4e*/
    v6 = sub_47D2B0(v4); /*0x402a50*/
    v7 = v13; /*0x402a53*/
    do /*0x402aac*/
    {
      v14 = v7 - 24.0; /*0x402a65*/
      v11 = v11 + v5; /*0x402a6f*/
      if ( reference ) /*0x402a73*/
      {
        v5 = 1.0; /*0x402a7e*/
        if ( sub_5E04C0(reference) ) /*0x402a77*/
          ++reference->miscStats[0x16]; /*0x402a87*/
      }
      *(float *)(*(this + 4) + 0x24) = *(float *)(*(this + 4) + 0x24) + v5; /*0x402a96*/
      v7 = v14; /*0x402aa7*/
    }
    while ( v14 > 24.0 ); /*0x402aac*/
    v8 = (double)v6; /*0x402ab6*/
    if ( v11 <= v8 ) /*0x402ac5*/
    {
      v9 = v11; /*0x402b38*/
    }
    else
    {
      v18 = v17 + v5; /*0x402ad3*/
      if ( v18 >= 12.0 ) /*0x402aea*/
      {
        v18 = v18 - 12.0; /*0x402af4*/
        v16 = v5 + v15; /*0x402b00*/
        *(float *)(*this + 0x24) = v16; /*0x402b08*/
      }
      *(float *)(*(this + 1) + 0x24) = v18; /*0x402b16*/
      v12 = v11 - v8; /*0x402ac9*/
      v9 = v12; /*0x402b1d*/
    }
    v10 = v9; /*0x402b22*/
    v3 = v14; /*0x402b22*/
    *(float *)(*(this + 2) + 0x24) = v10; /*0x402b24*/
  }
  *(float *)(*(this + 3) + 0x24) = v3; /*0x402b2a*/
}
