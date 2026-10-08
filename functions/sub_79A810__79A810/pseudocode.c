// Copies one embedded frond texcoord block into stock frond indexed geometry.
//
// [2026-10-03 completed capture] RT+4C embedded object has frond map count+10 and quad pointer+14. These establish whether a material has an embedded mapping, while geometry+CC retains original UVs. The previous unconditional1+V/clamp collapsed positive atlas coordinates; binding-domain selection now replaces that policy.
unsigned int __stdcall OB_CFrondGeometry_CopyEmbeddedTexCoords_010201A0(
        OB_CIndexedGeometry_010201A0 *frondGeometry,
        float frondMapIndex,
        const void *texcoordBlock,
        char flipT)
{
  int i; // eax
  double v5; // st7
  int v6; // edi
  unsigned int result; // eax
  float v8[2]; // [esp+0h] [ebp-28h]
  float newTexCoords[8]; // [esp+8h] [ebp-20h] BYREF

  qmemcpy(newTexCoords, texcoordBlock, sizeof(newTexCoords)); /*0x79a827*/
  if ( flipT ) /*0x79a829*/
  {
    for ( i = 1; i < 8; v8[i] = -v5 ) /*0x79a82b*/
    {
      v5 = newTexCoords[i]; /*0x79a830*/
      i += 2; /*0x79a834*/
    }
  }
  frondGeometry->currentVertexWriteCounter = 0; /*0x79a847*/
  v6 = 0; /*0x79a84d*/
  result = OB_CIndexedGeometry_GetVertexCount_010201A0(frondGeometry); /*0x79a84f*/
  if ( (_WORD)result ) /*0x79a857*/
  {
    do /*0x79a881*/
    {
      OB_CIndexedGeometry_ChangeTexCoord_010201A0(frondGeometry, LOBYTE(frondMapIndex), newTexCoords); /*0x79a868*/
      ++frondGeometry->currentVertexWriteCounter; /*0x79a86d*/
      ++v6; /*0x79a874*/
      result = OB_CIndexedGeometry_GetVertexCount_010201A0(frondGeometry); /*0x79a877*/
    }
    while ( v6 < (unsigned __int16)result ); /*0x79a881*/
  }
  return result; /*0x79a884*/
}
