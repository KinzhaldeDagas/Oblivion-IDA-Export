char __thiscall ParticleShaderProperty_SetupGeometry(ParticleShaderProperty *this, NiObjectNET *geometry)
{
  this->geometry_120 = geometry;                // Verified (Oblivion): SetupGeometry stores the supplied NiObjectNET geometry pointer at +0x120. Fallout's analogous field is NiGeometry* pMyGeometry at +0x12C; Oblivion's target array and geometry pointer are at +0x110/+0x120 and the class is smaller (0x128 vs 0x14C). /*0x7e46f4*/
  return 1; /*0x7e46fc*/
}
