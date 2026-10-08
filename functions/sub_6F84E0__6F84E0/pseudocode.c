struct std::_Locinfo *__thiscall sub_6F84E0(struct std::_Locinfo *this, char *a2)
{
  OB_stString28_010201A0 message; // [esp+10h] [ebp-50h] BYREF
  OB_std_runtime_error_010201A0 v6; // [esp+2Ch] [ebp-34h] BYREF
  int v7; // [esp+5Ch] [ebp-4h]

  std::_Lockit::_Lockit(this, 0); /*0x6f850e*/
  *((_DWORD *)this + 7) = 0xF; /*0x6f8518*/
  *((_DWORD *)this + 6) = 0; /*0x6f851b*/
  v7 = 0; /*0x6f851e*/
  *((_BYTE *)this + 8) = 0; /*0x6f8522*/
  *((_DWORD *)this + 0xE) = 0xF; /*0x6f8525*/
  *((_DWORD *)this + 0xD) = 0; /*0x6f8528*/
  *((_BYTE *)this + 0x24) = 0; /*0x6f852b*/
  *((_DWORD *)this + 0x15) = 0xF; /*0x6f852e*/
  *((_DWORD *)this + 0x14) = 0; /*0x6f8531*/
  *((_BYTE *)this + 0x40) = 0; /*0x6f8534*/
  *((_DWORD *)this + 0x1C) = 0xF; /*0x6f8537*/
  *((_DWORD *)this + 0x1B) = 0; /*0x6f853a*/
  *((_BYTE *)this + 0x5C) = 0; /*0x6f853d*/
  LOBYTE(v7) = 4; /*0x6f8546*/
  if ( !a2 ) /*0x6f854b*/
  {
    message.capacity = 0xF; /*0x6f8557*/
    message.size = 0; /*0x6f855b*/
    message.storage.inlineData[0] = 0; /*0x6f855f*/
    OB_stString28_AssignBytes_010201A0(&message, "bad locale name", 0xFu); /*0x6f8563*/
    LOBYTE(v7) = 5; /*0x6f8571*/
    OB_std_runtime_error_CtorFromString_010201A0(&v6, &message); /*0x6f8576*/
    ThrowException__((DWORD)&v6, &_TI2_AVruntime_error_std__); /*0x6f8585*/
  }
  std::_Locinfo::_Locinfo_ctor(this, a2); /*0x6f858c*/
  return this; /*0x6f8596*/
}
