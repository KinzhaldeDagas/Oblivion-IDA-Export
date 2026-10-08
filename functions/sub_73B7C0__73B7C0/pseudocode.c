int __thiscall sub_73B7C0(int this)
{
  int v2; // eax
  double v3; // st7
  double v4; // rt0
  double v5; // st4
  NiMatrix33 *v6; // eax
  NiMatrix33 *v7; // eax
  NiTransform *v8; // eax
  double v9; // st7
  float v10; // eax
  NiMatrix33 *v11; // eax
  int result; // eax
  float v13; // ecx
  float v14; // edx
  double v15; // st7
  double v16; // st6
  double v17; // st6
  float v18; // [esp+10h] [ebp-94h]
  float v19; // [esp+10h] [ebp-94h]
  float v20; // [esp+10h] [ebp-94h]
  float v21; // [esp+10h] [ebp-94h]
  float v22; // [esp+10h] [ebp-94h]
  float v23; // [esp+10h] [ebp-94h]
  float v24; // [esp+14h] [ebp-90h] BYREF
  float v25; // [esp+18h] [ebp-8Ch]
  float v26; // [esp+1Ch] [ebp-88h]
  float v27; // [esp+20h] [ebp-84h]
  float v28; // [esp+24h] [ebp-80h]
  float v29; // [esp+28h] [ebp-7Ch]
  char v30; // [esp+2Ch] [ebp-78h] BYREF
  NiMatrix33 v31; // [esp+38h] [ebp-6Ch] BYREF
  NiMatrix33 out; // [esp+5Ch] [ebp-48h] BYREF
  float v33[9]; // [esp+80h] [ebp-24h] BYREF

  v2 = *(_DWORD *)(this + 0x14C); /*0x73b7c9*/
  if ( v2 == 2 ) /*0x73b7d2*/
  {
    v3 = kHeadBodyNormalMatchRadius; /*0x73b7d8*/
    *(float *)(this + 0x134) = kHeadBodyNormalMatchRadius; /*0x73b7de*/
    *(float *)(this + 0x130) = v3; /*0x73b7e4*/
    *(float *)(this + 0x138) = 0.0; /*0x73b7ec*/
    v18 = *(float *)(this + 0x68); /*0x73b7f5*/
    v4 = dbl_A2FAA0; /*0x73b804*/
    *(float *)(this + 0x10C) = *(float *)(this + 0x6C) * v4; /*0x73b806*/
    v5 = dbl_A7CDE0; /*0x73b810*/
    *(float *)(this + 0x118) = v18 * v5; /*0x73b81a*/
    *(float *)(this + 0x124) = 0.0; /*0x73b822*/
    v19 = *(float *)(this + 0x74); /*0x73b82b*/
    *(float *)(this + 0x110) = *(float *)(this + 0x78) * v4; /*0x73b834*/
    *(float *)(this + 0x11C) = v19 * v5; /*0x73b840*/
    *(float *)(this + 0x128) = 0.0; /*0x73b846*/
    v20 = *(float *)(this + 0x80); /*0x73b852*/
    *(float *)(this + 0x114) = v4 * *(float *)(this + 0x84); /*0x73b860*/
    *(float *)(this + 0x120) = v5 * v20; /*0x73b86e*/
    *(float *)(this + 0x12C) = 0.0; /*0x73b874*/
  }
  else if ( v2 == 3 || v2 == 4 ) /*0x73b88d*/
  {
    *(float *)(this + 0x138) = 0.0; /*0x73b946*/
    *(float *)(this + 0x134) = 0.0; /*0x73b94d*/
    *(float *)(this + 0x130) = 0.0; /*0x73b956*/
    v11 = (NiMatrix33 *)sub_710400((float *)(this + 0x64), (float *)&out); /*0x73b95c*/
    qmemcpy((void *)(this + 0x10C), NiMAtrix33_Multiply((NiMatrix33 *)(this + 0xDC), &v31, v11), 0x24u); /*0x73b97f*/
  }
  else
  {
    v21 = 1.0 / *(float *)(this + 0x94); /*0x73b8a9*/
    v6 = (NiMatrix33 *)sub_710400((float *)(this + 0x64), (float *)&v31); /*0x73b8b9*/
    v7 = NiMAtrix33_Multiply((NiMatrix33 *)(this + 0xDC), &out, v6); /*0x73b8ca*/
    qmemcpy((void *)(this + 0x10C), NiMatrix3_ScaleTo((float *)v7, v33, v21), 0x24u); /*0x73b8e5*/
    v8 = sub_7101F0((NiTransform *)(this + 0x10C), (NiTransform *)&v30, (NiPoint3 *)(this + 0x88)); /*0x73b8f5*/
    v27 = *(float *)(this + 0x100) - v8->rot.data[0][0]; /*0x73b902*/
    v28 = *(float *)(this + 0x104) - v8->rot.data[0][1]; /*0x73b913*/
    v9 = *(float *)(this + 0x108) - v8->rot.data[0][2]; /*0x73b91d*/
    v10 = v28; /*0x73b920*/
    *(float *)(this + 0x130) = v27; /*0x73b924*/
    *(float *)(this + 0x134) = v10; /*0x73b92a*/
    v29 = v9; /*0x73b930*/
    *(float *)(this + 0x138) = v29; /*0x73b938*/
  }
  sub_7101F0((NiTransform *)(this + 0x64), (NiTransform *)&v24, (NiPoint3 *)(this + 0x154)); /*0x73b992*/
  result = LODWORD(v24); /*0x73b9a1*/
  v13 = v25; /*0x73b9ab*/
  v14 = v26; /*0x73b9b3*/
  v15 = *(float *)(this + 0x8C) * v25 + *(float *)(this + 0x88) * v24; /*0x73b9b7*/
  v16 = *(float *)(this + 0x90); /*0x73b9b9*/
  ++*(_DWORD *)(this + 0xB8); /*0x73b9bf*/
  v17 = v16 * v26; /*0x73b9c6*/
  *(_DWORD *)(this + 0x164) = result; /*0x73b9ca*/
  *(float *)(this + 0x168) = v13; /*0x73b9d0*/
  *(float *)(this + 0x16C) = v14; /*0x73b9d6*/
  v22 = v15 + v17; /*0x73b9de*/
  v23 = v22 + *(float *)(this + 0x160) * *(float *)(this + 0x94); /*0x73b9f4*/
  *(float *)(this + 0x170) = v23; /*0x73b9fc*/
  return result; /*0x73ba02*/
}
