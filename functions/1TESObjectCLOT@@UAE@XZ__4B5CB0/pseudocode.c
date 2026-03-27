void __thiscall TESObjectCLOT::~TESObjectCLOT(TESObjectCLOT *this)
{
  TESTexture *v2; // edi
  _DWORD *v3; // ebx
  char *v4; // ebp

  v2 = (TESTexture *)((char *)this + 0x4C);
  v3 = (_DWORD *)((char *)this + 0x54);
  v4 = (char *)this + 0x5C;
  *(_DWORD *)this = &TESObjectCLOT::`vftable'{for `TESObjectCLOT'};
  *((_DWORD *)this + 9) = &TESObjectCLOT::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectCLOT::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0xF) = &TESObjectCLOT::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x13) = &TESObjectCLOT::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x15) = &TESObjectCLOT::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x17) = &TESObjectCLOT::`vftable'{for `TESBipedModelForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESBipedModelForm_destr((int)v4);
  TESWeightForm_destr(v3);
  TESValueForm_destr(v2);
  FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x16) = 0;
  TESObject_destr((TESForm *)this);
}
