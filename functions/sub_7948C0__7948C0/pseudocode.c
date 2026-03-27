float *__thiscall sub_7948C0(_DWORD *this, float *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  float *result; // eax
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  double v10; // st7
  double v11; // st7
  int v12; // eax
  double v13; // st7
  double v14; // st7
  float v15; // [esp+4h] [ebp-24h]
  float v16; // [esp+4h] [ebp-24h]
  float v17; // [esp+8h] [ebp-20h]
  float v18; // [esp+8h] [ebp-20h]
  float v19; // [esp+Ch] [ebp-1Ch]
  float v20; // [esp+Ch] [ebp-1Ch]
  float v21; // [esp+10h] [ebp-18h]
  float v22; // [esp+14h] [ebp-14h]
  float v23; // [esp+18h] [ebp-10h]
  float v24; // [esp+1Ch] [ebp-Ch]
  float v25; // [esp+20h] [ebp-8h]
  float v26; // [esp+24h] [ebp-4h]

  v3 = *(this + 0x1B);
  if ( v3 )
    v4 = (*(this + 0x1C) - v3) >> 2;
  else
    v4 = 0;
  result = (float *)(unsigned __int16)(v4 / 3);
  if ( (unsigned __int16)(v4 / 3) )
  {
    v6 = 0;
    v7 = (unsigned __int16)(v4 / 3);
    do
    {
      v8 = *(this + 0x1B);
      if ( !v8 || !((*(this + 0x1C) - v8) >> 2) )
        _invalid_parameter_noinfo();
      v9 = *(this + 0x1B);
      v10 = *(float *)(v9 + v6);
      result = (float *)(v6 + v9);
      v15 = v10;
      v17 = result[1];
      v19 = result[2];
      v21 = a2[8] * v19 + *a2 * v15 + a2[4] * v17 + a2[0xC];
      v22 = a2[1] * v15 + a2[5] * v17 + a2[9] * v19 + a2[0xD];
      v11 = v19 * a2[0xA] + v17 * a2[6] + v15 * a2[2] + a2[0xE];
      *result = v21;
      result[1] = v22;
      v23 = v11;
      result[2] = v23;
      if ( *((_BYTE *)this + 8) )
      {
        result = (float *)*(this + 0x1F);
        if ( result )
        {
          if ( (*(this + 0x20) - (int)result) >> 2 )
          {
            v12 = *(this + 0x1F);
            v13 = *(float *)(v12 + v6);
            result = (float *)(v6 + v12);
            v16 = v13;
            v18 = result[1];
            v20 = result[2];
            v24 = a2[8] * v20 + *a2 * v16 + a2[4] * v18 + a2[0xC];
            v25 = a2[1] * v16 + a2[5] * v18 + a2[9] * v20 + a2[0xD];
            v14 = v20 * a2[0xA] + v18 * a2[6] + v16 * a2[2] + a2[0xE];
            *result = v24;
            result[1] = v25;
            v26 = v14;
            result[2] = v26;
          }
        }
      }
      v6 += 0xC;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
