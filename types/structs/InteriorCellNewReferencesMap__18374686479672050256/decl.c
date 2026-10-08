struct InteriorCellNewReferencesMap
{
InteriorCellNewReferencesMapVtable *vtable; ///< Verified from concrete vtable global and constructor assignment.
unsigned int bucketCount;
InteriorCellNewReferencesMapEntry **buckets;
unsigned int entryCount;
};
