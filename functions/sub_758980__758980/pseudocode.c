void __thiscall sub_758980(int this, float a2, int a3)
{
  int v4; // eax
  NiTransform *v5; // eax
  float v6; // ecx
  float v7; // edx
  unsigned __int16 v8; // di
  bool v9; // zf
  int v10; // ecx
  float v11; // edx
  float v12; // ecx
  float *v13; // esi
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st5
  double v18; // st7
  float v19; // [esp+4h] [ebp-12Ch]
  float v20; // [esp+4h] [ebp-12Ch]
  float v21; // [esp+4h] [ebp-12Ch]
  float v22; // [esp+4h] [ebp-12Ch]
  float v23; // [esp+8h] [ebp-128h]
  float v24; // [esp+8h] [ebp-128h]
  float v25; // [esp+8h] [ebp-128h]
  float v26; // [esp+Ch] [ebp-124h]
  float v27; // [esp+10h] [ebp-120h] BYREF
  float v28; // [esp+14h] [ebp-11Ch]
  float v29; // [esp+18h] [ebp-118h]
  float v30; // [esp+1Ch] [ebp-114h]
  NiTransform v31; // [esp+20h] [ebp-110h] BYREF
  float v32; // [esp+54h] [ebp-DCh]
  float v33; // [esp+58h] [ebp-D8h]
  float v34; // [esp+5Ch] [ebp-D4h]
  NiTransform v35; // [esp+60h] [ebp-D0h] BYREF
  NiTransform v36; // [esp+94h] [ebp-9Ch] BYREF
  float v37[13]; // [esp+C8h] [ebp-68h] BYREF
  NiTransform v38; // [esp+FCh] [ebp-34h] BYREF

  if ( *(float *)(this + 0x28) > 0.0 )
  {
    if ( *(_WORD *)(a3 + 0x48) )
    {
      v4 = *(_DWORD *)(this + 0x18);
      if ( v4 )
      {
        qmemcpy(&v36, (const void *)(v4 + 0x64), sizeof(v36));
        qmemcpy(v37, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v37));
        sub_718A80(v37, &v38);
        sub_53D7A0(&v38, &v35, &v36);
        *(NiPoint3 *)&v31.rot.data[1][0] = v35.pos;
        v5 = sub_7101F0(&v35, &v31, (NiPoint3 *)(this + 0x1C));
        v6 = v5->rot.data[0][1];
        v27 = v5->rot.data[0][0];
        v7 = v5->rot.data[0][2];
        v28 = v6;
        v29 = v7;
        sub_43F350(&v27);
        v8 = 0;
        v9 = *(_WORD *)(a3 + 0x48) == 0;
        v30 = v28 * v28 + v27 * v27 + v29 * v29;
        v34 = *(float *)(this + 0x30) - *(float *)(this + 0x2C);
        if ( !v9 )
        {
          do
          {
            v10 = *(_DWORD *)(a3 + 0x1C) + 0xC * v8;
            v31.rot.data[2][0] = *(float *)v10;
            v11 = *(float *)(v10 + 4);
            v12 = *(float *)(v10 + 8);
            *(_QWORD *)&v31.rot.data[2][1] = __PAIR64__(LODWORD(v12), LODWORD(v11));
            v31.scale = v31.rot.data[2][0] - v31.rot.data[1][0];
            v13 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v8);
            v32 = v11 - v31.rot.data[1][1];
            v33 = v12 - v31.rot.data[1][2];
            v19 = v32 * v32 + v31.scale * v31.scale + v33 * v33;
            v20 = sqrt(v19);
            v26 = *(float *)(this + 0x28);
            v23 = (a2 - v13[5]) / dbl_A87738;
            v14 = v20;
            if ( *(float *)(this + 0x2C) >= (double)v20 )
              goto LABEL_8;
            if ( *(float *)(this + 0x30) > v14 )
            {
              v21 = v14 - *(float *)(this + 0x2C);
              v26 = (1.0 - v21 / v34) * v26;
LABEL_8:
              v15 = v27;
              v16 = v28;
              v17 = v29;
              v22 = v13[2] * v29 + v13[1] * v28 + *v13 * v27;
              if ( v23 * v26 <= dbl_A2F928 )
              {
                v25 = v23 * -v26 * (v22 / v30);
                v31.rot.data[0][0] = v15 * v25;
                v31.rot.data[0][1] = v16 * v25;
                v31.rot.data[0][2] = v17 * v25;
                *v13 = v31.rot.data[0][0] + *v13;
                v13[1] = v13[1] + v31.rot.data[0][1];
                v18 = v13[2] + v31.rot.data[0][2];
              }
              else
              {
                v24 = -v22 / v30;
                v31.pos.x = v15 * v24;
                v31.pos.y = v16 * v24;
                v31.pos.z = v17 * v24;
                *v13 = v31.pos.x + *v13;
                v13[1] = v13[1] + v31.pos.y;
                v18 = v13[2] + v31.pos.z;
              }
              v13[2] = v18;
            }
            ++v8;
          }
          while ( v8 < *(_WORD *)(a3 + 0x48) );
        }
      }
    }
  }
}
