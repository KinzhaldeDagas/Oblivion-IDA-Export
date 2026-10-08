// Computes and normalizes the cross product of two NiPoint3 vectors, returning zero for near-degenerate input. ShadowSceneLight uses it to construct an orthonormal shadow-camera basis.
NiPoint3 *__thiscall NiPoint3__NormalizedCrossProduct(const NiPoint3 *this, NiPoint3 *out, const NiPoint3 *rhs)
{
  NiPoint3 *result; // eax
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]
  float rhsb; // [esp+14h] [ebp+8h]
  float rhsa; // [esp+14h] [ebp+8h]
  float rhsc; // [esp+14h] [ebp+8h]

  v4 = rhs->z * this->y - rhs->y * this->z; /*0x4bf9f5*/
  v5 = this->z * rhs->x - this->x * rhs->z; /*0x4bfa04*/
  v6 = rhs->y * this->x - rhs->x * this->y; /*0x4bfa14*/
  rhsb = v5 * v5 + v4 * v4 + v6 * v6; /*0x4bfa33*/
  rhsa = sqrt(rhsb); /*0x4bfa40*/
  result = out; /*0x4bfa5f*/
  if ( rhsa <= (double)flt_A372CC ) /*0x4bfa63*/
  {
    out->x = 0.0; /*0x4bfa92*/
    out->y = 0.0; /*0x4bfa94*/
    out->z = 0.0; /*0x4bfa97*/
  }
  else
  {
    rhsc = 1.0 / rhsa; /*0x4bfa69*/
    out->x = rhsc * v4; /*0x4bfa76*/
    out->y = rhsc * v5; /*0x4bfa7e*/
    out->z = rhsc * v6; /*0x4bfa85*/
  }
  return result; /*0x4bfa88*/
}
