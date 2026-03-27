void __thiscall TESObjectARMO::~TESObjectARMO(TESObjectARMO *this)
{
  TESTexture *v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp

  v2 = (TESTexture *)((char *)this + 0x4C);
  v3 = (_DWORD *)((char *)this + 0x54);
  v4 = (_DWORD *)((char *)this + 0x5C);
  *(_DWORD *)this = &TESObjectARMO::`vftable'{for `TESObjectARMO'};
  *((_DWORD *)this + 9) = &TESObjectARMO::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectARMO::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0xF) = &TESObjectARMO::`vftable'{for `TESEnchantableForm'};
  *((_DWORD *)this + 0x13) = &TESObjectARMO::`vftable'{for `TESValueForm'};
  *((_DWORD *)this + 0x15) = &TESObjectARMO::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x17) = &TESObjectARMO::`vftable'{for `TESHealthForm'};
  *((_DWORD *)this + 0x19) = &TESObjectARMO::`vftable'{for `TESBipedModelForm'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESBipedModelForm_destr((int)this + 0x64);
  TESHealthForm_destr(v4);
  TESWeightForm_destr(v3);
  TESValueForm_destr(v2);
  FormHeapFree(*((_DWORD *)this + 0xA));
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x17) = 0;
  *((_WORD *)this + 0x16) = 0;
  TESObject_destr((TESForm *)this);
}
