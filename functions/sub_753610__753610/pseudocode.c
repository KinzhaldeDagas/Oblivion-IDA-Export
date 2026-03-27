void __thiscall sub_753610(float *this, float a2, int a3)
{
  unsigned __int16 i; // bp
  float *v5; // esi
  int v6; // eax
  float v7; // edx
  int v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // [esp+10h] [ebp-104h]
  float v12; // [esp+10h] [ebp-104h]
  float v13; // [esp+14h] [ebp-100h] BYREF
  float v14; // [esp+18h] [ebp-FCh]
  float v15; // [esp+1Ch] [ebp-F8h]
  float v16[3]; // [esp+20h] [ebp-F4h] BYREF
  float v17[3]; // [esp+2Ch] [ebp-E8h] BYREF
  NiTransform v18; // [esp+38h] [ebp-DCh] BYREF
  float v19; // [esp+6Ch] [ebp-A8h]
  float v20; // [esp+70h] [ebp-A4h]
  float v21[13]; // [esp+78h] [ebp-9Ch] BYREF
  NiTransform v22; // [esp+ACh] [ebp-68h] BYREF
  NiTransform v23; // [esp+E0h] [ebp-34h] BYREF

  qmemcpy(&v22, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(v22));
  qmemcpy(v21, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v21));
  sub_718A80(v21, &v23);
  sub_53D7A0(&v23, (NiTransform *)v18.rot.data[1], &v22);
  v17[0] = v18.scale;
  v17[1] = v19;
  v17[2] = v20;
  sub_7101F0((NiTransform *)v18.rot.data[1], &v18, (NiPoint3 *)this + 4);
  sub_43F350((float *)&v18);
  for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i )
  {
    v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i);
    v11 = a2 - v5[5];
    if ( 0.0 != v11 )
    {
      v6 = *(_DWORD *)(a3 + 0x1C);
      v7 = *(float *)(v6 + 0xC * i);
      v8 = v6 + 0xC * i;
      v9 = *(float *)(v8 + 4);
      v16[0] = v7;
      v10 = *(float *)(v8 + 8);
      v16[1] = v9;
      v16[2] = v10;
      sub_753280(&v13, v17, (float *)&v18, v16);
      v12 = *(this + 7) * v11;
      v13 = v13 * v12;
      v14 = v14 * v12;
      v15 = v12 * v15;
      *v5 = *v5 + v13;
      v5[1] = v5[1] + v14;
      v5[2] = v15 + v5[2];
    }
  }
}
