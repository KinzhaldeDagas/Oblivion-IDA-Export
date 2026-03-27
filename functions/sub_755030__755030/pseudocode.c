void __thiscall sub_755030(float *this, float a2, int a3)
{
  float *v4; // edi
  unsigned __int16 v5; // si
  double z; // st6
  double y; // st5
  double x; // st4
  double v9; // st3
  float *v10; // ecx
  float *v11; // eax
  double v12; // st1
  float v13; // [esp+Ch] [ebp-ECh]
  float v14; // [esp+Ch] [ebp-ECh]
  float v15; // [esp+10h] [ebp-E8h]
  float v16; // [esp+14h] [ebp-E4h]
  float v17; // [esp+18h] [ebp-E0h]
  float v18; // [esp+1Ch] [ebp-DCh]
  float v19; // [esp+20h] [ebp-D8h]
  float v20; // [esp+24h] [ebp-D4h]
  NiTransform v21; // [esp+28h] [ebp-D0h] BYREF
  NiTransform v22; // [esp+5Ch] [ebp-9Ch] BYREF
  float v23[13]; // [esp+90h] [ebp-68h] BYREF
  NiTransform v24; // [esp+C4h] [ebp-34h] BYREF

  qmemcpy(&v22, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(v22));
  qmemcpy(v23, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v23));
  sub_718A80(v23, &v24);
  sub_53D7A0(&v24, &v21, &v22);
  v4 = *(float **)(a3 + 0x1C);
  v5 = 0;
  if ( *(_WORD *)(a3 + 0x48) )
  {
    z = v21.pos.z;
    y = v21.pos.y;
    x = v21.pos.x;
    v9 = *(this + 7);
    do
    {
      v10 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v5);
      v13 = a2 - v10[5];
      if ( v13 != 0.0 )
      {
        v11 = v4;
        v12 = *v4;
        v4 += 3;
        v15 = v12 - x;
        v16 = v11[1] - y;
        v17 = v11[2] - z;
        v14 = v13 * v9;
        v18 = v15 * v14;
        v19 = v16 * v14;
        v20 = v14 * v17;
        *v10 = *v10 + v18;
        v10[1] = v10[1] + v19;
        v10[2] = v20 + v10[2];
      }
      ++v5;
    }
    while ( v5 < *(_WORD *)(a3 + 0x48) );
  }
}
