char __stdcall sub_7217C0(float *a1, float *a2, NiPoint3 *rhs, float *a4, float *a5)
{
  double v7; // st7
  double v8; // st7
  int v9; // ecx
  double v10; // st7
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  float y; // edx
  float z; // eax
  NiTransform *v16; // eax
  NiTransform *v17; // eax
  float v18; // [esp+0h] [ebp-64h]
  float v19; // [esp+4h] [ebp-60h]
  float v20; // [esp+8h] [ebp-5Ch]
  float v21; // [esp+Ch] [ebp-58h]
  NiPoint3 v22; // [esp+1Ch] [ebp-48h] BYREF
  float v23; // [esp+28h] [ebp-3Ch]
  float v24; // [esp+2Ch] [ebp-38h]
  float v25; // [esp+30h] [ebp-34h]
  _BYTE out[48]; // [esp+34h] [ebp-30h] BYREF
  float v27; // [esp+68h] [ebp+4h]
  float v28; // [esp+68h] [ebp+4h]

  v22.x = a1[0x22] - *a2; /*0x7217d4*/
  v22.y = a1[0x23] - a2[1]; /*0x7217e1*/
  v22.z = a1[0x24] - a2[2]; /*0x7217ee*/
  v27 = v22.x * v22.x + v22.y * v22.y + v22.z * v22.z; /*0x72180e*/
  if ( v27 < (double)flt_A37080 ) /*0x721821*/
    return 0; /*0x721823*/
  Vector3_NormalizeInPlace(&v22.x); /*0x721832*/
  v23 = a1[0x19]; /*0x721840*/
  v24 = a1[0x1C]; /*0x72184b*/
  v25 = a1[0x1F]; /*0x721852*/
  *(float *)out = -v23; /*0x72185c*/
  v7 = v24; /*0x721864*/
  rhs->x = *(float *)out; /*0x721868*/
  *(float *)&out[4] = -v7; /*0x72186c*/
  v8 = v25; /*0x721874*/
  rhs->y = *(float *)&out[4]; /*0x721878*/
  *(float *)&out[8] = -v8; /*0x72187d*/
  rhs->z = *(float *)&out[8]; /*0x721885*/
  *(float *)out = a1[0x1A]; /*0x72188b*/
  *(float *)&out[4] = a1[0x1D]; /*0x721896*/
  v9 = *(_DWORD *)&out[4]; /*0x72189a*/
  v10 = a1[0x20]; /*0x72189e*/
  *a4 = *(float *)out; /*0x7218a4*/
  *(float *)&out[8] = v10; /*0x7218a6*/
  v11 = *(_DWORD *)&out[8]; /*0x7218aa*/
  *((_DWORD *)a4 + 1) = v9; /*0x7218ae*/
  *((_DWORD *)a4 + 2) = v11; /*0x7218b1*/
  *(float *)out = a1[0x1B]; /*0x7218b7*/
  *(float *)&out[4] = a1[0x1E]; /*0x7218c2*/
  v12 = *(_DWORD *)&out[4]; /*0x7218c6*/
  *(float *)&out[8] = a1[0x21]; /*0x7218d4*/
  v13 = *(_DWORD *)&out[8]; /*0x7218d8*/
  *a5 = *(float *)out; /*0x7218dc*/
  *((_DWORD *)a5 + 1) = v12; /*0x7218de*/
  *((_DWORD *)a5 + 2) = v13; /*0x7218e1*/
  v28 = rhs->y * v22.y + rhs->x * v22.x + rhs->z * v22.z; /*0x7218fc*/
  if ( v28 < dbl_A7F740 ) /*0x72190f*/
  {
    NiPoint3__NormalizedCrossProduct(&v22, (NiPoint3 *)out, rhs); /*0x72191f*/
    v21 = *(float *)&out[8]; /*0x72192b*/
    v20 = *(float *)&out[4]; /*0x721933*/
    v19 = *(float *)out; /*0x72193b*/
    v18 = sub_612820(v28); /*0x72194f*/
    sub_70FE20((float *)&out[0xC], v18, v19, v20, v21); /*0x721952*/
    y = v22.y; /*0x72195b*/
    z = v22.z; /*0x72195f*/
    rhs->x = v22.x; /*0x721963*/
    rhs->y = y; /*0x72196b*/
    rhs->z = z; /*0x721972*/
    v16 = sub_7101F0((NiTransform *)&out[0xC], (NiTransform *)out, (NiPoint3 *)a4); /*0x721975*/
    *a4 = v16->rot.data[0][0]; /*0x72197c*/
    a4[1] = v16->rot.data[0][1]; /*0x721981*/
    a4[2] = v16->rot.data[0][2]; /*0x721991*/
    v17 = sub_7101F0((NiTransform *)&out[0xC], (NiTransform *)out, (NiPoint3 *)a5); /*0x721994*/
    *a5 = v17->rot.data[0][0]; /*0x72199b*/
    a5[1] = v17->rot.data[0][1]; /*0x7219a0*/
    a5[2] = v17->rot.data[0][2]; /*0x7219a6*/
  }
  return 1; /*0x721825*/
}
