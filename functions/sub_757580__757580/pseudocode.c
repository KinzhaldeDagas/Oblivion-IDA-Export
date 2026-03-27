void __thiscall sub_757580(int this, float a2, int a3)
{
  int v4; // ecx
  double v5; // st7
  int v6; // edx
  double v7; // st7
  float *v8; // edi
  double v9; // st6
  bool v10; // zf
  float *v11; // eax
  float v12; // ecx
  float v13; // eax
  long double v14; // st5
  double v15; // st7
  float v16; // [esp+18h] [ebp-138h]
  float v17; // [esp+18h] [ebp-138h]
  float v18; // [esp+18h] [ebp-138h]
  float v19; // [esp+18h] [ebp-138h]
  float v20; // [esp+18h] [ebp-138h]
  int v21; // [esp+28h] [ebp-128h]
  NiTransform v22; // [esp+2Ch] [ebp-124h] BYREF
  float v23; // [esp+60h] [ebp-F0h]
  float v24; // [esp+64h] [ebp-ECh]
  float v25; // [esp+68h] [ebp-E8h]
  float v26; // [esp+6Ch] [ebp-E4h]
  float v27; // [esp+70h] [ebp-E0h]
  float v28; // [esp+74h] [ebp-DCh]
  double v29; // [esp+78h] [ebp-D8h]
  NiTransform v30; // [esp+80h] [ebp-D0h] BYREF
  NiTransform v31; // [esp+B4h] [ebp-9Ch] BYREF
  float v32[13]; // [esp+E8h] [ebp-68h] BYREF
  NiTransform v33; // [esp+11Ch] [ebp-34h] BYREF
  NiPoint3 pos; // 0:^1C.12

  if ( 0.0 != *(float *)(this + 0x1C) )
  {
    if ( *(_WORD *)(a3 + 0x48) )
    {
      v4 = *(_DWORD *)(this + 0x18);
      if ( v4 )
      {
        if ( *(_BYTE *)(this + 0x24) || 0.0 != *(float *)(this + 0x20) )
        {
          qmemcpy(&v31, (const void *)(v4 + 0x64), sizeof(v31));
          qmemcpy(v32, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v32));
          sub_718A80(v32, &v33);
          sub_53D7A0(&v33, &v30, &v31);
          v5 = *(float *)(this + 0x20) * dbl_A2FAA0;
          *(NiPoint3 *)&v22.rot.data[1][0] = v30.pos;
          v25 = v5;
          sub_7101F0(&v30, &v22, (NiPoint3 *)(this + 0x3C));
          v6 = 0;
          v21 = 0;
          if ( *(_WORD *)(a3 + 0x48) )
          {
            v7 = 0.0;
            do
            {
              v8 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v6);
              v16 = a2 - v8[5];
              v9 = v16;
              if ( v16 != v7 )
              {
                v10 = *(_BYTE *)(this + 0x24) == 0;
                v11 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * (unsigned __int16)v6);
                v22.scale = *v11;
                v12 = v11[1];
                v13 = v11[2];
                v23 = v12;
                v26 = v22.scale - v22.rot.data[1][0];
                v24 = v13;
                v27 = v12 - v22.rot.data[1][1];
                v28 = v13 - v22.rot.data[1][2];
                v17 = v27 * v27 + v26 * v26 + v28 * v28;
                v14 = v17;
                if ( v10 || *(float *)(this + 0x2C) >= v14 )
                {
                  if ( v7 == *(float *)(this + 0x20) || v7 == v14 )
                  {
                    v20 = v9 * *(float *)(this + 0x1C);
                    v22.pos.x = v22.rot.data[0][0] * v20;
                    v22.pos.y = v22.rot.data[0][1] * v20;
                    v22.pos.z = v20 * v22.rot.data[0][2];
                    pos = v22.pos;
                  }
                  else
                  {
                    v29 = v9 * *(float *)(this + 0x1C);
                    v18 = pow(v14, v25);
                    v15 = Min_Float(1.0, v18);
                    v19 = v29 / v15;
                    v22.rot.data[2][0] = v19 * v22.rot.data[0][0];
                    v22.rot.data[2][1] = v22.rot.data[0][1] * v19;
                    v6 = v21;
                    v22.rot.data[2][2] = v19 * v22.rot.data[0][2];
                    v7 = 0.0;
                    pos = *(NiPoint3 *)&v22.rot.data[2][0];
                  }
                  *v8 = *v8 + pos.x;
                  v8[1] = v8[1] + pos.y;
                  v8[2] = pos.z + v8[2];
                }
              }
              v21 = ++v6;
            }
            while ( (unsigned __int16)v6 < *(_WORD *)(a3 + 0x48) );
          }
        }
        else
        {
          sub_7573E0((float *)this, a2, a3);
        }
      }
    }
  }
}
