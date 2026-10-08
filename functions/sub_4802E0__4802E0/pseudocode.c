// Allocate a NiPoint3 array and transform every local geometry vertex through the NiGeometry world transform. Used by nearest-vertex normal matching.
int __cdecl NiGeometry_AllocateWorldVertices(int a1)
{
  unsigned __int16 v1; // ax
  int v2; // esi

  if ( !a1 ) /*0x4802e7*/
    return 0; /*0x4802e7*/
  v1 = *(_WORD *)(*(_DWORD *)(a1 + 0xB4) + 8); /*0x4802ef*/
  if ( !v1 ) /*0x4802f6*/
    return 0; /*0x480336*/
  v2 = FormHeapAlloc((0xC * (unsigned __int64)v1) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v1);
  off_B27168(*(_WORD *)(*(_DWORD *)(a1 + 0xB4) + 8), *(_DWORD *)(*(_DWORD *)(a1 + 0xB4) + 0x1C), v2, a1 + 0x64); /*0x480328*/
  return v2; /*0x480334*/
}
