// Oblivion st_vector<SFrondVertex>::push_back. Constructs in place when end<capacityEnd; otherwise delegates to checked insert-one at end.
void __thiscall OB_stVector_SFrondVertex_PushBack_010201A0(
        OB_stVector16_010201A0 *this,
        const OB_SFrondVertex_010201A0 *value)
{
  OB_SFrondVertex_010201A0 *begin; // ebx
  unsigned int size; // edi
  OB_SFrondVertex_010201A0 *end; // edi
  OB_SFrondVertex_010201A0 *v6; // edi
  OB_stVectorIterator_SFrondVertex_010201A0 debugCookie; // [esp+Ch] [ebp-8h] BYREF

  begin = (OB_SFrondVertex_010201A0 *)this->begin; /*0x79bd27*/
  if ( begin ) /*0x79bd2d*/
    size = ((char *)this->end - (char *)begin) / 0x38; /*0x79bd49*/
  else
    size = 0; /*0x79bd2f*/
  if ( begin && size < ((char *)this->capacityEnd - (char *)begin) / 0x38 ) /*0x79bd69*/
  {
    end = (OB_SFrondVertex_010201A0 *)this->end; /*0x79bd73*/
    LOBYTE(debugCookie.owner) = 0; /*0x79bd76*/
    OB_SFrondVertex_UninitializedFillN_010201A0(end, 1u, value, this, value, (unsigned int)debugCookie.owner); /*0x79bd86*/
    this->end = &end[1]; /*0x79bd91*/
  }
  else
  {
    v6 = (OB_SFrondVertex_010201A0 *)this->end; /*0x79bd9d*/
    if ( begin > v6 ) /*0x79bda2*/
      _invalid_parameter_noinfo((int)begin, (int)v6, (int)this); /*0x79bda4*/
    OB_stVector_SFrondVertex_InsertOne_010201A0(this, &debugCookie, this, v6, value); /*0x79bdb7*/
  }
}
