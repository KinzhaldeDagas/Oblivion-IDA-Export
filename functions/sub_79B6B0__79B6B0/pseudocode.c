// Assigns one SFrondTexture value throughout [first,last), including deep filename assignment and all four scalar fields.
void __cdecl OB_SFrondTexture_FillRange_010201A0(
        OB_SFrondTexture_010201A0 *first,
        OB_SFrondTexture_010201A0 *last,
        const OB_SFrondTexture_010201A0 *value)
{
  OB_SFrondTexture_010201A0 *i; // esi

  for ( i = first; i != last; i[0xFFFFFFFF].maxAngleOffset = value->maxAngleOffset ) /*0x79b6bc*/
  {
    OB_stString28_AssignSubstring_010201A0((int)i, value, 0, 0xFFFFFFFF); /*0x79b6ca*/
    i->aspectRatio = value->aspectRatio; /*0x79b6d2*/
    ++i; /*0x79b6d5*/
    i[0xFFFFFFFF].sizeScale = value->sizeScale; /*0x79b6dd*/
    i[0xFFFFFFFF].minAngleOffset = value->minAngleOffset; /*0x79b6e3*/
  }
}
