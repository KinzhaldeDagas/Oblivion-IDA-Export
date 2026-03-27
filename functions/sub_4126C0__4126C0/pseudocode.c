BOOL __thiscall sub_4126C0(_DWORD *this, float *a2, float *a3)
{
  unsigned int v3; // edi
  int i; // ebp
  float v7; // [esp+Ch] [ebp-1Ch]
  float v8; // [esp+Ch] [ebp-1Ch]
  float v9; // [esp+10h] [ebp-18h] BYREF
  float v10; // [esp+14h] [ebp-14h]
  float v11; // [esp+18h] [ebp-10h]
  float v12; // [esp+1Ch] [ebp-Ch]
  float v13; // [esp+20h] [ebp-8h]
  float v14; // [esp+24h] [ebp-4h]

  v3 = 0;
  for ( i = 0; v3 < dword_B03178; ++v3 )
  {
    if ( ((1 << (v3 - 0x20 * (v3 >> 5))) & *(this + (v3 >> 5) + 1)) != 0 )
      goto LABEL_5;
    sub_412250(v3, &v9);
    v9 = *a3 + v9;
    v10 = a3[1] + v10;
    v11 = a3[2] + v11;
    v12 = v9 - *a2;
    v13 = v10 - a2[1];
    v14 = v11 - a2[2];
    v7 = v13 * v13 + v12 * v12 + v14 * v14;
    v8 = sqrt(v7);
    if ( fSeenDataUpdateRadius > (double)v8 )
    {
      *(this + (v3 >> 5) + 1) |= 1 << (v3 - 0x20 * (v3 >> 5));
LABEL_5:
      ++i;
    }
  }
  return i >= dword_B0317C;
}
