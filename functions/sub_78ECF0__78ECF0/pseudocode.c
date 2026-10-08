// Constructs the exact 0x10-byte Oblivion CIdvCamera base: installs its vftable and zeros the three-float position at +0x04. Called as the base constructor of both CTreeEngine and CBillboardLeaf. RT4.1 exposes the same layout/behavior under the later name stCamera.
OB_CIdvCamera_010201A0 *__thiscall OB_CIdvCamera_ctor_010201A0(OB_CIdvCamera_010201A0 *this)
{
  this->position.x = 0.0; /*0x78ecf4*/
  this->vftable = &CIdvCamera::`vftable'; /*0x78ecf7*/
  this->position.y = 0.0; /*0x78ecfd*/
  this->position.z = 0.0; /*0x78ed00*/
  return this; /*0x78ed03*/
}
