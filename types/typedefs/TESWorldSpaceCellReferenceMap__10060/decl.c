struct TESWorldSpaceCellReferenceMap
{
void *vtable; ///< Verified: 16-byte NiTMap header at TESWorldSpace +0x64; key derived from packed cell coordinates, values are per-cell reference lists.
unsigned int bucketCount;
unsigned int itemCount;
void *buckets;
};
