void __thiscall sub_75C590(int this, float a2, int a3)
{
  bool v4; // zf
  float scale; // eax
  int v6; // ecx
  int v7; // edx
  NiTransform *v8; // eax
  float v9; // ecx
  float v10; // edx
  unsigned __int16 v11; // dx
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // ecx
  double v17; // st3
  float v18; // [esp+4h] [ebp-F8h]
  float v19; // [esp+4h] [ebp-F8h]
  float v20; // [esp+4h] [ebp-F8h]
  float v21; // [esp+8h] [ebp-F4h]
  float v22; // [esp+8h] [ebp-F4h]
  float v23; // [esp+Ch] [ebp-F0h]
  float v24; // [esp+10h] [ebp-ECh]
  float v25; // [esp+10h] [ebp-ECh]
  float v26; // [esp+14h] [ebp-E8h]
  float v27; // [esp+14h] [ebp-E8h]
  float v28; // [esp+18h] [ebp-E4h]
  float v29; // [esp+18h] [ebp-E4h]
  float v30; // [esp+1Ch] [ebp-E0h]
  float v31; // [esp+1Ch] [ebp-E0h]
  NiTransform v32; // [esp+20h] [ebp-DCh] BYREF
  int v33; // [esp+54h] [ebp-A8h]
  int v34; // [esp+58h] [ebp-A4h]
  float v35[13]; // [esp+60h] [ebp-9Ch] BYREF
  NiTransform v36; // [esp+94h] [ebp-68h] BYREF
  NiTransform v37; // [esp+C8h] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) )
  {
    qmemcpy(&v36, (const void *)(*(_DWORD *)(this + 0x18) + 0x64), sizeof(v36));
    qmemcpy(v35, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v35));
    sub_718A80(v35, &v37);
    sub_53D7A0(&v37, (NiTransform *)v32.rot.data[1], &v36);
    v4 = *(_BYTE *)(this + 0x60) == 0;
    scale = v32.scale;
    *(float *)(this + 0x3C) = a2;
    v6 = v33;
    v7 = v34;
    *(float *)(this + 0x30) = scale;
    *(_DWORD *)(this + 0x34) = v6;
    *(_DWORD *)(this + 0x38) = v7;
    if ( v4 )
    {
      v9 = *(float *)(this + 0x50);
      v10 = *(float *)(this + 0x54);
      v21 = *(float *)(this + 0x4C);
    }
    else
    {
      v8 = sub_7101F0((NiTransform *)v32.rot.data[1], &v32, (NiPoint3 *)(this + 0x4C));
      v9 = v8->rot.data[0][1];
      v21 = v8->rot.data[0][0];
      v10 = v8->rot.data[0][2];
    }
    v24 = v10;
    v11 = 0;
    v12 = *(float *)(this + 0x1C);
    if ( *(_WORD *)(a3 + 0x48) )
    {
      v30 = v12 * v24;
      v13 = v30;
      v28 = v9 * v12;
      v14 = v28;
      v26 = v21 * v12;
      v15 = v26;
      do
      {
        v16 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v11);
        v18 = a2 - v16[5];
        v17 = v18;
        if ( v18 != 0.0 )
        {
          v27 = *v16 - v15;
          v29 = v16[1] - v14;
          v31 = v16[2] - v13;
          v19 = v29 * v14 + v27 * v15 + v31 * v13;
          if ( v19 < 0.0 )
          {
            v20 = *(float *)(this + 0x58);
            v22 = v20 * v15;
            v23 = v20 * v14;
            v25 = v20 * v13;
            v32.rot.data[0][0] = v22 * v17;
            v32.rot.data[0][1] = v23 * v17;
            v32.rot.data[0][2] = v17 * v25;
            *v16 = *v16 + v32.rot.data[0][0];
            v16[1] = v32.rot.data[0][1] + v16[1];
            v16[2] = v16[2] + v32.rot.data[0][2];
          }
        }
        ++v11;
      }
      while ( v11 < *(_WORD *)(a3 + 0x48) );
    }
  }
}
