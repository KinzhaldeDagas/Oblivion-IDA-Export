char __stdcall NiGeometryBufferData::RefreshVBChips(NiGeometryBufferData *a1, UInt32 a2)
{
  NiGeometryGroup *GeometryGroup; // esi
  NiVBChip *v3; // eax

  GeometryGroup = a1->GeometryGroup;
  GeometryGroup->vtbl->ReleaseChip(GeometryGroup, a1, a2);
  v3 = GeometryGroup->vtbl->CreateChip(GeometryGroup, a1, a2);
  if ( !v3 )
    return 0;
  if ( a2 < a1->StreamCount )
    a1->VBChip[a2] = v3;
  return 1;
}
