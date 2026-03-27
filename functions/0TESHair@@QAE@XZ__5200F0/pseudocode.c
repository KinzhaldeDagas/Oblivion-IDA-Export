TESHair *__thiscall TESHair::TESHair(TESHair *this)
{
  TESForm_constr((TESForm *)this);
  *((_DWORD *)this + 6) = &TESFullName::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 0x10) = 0;
  *((_WORD *)this + 0x11) = 0;
  TESModel::TESModel((TESModel *)((char *)this + 0x24));
  TESTexture_constr((TESTexture *)this + 5);
  *(_DWORD *)this = &TESHair::`vftable'{for `TESHair'};
  *((_DWORD *)this + 6) = &TESHair::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &TESHair::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0xF) = &TESHair::`vftable'{for `TESTexture'};
  *((_BYTE *)this + 4) = 7;
  *((_BYTE *)this + 0x48) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
