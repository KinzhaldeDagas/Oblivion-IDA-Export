int __cdecl TESWorldSpace_PackCellCoordinates(float *worldPosition)
{
  return (unsigned __int16)((int)worldPosition[1] >> 0xC) | ((__int16)((int)*worldPosition >> 0xC) << 0x10); /*0x4efe79*/
}
