struct TravelPathSearchState
{
float fitness; ///< Verified: fitness used by the open list ordering and current best-goal bound.
TravelPathSpaceDoorLink *parentNode; ///< Verified: predecessor TravelPathSpaceDoorLink pointer used to reconstruct the route.
TESForm *arrivalSpace; ///< Verified: spatial form at which the search reached this link; used to choose the opposite link endpoint.
unsigned __int8 flags; ///< Verified: bit 0x02 is set after expanding a popped node; bit 0x04 marks a reserved state-table slot; bit 0x01 is set on seed/insert and remains set, so its discovered/seen role is Probable. Other bits Unknown.
unsigned __int8 unknown0D[3];
};
