// Treetop collision helper: initializes the local capsule cinfo defaults before 0x565510 fills radius and two +Z/up-axis endpoints for bhkCapsuleShape construction.
float *__thiscall OB_bhkCapsuleShapeCinfo_InitDefaults_010201A0(float *this)
{
  *this = 0.0; /*0x564032*/
  *(this + 1) = flt_B2EFC4; /*0x56403e*/
  *(this + 4) = 0.0; /*0x564043*/
  *(this + 5) = 0.0; /*0x564046*/
  *(this + 6) = 0.0; /*0x564049*/
  *(this + 7) = 0.0; /*0x56404c*/
  *(this + 8) = 0.0; /*0x56404f*/
  *(this + 9) = 0.0; /*0x564052*/
  *(this + 0xA) = 0.0; /*0x564055*/
  *(this + 0xB) = 0.0; /*0x564058*/
  *(this + 4) = 0.0; /*0x56405b*/
  *(this + 5) = 0.0; /*0x56405e*/
  *(this + 6) = 0.0; /*0x564061*/
  *(this + 7) = 0.0; /*0x564064*/
  *(this + 8) = 1.0; /*0x564069*/
  *(this + 9) = 0.0; /*0x56406c*/
  *(this + 0xA) = 0.0; /*0x56406f*/
  *(this + 0xB) = 0.0; /*0x564072*/
  return this; /*0x564075*/
}
