int NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>()
{
  stru_B2CBC4.buckets = (MEF_U32PointerMapEntry32 **)FormHeapAlloc(0x94u); /*0xa111fc*/
  _memset((int)stru_B2CBC4.buckets, 0, 4 * stru_B2CBC4.bucketCount); /*0xa11201*/
  stru_B2CBC4.vtable = &NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::`vftable'; /*0xa1120b*/
  return atexit(sub_A27580); /*0xa1121d*/
}
