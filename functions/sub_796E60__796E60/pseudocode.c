// OBLIVION AUTHORITY (2026-08-30): Fill constructor for vector<vector<unsigned short>>; allocates count outer owners and exception-safely deep-copies the supplied inner vector.
void __thiscall OB_stVector_stVectorUShort_FillCtor_010201A0(
        OB_stVector_stVectorUShort_010201A0 *this,
        unsigned int count,
        const OB_stVectorUShort_010201A0 *value)
{
  int v3; // edi
  OB_stVector16_010201A0 *_010201A0; // edi
  int v6; // [esp+0h] [ebp-28h] BYREF
  OB_stVector16_010201A0 *v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x796e88*/
  v7 = (OB_stVector16_010201A0 *)this; /*0x796e8d*/
  this->begin = 0; /*0x796e97*/
  this->end = 0; /*0x796e9a*/
  this->capacityEnd = 0; /*0x796e9d*/
  if ( count ) /*0x796ea0*/
  {
    if ( count > 0xFFFFFFF ) /*0x796ea8*/
      OB_stVector_ThrowLengthError_010201A0(v3); /*0x796eaa*/
    _010201A0 = OB_stVector16_Allocate_010201A0(count); /*0x796eb9*/
    LOBYTE(v8) = 0; /*0x796ebb*/
    this->capacityEnd = (OB_stVectorUShort_010201A0 *)&_010201A0[count]; /*0x796ecd*/
    this->begin = (OB_stVectorUShort_010201A0 *)_010201A0; /*0x796ed7*/
    this->end = (OB_stVectorUShort_010201A0 *)_010201A0; /*0x796eda*/
    v10 = 0; /*0x796edd*/
    OB_stVector_stVectorUShort_UninitializedFillN_010201A0((OB_stVectorUShort_010201A0 *)_010201A0, count, value); /*0x796ee4*/
    this->end = (OB_stVectorUShort_010201A0 *)&_010201A0[count]; /*0x796eee*/
  }
}
