// Overlap-safe backward copy-assignment for 0x2C-byte SFrondTexture records; deep-assigns filename plus the four scalar floats and returns destination begin.
OB_SFrondTexture_010201A0 *__cdecl OB_SFrondTexture_CopyAssignRangeBackward_010201A0(
        const OB_SFrondTexture_010201A0 *first,
        const OB_SFrondTexture_010201A0 *last,
        OB_SFrondTexture_010201A0 *destinationLast)
{
  OB_SFrondTexture_010201A0 *v3; // esi
  OB_SFrondTexture_010201A0 *v4; // edi

  v3 = (OB_SFrondTexture_010201A0 *)last; /*0x79b516*/
  if ( first == last ) /*0x79b51c*/
    return destinationLast; /*0x79b557*/
  v4 = destinationLast; /*0x79b51f*/
  do /*0x79b54f*/
  {
    v3 += 0xFFFFFFFF; /*0x79b527*/
    v4 += 0xFFFFFFFF; /*0x79b52a*/
    OB_stString28_AssignSubstring_010201A0((int)v4, v3, 0, 0xFFFFFFFF); /*0x79b530*/
    v4->aspectRatio = v3->aspectRatio; /*0x79b53a*/
    v4->sizeScale = v3->sizeScale; /*0x79b540*/
    v4->minAngleOffset = v3->minAngleOffset; /*0x79b546*/
    v4->maxAngleOffset = v3->maxAngleOffset; /*0x79b54c*/
  }
  while ( v3 != first ); /*0x79b54f*/
  return v4; /*0x79b554*/
}
