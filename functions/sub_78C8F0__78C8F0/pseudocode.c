// Oblivion collision-vector insert-one wrapper: converts the checked iterator to a 0x1C-record index, delegates to collision insert-fill(count=1), and returns the relocated iterator.
OB_stVector_CollisionObjectIterator_010201A0 *__thiscall OB_stVector_CollisionObject_InsertOne_010201A0(
        OB_stVector_CollisionObject_010201A0 *this,
        OB_stVector_CollisionObjectIterator_010201A0 *result,
        OB_stVector_CollisionObjectIterator_010201A0 position,
        const OB_CollisionObject_010201A0 *value)
{
  OB_CollisionObject_010201A0 *begin; // edi
  OB_CollisionObject_010201A0 *end; // ebx
  OB_stVector_CollisionObject_010201A0 *owner; // ebx
  int v8; // edi
  OB_CollisionObject_010201A0 *v9; // ebx
  OB_CollisionObject_010201A0 *v10; // edi

  begin = this->begin; /*0x78c8fb*/
  if ( begin && (end = this->end, end - begin) ) /*0x78c91a*/
  {
    if ( begin > end ) /*0x78c928*/
      _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x78c92a*/
    owner = position.owner; /*0x78c92f*/
    if ( !position.owner || position.owner != this ) /*0x78c939*/
      _invalid_parameter_noinfo((int)position.owner, (int)begin, (int)this); /*0x78c93b*/
    v8 = position.current - begin; /*0x78c955*/
  }
  else
  {
    owner = position.owner; /*0x78c91e*/
    v8 = 0; /*0x78c922*/
  }
  OB_stVector_CollisionObject_InsertFill_010201A0( /*0x78c962*/
    this,
    (OB_stVector_CollisionObjectIterator_010201A0)__PAIR64__((unsigned int)position.current, (unsigned int)owner),
    1u,
    value);
  v9 = this->begin; /*0x78c967*/
  if ( v9 > this->end ) /*0x78c96d*/
    _invalid_parameter_noinfo((int)v9, v8, (int)this); /*0x78c96f*/
  v10 = &v9[v8]; /*0x78c97d*/
  if ( v10 > this->end || v10 < this->begin ) /*0x78c98c*/
    _invalid_parameter_noinfo((int)v9, (int)v10, (int)this); /*0x78c98e*/
  result->current = v10; /*0x78c997*/
  result->owner = this; /*0x78c99b*/
  return result; /*0x78c99a*/
}
