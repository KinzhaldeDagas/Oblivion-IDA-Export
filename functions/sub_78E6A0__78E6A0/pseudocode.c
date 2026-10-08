// Oblivion stVec::Normalize: computes Magnitude and, when nonzero, divides every active component by it. Exact behavior corroborated by RT4.1 Vec.cpp.
void __thiscall OB_stVec_Normalize_010201A0(OB_stVec_010201A0 *this)
{
  int i; // eax
  double v3; // st6
  float v4; // [esp+4h] [ebp-4h]

  v4 = OB_stVec_Magnitude_010201A0(this); /*0x78e6a9*/
  if ( v4 != 0.0 ) /*0x78e6bc*/
  {
    for ( i = 0; i < this->size; this->data[i - 1] = v3 / v4 ) /*0x78e6c3*/
      v3 = this->data[i++]; /*0x78e6c5*/
  }
}
