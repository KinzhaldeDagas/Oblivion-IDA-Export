struct TeleportData
{
TESObjectREFR *linkedDoor; ///< Verified TESObjectREFR* to the paired door. LinkDoors writes reciprocal references in the two TeleportData records.
float x; ///< Verified destination marker xyz written by TeleportData::SetTeleportPosition. When no random marker exists, LinkDoors derives a fallback position from the linked door transform.
float y;
float z;
float xRot; ///< Verified teleport orientation x rotation copied from a marker or door-relative fallback.
float yRot; ///< Verified teleport orientation y rotation copied from a marker or door-relative fallback.
float zRot; ///< Verified teleport orientation z rotation copied from a marker or door-relative fallback.
};
