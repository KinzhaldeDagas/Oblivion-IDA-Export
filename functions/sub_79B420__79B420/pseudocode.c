// Forward copy-assignment over SFrondTexture records: deep-assigns filename and copies four scalar floats, returning the destination end.
OB_SFrondTexture_010201A0 *__cdecl OB_SFrondTexture_CopyAssignRangeForward_010201A0(
        const OB_SFrondTexture_010201A0 *first,
        const OB_SFrondTexture_010201A0 *last,
        OB_SFrondTexture_010201A0 *destinationFirst)
{
  OB_SFrondTexture_010201A0 *v3; // esi
  OB_SFrondTexture_010201A0 *v4; // edi

  v3 = (OB_SFrondTexture_010201A0 *)first; /*0x79b426*/
  if ( first == last ) /*0x79b42c*/
    return destinationFirst; /*0x79b467*/
  v4 = destinationFirst; /*0x79b42f*/
  do /*0x79b45f*/
  {
    OB_stString28_AssignSubstring_010201A0((int)v4, v3, 0, 0xFFFFFFFF); /*0x79b43a*/
    v4->aspectRatio = v3->aspectRatio; /*0x79b442*/
    ++v3; /*0x79b445*/
    ++v4; /*0x79b44b*/
    v4[0xFFFFFFFF].sizeScale = v3[0xFFFFFFFF].sizeScale; /*0x79b450*/
    v4[0xFFFFFFFF].minAngleOffset = v3[0xFFFFFFFF].minAngleOffset; /*0x79b456*/
    v4[0xFFFFFFFF].maxAngleOffset = v3[0xFFFFFFFF].maxAngleOffset; /*0x79b45c*/
  }
  while ( v3 != last ); /*0x79b45f*/
  return v4; /*0x79b464*/
}
