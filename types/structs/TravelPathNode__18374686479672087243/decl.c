struct TravelPathNode
{
void *payload; ///< Verified tagged payload: type 0 stores a non-owned TESObjectREFR*; type 1 stores an owned heap NiPoint3*. Other kinds are not established.
unsigned __int8 type; ///< Verified observed kind values: 0 = reference node; 1 = owned position node; initializer uses 0xFF until the kind is set. TravelPathNodeKind enum records these values.
unsigned __int8 unknown05[3]; ///< Unknown padding bytes; inspected helpers do not read or write these three bytes.
};
