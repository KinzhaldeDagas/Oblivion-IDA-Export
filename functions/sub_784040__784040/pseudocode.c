// Oblivion 1.2.0.416: checked spline-cache iterator equality; rejects null/mismatched owners before comparing node pointers.
bool __thiscall OB_stBezierSplineCacheIterator_Equals_010201A0(
        const OB_stBezierSplineCacheIterator_010201A0 *this,
        const OB_stBezierSplineCacheIterator_010201A0 *other)
{
  int v2; // ebx

  if ( !this->owner || this->owner != other->owner ) /*0x784050*/
    _invalid_parameter_noinfo(v2, (int)other, (int)this); /*0x784052*/
  return this->node == other->node; /*0x78405f*/
}
