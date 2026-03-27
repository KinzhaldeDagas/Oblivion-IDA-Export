void __thiscall sub_7551D0(int this, float a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  float *v6; // edi
  double v7; // st7
  float *v8; // eax
  long double v9; // st3
  float v10; // [esp+18h] [ebp-120h]
  float v11; // [esp+18h] [ebp-120h]
  float v12; // [esp+18h] [ebp-120h]
  float v13; // [esp+18h] [ebp-120h]
  float v14; // [esp+18h] [ebp-120h]
  float v15; // [esp+18h] [ebp-120h]
  float v16; // [esp+1Ch] [ebp-11Ch]
  float v17; // [esp+20h] [ebp-118h]
  float v18; // [esp+24h] [ebp-114h]
  int v19; // [esp+28h] [ebp-110h]
  float v20; // [esp+2Ch] [ebp-10Ch]
  float v21; // [esp+30h] [ebp-108h]
  float v22; // [esp+34h] [ebp-104h]
  float v23; // [esp+44h] [ebp-F4h]
  float v24; // [esp+48h] [ebp-F0h]
  float v25; // [esp+4Ch] [ebp-ECh]
  float v26; // [esp+50h] [ebp-E8h]
  float v27; // [esp+54h] [ebp-E4h]
  float v28; // [esp+58h] [ebp-E0h]
  float i; // [esp+5Ch] [ebp-DCh]
  double v30; // [esp+60h] [ebp-D8h]
  NiTransform v31; // [esp+68h] [ebp-D0h] BYREF
  NiTransform v32; // [esp+9Ch] [ebp-9Ch] BYREF
  float v33[13]; // [esp+D0h] [ebp-68h] BYREF
  NiTransform v34; // [esp+104h] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) )
  {
    if ( *(_WORD *)(a3 + 0x48) )
    {
      v4 = *(_DWORD *)(this + 0x18);
      if ( v4 )
      {
        if ( !*(_BYTE *)(this + 0x24) && (0.0 == *(float *)(this + 0x20) || 0.0 == *(float *)(this + 0x30)) )
        {
          sub_755030((float *)this, a2, a3);
        }
        else
        {
          qmemcpy(&v32, (const void *)(v4 + 0x64), sizeof(v32));
          qmemcpy(v33, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v33));
          sub_718A80(v33, &v34);
          sub_53D7A0(&v34, &v31, &v32);
          v5 = 0;
          v19 = 0;
          for ( i = *(float *)(this + 0x20) * dbl_A2FAA0; (unsigned __int16)v5 < *(_WORD *)(a3 + 0x48); v19 = v5 )
          {
            v6 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v5);
            v10 = a2 - v6[5];
            v7 = v10;
            if ( v10 != 0.0 )
            {
              v8 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * (unsigned __int16)v5);
              v16 = *v8 - v31.pos.x;
              v17 = v8[1] - v31.pos.y;
              v18 = v8[2] - v31.pos.z;
              v11 = v18 * v18 + v17 * v17 + v16 * v16;
              v9 = v11;
              if ( !*(_BYTE *)(this + 0x24) || *(float *)(this + 0x2C) >= v9 )
              {
                if ( 0.0 == *(float *)(this + 0x20) || 0.0 == v9 )
                {
                  v15 = v7 * *(float *)(this + 0x1C);
                  v23 = v16 * v15;
                  v20 = v23;
                  v24 = v17 * v15;
                  v21 = v24;
                  v25 = v15 * v18;
                  v22 = v25;
                }
                else
                {
                  v30 = v7 * *(float *)(this + 0x1C);
                  v12 = pow(v9, i);
                  v13 = v12 * *(float *)(this + 0x30);
                  v14 = v30 / Min_Float(1.0, v13);
                  v26 = v14 * v16;
                  v20 = v26;
                  v27 = v17 * v14;
                  v21 = v27;
                  v5 = v19;
                  v28 = v14 * v18;
                  v22 = v28;
                }
                *v6 = *v6 + v20;
                v6[1] = v6[1] + v21;
                v6[2] = v22 + v6[2];
              }
            }
            ++v5;
          }
        }
      }
    }
  }
}
