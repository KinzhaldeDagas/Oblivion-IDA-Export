double __thiscall sub_974670(int this, float *a2, float *a3, float a4)
{
  double v4; // st6
  float *v5; // eax
  float v7; // [esp+4h] [ebp-48h] BYREF
  float v8; // [esp+8h] [ebp-44h]
  float v9; // [esp+Ch] [ebp-40h]
  float v10[15]; // [esp+10h] [ebp-3Ch] BYREF
  float v11; // [esp+50h] [ebp+4h]
  float v13; // [esp+58h] [ebp+Ch]

  v4 = *a2 * a4; /*0x974689*/
  qmemcpy(v10, (const void *)(*(_DWORD *)(this + 0x38) + 4), sizeof(v10)); /*0x974697*/
  v7 = v4; /*0x974699*/
  v8 = a2[1] * a4; /*0x9746a2*/
  v9 = a2[2] * a4; /*0x9746ab*/
  v10[0] = v7 + v10[0]; /*0x9746c1*/
  v10[1] = v10[1] + v8; /*0x9746cd*/
  v10[2] = v10[2] + v9; /*0x9746d9*/
  v7 = *a3 * a4; /*0x9746e1*/
  v8 = a3[1] * a4; /*0x9746ea*/
  v5 = (float *)(*(_DWORD *)(this + 0x3C) + 4); /*0x9746f4*/
  v9 = a4 * a3[2]; /*0x9746f7*/
  v11 = v5[1] + v8; /*0x974702*/
  v13 = v5[2] + v9; /*0x97470d*/
  v7 = *v5 + v7; /*0x97471d*/
  v8 = v11; /*0x97472a*/
  v9 = v13; /*0x974737*/
  return (float)(sub_974C80(&v7, v10, (float *)(this + 0x44), (float *)(this + 0x48), (float *)(this + 0x4C)) /*0x974757*/
               * *(float *)(this + 0x40)
               - dbl_A2F928);
}
