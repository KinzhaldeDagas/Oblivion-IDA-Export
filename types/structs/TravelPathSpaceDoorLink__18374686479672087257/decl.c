struct TravelPathSpaceDoorLink
{
unsigned __int16 searchNodeIndex; ///< Verified AStarWorldNode 16-bit index into the search-state table; word +2 is untouched by the factory and remains Unknown.
unsigned __int16 unknown02;
TESObjectREFR *referenceA; ///< Verified first TESObjectREFR door endpoint.
TESForm *spaceA; ///< Verified first endpoint TESForm spatial container (spaceA).
TESObjectREFR *referenceB; ///< Verified reciprocal linked-door TESObjectREFR endpoint.
TESForm *spaceB; ///< Verified reciprocal linked-door TESForm spatial container (spaceB); the reused getter at 0x780D10 reads this field.
};
