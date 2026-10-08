int NiTPointerMap<unsigned int,TESForm *>::NiTPointerMap<unsigned int,TESForm *>()
{
  TESForm_FormIDMap.buckets = (MEF_U32PointerMapEntry32 **)FormHeapAlloc(0x80234u); /*0x9dbf2c*/
  _memset((int)TESForm_FormIDMap.buckets, 0, 4 * TESForm_FormIDMap.bucketCount); /*0x9dbf31*/
  TESForm_FormIDMap.vtable = &NiTPointerMap<unsigned int,TESForm *>::`vftable'; /*0x9dbf3b*/
  return atexit(sub_A18520); /*0x9dbf4d*/
}
