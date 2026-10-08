void __thiscall sub_4ED580(float *this)
{
  double v1; // st7
  double v2; // st6
  double v3; // st6
  double v4; // st7
  double v5; // st6

  v1 = kFaceEarNormalMatchRadius; /*0x4ed580*/
  *((_DWORD *)this + 0xB) = (char *)&loc_807FFE + 2; /*0x4ed586*/
  *this = v1; /*0x4ed58d*/
  *((_DWORD *)this + 0xC) = 0x190000; /*0x4ed58f*/
  v2 = flt_A430CC; /*0x4ed596*/
  *(this + 0xD) = 2.3509886e-38; /*0x4ed59c*/
  *(this + 1) = v2; /*0x4ed5a3*/
  *((_BYTE *)this + 0x38) = 0x32; /*0x4ed5a6*/
  v3 = kHeadBodyNormalMatchRadius; /*0x4ed5aa*/
  *(this + 2) = kHeadBodyNormalMatchRadius; /*0x4ed5b0*/
  *(this + 3) = 1.0; /*0x4ed5b5*/
  *(this + 4) = flt_A3D8F0; /*0x4ed5be*/
  *(this + 5) = v3; /*0x4ed5c1*/
  *(this + 6) = flt_A47E78; /*0x4ed5ca*/
  *(this + 7) = 0.0; /*0x4ed5cf*/
  *(this + 8) = 0.0; /*0x4ed5d2*/
  *(this + 9) = flt_A47E74; /*0x4ed5db*/
  *(this + 0xA) = flt_A3F4F0; /*0x4ed5e4*/
  *(this + 0xF) = v1; /*0x4ed5e7*/
  v4 = flt_A3F424; /*0x4ed5ea*/
  *(this + 0x10) = flt_A3F424; /*0x4ed5f0*/
  v5 = flt_A47E70; /*0x4ed5f3*/
  *(this + 0x11) = flt_A47E70; /*0x4ed5f9*/
  *(this + 0x12) = fConstant_2; /*0x4ed602*/
  *(this + 0x13) = flt_A34BA0; /*0x4ed60b*/
  *(this + 0x14) = flt_A47E6C; /*0x4ed614*/
  *(this + 0x15) = v4; /*0x4ed619*/
  *(this + 0x16) = v5; /*0x4ed61c*/
  *(this + 0x17) = flt_A31C80; /*0x4ed625*/
  *(this + 0x18) = flt_A43328; /*0x4ed62e*/
}
