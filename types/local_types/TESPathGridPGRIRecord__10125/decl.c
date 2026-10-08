struct TESPathGridPGRIRecord
{
unsigned __int16 pointIndex; ///< Verified local TESPathGridPoint array index (u16); the runtime resolver retrieves this point before attaching the remote endpoint.
unsigned __int16 unknown02; ///< Probable reserved/uninitialized u16 padding: add helper does not write it; duplicate, lookup, and cross-cell resolver read only low u16 and XYZ. Intended meaning remains Unknown.
NiPoint3 indexedPosition; ///< Verified remote neighbor position (NiPoint3) used to find the matching point in an adjacent cell.
};
