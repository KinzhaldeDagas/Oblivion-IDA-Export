//
//
// [v153 allocator guard] Verified code A1 00 FE B3 00 C3 returns raw globalB3FE00. NiTriStripsData vtable+44 points here, so plugin UV publication rejects nonzero shared allocation context; tested setter path uses0. Native+50 at51A9F0 returns word this+8 (vertex count). Pooled ownership remains UNVERIFIED.
int sub_728650()
{
  return unk_B3FE00; /*0x728655*/
}
