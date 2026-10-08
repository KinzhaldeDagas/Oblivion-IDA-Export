// OBLIVION AUTHORITY (2026-08-30): Pushes one {primaryLeaf, matchedLeaf} SLodEntry into CLeafLodEngine::m_vPairs, using in-place construction or the insert-one growth path.
void __thiscall OB_stVectorLeafLodEntry_PushBack_010201A0(
        OB_stVectorLeafLodEntry_010201A0 *this,
        const OB_CLeafLodEngine_SLodEntry_010201A0 *value)
{
  int v2; // ebx
  OB_CLeafLodEngine_SLodEntry_010201A0 *begin; // edx
  unsigned int size; // ecx
  OB_CLeafLodEngine_SLodEntry_010201A0 *end; // edi
  OB_CLeafLodEngine_SLodEntry_010201A0 *v7; // edi
  OB_stVectorLeafLodEntryIterator_010201A0 result; // [esp+8h] [ebp-8h] BYREF

  begin = this->begin; /*0x7a8f36*/
  if ( begin ) /*0x7a8f3c*/
    size = this->end - begin; /*0x7a8f47*/
  else
    size = 0; /*0x7a8f3e*/
  if ( begin && size < this->capacity - begin ) /*0x7a8f58*/
  {
    end = this->end; /*0x7a8f62*/
    LOBYTE(result.owner) = 0; /*0x7a8f65*/
    OB_LeafLodEntry_UninitializedFillN_010201A0(end, 1u, value); /*0x7a8f75*/
    this->end = end + 1; /*0x7a8f80*/
  }
  else
  {
    v7 = this->end; /*0x7a8f8b*/
    if ( begin > v7 ) /*0x7a8f90*/
      _invalid_parameter_noinfo(v2, (int)v7, (int)this); /*0x7a8f92*/
    OB_stVectorLeafLodEntry_InsertOne_010201A0( /*0x7a8fa5*/
      this,
      &result,
      (OB_stVectorLeafLodEntryIterator_010201A0)__PAIR64__((unsigned int)v7, (unsigned int)this),
      value);
  }
}
