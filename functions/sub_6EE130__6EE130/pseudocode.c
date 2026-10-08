// Returns out = this * (1/divisor) through FaceGenMatrix_Scale. No zero/finite divisor guard here. FanControls precompute supplies vector length after its own assertion.
FaceGenMatrix *__thiscall FaceGenMatrix_DivideScalar(const FaceGenMatrix *this, FaceGenMatrix *out, float divisor)
{
  float divisora; // [esp+14h] [ebp+8h]

  divisora = 1.0 / divisor; /*0x6ee147*/
  FaceGenMatrix_Scale(this, out, divisora); /*0x6ee153*/
  return out; /*0x6ee15c*/
}
