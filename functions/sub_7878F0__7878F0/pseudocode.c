// Oblivion legacy CSimpleBillboard cache: lazily scales the 12-float unit quad by tree width/height and marks the 0x34-byte cache valid.
float *__thiscall OB_CSimpleBillboard_GetBillboardCoords_010201A0(
        OB_CSimpleBillboard_010201A0 *this,
        float width,
        float height)
{
  float *result; // eax
  double v4; // st7

  result = (float *)this; /*0x7878f0*/
  if ( !this->valid ) /*0x7878f2*/
  {
    this->scaledCoords[0] = CSimpleBillboard__s_unitBillboardCoords[0] * width; /*0x78790c*/
    this->scaledCoords[1] = flt_B2BA80 * width; /*0x787916*/
    this->scaledCoords[2] = flt_B2BA84 * height; /*0x787929*/
    this->scaledCoords[3] = flt_B2BA88 * width; /*0x787934*/
    this->scaledCoords[4] = flt_B2BA8C * width; /*0x78793f*/
    this->scaledCoords[5] = flt_B2BA90 * height; /*0x78794a*/
    this->scaledCoords[6] = flt_B2BA94 * width; /*0x787955*/
    this->scaledCoords[7] = flt_B2BA98 * width; /*0x787960*/
    this->scaledCoords[8] = flt_B2BA9C * height; /*0x78796b*/
    this->scaledCoords[9] = flt_B2BAA0 * width; /*0x787976*/
    this->scaledCoords[0xA] = width * flt_B2BAA4; /*0x787983*/
    v4 = height * flt_B2BAA8; /*0x787986*/
    this->valid = 1; /*0x78798c*/
    this->scaledCoords[0xB] = v4; /*0x787990*/
  }
  return result; /*0x787993*/
}
