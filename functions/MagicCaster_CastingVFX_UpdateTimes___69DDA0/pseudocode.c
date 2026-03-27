char __thiscall MagicCaster_CastingVFX_UpdateTimes_(int this, float a2)
{
  int v2; // edx
  int v3; // eax
  double v4; // st6
  int v5; // eax
  double v6; // st7
  char result; // al
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+10h] [ebp+4h]
  float v15; // [esp+10h] [ebp+4h]
  float v16; // [esp+10h] [ebp+4h]

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    if ( *(float *)(this + 0x14) <= 0.0 )
    {
      return sub_4B22E0(*(float **)(this + 4), (float *)(this + 8), 0);
    }
    else
    {
      v14 = a2 + *(float *)(this + 0x10);
      *(float *)(this + 0x10) = v14;
      v3 = *(_DWORD *)(v2 + 0x78);
      v8 = (float)(unsigned __int8)v3;
      v10 = (float)BYTE1(v3);
      v12 = (float)BYTE2(v3);
      v4 = v14 / *(float *)(this + 0x14);
      if ( !*(_BYTE *)(this + 0x18) )
        v4 = 1.0 - v4;
      v15 = v4;
      if ( v15 <= 1.0 )
      {
        if ( v15 < 0.0 )
        {
          *(float *)(this + 0x14) = 0.0;
          v15 = 0.0;
        }
      }
      else
      {
        *(float *)(this + 0x14) = 0.0;
        v15 = 1.0;
      }
      v5 = *(_DWORD *)(this + 8);
      v6 = v15 / dbl_A3DDD8;
      ++*(_DWORD *)(v5 + 0xB8);
      v16 = v6;
      v9 = v8 * v16;
      *(float *)(v5 + 0xEC) = v9;
      v11 = v16 * v10;
      *(float *)(v5 + 0xF0) = v11;
      v13 = v16 * v12;
      *(float *)(v5 + 0xF4) = v13;
      return sub_4B22E0(*(float **)(this + 4), (float *)(this + 8), 0);
    }
  }
  return result;
}
