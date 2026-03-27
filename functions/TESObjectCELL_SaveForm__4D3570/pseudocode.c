char __thiscall TESObjectCELL_SaveForm(TESObjectCELL *this, Data *a2)
{
  UInt32 refID; // ecx
  _DWORD v5[5]; // [esp+8h] [ebp-14h] BYREF

  this->vtbl->Unk_09((TESForm *)this);
  TESFile_WriteFormRecord(a2, (int)this);
  refID = this->members.super.refID;
  v5[0] = dword_B05E20;
  v5[2] = refID;
  v5[3] = 6;
  v5[1] = 0;
  v5[4] = 0;
  TESFile_OpenGroupRecord(a2, v5);
  sub_4CD3B0(this, a2);
  return 1;
}
