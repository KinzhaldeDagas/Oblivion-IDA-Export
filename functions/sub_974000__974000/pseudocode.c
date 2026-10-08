double __thiscall sub_974000(float *this, int a2, float *a3, float a4)
{
  int v5; // eax
  float v6; // ecx
  int v7; // edx
  double v8; // st6
  float v10; // [esp+8h] [ebp-48h]
  float v11; // [esp+8h] [ebp-48h]
  float v12; // [esp+Ch] [ebp-44h]
  float v13; // [esp+Ch] [ebp-44h]
  float v14; // [esp+10h] [ebp-40h]
  float v15; // [esp+10h] [ebp-40h]
  float v16; // [esp+14h] [ebp-3Ch] BYREF
  float v17; // [esp+18h] [ebp-38h]
  float v18; // [esp+1Ch] [ebp-34h]
  int v19; // [esp+20h] [ebp-30h]
  int v20; // [esp+24h] [ebp-2Ch]
  int v21; // [esp+28h] [ebp-28h]
  float v22[9]; // [esp+2Ch] [ebp-24h] BYREF

  v5 = *((_DWORD *)this + 0xE); /*0x974006*/
  v6 = *(float *)(v5 + 0x20); /*0x974009*/
  v5 += 0x20; /*0x97400c*/
  v16 = v6; /*0x97400f*/
  v17 = *(float *)(v5 + 4); /*0x974016*/
  v18 = *(float *)(v5 + 8); /*0x97401d*/
  v19 = *(_DWORD *)(v5 + 0xC); /*0x974024*/
  v20 = *(_DWORD *)(v5 + 0x10); /*0x97402b*/
  v7 = *(_DWORD *)(v5 + 0x14); /*0x97402f*/
  v8 = *(float *)a2 * a4; /*0x97404a*/
  qmemcpy(v22, this + 0xF, sizeof(v22)); /*0x974050*/
  v10 = v8; /*0x974052*/
  v12 = *(float *)(a2 + 4) * a4; /*0x97405b*/
  v14 = *(float *)(a2 + 8) * a4; /*0x974064*/
  v21 = v7; /*0x974077*/
  v16 = v10 + v6; /*0x97407f*/
  v17 = v17 + v12; /*0x97408b*/
  v18 = v18 + v14; /*0x974097*/
  v11 = *a3 * a4; /*0x97409f*/
  v13 = a3[1] * a4; /*0x9740a8*/
  v15 = a4 * a3[2]; /*0x9740b4*/
  v22[0] = v11 + v22[0]; /*0x9740cb*/
  v22[1] = v22[1] + v13; /*0x9740d7*/
  v22[2] = v22[2] + v15; /*0x9740e3*/
  *(float *)&a2 = sub_9726E0(&v16, v22, (float *)&a2, this + 0x19, this + 0x1A) * *(this + 0x18) - dbl_A2F928; /*0x9740fb*/
  return *(float *)&a2; /*0x974103*/
}
