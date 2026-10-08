struct ExtraRandomTeleportMarker
{
BSExtraData super;
TESObjectREFR *teleportRef; ///< Verified pointer to the marker TESObjectREFR, initialized/updated by ExtraDataList_SetRandomTeleportMarker and resolved in ExtraDataList_ResolveLoadedFormIDs.
};
