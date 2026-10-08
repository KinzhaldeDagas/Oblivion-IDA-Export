void __thiscall TESObjectREFR_SetPosition(TESObjectREFR *this, float a2, float a3, float a4)
{
  TESObjectREFRVtbl *vtbl; // edx

  this->member.pos[0] = a2; /*0x4d8a38*/
  this->member.pos[1] = a3; /*0x4d8a3f*/
  vtbl = this->vtbl; /*0x4d8a42*/
  this->member.pos[2] = a4; /*0x4d8a44*/
  vtbl->super.MarkAsModified((TESForm *)this, 4u); /*0x4d8a4c*/
}
