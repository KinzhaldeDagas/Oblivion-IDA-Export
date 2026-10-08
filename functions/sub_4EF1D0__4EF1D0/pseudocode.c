// Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
int __cdecl TESObjectCELL_PackExteriorGroupLabel(__int16 group_x, unsigned __int16 group_y)
{
  return group_y | (group_x << 0x10); /*0x4ef1df*/
}
