struct TESRoad
{
TESForm base; ///< Verified TESForm base; constructor calls TESForm_constr on this.
unsigned int connectedPointCount; ///< Verified connected-point count; initialized to 0 and incremented only when a unique point is inserted.
TESRoadPointCellMap connectedPointsByCell; ///< Verified map keyed by packed exterior-cell coordinates. Its value is a BSSimpleList<TESConnectedPoint*> header.
TESWorldSpace *ownerWorldspace; ///< Verified owning TESWorldSpace*, assigned during ROAD record attachment and road duplication.
};
