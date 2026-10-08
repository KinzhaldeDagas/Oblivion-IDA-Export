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
  NiPoint3 v16; // [esp+14h] [ebp-114h] BYREF
  float v17; // [esp+20h] [ebp-108h]
  NiPoint3 pos; // [esp+24h] [ebp-104h] BYREF
  float v19[3]; // [esp+30h] [ebp-F8h] BYREF
  float v20; // [esp+3Ch] [ebp-ECh]
  float v21; // [esp+40h] [ebp-E8h]
  float v22; // [esp+44h] [ebp-E4h]
  float v23; // [esp+48h] [ebp-E0h]
  NiPoint3 v24; // [esp+4Ch] [ebp-DCh] BYREF
  NiTransform out; // [esp+58h] [ebp-D0h] BYREF
  float v26[13]; // [esp+8Ch] [ebp-9Ch] BYREF
  NiTransform local; // [esp+C0h] [ebp-68h] BYREF
  NiTransform parent; // [esp+F4h] [ebp-34h] BYREF

  qmemcpy(&local, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(local)); /*0x75341e*/
  qmemcpy(v26, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v26)); /*0x753439*/
  sub_718A80(v26, &parent); /*0x753443*/
  NiTransform_Compose(&parent, &out, &local); /*0x75345c*/
  pos = out.pos; /*0x753473*/
  sub_7101F0(&out, (NiTransform *)&v24, (NiPoint3 *)this + 4); /*0x75348c*/
  Vector3_NormalizeInPlace(&v24.x); /*0x753495*/
  v4 = 0; /*0x7534a8*/
  v5 = *(_WORD *)(a3 + 0x48) == 0; /*0x7534aa*/
  v20 = *(this + 0xA) * *(this + 0xA); /*0x7534ae*/
  if ( !v5 ) /*0x7534b2*/
  {
    do /*0x7535f7*/
    {
      v6 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * v4); /*0x7534d6*/
      v17 = a2 - v6[5]; /*0x7534dc*/
      if ( 0.0 != v17 ) /*0x7534eb*/
      {
        v7 = *(_DWORD *)(a3 + 0x1C); /*0x7534f1*/
        v8 = *(float *)(v7 + 0xC * v4); /*0x7534f7*/
        v9 = v7 + 0xC * v4; /*0x7534fa*/
        v10 = *(float *)(v9 + 4); /*0x7534fd*/
        v19[0] = v8; /*0x753500*/
        v11 = v8 - pos.x; /*0x753508*/
        v12 = *(float *)(v9 + 8); /*0x75350c*/
        v19[1] = v10; /*0x75350f*/
        v19[2] = v12; /*0x753513*/
        v21 = v11; /*0x753517*/
        v22 = v10 - pos.y; /*0x753523*/
        v23 = v12 - pos.z; /*0x75352f*/
        v13 = v22 * v22 + v21 * v21 + v23 * v23; /*0x75354f*/
        v14 = sqrt(v13); /*0x75355c*/
        if ( v14 != 0.0 && v20 >= (double)v14 ) /*0x753584*/
        {
          sub_753280(&v16, &pos.x, &v24, v19); /*0x75359c*/
          v15 = *(this + 7) * v17; /*0x7535a8*/
          v16.x = v16.x * v15; /*0x7535ba*/
          v16.y = v16.y * v15; /*0x7535c4*/
          v16.z = v15 * v16.z; /*0x7535cc*/
          *v6 = *v6 + v16.x; /*0x7535d6*/
          v6[1] = v6[1] + v16.y; /*0x7535df*/
          v6[2] = v6[2] + v16.z; /*0x7535e9*/
        }
      }
      ++v4; /*0x7535f0*/
    }
    while ( v4 < *(_WORD *)(a3 + 0x48) ); /*0x7535f7*/
  }
}
