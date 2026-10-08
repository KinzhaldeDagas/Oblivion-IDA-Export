char __thiscall TESObjectCELL_SaveForm(TESObjectCELL *this, Data *a2)
{
  UInt32 refID; // ecx
  _DWORD v5[5]; // [esp+8h] [ebp-14h] BYREF

  this->vtbl->Unk_09((TESForm *)this); /*0x4d357c*/
  TESFile_WriteFormRecord(a2, (int)this); /*0x4d3585*/
  refID = this->members.super.refID; /*0x4d358f*/
  v5[0] = dword_B05E20; /*0x4d3592*/
  v5[2] = refID; /*0x4d359c*/
  v5[3] = 6; /*0x4d35a3*/
  v5[1] = 0; /*0x4d35ab*/
  v5[4] = 0; /*0x4d35af*/
  TESFile_OpenGroupRecord(a2, v5); /*0x4d35b3*/
  sub_4CD3B0(this, a2); /*0x4d35bb*/
  return 1; /*0x4d35c0*/
}
