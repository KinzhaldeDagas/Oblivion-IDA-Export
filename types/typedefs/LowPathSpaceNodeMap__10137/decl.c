struct LowPathSpaceNodeMap
{
void *vtable; ///< Verified NiTPointerMap vtable for inner spatial-form -> AStarWorldNode-list index.
unsigned int bucketCount; ///< Verified bucket count set by constructor.
void *buckets; ///< Verified pointer to a zero-initialized array of bucket-head pointers.
unsigned int entryCount; ///< Verified entry count initialized to zero and checked during map cleanup.
};
