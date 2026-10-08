//
// Verified 2026-10-07: constructs NiTriShapeDynamicData, allocation5C, vtableA80274. Total vertices+08 and total triangles+40 are separate from active vertices+58 and active triangles+5A. Distant cache builder7B2FDB passes full vertex capacity and zero initial active triangles. Companion geometry must use this dynamic class to honor shader3 updates.
// [v142 runtime corroboration 2026-10-07] Archived SpeedTreeOBSE log SHA256 02fdd51caa8c585b2dddf5d473c1709cf87323e6e4b3b7965465aa648370179b: all 76 registered distant tree batches reached ready using the A80274/5C dynamic-data contract; 32 logged companion Render calls returned. This confirms the previous static-data rejection was corrected in this session. Visual view changes are user-confirmed; horizontal appearance and smooth distance/angle transitions remain UNVERIFIED.
// [v142 visual acceptance update 2026-10-07] Supersedes only the earlier pending visual acceptance statements: the human tester now confirms overhead canopy appearance, near/far transitions with fading, and smooth blending between adjacent directional views during a slow orbit. Combined with archived v142 runtime evidence, the required directional plus horizontal billboard goal is accepted. This is human visual evidence, not an automated pixel test. New adapter scene unload/reload and queued-face destruction remain UNVERIFIED; no new runtime session or destruction coverage is claimed. Audit: SpeedTreeOBSE/out/billboard360_distant_v142/runtime_rotation_analysis.json.
NiTriShapeData *__thiscall sub_72AB00(
        NiTriShapeData *this,
        UInt16 a2,
        NiPoint3 *a3,
        NiPoint3 *a4,
        NiColorAlpha *a5,
        void *a6,
        char a7,
        __int16 a8,
        UInt16 a9,
        UInt16 *a10,
        UInt16 a11,
        UInt16 a12)
{
  NiTriShapeData_ConstructWithData(this, a11, a3, a4, a5, a6, a7, a8, a12, a10); /*0x72ab34*/
  this->member.super.m_usTriangles = a9; /*0x72ab43*/
  *((_WORD *)this + 0x2D) = a12; /*0x72ab4a*/
  *((_WORD *)this + 0x2C) = a11; /*0x72ab52*/
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriShapeDynamicData::`vftable'; /*0x72ab56*/
  this->member.super.super.m_usVertices = a2; /*0x72ab5c*/
  this->member.m_uiTriListLength = 3 * a9; /*0x72ab60*/
  return this; /*0x72ab51*/
}
