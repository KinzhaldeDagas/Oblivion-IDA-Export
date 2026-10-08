// Verified 2026-09-30: mov ax,[ecx+40h]; ret. NiTriShapeData vtable A7F5A4 slot+5C resolves here; existing NiTriBasedGeomData structure identifies +40 as m_usTriangles. The accumulator adds this native authored triangle count to TriPasses per accepted pass. Do not substitute translated indexCount/3 for strip/degenerate geometry.
// Clean descriptor audit 2026-10-01: both concrete triangle and strip data tables dispatch+5C here. Packer767B40 uses the returned WORD+40 count for TriCount and the same authored field for MaxTriCount; do not substitute active count+42 without separate evidence.
UInt16 __thiscall NiTriBasedGeomData_GetTriangleCount(NiTriBasedGeomData *this)
{
  return this->members.m_usTriangles; /*0x702954*/
}
