// Verified TESSubSpace constructor and layout: 0x30-byte TESBoundObject-derived form type 0x29. Defaults are dimensions 400/400/200 and bound radius 300. Record persistence is DNAM with three float dimensions; loading truncates them to UInt16 and recomputes the radius.
TESSubSpace *__thiscall TESSubSpace::TESSubSpace(TESSubSpace *this)
{
  long double v2; // st7
  float v4; // [esp+8h] [ebp-14h]

  TESBoundObject_constr((TESForm *)this); /*0x4bca2a*/
  v2 = dbl_A45A50; /*0x4bca2f*/
  this->super.vtbl = (TESBoundObjectVtbl *)&TESSubSpace::`vftable'; /*0x4bca42*/
  this->super.member.super.type = kFormType_SubSpace; /*0x4bca48*/
  this->dimensionsX = 0x190; /*0x4bca4c*/
  this->dimensionsY = 0x190; /*0x4bca50*/
  this->dimensionsZ = 0xC8; /*0x4bca54*/
  v4 = sqrt(v2); /*0x4bca5f*/
  this->boundRadius = v4; /*0x4bca69*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4bca6c*/
  return this; /*0x4bca73*/
}
