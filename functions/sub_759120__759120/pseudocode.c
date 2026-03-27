void __thiscall sub_759120(float *this, float a2, int a3)
{
  unsigned __int16 v4; // di
  double z; // st7
  double y; // st6
  double x; // st5
  float *v8; // edx
  double v9; // st4
  float *v10; // eax
  float v11; // [esp+Ch] [ebp-ECh]
  float v12; // [esp+Ch] [ebp-ECh]
  float v13; // [esp+Ch] [ebp-ECh]
  float v14; // [esp+1Ch] [ebp-DCh]
  float v15; // [esp+20h] [ebp-D8h]
  float v16; // [esp+24h] [ebp-D4h]
  NiTransform v17; // [esp+28h] [ebp-D0h] BYREF
  NiTransform v18; // [esp+5Ch] [ebp-9Ch] BYREF
  float v19[13]; // [esp+90h] [ebp-68h] BYREF
  NiTransform v20; // [esp+C4h] [ebp-34h] BYREF

  qmemcpy(&v18, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(v18));
  qmemcpy(v19, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v19));
  sub_718A80(v19, &v20);
  sub_53D7A0(&v20, &v17, &v18);
  v4 = 0;
  if ( *(_WORD *)(a3 + 0x48) )
  {
    z = v17.pos.z;
    y = v17.pos.y;
    x = v17.pos.x;
    do
    {
      v8 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v4);
      v11 = (a2 - v8[5]) * *(this + 7);
      v9 = v11;
      if ( v11 != 0.0 )
      {
        v10 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * v4);
        v14 = *v10 - x;
        v15 = v10[1] - y;
        v16 = v10[2] - z;
        v12 = v15 * v15 + v14 * v14 + v16 * v16;
        if ( *(this + 0xB) >= (double)v12 )
        {
          if ( v9 >= 1.0 )
          {
            *v8 = Vector3_InitValue_;
            v8[1] = *(&Vector3_InitValue_ + 1);
            v8[2] = dword_B3F9B0;
          }
          else
          {
            v13 = 1.0 - v9;
            *v8 = *v8 * v13;
            v8[1] = v8[1] * v13;
            v8[2] = v13 * v8[2];
          }
        }
      }
      ++v4;
    }
    while ( v4 < *(_WORD *)(a3 + 0x48) );
  }
}
