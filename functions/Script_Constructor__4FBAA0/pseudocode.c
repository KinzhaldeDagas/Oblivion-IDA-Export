TESForm *__thiscall Script_Constructor(TESForm *this)
{
  TESForm_constr(this);
  this->vtbl = (TESFormVtbl *)&Script::`vftable';
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xB) = 0;
  IsConsoleMode = 0;
  *((float *)this + 0xD) = 0.0;
  *((float *)this + 0xE) = 0.0;
  *((float *)this + 0xF) = 0.0;
  this->member.type = kFormType_Script;
  j_TESForm_InitializeComponents(this);
  return this;
}
