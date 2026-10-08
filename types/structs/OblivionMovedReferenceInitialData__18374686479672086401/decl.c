struct OblivionMovedReferenceInitialData
{
unsigned int primaryLocationFormID; ///< Verified: 44-byte payload copied from savedFormBuffer+4; consumed by location reconstruction.
float worldX; ///< Verified: source world X; used when source locator is a TESWorldSpace.
float worldY; ///< Verified: source world Y; used when source locator is a TESWorldSpace.
float unknown0C; ///< Unknown: copied payload word not read in the reconstruction path examined.
unsigned int fallbackLocationFormID; ///< Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
unsigned __int8 unknown14[24]; ///< Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
};
