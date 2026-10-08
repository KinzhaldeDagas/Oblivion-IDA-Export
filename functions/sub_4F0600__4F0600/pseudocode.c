// Verified: queries the SubSpace candidate list for the position-derived cell key, then returns the smallest-radius TESSubSpace whose exact scaled local bounds contain the point.
TESObjectREFR *__thiscall TESWorldSpace_FindSmallestSubSpaceContainingPosition(
        TESWorldSpace *this,
        float *worldPosition)
{
  TESSubSpaceReferenceList *SubSpaceCandidatesAtPosition; // eax

  SubSpaceCandidatesAtPosition = TESWorldSpace_GetSubSpaceCandidatesAtPosition(this, worldPosition); /*0x4f0606*/
  return TESSubSpace_FindSmallestContainingPosition(worldPosition, SubSpaceCandidatesAtPosition); /*0x4f0615*/
}
