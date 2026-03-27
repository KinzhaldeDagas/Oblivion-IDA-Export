void __thiscall sub_75C2F0(int this, float a2, int a3)
{
  bool v4; // zf
  unsigned int v5; // eax
  unsigned int v6; // ecx
  float v7; // edx
  NiTransform *v8; // eax
  float v9; // ecx
  float v10; // edx
  unsigned __int16 v11; // di
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // edx
  double v17; // st4
  float *v18; // eax
  float v19; // [esp+4h] [ebp-11Ch]
  float v20; // [esp+4h] [ebp-11Ch]
  float v21; // [esp+4h] [ebp-11Ch]
  float v22; // [esp+4h] [ebp-11Ch]
  float v23; // [esp+8h] [ebp-118h]
  float v24; // [esp+8h] [ebp-118h]
  float v25; // [esp+Ch] [ebp-114h]
  float v26; // [esp+10h] [ebp-110h]
  float v27; // [esp+14h] [ebp-10Ch]
  float v28; // [esp+18h] [ebp-108h]
  float v29; // [esp+1Ch] [ebp-104h]
  NiTransform v30; // [esp+20h] [ebp-100h] BYREF
  unsigned int v31; // [esp+74h] [ebp-ACh]
  unsigned int v32; // [esp+78h] [ebp-A8h]
  float v33; // [esp+7Ch] [ebp-A4h]
  NiTransform v34; // [esp+84h] [ebp-9Ch] BYREF
  float v35[13]; // [esp+B8h] [ebp-68h] BYREF
  NiTransform v36; // [esp+ECh] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) )
  {
    qmemcpy(&v34, (const void *)(*(_DWORD *)(this + 0x18) + 0x64), sizeof(v34));
    qmemcpy(v35, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v35));
    sub_718A80(v35, &v36);
    sub_53D7A0(&v36, (NiTransform *)&v30.scale, &v34);
    v4 = *(_BYTE *)(this + 0x60) == 0;
    v5 = v31;
    *(float *)(this + 0x3C) = a2;
    v6 = v32;
    v7 = v33;
    *(_DWORD *)(this + 0x30) = v5;
    *(_DWORD *)(this + 0x34) = v6;
    *(_QWORD *)&v30.rot.data[2][0] = __PAIR64__(v6, v5);
    v30.rot.data[2][2] = v7;
    *(float *)(this + 0x38) = v7;
    if ( v4 )
    {
      v9 = *(float *)(this + 0x50);
      v10 = *(float *)(this + 0x54);
      v23 = *(float *)(this + 0x4C);
    }
    else
    {
      v8 = sub_7101F0((NiTransform *)&v30.scale, &v30, (NiPoint3 *)(this + 0x4C));
      v9 = v8->rot.data[0][1];
      v23 = v8->rot.data[0][0];
      v10 = v8->rot.data[0][2];
    }
    v11 = 0;
    v12 = *(float *)(this + 0x1C);
    if ( *(_WORD *)(a3 + 0x48) )
    {
      v29 = v12 * v10;
      v13 = v29;
      v28 = v9 * v12;
      v14 = v28;
      v27 = v23 * v12;
      v15 = v27;
      do
      {
        v16 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v11);
        v19 = a2 - v16[5];
        v17 = v19;
        if ( v19 != 0.0 )
        {
          v18 = (float *)(*(_DWORD *)(a3 + 0x1C) + 0xC * v11);
          v24 = *v18 - v30.rot.data[2][0];
          v25 = v18[1] - v30.rot.data[2][1];
          v26 = v18[2] - v30.rot.data[2][2];
          v20 = v25 * v25 + v24 * v24 + v26 * v26;
          if ( *(float *)(this + 0x2C) >= (double)v20 )
          {
            v30.pos.x = *v16 - v15;
            v30.pos.y = v16[1] - v14;
            v30.pos.z = v16[2] - v13;
            v21 = v30.pos.y * v14 + v30.pos.x * v15 + v30.pos.z * v13;
            if ( v21 < (double)*(float *)&SrcStr )
            {
              v22 = *(float *)(this + 0x58);
              v30.rot.data[1][0] = v22 * v15;
              v30.rot.data[1][1] = v22 * v14;
              v30.rot.data[1][2] = v22 * v13;
              v30.rot.data[0][0] = v30.rot.data[1][0] * v17;
              v30.rot.data[0][1] = v30.rot.data[1][1] * v17;
              v30.rot.data[0][2] = v17 * v30.rot.data[1][2];
              *v16 = *v16 + v30.rot.data[0][0];
              v16[1] = v16[1] + v30.rot.data[0][1];
              v16[2] = v30.rot.data[0][2] + v16[2];
            }
          }
        }
        ++v11;
      }
      while ( v11 < *(_WORD *)(a3 + 0x48) );
    }
  }
}
