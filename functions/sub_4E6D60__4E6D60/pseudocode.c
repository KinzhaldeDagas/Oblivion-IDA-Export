// Verified per-PathGrid point lookup by packed 512-unit X/Y spatial bucket, then scans that bucket's point pointers and compares NiPoint3 positions using fConstant_2 tolerance. The field's existing name pointsByCell is legacy shorthand; this map subdivides world coordinates at 512 units, unlike 4096-unit world cells.
TESPathGridPoint *__thiscall TESPathGrid_FindPointByPositionInCell(TESPathGrid *this, const NiPoint3 *position)
{
  NiPoint3 *v3; // ebx
  int v4; // eax
  const NiPoint3 *v5; // esi
  TESPathGridPoint *x_low; // edi
  NiPoint3 *v7; // eax
  float v9; // [esp+0h] [ebp-14h]

  if ( !this->pointArray ) /*0x4e6d66*/
    return 0; /*0x4e6de0*/
  v3 = (NiPoint3 *)position; /*0x4e6d6c*/
  v4 = TESPathGrid_PackSpatialBucketKey(&position->x); /*0x4e6d71*/
  position = 0; /*0x4e6d82*/
  NiTMap_GetAt(&this->pointsByCell.vtable, v4, &position); /*0x4e6d86*/
  v5 = position; /*0x4e6d8b*/
  if ( !position ) /*0x4e6d91*/
    return 0; /*0x4e6dd9*/
  while ( 1 ) /*0x4e6d94*/
  {
    if ( !LODWORD(v5->y) && !LODWORD(v5->x) ) /*0x4e6d9b*/
      return 0; /*0x4e6dcb*/
    x_low = (TESPathGridPoint *)LODWORD(v5->x); /*0x4e6d9d*/
    v9 = fConstant_2; /*0x4e6da6*/
    v7 = PathGraphNode_GetPosition((void *)LODWORD(v5->x)); /*0x4e6dac*/
    if ( sub_47D810(&v7->x, &v3->x, v9) ) /*0x4e6db2*/
      break; /*0x4e6db2*/
    v5 = (const NiPoint3 *)LODWORD(v5->y); /*0x4e6dbe*/
    if ( !v5 ) /*0x4e6dc3*/
      return 0; /*0x4e6dc3*/
  }
  return x_low; /*0x4e6dc7*/
}
