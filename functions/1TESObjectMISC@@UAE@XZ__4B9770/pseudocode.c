void __thiscall TESObjectMISC::~TESObjectMISC(TESObjectMISC *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  TESTexture *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30);
  v3 = (_DWORD *)((char *)this + 0x48);
  v4 = (TESTexture *)((char *)this + 0x60);
  *(_DWORD *)this = &TESObjectMISC::`vftable'{for `TESObjectMISC'};
  *((_DWORD *)this + 9) = &TESObjectMISC::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectMISC::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESObjectMISC::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESObjectMISC::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectMISC::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x1A) = &TESObjectMISC::`vftable'{for `TESWeightForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESWeightForm_destr((_DWORD *)this + 0x1A);
  TESValueForm_destr(v4);
  TESTexture_destr(v3);
  TESModel::~TESModel(v2);
  FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x16) = 0;
  TESObject_destr((TESForm *)this);
}
