// Oblivion st_vector<SFrondGuide>::push_back specialization. Placement-deep-copies at end when capacity remains; otherwise delegates to the decoded checked insert-one path.
void __thiscall OB_stVector_SFrondGuide_PushBack_010201A0(
        OB_stVector_SFrondGuide_010201A0 *this,
        const OB_SFrondGuide_010201A0 *value)
{
  OB_SFrondGuide_010201A0 *begin; // edi
  unsigned int v4; // ecx
  OB_SFrondGuide_010201A0 *end; // edi
  OB_SFrondGuide_010201A0 *v6; // ebx
  OB_stVectorIterator_SFrondGuide_010201A0 result; // [esp+8h] [ebp-8h] BYREF

  begin = this->begin; /*0x7a0b57*/
  if ( begin ) /*0x7a0b5c*/
    v4 = this->end - begin; /*0x7a0b76*/
  else
    v4 = 0; /*0x7a0b5e*/
  if ( begin && v4 < this->capacityEnd - begin ) /*0x7a0b94*/
  {
    end = this->end; /*0x7a0b9e*/
    LOBYTE(result.owner) = 0; /*0x7a0ba1*/
    OB_SFrondGuide_UninitializedFillN_010201A0(end, 1u, value); /*0x7a0bb1*/
    this->end = end + 1; /*0x7a0bbc*/
  }
  else
  {
    v6 = this->end; /*0x7a0bc8*/
    if ( begin > v6 ) /*0x7a0bcd*/
      _invalid_parameter_noinfo(); /*0x7a0bcf*/
    OB_stVector_SFrondGuide_InsertOne_010201A0(this, &result, this, v6, value); /*0x7a0be2*/
  }
}
