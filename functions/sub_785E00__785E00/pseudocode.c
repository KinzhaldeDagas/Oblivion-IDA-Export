// Oblivion compact stVec-vector resize(count) wrapper. Constructs the default zero/size-3 stVec fill value, delegates to the vector resize/fill implementation, then destroys the temporary.
void __thiscall OB_stVector_stVec_ResizeDefault_010201A0(OB_stVector16_010201A0 *this, unsigned int count)
{
  OB_stVec_010201A0 v3; // [esp+8h] [ebp-24h] BYREF
  unsigned int v4; // [esp+28h] [ebp-4h]
  OB_stVec_010201A0 v5; // 0:^4.24

  v5 = *OB_stVec_ctor_zero3_010201A0(&v3); /*0x785e36*/
  v4 = 0; /*0x785e5d*/
  OB_stVector_stVec_ResizeFill_010201A0((OB_stVector_stVec_010201A0 *)this, count, v5); /*0x785e65*/
  v4 = 0xFFFFFFFF; /*0x785e6e*/
  Shared_NoOpVirtual_60D0A0(&v3); /*0x785e76*/
}
