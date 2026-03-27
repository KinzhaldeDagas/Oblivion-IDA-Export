void __thiscall TESObjectLIGH::~TESObjectLIGH(TESObjectLIGH *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp

  v2 = (TESModel *)((char *)this + 0x30);
  v3 = (_DWORD *)((char *)this + 0x48);
  v4 = (_DWORD *)((char *)this + 0x60);
  *(_DWORD *)this = &TESObjectLIGH::`vftable'{for `TESObjectLIGH'};
  *((_DWORD *)this + 9) = &TESObjectLIGH::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectLIGH::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESObjectLIGH::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESObjectLIGH::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectLIGH::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x1A) = &TESObjectLIGH::`vftable'{for `TESValueForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESValueForm_destr((TESTexture *)((char *)this + 0x68));
  TESWeightForm_destr(v4);
  TESTexture_destr(v3);
  TESModel::~TESModel(v2);
  FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x16) = 0;
  TESObject_destr((TESForm *)this);
}
