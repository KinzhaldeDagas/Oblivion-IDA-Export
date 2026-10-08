float *__thiscall sub_70C4D0(int this, float a2, float a3, float *a4, float *a5)
{
  float v6; // edx
  double v7; // st7
  float v9; // [esp+4h] [ebp-30h]
  float v10; // [esp+4h] [ebp-30h]
  float v11; // [esp+8h] [ebp-2Ch]
  float v12; // [esp+8h] [ebp-2Ch]
  float v13; // [esp+Ch] [ebp-28h]
  float v14; // [esp+Ch] [ebp-28h]
  float v15; // [esp+Ch] [ebp-28h]
  float v16; // [esp+10h] [ebp-24h]
  float v17; // [esp+10h] [ebp-24h]
  float v18; // [esp+10h] [ebp-24h]
  float v19; // [esp+14h] [ebp-20h]
  float v20; // [esp+14h] [ebp-20h]
  float v21; // [esp+14h] [ebp-20h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23; // [esp+18h] [ebp-1Ch]
  float v24; // [esp+18h] [ebp-1Ch]
  float v25; // [esp+1Ch] [ebp-18h]
  float v26; // [esp+1Ch] [ebp-18h]
  float v27; // [esp+20h] [ebp-14h]
  float v28; // [esp+20h] [ebp-14h]
  float v29; // [esp+24h] [ebp-10h]
  float v30; // [esp+24h] [ebp-10h]
  float v31; // [esp+28h] [ebp-Ch]
  float v32; // [esp+2Ch] [ebp-8h]
  float v33; // [esp+30h] [ebp-4h]

  if ( *(_BYTE *)(this + 0x104) ) /*0x70c4d6*/
  {
    v6 = *(float *)(this + 0x70); /*0x70c4f9*/
    v7 = *(float *)(this + 0x7C); /*0x70c4fd*/
    *a5 = *(float *)(this + 0x64); /*0x70c500*/
    v13 = v7; /*0x70c502*/
    a5[1] = v6; /*0x70c50a*/
    a5[2] = v13; /*0x70c50d*/
    Vector3_NormalizeInPlace(a5); /*0x70c510*/
    v25 = *(float *)(this + 0x68) * a3; /*0x70c541*/
    v27 = *(float *)(this + 0x74) * a3; /*0x70c54b*/
    v29 = a3 * *(float *)(this + 0x80); /*0x70c553*/
    v16 = *(float *)(this + 0x6C) * a2; /*0x70c57d*/
    v19 = *(float *)(this + 0x78) * a2; /*0x70c587*/
    v22 = a2 * *(float *)(this + 0x84); /*0x70c58f*/
    v9 = *(float *)(this + 0x88) + v16; /*0x70c59d*/
    v11 = *(float *)(this + 0x8C) + v19; /*0x70c5ab*/
    v14 = *(float *)(this + 0x90) + v22; /*0x70c5ba*/
    v17 = v9 + v25; /*0x70c5c5*/
    *a4 = v17; /*0x70c5d1*/
    v20 = v11 + v27; /*0x70c5d7*/
    a4[1] = v20; /*0x70c5e3*/
    v23 = v14 + v29; /*0x70c5ea*/
    a4[2] = v23; /*0x70c5f2*/
    return a4; /*0x70c51a*/
  }
  else
  {
    v31 = *(float *)(this + 0x68) * a3; /*0x70c625*/
    v32 = *(float *)(this + 0x74) * a3; /*0x70c62f*/
    v33 = a3 * *(float *)(this + 0x80); /*0x70c637*/
    v18 = *(float *)(this + 0x6C) * a2; /*0x70c661*/
    v21 = *(float *)(this + 0x78) * a2; /*0x70c66b*/
    v24 = a2 * *(float *)(this + 0x84); /*0x70c673*/
    v10 = *(float *)(this + 0x64) + v18; /*0x70c694*/
    v12 = *(float *)(this + 0x70) + v21; /*0x70c6a0*/
    v15 = *(float *)(this + 0x7C) + v24; /*0x70c6ac*/
    v26 = v10 + v31; /*0x70c6b8*/
    *a5 = v26; /*0x70c6c4*/
    v28 = v12 + v32; /*0x70c6ca*/
    a5[1] = v28; /*0x70c6d6*/
    v30 = v15 + v33; /*0x70c6dd*/
    a5[2] = v30; /*0x70c6e5*/
    Vector3_NormalizeInPlace(a5); /*0x70c6e8*/
    *a4 = *(float *)(this + 0x88); /*0x70c6f9*/
    a4[1] = *(float *)(this + 0x8C); /*0x70c701*/
    a4[2] = *(float *)(this + 0x90); /*0x70c70a*/
    return a4; /*0x70c6f5*/
  }
}
