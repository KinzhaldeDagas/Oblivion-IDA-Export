//
// [Mesh leaves v129 2026-10-06] CONFIRMED layout: NiGeometry.member begins +4; member.geomData is +B0, so absolute shape geometry-data slot is +B4. This matches repository NiObjects.h and established frond kNiGeometryDataOffset. v124-v128 mesh runtime mistakenly used absolute +A8 for read and commit/rollback; v128 logs native fixed-card expansion mismatch after valid CPU capture. v129 uses kNiGeometryDataOffset consistently and guards exact NiTriShapeData vtableA7F5A4 before count checks. Live attachment remains UNVERIFIED.
NiTriShape *__thiscall OB_NiTriShape_ctorWithData_010201A0(NiTriShape *this, NiTriShapeData *data)
{
  NiTriBasedGeom::NiTriBasedGeom((NiGeometry *)this, (NiScreenElementsData *)data); /*0x717578*/
  *(_DWORD *)this = &NiTriShape::`vftable'; /*0x71757d*/
  return this; /*0x717585*/
}
