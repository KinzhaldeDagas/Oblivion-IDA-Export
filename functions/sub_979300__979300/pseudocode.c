int __thiscall sub_979300(int this, float *a2, float *a3, int a4, char *a5, int a6, float *a7)
{
  int v7; // ebp
  float *v8; // esi
  char v10; // al
  float *v11; // eax
  float *v12; // esi
  float *v13; // eax
  float *v14; // ecx
  float *v15; // edi
  float v16; // eax
  float v17; // ecx
  float v19; // [esp+10h] [ebp-38h] BYREF
  float v20; // [esp+14h] [ebp-34h] BYREF
  float v21; // [esp+18h] [ebp-30h] BYREF
  float v22; // [esp+1Ch] [ebp-2Ch]
  float v23; // [esp+20h] [ebp-28h]
  float v24; // [esp+24h] [ebp-24h]
  float v25; // [esp+28h] [ebp-20h]
  float v26; // [esp+2Ch] [ebp-1Ch]
  float v27; // [esp+30h] [ebp-18h]
  float v28; // [esp+34h] [ebp-14h]
  float v29; // [esp+38h] [ebp-10h]
  _DWORD v30[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v7 = a6;
  v8 = a7;
  if ( a7 != *(float **)(this + 0x88) )
  {
    sub_97AEC0((float *)(this + 4), (float *)(a6 + 0x64));
    *(_DWORD *)(this + 0x88) = v8;
  }
  LOBYTE(a7) = *(_BYTE *)(a4 + 0x10);
  v10 = sub_96E5E0(
          a2,
          a3,
          *(float **)(this + 0x8C),
          *(float **)(this + 0x90),
          *(float **)(this + 0x94),
          (char)a7,
          v30,
          (float *)&a6,
          &v20,
          &v19);
  *a5 = v10;
  if ( v10 )
  {
    v11 = (float *)FormHeapAlloc(0x44u);
    if ( v11 )
      v12 = sub_95A2D0(v11, v7);
    else
      v12 = 0;
    v12[2] = *(float *)v30;
    v12[3] = *(float *)&v30[1];
    v12[4] = *(float *)&v30[2];
    v12[5] = *(float *)&a6;
    if ( *(_BYTE *)(a4 + 0x2D) )
    {
      v13 = *(float **)(this + 0x8C);
      v14 = *(float **)(this + 0x90);
      v15 = *(float **)(this + 0x94);
      v27 = *v14 - *v13;
      v28 = v14[1] - v13[1];
      v29 = v14[2] - v13[2];
      v24 = *v15 - *v13;
      v25 = v15[1] - v13[1];
      v26 = v15[2] - v13[2];
      v21 = v26 * v28 - v25 * v29;
      v22 = v29 * v24 - v26 * v27;
      v23 = v27 * v25 - v24 * v28;
      sub_43F350(&v21);
      v16 = v22;
      v17 = v23;
      v12[0xA] = v21;
      v12[0xB] = v16;
      v12[0xC] = v17;
    }
    a7 = v12;
    *(_DWORD *)(a4 + 0x28) = v12;
    sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(a4 + 0x18), &a7);
  }
  return 0;
}
