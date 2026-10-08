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
  NiPoint3 v13; // [esp+14h] [ebp-100h] BYREF
  float v14[3]; // [esp+20h] [ebp-F4h] BYREF
  NiPoint3 pos; // [esp+2Ch] [ebp-E8h] BYREF
  NiPoint3 v16; // [esp+38h] [ebp-DCh] BYREF
  NiTransform out; // [esp+44h] [ebp-D0h] BYREF
  float v18[13]; // [esp+78h] [ebp-9Ch] BYREF
  NiTransform local; // [esp+ACh] [ebp-68h] BYREF
  NiTransform parent; // [esp+E0h] [ebp-34h] BYREF

  qmemcpy(&local, (const void *)(*((_DWORD *)this + 6) + 0x64), sizeof(local)); /*0x75362e*/
  qmemcpy(v18, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v18)); /*0x753646*/
  sub_718A80(v18, &parent); /*0x75364d*/
  NiTransform_Compose(&parent, &out, &local); /*0x753666*/
  pos = out.pos; /*0x753677*/
  sub_7101F0(&out, (NiTransform *)&v16, (NiPoint3 *)this + 4); /*0x753690*/
  Vector3_NormalizeInPlace(&v16.x); /*0x753699*/
  for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i ) /*0x7536a9*/
  {
    v5 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * i); /*0x7536c9*/
    v11 = a2 - v5[5]; /*0x7536cf*/
    if ( 0.0 != v11 ) /*0x7536de*/
    {
      v6 = *(_DWORD *)(a3 + 0x1C); /*0x7536e4*/
      v7 = *(float *)(v6 + 0xC * i); /*0x7536ea*/
      v8 = v6 + 0xC * i; /*0x7536ed*/
      v9 = *(float *)(v8 + 4); /*0x7536f0*/
      v14[0] = v7; /*0x7536f3*/
      v10 = *(float *)(v8 + 8); /*0x7536f7*/
      v14[1] = v9; /*0x7536fa*/
      v14[2] = v10; /*0x753708*/
      sub_753280(&v13, &pos.x, &v16, v14); /*0x753718*/
      v12 = *(this + 7) * v11; /*0x753724*/
      v13.x = v13.x * v12; /*0x753736*/
      v13.y = v13.y * v12; /*0x753740*/
      v13.z = v12 * v13.z; /*0x753748*/
      *v5 = *v5 + v13.x; /*0x753752*/
      v5[1] = v5[1] + v13.y; /*0x75375b*/
      v5[2] = v13.z + v5[2]; /*0x753765*/
    }
  }
}
