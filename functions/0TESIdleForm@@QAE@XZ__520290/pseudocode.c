TESIdleForm *__thiscall TESIdleForm::TESIdleForm(TESIdleForm *this)
{
  TESForm_constr((TESForm *)this);
  TESModel::TESModel((TESModel *)this + 1);
  *((_DWORD *)this + 6) = &TESModelAnim::`vftable';
  *(_DWORD *)this = &TESIdleForm::`vftable'{for `TESIdleForm'};
  *((_DWORD *)this + 6) = &TESIdleForm::`vftable'{for `TESModelAnim'};
  DNameNode::DNameNode((TESIdleForm *)((char *)this + 0x30));
  *((_BYTE *)this + 4) = 0x3C;
  *((_DWORD *)this + 0xF) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  *((_BYTE *)this + 0x38) = 4;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  return this;
}
