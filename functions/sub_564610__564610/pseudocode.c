//
// [2026-10-06 directional billboard] Verified: returns BSTreeNode+0xE8. Fallout named GetBillboard 0x821FD478 corroborates the role; offsets are Oblivion-specific.
NiTriBasedGeom *__thiscall BSTreeNode_GetBillboard(BSTreeNode_OblivionLayout_0F0 *this)
{
  return this->billboardGeometry; /*0x564616*/
}
