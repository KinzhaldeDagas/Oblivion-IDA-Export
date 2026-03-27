void __thiscall TESObjectREFR_SetPosition(TESObjectREFR *this, float a2, float a3, float a4)
{
  TESObjectREFRVtbl *vtbl; // edx

  this->member.pos[0] = a2;
  this->member.pos[1] = a3;
  vtbl = this->vtbl;
  this->member.pos[2] = a4;
  vtbl->super.MarkAsModified((TESForm *)this, 4u);
}
