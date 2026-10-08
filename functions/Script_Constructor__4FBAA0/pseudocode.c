TESForm *__thiscall Script_Constructor(TESForm *this)
{
  TESForm_constr(this); /*0x4fbac8*/
  this->vtbl = (TESFormVtbl *)&Script::`vftable'; /*0x4fbad1*/
  *((_DWORD *)this + 0x10) = 0; /*0x4fbad7*/
  *((_DWORD *)this + 0x11) = 0; /*0x4fbada*/
  *((_DWORD *)this + 0x12) = 0; /*0x4fbadd*/
  *((_DWORD *)this + 0x13) = 0; /*0x4fbae0*/
  *((_DWORD *)this + 6) = 0; /*0x4fbae3*/
  *((_DWORD *)this + 7) = 0; /*0x4fbae6*/
  *((_DWORD *)this + 8) = 0; /*0x4fbae9*/
  *((_DWORD *)this + 9) = 0; /*0x4fbaec*/
  *((_DWORD *)this + 0xA) = 0; /*0x4fbaef*/
  *((_DWORD *)this + 0xC) = 0; /*0x4fbaf2*/
  *((_DWORD *)this + 0xB) = 0; /*0x4fbaf5*/
  MEMORY[0xB361AC] = 0; /*0x4fbaf8*/
  *((float *)this + 0xD) = 0.0; /*0x4fbafd*/
  *((float *)this + 0xE) = 0.0; /*0x4fbb00*/
  *((float *)this + 0xF) = 0.0; /*0x4fbb05*/
  this->member.type = kFormType_Script; /*0x4fbb0c*/
  j_TESForm_InitializeComponents(this); /*0x4fbb10*/
  return this; /*0x4fbb17*/
}
