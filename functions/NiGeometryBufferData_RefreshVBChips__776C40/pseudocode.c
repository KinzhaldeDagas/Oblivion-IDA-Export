// Verified 2026-10-02 homologous allocation wrapper: Oblivion receives geometryBufferData and stream as two stack arguments/RET8 (ECX is not an input); group is bufferData+4, release old chip via group virtual+1C, allocate via virtual+18, then store result at bufferData+24 array if stream < bufferData+1C. Bool return reports allocation success even when stream index is not stored. Fallout NiXenonVertexBufferManager::AllocateBufferSpace 827BBBA0 has same ordered virtual-call pattern but group/count/array offsets +8/+20/+28. This is a correspondence, not permission to transplant layouts.
char __stdcall NiGeometryBufferData::RefreshVBChips(NiGeometryBufferData *a1, UInt32 a2)
{
  NiGeometryGroup *GeometryGroup; // esi
  NiVBChip *v3; // eax

  GeometryGroup = a1->GeometryGroup; /*0x776c4b*/
  GeometryGroup->vtbl->ReleaseChip(GeometryGroup, a1, a2); /*0x776c57*/
  v3 = GeometryGroup->vtbl->CreateChip(GeometryGroup, a1, a2); /*0x776c62*/
  if ( !v3 ) /*0x776c66*/
    return 0; /*0x776c7d*/
  if ( a2 < a1->StreamCount ) /*0x776c6b*/
    a1->VBChip[a2] = v3; /*0x776c70*/
  return 1; /*0x776c73*/
}
