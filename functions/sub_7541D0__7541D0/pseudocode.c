void __thiscall sub_7541D0(int this, int a2, int a3)
{
  int v4; // ecx
  unsigned __int16 i; // di
  float *v6; // esi
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // [esp+10h] [ebp-FCh]
  float v12; // [esp+14h] [ebp-F8h]
  float v13; // [esp+14h] [ebp-F8h]
  float v14; // [esp+18h] [ebp-F4h]
  float v15; // [esp+18h] [ebp-F4h]
  float v16; // [esp+1Ch] [ebp-F0h]
  float v17; // [esp+1Ch] [ebp-F0h]
  float v18; // [esp+20h] [ebp-ECh]
  float v19; // [esp+20h] [ebp-ECh]
  float v20; // [esp+24h] [ebp-E8h]
  float v21; // [esp+28h] [ebp-E4h]
  float v22; // [esp+2Ch] [ebp-E0h]
  NiTransform v23; // [esp+3Ch] [ebp-D0h] BYREF
  float v24[13]; // [esp+70h] [ebp-9Ch] BYREF
  NiTransform v25; // [esp+A4h] [ebp-68h] BYREF
  NiTransform v26; // [esp+D8h] [ebp-34h] BYREF

  if ( *(float *)(this + 0x38) > (double)*(float *)&a2
    || *(float *)(this + 0x34) + *(float *)(this + 0x38) <= *(float *)&a2 )
  {
    *(float *)(this + 0x38) = *(float *)&a2;
    if ( 0.0 != *(float *)(this + 0x1C) )
    {
      if ( *(_WORD *)(a3 + 0x48) )
      {
        v4 = *(_DWORD *)(this + 0x18);
        if ( v4 )
        {
          if ( 0.0 == *(float *)(this + 0x20) )
          {
            if ( *(_BYTE *)(this + 0x24) )
              sub_753F80((float *)this, a2, a3);
            else
              sub_753E20((float *)this, a2, a3);
          }
          else
          {
            qmemcpy(&v25, (const void *)(v4 + 0x64), sizeof(v25));
            qmemcpy(v24, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v24));
            sub_718A80(v24, &v26);
            sub_53D7A0(&v26, &v23, &v25);
            for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i )
            {
              v6 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i);
              v7 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * i);
              v20 = *v7 - v23.pos.x;
              v21 = v7[1] - v23.pos.y;
              v22 = v7[2] - v23.pos.z;
              v12 = v21 * v21 + v20 * v20 + v22 * v22;
              v13 = sqrt(v12);
              if ( !*(_BYTE *)(this + 0x24) || *(float *)(this + 0x28) >= (double)v13 )
              {
                v8 = rand();
                v14 = ((double)v8 + (double)v8) / dbl_A3D5A8 - dbl_A2F928;
                v9 = rand();
                v16 = ((double)v9 + (double)v9) / dbl_A3D5A8 - dbl_A2F928;
                v10 = rand();
                v18 = ((double)v10 + (double)v10) / dbl_A3D5A8 - 1.0;
                v11 = *(float *)(this + 0x1C) / (*(float *)(this + 0x20) * v13 + 1.0);
                v15 = v11 * v14;
                v17 = v11 * v16;
                v19 = v11 * v18;
                *v6 = *v6 + v15;
                v6[1] = v6[1] + v17;
                v6[2] = v19 + v6[2];
              }
            }
          }
        }
      }
    }
  }
}
