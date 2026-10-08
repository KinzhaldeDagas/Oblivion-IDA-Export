// OBLIVION AUTHORITY (2026-08-30): Fill constructor for vector<vector<unsigned short*>>. Its inner owner is structurally identical to vector<float>, explaining reuse of the already-decoded shared 4-byte-element fill helper.
void __thiscall OB_stVector_stVectorUShortPtr_FillCtor_010201A0(
        OB_stVector_stVectorUShortPtr_010201A0 *this,
        unsigned int count,
        const OB_stVectorUShortPtr_010201A0 *value)
{
  int v3; // edi
  OB_stVector16_010201A0 *_010201A0; // edi
  int v6; // [esp+0h] [ebp-28h] BYREF
  OB_stVector16_010201A0 *v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x796f48*/
  v7 = (OB_stVector16_010201A0 *)this; /*0x796f4d*/
  this->begin = 0; /*0x796f57*/
  this->end = 0; /*0x796f5a*/
  this->capacityEnd = 0; /*0x796f5d*/
  if ( count ) /*0x796f60*/
  {
    if ( count > 0xFFFFFFF ) /*0x796f68*/
      OB_stVector_ThrowLengthError_010201A0(v3); /*0x796f6a*/
    _010201A0 = OB_stVector16_Allocate_010201A0(count); /*0x796f79*/
    LOBYTE(v8) = 0; /*0x796f7b*/
    this->capacityEnd = (OB_stVectorUShortPtr_010201A0 *)&_010201A0[count]; /*0x796f8d*/
    this->begin = (OB_stVectorUShortPtr_010201A0 *)_010201A0; /*0x796f97*/
    this->end = (OB_stVectorUShortPtr_010201A0 *)_010201A0; /*0x796f9a*/
    v10 = 0; /*0x796f9d*/
    OB_stVector_stVectorFloat_UninitializedFillN_010201A0( /*0x796fa4*/
      (OB_stVectorFloat_010201A0 *)_010201A0,
      count,
      (const OB_stVectorFloat_010201A0 *)value);
    this->end = (OB_stVectorUShortPtr_010201A0 *)&_010201A0[count]; /*0x796fae*/
  }
}
