// push_back specialization for CFrondEngine guide-LOD levels. Deep-copies a complete st_vector<SFrondGuide> into CFrondEngine+0x18, using direct construction or checked insert-one.
void __thiscall OB_stVector_stVector_SFrondGuide_PushBack_010201A0(
        OB_stVector_stVector_SFrondGuide_010201A0 *this,
        const OB_stVector_SFrondGuide_010201A0 *value)
{
  OB_stVector_SFrondGuide_010201A0 *begin; // edx
  unsigned int sizeCount; // ecx
  OB_stVector_SFrondGuide_010201A0 *end; // edi
  OB_stVector_SFrondGuide_010201A0 *endForInsert; // edi
  OB_stVectorIterator_stVector_SFrondGuide_010201A0 result; // [esp+8h] [ebp-8h] BYREF

  begin = this->begin; /*0x7a15d6*/
  if ( begin ) /*0x7a15dc*/
    sizeCount = this->end - begin; /*0x7a15e7*/
  else
    sizeCount = 0; /*0x7a15de*/
  if ( begin && sizeCount < this->capacityEnd - begin ) /*0x7a15f8*/
  {
    end = this->end; /*0x7a1602*/
    LOBYTE(result.owner) = 0; /*0x7a1605*/
    OB_stVector_stVector_SFrondGuide_UninitializedFillN_010201A0(end, 1u, value); /*0x7a1615*/
    this->end = end + 1; /*0x7a1620*/
  }
  else
  {
    endForInsert = this->end; /*0x7a162b*/
    if ( begin > endForInsert ) /*0x7a1630*/
      _invalid_parameter_noinfo(); /*0x7a1632*/
    OB_stVector_stVector_SFrondGuide_InsertOne_010201A0(this, &result, this, endForInsert, value); /*0x7a1645*/
  }
}
