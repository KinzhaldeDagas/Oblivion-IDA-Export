struct ExteriorCellNewReferencesMap
{
ExteriorCellNewReferencesMapVtable *vtable; ///< Verified from concrete vtable global and constructor assignment.
unsigned int bucketCount;
ExteriorCellNewReferencesMapEntry **buckets;
unsigned int entryCount;
};
