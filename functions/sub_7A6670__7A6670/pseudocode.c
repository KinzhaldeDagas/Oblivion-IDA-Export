// Oblivion stTransform::LoadIdentity. Writes the 4x4 identity matrix in place; called after CWindMatrices allocates/constructs each global wind transform.
void __thiscall OB_stTransform_LoadIdentity_010201A0(OB_stTransform_010201A0 *this)
{
  this->m[0] = 1.0; /*0x7a6672*/
  this->m[1] = 0.0; /*0x7a6676*/
  this->m[2] = 0.0; /*0x7a6679*/
  this->m[3] = 0.0; /*0x7a667c*/
  this->m[4] = 0.0; /*0x7a667f*/
  this->m[6] = 0.0; /*0x7a6682*/
  this->m[7] = 0.0; /*0x7a6685*/
  this->m[8] = 0.0; /*0x7a6688*/
  this->m[9] = 0.0; /*0x7a668b*/
  this->m[0xB] = 0.0; /*0x7a668e*/
  this->m[0xC] = 0.0; /*0x7a6691*/
  this->m[0xD] = 0.0; /*0x7a6694*/
  this->m[0xE] = 0.0; /*0x7a6697*/
  this->m[5] = 1.0; /*0x7a669a*/
  this->m[0xA] = 1.0; /*0x7a669d*/
  this->m[0xF] = 1.0; /*0x7a66a0*/
}
