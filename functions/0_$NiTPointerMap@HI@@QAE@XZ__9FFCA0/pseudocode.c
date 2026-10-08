int NiTPointerMap<int,unsigned int>::NiTPointerMap<int,unsigned int>()
{
  self.buckets = (MEF_U32PointerMapEntry32 **)FormHeapAlloc(0x94u); /*0x9ffccc*/
  _memset((int)self.buckets, 0, 4 * self.bucketCount); /*0x9ffcd1*/
  self.vtable = &NiTPointerMap<int,unsigned int>::`vftable'; /*0x9ffcdb*/
  return atexit(sub_A26730); /*0x9ffced*/
}
