// Verified: retrieves the +0x60 coordinate bucket using the SubSpace reference's position-derived signed-X/unsigned-Y cell key (shift 12 after engine float-to-int conversion), returning its 8-byte list head. The writer populates every bucket touched by the scaled SubSpace radius.
TESSubSpaceReferenceList *__thiscall TESWorldSpace_GetSubSpaceCandidatesAtPosition(
        TESWorldSpace *this,
        float *worldPosition)
{
  TESSubSpaceReferenceList *result; // eax
  bool v3; // zf
  TESSubSpaceReferenceList *v5; // [esp+4h] [ebp-8h] BYREF
  float v6; // [esp+8h] [ebp-4h]
  int worldPositiona; // [esp+10h] [ebp+4h]

  result = 0; /*0x4f05a3*/
  v3 = this->unknown060 == 0; /*0x4f05a5*/
  v5 = 0; /*0x4f05a8*/
  if ( !v3 ) /*0x4f05ac*/
  {
    worldPositiona = (int)*worldPosition; /*0x4f05ba*/
    v6 = worldPosition[1]; /*0x4f05c5*/
    NiTMap_GetAt( /*0x4f05ee*/
      (_DWORD *)this->unknown060,
      (unsigned __int16)((int)v6 >> 0xC) | ((__int16)(worldPositiona >> 0xC) << 0x10),
      &v5);                                     // Verified: looks up auxiliary map at WorldSpace +0x60 by packed position-derived cell coordinates; exact mapped payload semantics remain Unknown.
    return v5; /*0x4f05f3*/
  }
  return result; /*0x4f05f7*/
}
