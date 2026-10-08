// Fills an initialized SFrondVertex range with one 0x38-byte value. Used by vector insert when the insertion point has enough trailing initialized elements.
void __cdecl OB_SFrondVertex_FillRange_010201A0(
        OB_SFrondVertex_010201A0 *first,
        OB_SFrondVertex_010201A0 *last,
        const OB_SFrondVertex_010201A0 *value)
{
  OB_SFrondVertex_010201A0 *i; // eax
  OB_SFrondVertex_010201A0 *v4; // edi

  for ( i = first; i != last; ++i ) /*0x79a9e0*/
  {
    v4 = i; /*0x79a9f3*/
    qmemcpy(v4, value, sizeof(OB_SFrondVertex_010201A0)); /*0x79aa01*/
  }
}
