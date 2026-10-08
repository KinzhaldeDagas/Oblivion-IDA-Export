TESIdleForm *__thiscall TESIdleForm::TESIdleForm(TESIdleForm *this)
{
  TESForm_constr((TESForm *)this); /*0x5202ba*/
  TESModel::TESModel((TESModel *)this + 1); /*0x5202ca*/
  *((_DWORD *)this + 6) = &TESModelAnim::`vftable'; /*0x5202cf*/
  *(_DWORD *)this = &TESIdleForm::`vftable'{for `TESIdleForm'}; /*0x5202dd*/
  *((_DWORD *)this + 6) = &TESIdleForm::`vftable'{for `TESModelAnim'}; /*0x5202e3*/
  DNameNode::DNameNode((TESIdleForm *)((char *)this + 0x30)); /*0x5202e9*/
  *((_BYTE *)this + 4) = 0x3C; /*0x5202f5*/
  *((_DWORD *)this + 0xF) = 0; /*0x5202f9*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x5202fc*/
  *((_BYTE *)this + 0x38) = 4; /*0x520301*/
  *((_DWORD *)this + 0x10) = 0; /*0x520305*/
  *((_DWORD *)this + 0x11) = 0; /*0x520308*/
  return this; /*0x52030d*/
}
