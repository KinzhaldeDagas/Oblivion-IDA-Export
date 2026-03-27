void __thiscall sub_753400(float *this, float a2, int a3)
{
  unsigned __int16 v4; // bp
  bool v5; // zf
  float *v6; // esi
  int v7; // eax
  float v8; // edx
  int v9; // eax
  float v10; // ecx
  double v11; // st7
  float v12; // edx
  float v13; // [esp+10h] [ebp-118h]
  float v14; // [esp+10h] [ebp-118h]
  float v15; // [esp+10h] [ebp-118h]
  float v16; // [esp+14h] [ebp-114h] BYREF
  float v17; // [esp+18h] [ebp-110h]
  float v18; // [esp+1Ch] [ebp-10Ch]
  float v19; // [esp+20h] [ebp-108h]
  float scale; // [esp+24h] [ebp-104h] BYREF
  float v21; // [esp+28h] [ebp-100h]
  float v22; // [esp+2Ch] [ebp-FCh]
  float v23[3]; // [esp+30h] [ebp-F8h] BYREF
  float v24; // [esp+3Ch] [ebp-ECh]
  float v25; // [esp+40h] [ebp-E8h]
  float v26; // [esp+44h] [ebp-E4h]
  float v27; // [esp+48h] [ebp-E0h]
  NiTransform v28; // [esp+4Ch] [ebp-DCh] BYREF
  float v29; // [esp+80h] [ebp-A8h]
  float v30; // [esp+84h] [ebp-A4h]
  float v31[13]; // [esp+8Ch] [ebp-9Ch] BYREF
  NiTransform v32; // [esp+C0h] [ebp-68h] BYREF
  NiTransform v33; // [esp+F4h] [ebp-34h] BYREF

  qmemcpy(&v32, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(v32));
  qmemcpy(v31, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v31));
  sub_718A80(v31, &v33);
  sub_53D7A0(&v33, (NiTransform *)v28.rot.data[1], &v32);
  scale = v28.scale;
  v21 = v29;
  v22 = v30;
  sub_7101F0((NiTransform *)v28.rot.data[1], &v28, (NiPoint3 *)this + 4);
  sub_43F350((float *)&v28);
  v4 = 0;
  v5 = *(_WORD *)(a3 + 0x48) == 0;
  v24 = *(this + 0xA) * *(this + 0xA);
  if ( !v5 )
  {
    do
    {
      v6 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v4);
      v19 = a2 - v6[5];
      if ( 0.0 != v19 )
      {
        v7 = *(_DWORD *)(a3 + 0x1C);
        v8 = *(float *)(v7 + 0xC * v4);
        v9 = v7 + 0xC * v4;
        v10 = *(float *)(v9 + 4);
        v23[0] = v8;
        v11 = v8 - scale;
        v12 = *(float *)(v9 + 8);
        v23[1] = v10;
        v23[2] = v12;
        v25 = v11;
        v26 = v10 - v21;
        v27 = v12 - v22;
        v13 = v26 * v26 + v25 * v25 + v27 * v27;
        v14 = sqrt(v13);
        if ( v14 != 0.0 && v24 >= (double)v14 )
        {
          sub_753280(&v16, &scale, (float *)&v28, v23);
          v15 = *(this + 7) * v19;
          v16 = v16 * v15;
          v17 = v17 * v15;
          v18 = v15 * v18;
          *v6 = *v6 + v16;
          v6[1] = v6[1] + v17;
          v6[2] = v6[2] + v18;
        }
      }
      ++v4;
    }
    while ( v4 < *(_WORD *)(a3 + 0x48) );
  }
}
