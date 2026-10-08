// Exact component-wise NiPoint3 inequality test; returns true when any of x/y/z differs.
bool __thiscall NiPoint3__NotEqual(const NiPoint3 *this, const NiPoint3 *other)
{
  return other->x != this->x || other->y != this->y || other->z != this->z; /*0x8aa3cd*/
}
