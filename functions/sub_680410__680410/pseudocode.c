// Verified endpoint predicate: returns true when the supplied TESObjectREFR equals either referenceA or referenceB in the AStarWorldNode.
bool __thiscall AStarWorldNode_ContainsReference(AStarWorldNode *this, TESObjectREFR *reference)
{
  return reference == this->referenceA || reference == this->referenceB; /*0x680420*/
}
