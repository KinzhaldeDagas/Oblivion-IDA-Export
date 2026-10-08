struct TESRoadPointCellMap
{
void *vtable; ///< Verified embedded map vtable pointer.
unsigned int bucketCount; ///< Verified bucket count; TESRoad ctor initializes 37.
void **buckets; ///< Verified bucket-array pointer; ctor allocates and zeroes 37 dwords.
unsigned int itemCount; ///< Verified map item count; ctor initializes zero.
};
