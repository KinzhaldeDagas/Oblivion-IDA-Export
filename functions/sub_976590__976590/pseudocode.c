double __thiscall sub_976590(int this, float *a2, float *a3, float a4)
{
  double v4; // st7
  double v5; // st6
  float v7; // [esp+4h] [ebp-3Ch]
  float v8; // [esp+4h] [ebp-3Ch]
  float v9; // [esp+8h] [ebp-38h]
  float v10; // [esp+8h] [ebp-38h]
  float v11; // [esp+Ch] [ebp-34h]
  float v12; // [esp+Ch] [ebp-34h]
  float v13[3]; // [esp+10h] [ebp-30h] BYREF
  float v14[9]; // [esp+1Ch] [ebp-24h] BYREF
  float v15; // [esp+44h] [ebp+4h]
  float v17; // [esp+4Ch] [ebp+Ch]

  v4 = a4; /*0x9765a6*/
  v7 = *a2 * a4; /*0x9765b0*/
  v9 = a2[1] * a4; /*0x9765c1*/
  v11 = a2[2] * a4; /*0x9765d0*/
  v15 = *(float *)(*(_DWORD *)(this + 0x38) + 8) + v9; /*0x9765db*/
  v17 = *(float *)(*(_DWORD *)(this + 0x38) + 0xC) + v11; /*0x9765e6*/
  v5 = *(float *)(*(_DWORD *)(this + 0x38) + 4) + v7; /*0x9765f0*/
  qmemcpy(v14, (const void *)(this + 0x3C), sizeof(v14)); /*0x9765f4*/
  v13[0] = v5; /*0x9765f6*/
  v13[1] = v15; /*0x9765fe*/
  v13[2] = v17; /*0x976606*/
  v8 = *a3 * v4; /*0x976611*/
  v10 = a3[1] * v4; /*0x97661a*/
  v12 = v4 * a3[2]; /*0x976626*/
  v14[0] = v8 + v14[0]; /*0x976638*/
  v14[1] = v14[1] + v10; /*0x976644*/
  v14[2] = v14[2] + v12; /*0x976650*/
  return (float)(sub_975DF0(v13, v14, (float *)(this + 0x64), (float *)(this + 0x68)) * *(float *)(this + 0x60) /*0x976670*/
               - dbl_A2F928);
}
