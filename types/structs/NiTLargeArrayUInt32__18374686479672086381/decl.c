struct NiTLargeArrayUInt32
{
void **vtable; ///< Verified: NiTLargeArray vtable pointer.
unsigned int *data; ///< Verified: pointer to uint32 backing storage.
unsigned int capacity; ///< Verified: capacity field initialized at +8, used in bounds comparisons.
unsigned int count; ///< Verified: logical item count initialized/reset at +0xC.
unsigned int nonzeroCount; ///< Verified: nonzero element count tracked at +0x10.
unsigned int growBy; ///< Verified: growth increment initialized at +0x14.
};
