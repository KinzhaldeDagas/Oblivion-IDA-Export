// Verified virtual reset callback (vtable +0x14): restores dimensions 400/400/200, radius 300, then reinitializes form components. The constructor establishes the same defaults.
void __thiscall TESSubSpace_ResetDefaultDimensions(TESSubSpace *this)
{
  long double v1; // st7
  float v2; // [esp+4h] [ebp-4h]

  v1 = dbl_A45A50; /*0x4bc531*/
  this->dimensionsX = 0x190; /*0x4bc53f*/
  this->dimensionsY = 0x190; /*0x4bc543*/
  this->dimensionsZ = 0xC8; /*0x4bc547*/
  v2 = sqrt(v1); /*0x4bc552*/
  this->boundRadius = v2; /*0x4bc55c*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4bc563*/
}
