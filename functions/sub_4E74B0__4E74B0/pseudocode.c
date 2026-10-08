// Verified pre-load reset order: clear rendered geometry; clear pointsByReference plus point-array/backlink state; free PGRI records; clear the +0x44 512-unit spatial-bucket map; clear TESForm component references. This reset leaves the two map containers allocated for reuse.
void __thiscall TESPathGrid_ClearForLoad(TESPathGrid *this)
{
  TESPathGrid_ClearRenderedPointGeometry(this); /*0x4e74b3*/
  TESPathGrid_ClearPointsAndReferenceMaps(this); /*0x4e74ba*/
  TESPathGrid_ClearPGRIRecords(this); /*0x4e74c1*/
  TESPathGrid_ClearSpatialBucketMap(this); /*0x4e74c8*/
  j_TESForm_ClearComponentReferences(&this->base); /*0x4e74d0*/
}
