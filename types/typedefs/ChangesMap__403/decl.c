struct ChangesMap
{
OblivionChangesMapVtable *vtbl; ///< Verified: RTTI .?AVChangesMap@@ at B05A40; ctor installs A3A2EC at 45A8A4.
unsigned int bucketCount; ///< Verified: ctor sets 5039 buckets at 45A86A.
OblivionChangesMapNode **buckets; ///< Verified: allocation 0x4EBC stored at +8 in 45A899; lookup indexes pointer array.
unsigned int entryCount; ///< Verified: ctor zeroes +0xC; insert increments at 4525D1.
};
