// Oblivion 1.2.0.416: transforms a point by the 4x4 stTransform including m[12..14] translation. RT4.1 stVec3::operator*(stTransform) corroborates the row/column terms.
OB_stVec3_010201A0 *__thiscall OB_stVec3_TransformPoint_010201A0(
        const OB_stVec3_010201A0 *this,
        OB_stVec3_010201A0 *result,
        const OB_stTransform_010201A0 *transform)
{
  result->x = transform->m[4] * this->y + transform->m[0] * this->x + transform->m[8] * this->z + transform->m[0xC]; /*0x786eef*/
  result->y = transform->m[1] * this->x + transform->m[5] * this->y + transform->m[9] * this->z + transform->m[0xD]; /*0x786f09*/
  result->z = transform->m[2] * this->x + transform->m[6] * this->y + transform->m[0xA] * this->z + transform->m[0xE]; /*0x786f24*/
  return result; /*0x786f27*/
}
