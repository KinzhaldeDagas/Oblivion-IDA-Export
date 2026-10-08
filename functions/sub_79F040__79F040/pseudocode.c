// Oblivion st_vector<SFrondTexture>::push_back. Constructs directly at end when capacity remains; otherwise delegates to checked insert-one. Called by CFrondEngine::Parse after a complete 14000-series texture record.
void __thiscall OB_stVector_SFrondTexture_PushBack_010201A0(
        OB_stVector16_010201A0 *this,
        const OB_SFrondTexture_010201A0 *value)
{
  OB_SFrondTexture_010201A0 *beginElement; // edi
  unsigned int v4; // ecx
  OB_SFrondTexture_010201A0 *endElement; // edi
  OB_SFrondTexture_010201A0 *end; // ebx
  OB_stVectorIterator_SFrondTexture_010201A0 result; // [esp+8h] [ebp-8h] BYREF

  beginElement = (OB_SFrondTexture_010201A0 *)this->begin; /*0x79f047*/
  if ( beginElement ) /*0x79f04c*/
    v4 = ((char *)this->end - (char *)beginElement) / 0x2C; /*0x79f066*/
  else
    v4 = 0; /*0x79f04e*/
  if ( beginElement && v4 < ((char *)this->capacityEnd - (char *)beginElement) / 0x2C ) /*0x79f084*/
  {
    endElement = (OB_SFrondTexture_010201A0 *)this->end; /*0x79f08e*/
    LOBYTE(result.owner) = 0; /*0x79f091*/
    OB_SFrondTexture_UninitializedFillN_010201A0(endElement, 1u, value); /*0x79f0a1*/
    this->end = &endElement[1]; /*0x79f0ac*/
  }
  else
  {
    end = (OB_SFrondTexture_010201A0 *)this->end; /*0x79f0b8*/
    if ( beginElement > end ) /*0x79f0bd*/
      _invalid_parameter_noinfo(); /*0x79f0bf*/
    OB_stVector_SFrondTexture_InsertOne_010201A0(this, &result, this, end, value); /*0x79f0d2*/
  }
}
