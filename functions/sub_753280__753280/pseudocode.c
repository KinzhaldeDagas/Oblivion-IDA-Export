NiPoint3 *__stdcall sub_753280(NiPoint3 *out, float *a2, NiPoint3 *a3, float *a4)
{
  float y; // edx
  float z; // ecx
  NiPoint3 rhs; // [esp+0h] [ebp-18h] BYREF
  float v8; // [esp+Ch] [ebp-Ch]
  float v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+28h] [ebp+10h]

  rhs.x = *a4 - *a2; /*0x75328f*/
  rhs.y = a4[1] - a2[1]; /*0x753298*/
  rhs.z = a4[2] - a2[2]; /*0x7532a6*/
  v11 = a3->x * rhs.x + rhs.y * a3->y + rhs.z * a3->z; /*0x7532cb*/
  v8 = a3->x * v11; /*0x7532db*/
  v9 = v11 * a3->y; /*0x7532e4*/
  v10 = v11 * a3->z; /*0x7532eb*/
  rhs.x = rhs.x - v8; /*0x7532f7*/
  rhs.y = rhs.y - v9; /*0x7532fe*/
  rhs.z = rhs.z - v10; /*0x753306*/
  if ( g_zeroNiPoint3.x == rhs.x && g_zeroNiPoint3.y == rhs.y && g_zeroNiPoint3.z == rhs.z ) /*0x753340*/
  {
    y = rhs.y; /*0x753349*/
    out->x = rhs.x; /*0x75334d*/
    z = rhs.z; /*0x75334f*/
    out->y = y; /*0x753353*/
    out->z = z; /*0x753356*/
    return out; /*0x753342*/
  }
  else
  {
    NiPoint3__NormalizedCrossProduct(a3, out, &rhs); /*0x75336a*/
    return out; /*0x75336f*/
  }
}
