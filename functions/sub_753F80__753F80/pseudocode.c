void __thiscall sub_753F80(float *this, int a2, int a3)
{
  unsigned __int16 i; // bp
  float *v5; // esi
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // [esp+10h] [ebp-104h]
  float v11; // [esp+10h] [ebp-104h]
  float v12; // [esp+14h] [ebp-100h]
  float v13; // [esp+18h] [ebp-FCh]
  float v14; // [esp+1Ch] [ebp-F8h]
  float v15; // [esp+20h] [ebp-F4h]
  float v16; // [esp+24h] [ebp-F0h]
  float v17; // [esp+28h] [ebp-ECh]
  float v18; // [esp+2Ch] [ebp-E8h]
  float v19; // [esp+30h] [ebp-E4h]
  float v20; // [esp+34h] [ebp-E0h]
  NiTransform v21; // [esp+44h] [ebp-D0h] BYREF
  NiTransform v22; // [esp+78h] [ebp-9Ch] BYREF
  float v23[13]; // [esp+ACh] [ebp-68h] BYREF
  NiTransform v24; // [esp+E0h] [ebp-34h] BYREF

  qmemcpy(&v22, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(v22));
  qmemcpy(v23, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v23));
  sub_718A80(v23, &v24);
  sub_53D7A0(&v24, &v21, &v22);
  for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i )
  {
    v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i);
    v6 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * i);
    v18 = *v6 - v21.pos.x;
    v19 = v6[1] - v21.pos.y;
    v20 = v6[2] - v21.pos.z;
    v10 = v19 * v19 + v18 * v18 + v20 * v20;
    if ( *(this + 0xB) >= (double)v10 )
    {
      v7 = rand();
      v15 = ((double)v7 + (double)v7) / dbl_A3D5A8 - dbl_A2F928;
      v8 = rand();
      v16 = ((double)v8 + (double)v8) / dbl_A3D5A8 - dbl_A2F928;
      v9 = rand();
      v17 = ((double)v9 + (double)v9) / dbl_A3D5A8 - dbl_A2F928;
      v11 = *(this + 7);
      v12 = v11 * v15;
      v13 = v11 * v16;
      v14 = v11 * v17;
      *v5 = *v5 + v12;
      v5[1] = v5[1] + v13;
      v5[2] = v5[2] + v14;
    }
  }
}
