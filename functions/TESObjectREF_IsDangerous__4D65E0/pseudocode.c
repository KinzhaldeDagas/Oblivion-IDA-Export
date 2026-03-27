int __thiscall TESObjectREF_IsDangerous(TESChildCELL *this)
{
  TESForm *v1; // eax

  v1 = (TESForm *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this);
  return ((int (__thiscall *)(TESForm *))v1->vtbl->Unk_22)(v1);
}
