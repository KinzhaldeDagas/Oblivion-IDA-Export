// Oblivion stRotTransform 3x3 multiply (C++ operator* with an explicit hidden result pointer). Computes this*rhs into the supplied 0x24-byte output transform.
OB_stRotTransform_010201A0 *__thiscall OB_stRotTransform_MultiplyCopy_010201A0(
        const OB_stRotTransform_010201A0 *this,
        OB_stRotTransform_010201A0 *outTransform,
        const OB_stRotTransform_010201A0 *rhs)
{
  outTransform->m[0] = rhs->m[3] * this->m[1] + rhs->m[0] * this->m[0] + rhs->m[6] * this->m[2]; /*0x78edec*/
  outTransform->m[1] = rhs->m[4] * this->m[1] + rhs->m[1] * this->m[0] + this->m[2] * rhs->m[7]; /*0x78ee03*/
  outTransform->m[2] = rhs->m[5] * this->m[1] + this->m[0] * rhs->m[2] + rhs->m[8] * this->m[2]; /*0x78ee1b*/
  outTransform->m[3] = rhs->m[3] * this->m[4] + this->m[3] * rhs->m[0] + rhs->m[6] * this->m[5]; /*0x78ee33*/
  outTransform->m[4] = rhs->m[4] * this->m[4] + rhs->m[1] * this->m[3] + rhs->m[7] * this->m[5]; /*0x78ee4c*/
  outTransform->m[5] = this->m[3] * rhs->m[2] + rhs->m[5] * this->m[4] + rhs->m[8] * this->m[5]; /*0x78ee65*/
  outTransform->m[6] = this->m[7] * rhs->m[3] + rhs->m[0] * this->m[6] + rhs->m[6] * this->m[8]; /*0x78ee7d*/
  outTransform->m[7] = rhs->m[1] * this->m[6] + this->m[7] * rhs->m[4] + this->m[8] * rhs->m[7]; /*0x78ee96*/
  outTransform->m[8] = rhs->m[5] * this->m[7] + this->m[6] * rhs->m[2] + rhs->m[8] * this->m[8]; /*0x78eeaf*/
  return outTransform; /*0x78eeb2*/
}
