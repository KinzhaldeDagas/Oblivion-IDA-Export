void __thiscall TESObjectTREE::~TESObjectTREE(TESForm *this)
{
  TESModel *v2; // edi
  TESForm *v3; // ebx
  unsigned int v4; // [esp-4h] [ebp-2Ch]

  v2 = (TESModel *)((char *)this + 0x24);
  v3 = (TESForm *)((char *)this + 0x3C);
  this->vtbl = (TESFormVtbl *)&TESObjectTREE::`vftable'{for `TESObjectTREE'};
  *((_DWORD *)this + 9) = &TESObjectTREE::`vftable'{for `TESModelTree'};
  *((_DWORD *)this + 0xF) = &TESObjectTREE::`vftable'{for `TESIconTree'};
  j_TESForm_ClearComponentReferences(this);
  v4 = *((_DWORD *)this + 0x13);
  *((_DWORD *)this + 0x12) = &NiTArray<unsigned int>::`vftable';
  FormHeapFree(v4);
  TESTexture_destr(v3);
  TESModel::~TESModel(v2);
  TESObject_destr(this);
}
