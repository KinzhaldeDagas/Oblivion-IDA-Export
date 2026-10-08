// Oblivion 1.2.0.416: exact component-wise stVec3 inequality. RT4.1 inline operator!= corroborates the three OR comparisons.
bool __thiscall OB_stVec3_NotEqual_010201A0(const OB_stVec3_010201A0 *this, const OB_stVec3_010201A0 *other)
{
  return other->x != this->x || other->y != this->y || other->z != this->z; /*0x786ec1*/
}
