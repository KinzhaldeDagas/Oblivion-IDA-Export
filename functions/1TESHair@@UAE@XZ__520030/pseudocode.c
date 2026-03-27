void __thiscall TESHair::~TESHair(TESHair *this)
{
  TESModel *v2; // edi
  _DWORD *v3; // ebx

  v2 = (TESModel *)((char *)this + 0x24);
  v3 = (_DWORD *)((char *)this + 0x3C);
  *(_DWORD *)this = &TESHair::`vftable'{for `TESHair'};
  *((_DWORD *)this + 6) = &TESHair::`vftable'{for `TESFullName'};
  *((_DWORD *)this + 9) = &TESHair::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0xF) = &TESHair::`vftable'{for `TESTexture'};
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESTexture_destr(v3);
  TESModel::~TESModel(v2);
  FormHeapFree(*((_DWORD *)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x10) = 0;
  TESForm_destr((TESForm *)this);
}
