// OBLIVION AUTHORITY (2026-08-30): Inserts one SLodEntry at a debug vector iterator and returns the relocated iterator.
OB_stVectorLeafLodEntryIterator_010201A0 *__thiscall OB_stVectorLeafLodEntry_InsertOne_010201A0(
        OB_stVectorLeafLodEntry_010201A0 *this,
        OB_stVectorLeafLodEntryIterator_010201A0 *result,
        OB_stVectorLeafLodEntryIterator_010201A0 position,
        const OB_CLeafLodEngine_SLodEntry_010201A0 *value)
{
  int v4; // ebx
  OB_CLeafLodEngine_SLodEntry_010201A0 *begin; // edi
  int v7; // ebx
  OB_CLeafLodEngine_SLodEntry_010201A0 *v8; // edi
  OB_CLeafLodEngine_SLodEntry_010201A0 *v9; // edi

  begin = this->begin; /*0x7a8d9b*/
  if ( begin && this->end - begin ) /*0x7a8da9*/
  {
    if ( begin > this->end ) /*0x7a8db4*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x7a8db6*/
    if ( !position.owner || position.owner != this ) /*0x7a8dc1*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x7a8dc3*/
    v7 = position.current - begin; /*0x7a8dce*/
  }
  else
  {
    v7 = 0; /*0x7a8dae*/
  }
  OB_stVectorLeafLodEntry_InsertFill_010201A0(this, position.owner, position.current, 1u, value); /*0x7a8de0*/
  v8 = this->begin; /*0x7a8de5*/
  if ( v8 > this->end ) /*0x7a8deb*/
    _invalid_parameter_noinfo(v7, (int)v8, (int)this); /*0x7a8ded*/
  v9 = &v8[v7]; /*0x7a8df6*/
  if ( v9 > this->end || v9 < this->begin ) /*0x7a8e01*/
    _invalid_parameter_noinfo(v7, (int)v9, (int)this); /*0x7a8e03*/
  result->current = v9; /*0x7a8e0c*/
  result->owner = this; /*0x7a8e10*/
  return result; /*0x7a8e0f*/
}
