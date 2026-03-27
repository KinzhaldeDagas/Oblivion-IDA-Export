TESObjectLIGH *__thiscall TESObjectLIGH::TESObjectLIGH(TESObjectLIGH *this)
{
  TESBoundAnimObject_constr((TESForm *)this);
  *((_DWORD *)this + 9) = &TESFullName::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  *((_WORD *)this + 0x16) = 0;
  *((_WORD *)this + 0x17) = 0;
  TESModel::TESModel((TESModel *)this + 2);
  TESTexture_constr((TESTexture *)this + 6);
  *((_DWORD *)this + 0x12) = &TESIcon::`vftable';
  TESScriptableForm_constr((_DWORD *)this + 0x15);
  TESWeightForm_constr((float *)this + 0x18);
  TESValueForm_constr((_DWORD *)this + 0x1A);
  *(_DWORD *)this = &TESObjectLIGH::`vftable'{for `TESObjectLIGH'};
  *((_DWORD *)this + 9) = &TESObjectLIGH::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 0xC) = &TESObjectLIGH::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x12) = &TESObjectLIGH::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x15) = &TESObjectLIGH::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x18) = &TESObjectLIGH::`vftable'{for `TESWeightForm'};
  *((_DWORD *)this + 0x1A) = &TESObjectLIGH::`vftable'{for `TESValueForm'};
  *((_BYTE *)this + 4) = 0x1A;
  *((_DWORD *)this + 0x23) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x20) = 0;
  *((float *)this + 0x22) = 1.0;
  *((float *)this + 0x21) = flt_A430CC;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
