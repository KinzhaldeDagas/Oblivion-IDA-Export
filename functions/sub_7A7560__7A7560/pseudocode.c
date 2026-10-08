// Oblivion Normal constructor. Initializes the PosGen layout, reuses the static Normal sx/sfx/xi tables when available or builds them symmetrically once, then increments the shared instance count.
OB_Normal_010201A0 *__thiscall OB_Normal_ctor_010201A0(OB_Normal_010201A0 *this)
{
  this->xi = 0.0; /*0x7a758c*/
  this->notReady = 1; /*0x7a758f*/
  this->sx = 0; /*0x7a7593*/
  this->sfx = 0; /*0x7a7596*/
  this->vftable = &Normal::`vftable'; /*0x7a7599*/
  if ( OB_Normal_count_010201A0 ) /*0x7a759f*/
  {
    this->notReady = 0; /*0x7a75ab*/
    this->xi = OB_Normal_Nxi_010201A0; /*0x7a75b4*/
    this->sx = OB_Normal_Nsx_010201A0; /*0x7a75bc*/
    this->sfx = OB_Normal_Nsfx_010201A0; /*0x7a75c5*/
  }
  else
  {
    OB_PosGen_Build_010201A0((OB_PosGen_010201A0 *)this, 1); /*0x7a75ce*/
    OB_Normal_Nxi_010201A0 = this->xi; /*0x7a75d6*/
    OB_Normal_Nsx_010201A0 = this->sx; /*0x7a75df*/
    OB_Normal_Nsfx_010201A0 = this->sfx; /*0x7a75e8*/
  }
  ++OB_Normal_count_010201A0; /*0x7a75ef*/
  return this; /*0x7a75f6*/
}
