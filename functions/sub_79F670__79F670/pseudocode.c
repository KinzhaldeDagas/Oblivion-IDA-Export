// OBLIVION AUTHORITY (2026-08-30): push_back for vector<vector<float>>. Deep-copy-constructs an inner vector directly when capacity exists; otherwise delegates to checked insert-one. Boundary corrected through ret 4 at 0x79F6F1.
void __thiscall OB_stVector_stVectorFloat_PushBack_010201A0(
        OB_stVector_stVectorFloat_010201A0 *this,
        const OB_stVectorFloat_010201A0 *value)
{
  OB_stVectorFloat_010201A0 *begin; // edx
  unsigned int v4; // ecx
  OB_stVectorFloat_010201A0 *end; // edi
  OB_stVectorFloat_010201A0 *v6; // edi
  OB_stVectorIterator_stVectorFloat_010201A0 result; // [esp+8h] [ebp-8h] BYREF

  begin = this->begin; /*0x79f676*/
  if ( begin ) /*0x79f67c*/
    v4 = this->end - begin; /*0x79f687*/
  else
    v4 = 0; /*0x79f67e*/
  if ( begin && v4 < this->capacityEnd - begin ) /*0x79f698*/
  {
    end = this->end; /*0x79f6a2*/
    LOBYTE(result.owner) = 0; /*0x79f6a5*/
    OB_stVector_stVectorFloat_UninitializedFillN_010201A0(end, 1u, value); /*0x79f6b5*/
    this->end = end + 1; /*0x79f6c0*/
  }
  else
  {
    v6 = this->end; /*0x79f6cb*/
    if ( begin > v6 ) /*0x79f6d0*/
      _invalid_parameter_noinfo(); /*0x79f6d2*/
    OB_stVector_stVectorFloat_InsertOne_010201A0(this, &result, this, v6, value); /*0x79f6e5*/
  }
}
