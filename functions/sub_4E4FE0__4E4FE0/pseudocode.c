// Verified PGRI row creation writes local point index in low u16 and remote point XYZ at +4; bytes +2..+3 are left unwritten here and ignored by inspected readers, so their intended meaning remains Unknown.
void __thiscall TESPathGrid_AddPGRICrossCellLinkRequest(
        TESPathGrid *this,
        TESPathGridPoint *point,
        const NiPoint3 *neighborPosition)
{
  int PointIndex; // eax
  __int16 v5; // bx
  int v6; // eax

  if ( !TESPathGrid_HasPGRICrossCellLinkRequest(this, point, neighborPosition) ) /*0x4e4fef*/
  {
    PointIndex = TESPathGrid_GetPointIndex(this, point); /*0x4e4ffb*/
    v5 = PointIndex; /*0x4e5000*/
    if ( PointIndex != 0xFFFFFFFF ) /*0x4e5005*/
    {
      v6 = FormHeapAlloc(0x10u); /*0x4e5009*/
      *(_WORD *)v6 = v5; /*0x4e500e*/
      *(NiPoint3 *)(v6 + 4) = *neighborPosition; /*0x4e5013*/
      BSSimpleList_PushFront(&this->PGRIRecords.firstNode.data, v6); /*0x4e5029*/
    }
  }
}
